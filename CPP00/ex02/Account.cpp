/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:24:34 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/13 17:26:51 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <ctime>
#include <iomanip>

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

Account:: Account(int initial_deposit)
    :_accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";created" << std::endl;
}

Account:: ~Account()
{
    Account:: _nbAccounts--;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";closed" << std::endl;
}

int Account:: getNbAccounts()
{
    return _nbAccounts;
}
int Account:: getTotalAmount()
{
    return _totalAmount;
}
int Account:: getNbDeposits()
{
    return _totalNbDeposits;
}
int Account:: getNbWithdrawals()
{
    return _totalNbWithdrawals;
}
int Account::checkAmount() const
{
    return _amount;
}

void Account:: _displayTimestamp()
{
    time_t atm;
    atm = time(NULL);
    char time[80];
    std::strftime(time, sizeof(time), "[%Y%m%d_%H%M%S] ", std::localtime(&atm));
    std::cout << time;
}

void Account::  displayStatus() const
{
    _displayTimestamp();
    std:: cout << "index:" << _accountIndex 
               << ";amount:" << checkAmount()
               << ";deposits:" << _nbDeposits
               << ";withdrawals:" << _nbWithdrawals
               << std::endl;
               
}

void Account:: displayAccountsInfos()
{
    _displayTimestamp();
    std:: cout << "accounts:" << getNbAccounts()
               << ";total:" << getTotalAmount()
               <<  ";deposits:" << getNbDeposits()   
               << ";withdrawals:" << getNbWithdrawals()
               << std::endl;
}
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    if(deposit > 0)
    {
        _nbDeposits++;
        _totalNbDeposits++;
        std:: cout << "index:" << _accountIndex 
                   << ";p_amount:" << _amount;
        _amount += deposit;
        _totalAmount += deposit;        
        std:: cout << ";deposits:" << deposit
                   << ";amount:" << _amount
                   << ";nb_deposits:" << _nbDeposits
                   << std::endl; 
    }
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std:: cout << "index:" << _accountIndex 
               << ";p_amount:" << _amount;    
    if(withdrawal > 0 && _amount >= withdrawal)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std:: cout << ";withdrawals:" << withdrawal
                    << ";amount:" << _amount
                    << ";nb_withdrawals:" << _nbWithdrawals
                    << std::endl;
        return(true);
    }
    std:: cout << "withdrawal:refused" << std::endl;
    return(false);
}
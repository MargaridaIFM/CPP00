/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:24:34 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/12 15:32:12 by mi-matias        ###   ########.fr       */
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
{
    _amount = initial_deposit;
    _nbDeposits = 0;
    _accountIndex = _nbAccounts;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";created" << std::endl;
}

Account:: ~Account()
{
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
               << ";total" << getTotalAmount()
               <<  ";deposits:" << getNbDeposits()   
               << ";withdrawals:" << getNbWithdrawals()
               << std::endl;
}
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    std:: cout << "index:" << _accountIndex 
               << ";p_amount:" << checkAmount();
    _amount += deposit;
    _totalAmount += _amount;        
    std:: cout << ";deposits:" << deposit
               << ";amount:" << checkAmount()
               << ";nb_deposits:" << _nbDeposits
               << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std:: cout << "index:" << _accountIndex 
               << ";p_amount:" << checkAmount();    
    if(_amount >= withdrawal)
    {
        _amount =- withdrawal;
        _totalAmount =- withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std:: cout << ";withdrawals" << withdrawal
                    << ";amount:" << checkAmount()
                    << ";nb_withdrawals:" << _nbWithdrawals
                    << std::endl;
        return(true);
    }

    std:: cout << "withdrawal:refused" << std::endl;
    return(false);
}
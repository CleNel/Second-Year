#include "BookingSystem.h"
#include <iostream>
#include <string>
using namespace std;

  BookingSystem::BookingSystem(){
    name = "Trinity Laptop Bookings";
    totalWindowsLaptops = 20;
    totalMacBooks = 20;
    availableWindowsLaptops = totalWindowsLaptops;
    availableMacBooks = totalMacBooks;
  }
  BookingSystem::BookingSystem(string name, int totalWindowsLaptops, int totalMacBooks){
    
    if(name.length() > 64){
      name.erase(name.begin()+64,name.end());
    }

    if(totalWindowsLaptops < 0){
      totalWindowsLaptops = 0;
    }

    if(totalMacBooks < 0){
      totalMacBooks = 0;
    }
    
    this->name = name;
    this->totalWindowsLaptops = totalWindowsLaptops;
    this->totalMacBooks = totalMacBooks;
    this->availableWindowsLaptops = totalWindowsLaptops;
    this->availableMacBooks = totalMacBooks;
  }

//Rent
  bool BookingSystem::RentWindowsLaptop(){
    if(availableWindowsLaptops > 0){
      availableWindowsLaptops--;
       return true;
    } else {
       return false;
    }
  }
    
  bool BookingSystem::RentMacBook(){
    if(availableMacBooks > 0){
      availableMacBooks--;
       return true;
    } else {
       return false;
    }
  }

//Return
  void BookingSystem::ReturnWindowsLaptop() {
    if(availableWindowsLaptops < totalWindowsLaptops){
      availableWindowsLaptops++;
    }
  }

  void BookingSystem::ReturnMacBook(){
    if(availableMacBooks < totalMacBooks){
      availableMacBooks++;
    }
  }

//Total Getters
  string BookingSystem::getName(){
    return name;
  }
  unsigned int BookingSystem::getTotalWindowsLaptops(){
    return totalWindowsLaptops;
  }
  unsigned int BookingSystem::getTotalMacBooks(){
    return totalMacBooks;
  }

//Available Getters
  unsigned int BookingSystem::getAvailableWindowsLaptops(){
    return availableWindowsLaptops;
  }
  unsigned int BookingSystem::getAvailableMacBooks(){
    return availableMacBooks;
  }
  unsigned int BookingSystem::getAvailableLaptops(){
    return availableWindowsLaptops + availableMacBooks;
  }

//Rented Getters
  unsigned int BookingSystem::getRentedWindowsLaptops(){
    return totalWindowsLaptops - availableWindowsLaptops;
  }
  unsigned int BookingSystem::getRentedMacBooks(){
    return totalMacBooks - availableMacBooks;
  }
  unsigned int BookingSystem::getRentedLaptops(){
    return (totalWindowsLaptops - availableWindowsLaptops) + (totalMacBooks - availableMacBooks);
  }

//Adding
  void BookingSystem::addWindowsLaptops(unsigned int additionalWindowsLaptops){
    totalWindowsLaptops = totalWindowsLaptops + additionalWindowsLaptops;
    availableWindowsLaptops = availableWindowsLaptops + additionalWindowsLaptops;
  }
  void BookingSystem::addMacBooks(unsigned int additionalMacBooks){
    totalMacBooks = totalMacBooks + additionalMacBooks;
    availableMacBooks = availableMacBooks + additionalMacBooks;
  }

//Removing
  void BookingSystem::removeWindowsLaptops(unsigned int removedWindowsLaptops){
    if(removedWindowsLaptops <= availableWindowsLaptops){
      totalWindowsLaptops = totalWindowsLaptops - removedWindowsLaptops;
      availableWindowsLaptops = availableWindowsLaptops - removedWindowsLaptops;
    }else{
      totalWindowsLaptops = totalWindowsLaptops - availableWindowsLaptops;
      availableWindowsLaptops = 0;
    }
  }
  void BookingSystem::removeMacBooks(unsigned int removedMacBooks){
    if(removedMacBooks <= availableMacBooks){
      totalMacBooks = totalMacBooks - removedMacBooks;
      availableMacBooks = availableMacBooks - removedMacBooks;
    }else{
      totalMacBooks = totalMacBooks - availableMacBooks;
      availableMacBooks = 0;
    }
  }

//Report
  void BookingSystem::PrintReport(){
    cout << "---------------------\n";
    cout << "Laptop Booking System\n";
    cout << "---------------------\n";
    cout << "Name                      : " << getName() << "\n";
    cout << "Total Windows Laptops     : " << getTotalWindowsLaptops() << "\n";
    cout << "Total MacBooks            : " << getTotalMacBooks() << "\n";
    cout << "Rented Windows Laptops    : " << getRentedWindowsLaptops() << "\n";
    cout << "Rented MacBooks           : " << getRentedMacBooks() << "\n";
    cout << "Rented Laptops            : " << getRentedLaptops() << "\n";
    cout << "Available Windows Laptops : " << getAvailableWindowsLaptops() << "\n";
    cout << "Available MacBooks        : " << getAvailableMacBooks() << "\n";
    cout << "Available Laptops         : " << getAvailableLaptops() << "\n";
  }
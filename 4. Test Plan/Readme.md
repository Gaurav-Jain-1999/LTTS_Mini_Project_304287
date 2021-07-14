TESTING PROCESS:
## Table no: High level test plan

| **Test ID** | **Description**| **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |
|-------------|----------------|-------------|-------------|----------------|------------------|  
| HR01 |Able to select the from the appropriate data file| Data| Data Input| Pass | Functional |
| HR02 |Error Rectification Due to path of the files| None | Data input| Pass | Non-Functional|
| Hr03 | Add/Modify/delete/list data from file when appropriate input is detected | Data Updatation| Data | Pass | Fuctional |

## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**| **Exp IN** | **Exp OUT** | **Actual Out** |**Test**  |    
|-------------|------------|----------------|------------|-------------|----------------|----------|
| LR01 | HR01 | Read text file data | Data  | Data Input  | Pass  | Non-Functional|
| LR02 | HR03 | Check for user input | Writing data into files| Data Updation| Pass |Functional| 
| LR03 | HR01 | Once the menu option is detected, take further details if required| Data inputs | Data |Functional|
| LR04 | HR03 | Take inputs of data and provide approriate outputs| Data | add/modify/list/delete messages| add/modify/list/delete messages | Functional |
| LR05 | HR03 | Quiting menu | None | quit variable | exit(0) | Functional|


# Test Plan diagram

![image](https://user-images.githubusercontent.com/74864052/125634761-d56eed7f-0919-4ed8-b791-da45dfab7a8b.png)



# TESTING STRATEGY:

The following outlines the types of testing that will be done for unit, integration and system testing. While it includes what will be tested, specific use cases that determine how the testing is done. 


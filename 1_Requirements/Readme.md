# Requirements
## Introduction
 I made a application on electrical and power system which  calculates and displays the output .
 The first experiment in this is Finding equivalent circuit and efficiency of transformer.The rating and other parameters are given as input and it gives the efficiency of the tranformer on any load and equivalent circuit diagram. This can be used by students,teachers in college for performing no load and short circuit test. The tranformer degin engineer can also use to get desired efficiency without any long calculations.
 The second experiment is accessing cost effectiveness of energy efficient motors.
 Many industries have motors running for many years,this application can help them access thier motor and can check for replacement with higher efficient motor with payback time.Again this can also be used by students for case study in electrical lab.
 The last experiment is finding monthly electrical bill for houses.To get clear idea on how much you have to pay for your electricity can be calculated using this small application by giving the appliance working hours and tarrif in your city. 

## Research
There are lot of calculations in Electrical department which needs to be computarised .Electrical engineers are a unique breed. Their work is mathematically demanding, and they constantly face challenging technical problems.
C programming can support the calculations at the core of their analyses. However, calculations aren't just a collection of isolated mathematical operations. Electrical engineers need to:

* Calculate with high-level math functions
* Document calculations for legibility and readability
* Deploy calculations to a broader audience
* Connect calculations to the entire toolchain to influence upstream and downstream decisions
* Fundamentally, calculations need to exist in a structured, managed environment.


## Cost and Features

Cost can be decided by the deployment team for this project and can give feedback to add aditional features
Current Features
1.Calculate the Efficiency of the Tranformer at any load \
2.Accessing the cost effectiveness of motor and give details on extra investment to improve the production and save more on efficient motor\
3.Finding approximate monthly bill of any house by giving average appliance working hours.
## Defining Our System
* In this application user can choose which one to perform .Three option will be placed in front of him.If he chooses to perform OC & SC test to find equivalent parameters he can input the parameters.
* If he choose to find the cost effectiveness of energy efficient motor he can state what is the current motor with him and the application will give option from him to choose motor of higher efficieny with saving and payback period.
* Third one is simple monthly house electricity bill calculator.It will get all the appliances used and their  wattage with average hours it is used to calculate the bill.
## SWOT ANALYSIS
![SWOT-Sample](https://github.com/Himanshu257170/stepin_miniproject/blob/main/6_ImagesAndVideos/swot.png)

# 4W&#39;s and 1&#39;H

## Who:

This is Structured application for electrical background,where we can access the requirement using simple application

## What:

This will easly Calculate all the parameter and give results with no time .Earlier it was time consuming work to do this

## When:

During any failure or needed replacement this can do cost effectiveness and will display the result.We all have bugdet for our expenses so can predict our monthly electricity bill to save for it.

## Where:

In college ,industries can be used by students and engineers 

## How:

This application takes the input and do analysis with the parameter to find the best output needed

# Detail requirements
## High Level Requirements:
|**ID**|**DESCRIPTION**|**CATEGORY**|**STATUS**|
| :- | :- | :- | :- |
|**HLR01**|**First get the option what application user want to perform**|**Technical**|**Implemented**|
|**HLR02**|**If first option selected get the tranformer parameters**|**Technical**|**Implemented**|
|**HLR03**|**If second option selected get the current motor in use and need replacement**|**Technical**|**Implemented**|
|**HLR04**|**If third option selected perform electricity bill calcuation**|**Technical**|**Implemented**|


## Low level Requirements:

|**ID**|**DESCRIPTION**|**CATEGORY**|**HLR ID**|**STATUS**|
| :- | :- | :- | :- | :- |
|**LLR01**|**Check if power factor is less than one else given data is wrong**  |**Technical**|**HLR 02**|**Implemented**|
|**LLR02**|**Calculate the efficiency of transformer from data received** |**Technical**|**HLR 02**|**Implemented**|
|**LLR03**|**Calculate the saving and payback period for cost effective motor**|**Technical**|**HLR 03**|**Implemented**|
|**LLR04**|**Get the average hours and wattage of appliances used**|**Technical**|**HLR 04**|**Implemented**|

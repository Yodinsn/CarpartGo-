# Smart Parking System (C++ OOP)(En)

## Overview
This project implements a Smart Parking System using C++ and
object-oriented programming principles. The system manages
different vehicle types, parking spots, and fee calculations
in a scalable and maintainable design.

## OOP Concepts
- Encapsulation: Each class manages its own data and behavior
- Inheritance: Car and Motorcycle inherit from Vehicle
- Polymorphism: Fee calculation is handled via virtual functions
- Abstraction: Vehicle and FeeStrategy are abstract base classes
- Factory Pattern: Vehicle creation is centralized in VehicleFactory
- Strategy Pattern: Fee calculation logic is interchangeable

## Features
- Vehicle entry and exit handling
- Automatic fee calculation
- Support for multiple vehicle types
- Easy extension for new vehicles or pricing rules

# 智慧停車場管理系統（Smart Parking System）

## 專案簡介
本專案使用 C++ 與物件導向程式設計（OOP）概念，
實作一套簡易且可擴充的智慧停車場管理系統。
系統可管理不同車輛類型、停車位，以及彈性的收費機制，
並強調良好的程式架構與可維護性。

## 設計目標
- 模擬真實停車場的車輛進出流程
- 使用物件導向方式提升程式可讀性與擴充性
- 展示常見設計模式在實務中的應用

## 使用的 OOP 概念
- **封裝（Encapsulation）**  
  各類別負責管理自身資料與行為，避免不必要的外部存取。

- **繼承（Inheritance）**  
  `Car` 與 `Motorcycle` 繼承自抽象類別 `Vehicle`。

- **多型（Polymorphism）**  
  不同車輛型別可透過相同介面進行操作，並套用不同收費邏輯。

- **抽象（Abstraction）**  
  `Vehicle` 與 `FeeStrategy` 定義系統的核心介面。

## 使用的設計模式
- **Factory Pattern（工廠模式）**  
  `VehicleFactory` 集中管理車輛建立流程，
  將物件建立與系統邏輯解耦，提升可維護性。

- **Strategy Pattern（策略模式）**  
  將收費計算邏輯獨立為不同策略類別，
  可在不修改既有程式碼的情況下新增或更換計費方式。

## 系統功能
- 車輛進出停車場管理
- 自動分配停車位
- 依車輛類型計算停車費用
- 支援多種車輛與計費策略
- 易於擴充新車種或新規則

## 總結
本專案展示了如何使用 C++ 與物件導向設計，
將現實世界問題轉換為清楚、模組化的程式架構，
並實際應用 Factory Pattern 與 Strategy Pattern，
提升系統的彈性與可擴充性。

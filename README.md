# 📅 C Calendar Generator

A Console-based Calendar Application or CLI (Command Line Interface) Calender App.

It is simple and interactive C program that generates and displays a full-year calendar in the console based on the year provided by the user. It utilizes ANSI Escape Codes to highlight weekends (Fridays and Saturdays) for better readability.

---

## 📌 Features

* **Any Year Calendar:** Accurately calculates and displays the entire calendar for any year entered by the user.
* **Leap Year Detection:** Automatically detects leap years and adjusts February to have 29 days instead of 28.
* **Weekend Highlighting:** Visually highlights Fridays (`Fri`) and Saturdays (`Sat`) in red (`RED`) for quick identification.
* **Efficient Algorithm:** Computes the exact starting day of the year using a clean mathematical formula without depending on heavy external date/time libraries.

---

## 🛠 Technologies Used

* **Language:** C (C99 Standard)
* **Libraries:** `stdio.h`, `stdlib.h`
* **Styling:** ANSI Escape Codes (for text color formatting)

---

## 📂 Code Logic Overview

1. **`getFirstDayOfTheYear(int year)`:** This function uses a mathematical formula to determine the exact weekday (Sunday to Saturday) of January 1st for the given year.
2. **Leap Year Validation:** The condition `if((year%400 == 0) || (year%4 == 0 && year%100 !=0))` checks if the entered year is a leap year. If true, it dynamically sets `daysInMonth[1] = 29`.
3. **Color Output:** The macro `#define RED "\033[31m"` injects ANSI color codes directly into the `printf` buffer to paint the weekend dates red.

---
# 🔮 Future Improvements & Roadmap

To make this Calendar Application more robust, versatile, and user-friendly, the following features are planned for future releases. Contributions are welcome!

* **Holiday Integration:** Add a feature to read a text/JSON file containing national or custom holidays and highlight them in a different color (e.g., Yellow or Blue).
  
* **Event Planner / Reminderss** Allow users to add short notes or events to specific dates, saving them locally in a file so they persist across multiple app runs.
  
* **Current Date Indicator:** Automatically fetch the current system date using `<time.h>` and highlight "Today's Date" dynamically when printing the calendar.


## 🚀 How to Run

To run this program, ensure you have a C compiler (like GCC) or an IDE (such as VS Code, Code::Blocks, or CLion) installed.

# AI Usage Log

**Project:** Student Record and Result Management System (C)
**Author:** Shubh Agarwal, B.Tech Computer Science, UPES
**AI tool used:** Claude (Anthropic)
**Period:** 13 to 20 November 2026

This log records which AI tool was used, what was asked, and the useful idea obtained from each answer. The AI's code and suggestions were not copied blindly: they were compiled, run with test data, and checked before being used (see [Verification](#how-i-verified-the-ai-output)).

## Usage Entries

| # | Date | Prompt / question asked | Useful idea obtained | Used in project as |
|---|---|---|---|---|
| 1 | 13 Nov | "What is menu driven program in C programming" and "Console based menu driven example" | A menu-driven program is a `do-while` loop that prints a menu, reads the choice, and calls a function through `switch`, with a `default` case for invalid input. | The `main()` menu loop and `switch` |
| 2 | 14 Nov | "How to store details of an entity using C programming" | Group the fields into a `struct` and keep many records in an array of structures. | `struct Student` and the array `s` |
| 3 | 18 Nov | "Function to search and display student record in C", then "How about it gives me a choice, do you want to search another one" | Linear search with a `found` flag; a `do-while` loop with a `y/n` question to search again. | `SearchAndDisplay()` |
| 4 | 18 Nov | "How to create a structure for SGPA for 8 semesters, according to year, has 2 semesters and 4 years" | Store SGPA in a `float SGPA[8]` array inside the structure; year *y* covers semesters `2y-1` and `2y`. | `SGPA[8]` member of `struct Student` |
| 5 | 18 to 19 Nov | "Function for calculation of CGPA of every student", "Add average CGPA for each student by taking average of available SGPA values", "Avg CGPA of a year" | CGPA = total of the available SGPAs divided by the number of completed semesters; year average = total CGPA of that year's students divided by their count, checking for zero students. | `CGPA()` and `CGPAavg()` |
| 6 | 18 to 19 Nov | "I need to display all records in order of increasing name and SAP ID", "How to sort in increasing order in roll no", "arrange it in ascending order of number and character" | Bubble sort on a **copy** of the array so the stored order stays unchanged; numbers compared with `>`, names with `strcmp()`. | `DisplayAscendingNumber()` and `DisplayAscendingName()` |
| 7 | 19 Nov | "How to store file in C program" | Save the records with `fwrite` and load them with `fread`; save after every add and delete; store the record size in the file to detect a changed format. | `saveToFile()` and `loadFromFile()` |
| 8 | 19 Nov | Shared screenshots of my `C Functions.c` and asked "Tell me the mistakes" | A review listing compile errors (wrong header, `student` vs `Student`, missing semicolons and `)`), logic errors (menu never exits, `\n` inside `scanf`, `%d` used for a `float`, first student cannot be deleted) and missing output in the sort functions. | Fixes applied to the program |
| 9 | 19 Nov | Shared the assignment's Part B requirements (items 13 to 19) and asked "Help me with this" | Four advice categories chosen by CGPA ranges (Excellent, Good, Needs Improvement, Requires Immediate Attention); an if-else decision function; naming the semester with the lowest SGPA; an SGPA trend note. | `giveAdvice()` and `AcademicAdvisor()` |
| 10 | 20 Nov | "Construct a README file for this project in GitHub" and "Create an AI log too" | Structure of a GitHub README: description, features, menu, run steps, sample output, project structure. | `README.md` and this log |

## Academic Advisor: AI Suggestion and Final Logic

**Suggested by AI (entry 9):**

| CGPA | Category |
|---|---|
| 9.0 and above | Excellent Performance |
| 7.5 to below 9.0 | Good Performance |
| 6.0 to below 7.5 | Needs Improvement |
| Below 6.0 | Requires Immediate Attention |

The final recommendation is **not** produced by an AI at run time. The C program generates it from the student's CGPA using if-else statements, as the assignment requires.

## What I Checked and Modified

> **Edit this section before submitting.** Requirement 19 says the AI-generated suggestion must be checked and modified by me, so write the changes you really made. Examples of what to mention:
>
> - CGPA thresholds I changed, and why (for example, to match my university's grading).
> - Advice messages I reworded in my own words.
> - Test cases I ran myself and what I found.
> - Anything in the AI's answer that I found wrong, unclear, or unnecessary and removed.

- Modified by me: _write here_
- Checked by me: _write here_

## How I Verified the AI Output

- The program was compiled with `gcc -Wall -Wextra` and had to build with no warnings.
- It was run with five students covering all four CGPA categories, and the printed CGPAs, year averages, sort orders, search and delete results were compared with hand calculations.
- Saved records were confirmed to load again after closing and reopening the program, and a deleted record was confirmed not to return.
- Where an answer did not match what I needed, I asked again with more detail instead of accepting it.

## What I Learned About Using AI

- **Clear prompts get better answers.** Short prompts such as "Separate it" or "Not CGPA.c" needed follow-up questions. The AI once edited a different file than I meant, because my prompt did not name the file. Naming the file, the function, and the expected output avoids this.
- **AI is useful for ideas, logic, test cases, and documentation**, such as the advice categories, the sorting approach, and the README layout.
- **AI answers must be verified.** Code has to be compiled and tested, and the results compared with what I expect, instead of being copied as it is.
- **An AI-suggested idea can be turned into C logic.** The advice categories became a short if-else function, and the sorting idea became two bubble-sort functions.

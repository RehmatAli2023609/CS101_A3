# Text Analysis System

A C++ program designed for text manipulation and analysis. This system provides a variety of features, including word occurrence detection, paragraph merging, vowel counting, word histograms, and paragraph reversal. It uses a user-friendly, menu-driven interface for efficient text processing.

## Features:
- **Paragraphs’ Prompt**: Allows the user to input two paragraphs for processing.
- **Merged Paragraphs**: Combines the two input paragraphs into a single paragraph.
- **Vowels Count**: Counts the number of vowels in the input text.
- **Find First Occurrence of a Word**: Searches for the first occurrence of a word in a paragraph.
- **Find All Occurrences of a Word**: Searches for all occurrences of a word in a paragraph.
- **Display Word Histogram**: Displays a histogram showing the frequency of words of various lengths.
- **Display Sorted Histogram**: Displays a sorted version of the word histogram.
- **Reverse Paragraphs**: Reverses the characters of each word in a paragraph.

## Methodology:
1. **Paragraphs’ Prompt**: Users enter two paragraphs, which are stored in variables.
2. **Merged Paragraph**: The program combines both input paragraphs into one new paragraph.
3. **Vowels Count**: The program iterates through each letter in the paragraph, counting vowels.
4. **Find First Occurrence of a Word**: The program searches for the first occurrence of a specified word in the paragraph.
5. **Find All Occurrences of a Word**: The program identifies all occurrences of a specified word and their positions.
6. **Display Word Histogram**: Creates a histogram displaying the frequency of words of varying lengths.
7. **Display Sorted Histogram**: Displays the word histogram in ascending order of frequency.
8. **Reverse Paragraph**: Reverses the characters of each word in a paragraph without changing the word order.

## Flow of the Program Code:
1. User input is received via a menu-driven interface.
2. The program executes different functions based on user selection.
3. Results are displayed, and the user can continue interacting through the menu.

## Installation:
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/text-analysis-system.git

#include <iostream>
#include <string>
using namespace std;

struct Book
{
    string isbn;
    string title;
    string author;
    int year;
};

// Function to search for a book using its ISBN
void searchBook(const Book books[], int size, const string &isbn)
{
    for (int i = 0; i < size; i++)
    {
        if (books[i].isbn == isbn)
        {
            cout << "Book Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Year of Publication: " << books[i].year << endl;

            // Add other book details here if needed
            return;
        }
    }

    cout << "Searched book is not available in the library." << endl;
}

int main()
{
    // Creating an array of books with their ISBNs,titles, authors and year of publication
    Book books[] = {
        {"0011", "The History of Tom Jones", "Henry Fielding", 1749},
        {"0022", "Pride and Prejudice", "Jane Austen", 1813},
        {"0033", "The Red and the Black", "Stendhal", 1830},
        {"0044", "Le Pere Goriot", "Honore de Balzac", 1835},
        {"0055", "David Copperfield", "Charles Dickens", 1849},
        {"0066", "Madame Bovary", "Gustave Flaubert", 1856},
        {"0077", "Moby-Dick", "Herman Melville", 1851},
        {"0088", "Wuthering Heights", "Emily Bronte", 1847},
        {"0099", "The Brothers Karamazov", "Dostoevsky", 1880},
        {"1010", "War and Peace", "Tolstoy", 1869},
        // can add more books
    };
    // dynamically determining the size of an array at compile-time.
    int numBooks = sizeof(books) / sizeof(books[0]);

    cout << "Enter the ISBN: ";
    string isbn;
    cin >> isbn;

    searchBook(books, numBooks, isbn);

    return 0;
}

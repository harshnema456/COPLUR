package ASSIGNMENT1;
public class Book {
    String title;
    String author;
    int pages;


    Book(String t, String a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    
    void displayBook() {
        System.out.println("Title : " + title);
        System.out.println("Author: " + author);
        System.out.println("Pages : " + pages);
    }

    public static void main(String[] args) {
        System.out.println("book");
        Book myBook = new Book("statics", "Dr.tandon", 120);
        
          Book myBook2 = new Book("probality", "Dr.sc verma", 420);
        myBook.displayBook();
        System.out.println("book2");
        myBook2.displayBook();
    }
}
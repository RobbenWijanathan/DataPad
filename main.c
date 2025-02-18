#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>

void mainMenu1();
void mainMenu2();
void mainMenu3();
void exitMenu();

// Case 1 Functions

void stringFlip();
void stringReverse();
void stringInverse();

// Case 2 Functions

void readFile();
void salvatoreProperty();
void salvatoreMenu1();
void salvatoreMenu2();
void salvatoreMenu3();
void salvatoreMenu4();
void salvatoreMenu5();
void printList();
void displayData();
void searchData();
void stringSearch();
void intSearch();
void priceSearch();
void sortData();
void stringSorting();
void intSorting();
void priceSorting();
void exportData();

// Apartment Struct

struct Apartment {

    char location[200];
    char city[200];
    long long price;
    int rooms;
    int bathroom;
    int carpark;
    char type[200];
    char furnish[200];

};

struct Apartment apartments[5000];
struct Apartment temps;

// Apartment Count

int ctr = 0;    

// Read File Function

void readFile(){

    FILE* file = fopen("file.csv", "r");
    if (!file) {
        perror("Error opening file");
    }
    char header[500];
    fgets(header, sizeof(header), file); 
    while (fscanf(file, "%[^,],%[^,],%lld,%d,%d,%d,%[^,],%[^\n]\n",
                  apartments[ctr].location, apartments[ctr].city, &apartments[ctr].price,
                  &apartments[ctr].rooms, &apartments[ctr].bathroom, &apartments[ctr].carpark,
                  apartments[ctr].type, apartments[ctr].furnish) == 8) {
        ctr++;
    }
    fclose(file);
}

int main(){

    readFile();
    system("cls");
    printf("\033[38;5;208m");
    puts("$$$$$$$\\             $$\\               $$$$$$$\\                 $$\\ "); usleep(5000);
    puts("$$  __$$\\            $$ |              $$  __$$\\                $$ |");  usleep(5000);
    puts("$$ |  $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$ |  $$ |$$$$$$\\   $$$$$$$ |");  usleep(5000);
    puts("$$ |  $$ | \\____$$\\\\_$$  _|   \\____$$\\ $$$$$$$  |\\____$$\\ $$  __$$ |");  usleep(5000);
    puts("$$ |  $$ | $$$$$$$ | $$ |     $$$$$$$ |$$  ____/ $$$$$$$ |$$ /  $$ |"); usleep(5000);
    puts("$$ |  $$ |$$  __$$ | $$ |$$\\ $$  __$$ |$$ |     $$  __$$ |$$ |  $$ |");  usleep(5000);
    puts("$$$$$$$  |\\$$$$$$$ | \\$$$$  |\\$$$$$$$ |$$ |     \\$$$$$$$ |\\$$$$$$$ |"); usleep(5000); 
    puts("\\_______/  \\_______|  \\____/  \\_______|\\__|      \\_______| \\_______|"); usleep(5000); 
    puts(""); usleep(10000);
    puts("===================================================================="); usleep(5000);
    puts("                Press 'W' and 'S' to select option                  ");usleep(5000);   
    puts("===================================================================="); usleep(5000);
    puts(""); usleep(10000);
    printf("\033[38;5;208m");usleep(5000);
    printf("\033[1;32m   +-----------------------+\n");usleep(5000);
    printf(">> | 1. String Flip        |\n");usleep(5000);usleep(5000);
    printf("   +-----------------------+\033[0m\n");
    printf("\033[38;5;208m");usleep(5000);
    puts("+-----------------------+");usleep(5000);
    puts("| 2. Salvatore Property |");usleep(5000);
    puts("+-----------------------+");usleep(5000);
    printf("\033[38;5;208m");usleep(5000);

    mainMenu1();

    return 0;
}

// Main menus

void mainMenu1(){

    system("cls");
    printf("\033[38;5;208m");
    puts("$$$$$$$\\             $$\\               $$$$$$$\\                 $$\\ ");
    puts("$$  __$$\\            $$ |              $$  __$$\\                $$ |"); 
    puts("$$ |  $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$ |  $$ |$$$$$$\\   $$$$$$$ |"); 
    puts("$$ |  $$ | \\____$$\\\\_$$  _|   \\____$$\\ $$$$$$$  |\\____$$\\ $$  __$$ |"); 
    puts("$$ |  $$ | $$$$$$$ | $$ |     $$$$$$$ |$$  ____/ $$$$$$$ |$$ /  $$ |"); 
    puts("$$ |  $$ |$$  __$$ | $$ |$$\\ $$  __$$ |$$ |     $$  __$$ |$$ |  $$ |");
    puts("$$$$$$$  |\\$$$$$$$ | \\$$$$  |\\$$$$$$$ |$$ |     \\$$$$$$$ |\\$$$$$$$ |"); 
    puts("\\_______/  \\_______|  \\____/  \\_______|\\__|      \\_______| \\_______|"); 
    puts("");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");   
    puts("===================================================================="); 
    puts("");
    printf("\033[38;5;208m");
    printf("\033[1;32m   +-----------------------+\n");
    printf(">> | 1. String Flip        |\n");
    printf("   +-----------------------+\033[0m\n");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 2. Salvatore Property |");
    puts("+-----------------------+");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 3. Exit               |");
    puts("+-----------------------+");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        mainMenu1();
        break;
    case 's':
        mainMenu2();
    case '\r':
        stringFlip();
    case '\n':
        stringFlip();
    default:
        break;
    }
}

void mainMenu2(){

    system("cls");
    printf("\033[38;5;208m");
    puts("$$$$$$$\\             $$\\               $$$$$$$\\                 $$\\ ");
    puts("$$  __$$\\            $$ |              $$  __$$\\                $$ |"); 
    puts("$$ |  $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$ |  $$ |$$$$$$\\   $$$$$$$ |"); 
    puts("$$ |  $$ | \\____$$\\\\_$$  _|   \\____$$\\ $$$$$$$  |\\____$$\\ $$  __$$ |"); 
    puts("$$ |  $$ | $$$$$$$ | $$ |     $$$$$$$ |$$  ____/ $$$$$$$ |$$ /  $$ |");;
    puts("$$ |  $$ |$$  __$$ | $$ |$$\\ $$  __$$ |$$ |     $$  __$$ |$$ |  $$ |"); 
    puts("$$$$$$$  |\\$$$$$$$ | \\$$$$  |\\$$$$$$$ |$$ |     \\$$$$$$$ |\\$$$$$$$ |"); 
    puts("\\_______/  \\_______|  \\____/  \\_______|\\__|      \\_______| \\_______|"); 
    puts("");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");   
    puts("===================================================================="); 
    puts("");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 1. String Flip        |");
    puts("+-----------------------+");
    printf("\033[38;5;208m");
    printf("\033[1;32m   +-----------------------+\n");
    puts(">> | 2. Salvatore Property |");
    printf("   +-----------------------+\033[0m\n");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 3. Exit               |");
    puts("+-----------------------+");
    printf("\033[38;5;208m");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        mainMenu1();
        break;
    case 's':
        mainMenu3();
    case '\r':
        salvatoreProperty();
    case '\n':
        salvatoreProperty();
    default:
        break;
    }

}

void mainMenu3(){

    system("cls");
    printf("\033[38;5;208m");
    puts("$$$$$$$\\             $$\\               $$$$$$$\\                 $$\\ ");
    puts("$$  __$$\\            $$ |              $$  __$$\\                $$ |"); 
    puts("$$ |  $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$ |  $$ |$$$$$$\\   $$$$$$$ |"); 
    puts("$$ |  $$ | \\____$$\\\\_$$  _|   \\____$$\\ $$$$$$$  |\\____$$\\ $$  __$$ |"); 
    puts("$$ |  $$ | $$$$$$$ | $$ |     $$$$$$$ |$$  ____/ $$$$$$$ |$$ /  $$ |");;
    puts("$$ |  $$ |$$  __$$ | $$ |$$\\ $$  __$$ |$$ |     $$  __$$ |$$ |  $$ |"); 
    puts("$$$$$$$  |\\$$$$$$$ | \\$$$$  |\\$$$$$$$ |$$ |     \\$$$$$$$ |\\$$$$$$$ |"); 
    puts("\\_______/  \\_______|  \\____/  \\_______|\\__|      \\_______| \\_______|"); 
    puts("");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");   
    puts("===================================================================="); 
    puts("");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 1. String Flip        |");
    puts("+-----------------------+");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 2. Salvatore Property |");
    puts("+-----------------------+");
    printf("\033[1;32m   +-----------------------+\n");
    puts(">> | 3. Exit               |");
    printf("   +-----------------------+\033[0m\n");
    printf("\033[38;5;208m");

    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        mainMenu2();
        break;
    case 's':
        mainMenu3();
    case '\r':
        exitMenu();
    case '\n':
        exitMenu();
    default:
        break;
    }

}

void exitMenu(){

    exit(0);

}

// String Flip

void stringReverse(char *S) {
    int len = strlen(S);
    for (int i = 0; i < len / 2; i++) {
        char temp = S[i];
        S[i] = S[len - 1 - i];
        S[len - 1 - i] = temp;
    }
}

void stringInverse(char *S) {
    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] += 32;
        } else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] -= 32;
        }
    }
}

void stringFlip(){

    printf("\033[38;5;208m");
    system("cls"); 
    puts("  _________ __         .__              ___________.__  .__        "); usleep(5000);
    puts(" /   _____//  |________|__| ____    ____\\_   _____/|  | |__|_____  "); usleep(5000);
    puts(" \\_____  \\\\   __\\_  __ \\  |/    \\  / ___\\|    __)  |  | |  \\____ \\ "); usleep(5000);
    puts(" /        \\|  |  |  | \\/  |   |  \\/ /_/  >     \\   |  |_|  |  |_> >"); usleep(5000);
    puts("/_______  /|__|  |__|  |__|___|  /\\___  /\\___  /   |____/__|   __/ "); usleep(5000);
    puts("        \\/                     \\/_____/     \\/            |__|     "); usleep(5000);
    puts("====================================================================");usleep(5000);
    printf("Enter a string to flip: ");

    char S[10001];
    scanf("%[^\n]",S); getchar();
    stringReverse(S);
    stringInverse(S);
    printf("Flipping String...\n"); sleep(1);
    puts("");
    printf("Flipped String: %s\n",S);
    puts("");
    printf(">> Enter to go back");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case '\r':
        mainMenu1();
    case '\n':
        mainMenu1();
    default:
        break;
    }

}

// Salvatore Property

void salvatoreProperty(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       ");usleep(5000);
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __");usleep(5000);
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /");usleep(5000);
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / ");usleep(5000);
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  ");usleep(5000);
    puts("                                                                /_/                  /____/   ");usleep(100000);
    puts("====================================================================");usleep(5000);
    puts("                Press 'W' and 'S' to select option                  ");usleep(5000);   
    puts("====================================================================");usleep(100000); 
    printf("\033[1;32m");
    puts("   +-----------------------+");
    puts(">> | 1. Display Data       |");
    puts("   +-----------------------+");usleep(100000); 
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 2. Search Data        |");
    puts("+-----------------------+");usleep(100000); 
    puts("+-----------------------+");
    puts("| 3. Sort Data          |");
    puts("+-----------------------+");usleep(100000); 
    puts("+-----------------------+");
    puts("| 4. Export Data        |");
    puts("+-----------------------+");usleep(100000); 
    puts("+-----------------------+");
    puts("| 5. Exit               |");
    puts("+-----------------------+");usleep(100000); 
    salvatoreMenu1();

}

// Salvatore Menus

void salvatoreMenu1(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       ");
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __");
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /");
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / ");
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  ");
    puts("                                                                /_/                  /____/   ");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");
    puts("====================================================================");
    printf("\033[1;32m");
    puts("   +-----------------------+");
    puts(">> | 1. Display Data       |");
    puts("   +-----------------------+");
    printf("\033[38;5;208m");
    puts("+-----------------------+");
    puts("| 2. Search Data        |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 3. Sort Data          |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 4. Export Data        |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 5. Exit               |");
    puts("+-----------------------+");

    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        salvatoreMenu1();
        break;
    case 's':
        salvatoreMenu2();
    case '\r':
        displayData();
    case '\n':
        displayData();
    default:
        break;
    }
}

void salvatoreMenu2(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       ");
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __");
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /");
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / ");
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  ");
    puts("                                                                /_/                  /____/   ");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");
    puts("====================================================================");
    puts("+-----------------------+");
    puts("| 1. Display Data       |");
    puts("+-----------------------+");
    printf("\033[1;32m");
    puts("   +-----------------------+");
    puts(">> | 2. Search Data        |");
    puts("   +-----------------------+");
    printf("\033[38;5;208m");    
    puts("+-----------------------+");
    puts("| 3. Sort Data          |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 4. Export Data        |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 5. Exit               |");
    puts("+-----------------------+");

    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        salvatoreMenu1();
        break;
    case 's':
        salvatoreMenu3();
    case '\r':
        searchData();
    case '\n':
        searchData();
    default:
        break;
    }

}

void salvatoreMenu3(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       ");
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __");
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /");
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / ");
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  ");
    puts("                                                                /_/                  /____/   ");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");
    puts("====================================================================");
    puts("+-----------------------+");
    puts("| 1. Display Data       |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 2. Search Data        |");
    puts("+-----------------------+");
    printf("\033[1;32m"); 
    puts("   +-----------------------+");
    puts(">> | 3. Sort Data          |");
    puts("   +-----------------------+");
    printf("\033[38;5;208m");       
    puts("+-----------------------+");
    puts("| 4. Export Data        |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 5. Exit               |");
    puts("+-----------------------+");

    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        salvatoreMenu2();
        break;
    case 's':
        salvatoreMenu4();
    case '\r':
        sortData();
    case '\n':
        sortData();
    default:
        break;
    }

}

void salvatoreMenu4(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       ");
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __");
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /");
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / ");
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  ");
    puts("                                                                /_/                  /____/   ");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");
    puts("====================================================================");
    puts("+-----------------------+");
    puts("| 1. Display Data       |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 2. Search Data        |");
    puts("+-----------------------+"); 
    puts("+-----------------------+");
    puts("| 3. Sort Data          |");
    puts("+-----------------------+");
    printf("\033[1;32m");    
    puts("   +-----------------------+");
    puts(">> | 4. Export Data        |");
    puts("   +-----------------------+");
    printf("\033[38;5;208m");        
    puts("+-----------------------+");
    puts("| 5. Exit               |");
    puts("+-----------------------+");

    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        salvatoreMenu3();
        break;
    case 's':
        salvatoreMenu5();
    case '\r':
        exportData();
    case '\n':
        exportData();
    default:
        break;
    }

}

void salvatoreMenu5(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       ");
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __");
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /");
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / ");
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  ");
    puts("                                                                /_/                  /____/   ");
    puts("====================================================================");
    puts("                Press 'W' and 'S' to select option                  ");
    puts("====================================================================");
    puts("+-----------------------+");
    puts("| 1. Display Data       |");
    puts("+-----------------------+");
    puts("+-----------------------+");
    puts("| 2. Search Data        |");
    puts("+-----------------------+"); 
    puts("+-----------------------+");
    puts("| 3. Sort Data          |");
    puts("+-----------------------+");    
    puts("+-----------------------+");
    puts("| 4. Export Data        |");
    puts("+-----------------------+");
    printf("\033[1;32m");    
    puts("   +-----------------------+");
    puts(">> | 5. Exit               |");
    puts("   +-----------------------+");
    printf("\033[38;5;208m");            

    char ch;
    ch = getch(); 
    switch (ch)
    {
    case 'w':
        salvatoreMenu4();
        break;
    case 's':
        salvatoreMenu5();
    case '\r':
        mainMenu2();
    case '\n':
        mainMenu2();
    default:
        break;
    }

}

// Print the whole data based on the condition on the parameter
// rows = how many rows
// S = the key ("price","integer",or "").
// N = in price, is the lowest price, in integer and string, it's the options.
// M = in price, is the highest price, in integer and string, it's the options.

void printList(int rows, char *S, int N, int M){

    if(rows > ctr){
        rows = ctr;
    }
    if(strcmp(S,"integer") == 0){
        switch (N)
        {
        case 4:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            int counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && apartments[i].rooms == M) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");    
            break;
        case 5:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && apartments[i].bathroom == M) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");    
            break;
        case 6:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && apartments[i].carpark == M) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");    
            break;
        default:
            break;
        }

    }else if(strcmp(S,"price") == 0){
        puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
        puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
        puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
        usleep(100000);
        int counter = 0;
        for (int i = 0; i < ctr; i++) {
            if (strlen(apartments[i].location) > 0 && apartments[i].price >= N && apartments[i].price <= M) {
                printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                usleep(500); 
                counter++;
            }
            if(counter == rows){
                break;
            }
        }
        puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");        
    } else if (strlen(S) > 0)
    {
        int flag = 0;
        switch (N)
        {
        case 1:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            int counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && strcmpi(S, apartments[i].location) == 0) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+"); 
            break;
        case 2:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && strcmpi(S, apartments[i].city) == 0) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+"); 
            break;
        case 7:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && strcmpi(S, apartments[i].type) == 0) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+"); 
            break;
        case 8:
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
            usleep(100000);
            counter = 0;
            for (int i = 0; i < ctr; i++) {
                if (strlen(apartments[i].location) > 0 && strcmpi(S, apartments[i].furnish) == 0) {
                    printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                    apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                    usleep(500);
                    counter++;
                }
                if(counter == rows){
                    break;
                }
            }
            puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+"); 
            break;
        default:
            break;
        }  
    } else {
        puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
        puts("| Location                   | City                 | Price           | Rooms      | Bathrooms  | Carpark    | Type                 | Furnish              |");
        puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
        usleep(100000);
        for (int i = 0; i < rows; i++) {
            if (strlen(apartments[i].location) > 0) {
                printf("| %-26s | %-20s | RM %-12lld | %-10d | %-10d | %-10d | %-20s | %-20s |\n",apartments[i].location,apartments[i].city,
                apartments[i].price,apartments[i].rooms,apartments[i].bathroom,apartments[i].carpark,apartments[i].type,apartments[i].furnish);
                usleep(500); 
            }
        }
        puts("+----------------------------+----------------------+-----------------+------------+------------+------------+----------------------+----------------------+");
    }
    
}

// Display the data based on the rows inputed by the user

void displayData(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       "); usleep(5000);
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __"); usleep(5000);
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /"); usleep(5000);
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / "); usleep(5000);
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  "); usleep(5000);
    puts("                                                                /_/                  /____/   "); usleep(100000);
    puts("===================================================================="); usleep(5000);
    puts("                            Display Data                            "); usleep(5000);
    puts("===================================================================="); usleep(100000);
    printf("How many rows you want to display: ");

    int rows;
    scanf("%d",&rows); getchar();
    printf("Displaying Data...\n"); sleep(1);
    printList(rows, "", 0, 0);
    printf(">> Enter to go back");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case '\r':
        salvatoreMenu1();
    case '\n':
        salvatoreMenu1();
    default:
        break;
    }

}

// Linearly search strings in the array of struct apartments

void stringSearch(int N, char *S){

    switch (N)
    {
    case 1:
        int flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(strcmpi(S,apartments[i].location) == 0){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        int rows;
        scanf("%d",&rows); getchar();
        printList(rows,S,N,0);
        break;
    case 2:
        flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(strcmpi(S,apartments[i].city) == 0){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        scanf("%d",&rows); getchar();
        printList(rows,S,N,0);
        break;
    case 7:
        flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(strcmpi(S,apartments[i].type) == 0){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        scanf("%d",&rows); getchar();
        printList(rows,S,N,0);
        break;
    case 8:
        flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(strcmpi(S,apartments[i].furnish) == 0){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        scanf("%d",&rows); getchar();
        printList(rows,S,N,0);
        break;
    default:
        break;
    }

}

// Linearly search prices (long long integer) in the array of struct apartments

void priceSearch(long long int l, long long int r){

    int flag1 = 0;
    for (int i = 0; i < ctr; i++)
    {
        if(apartments[i].price >= l && apartments[i].price <= r){
            flag1 = 1;
            break;
        }
    }
    if(flag1){
        printf("Data Found!\nHow many rows you want to show: ");
    } else {
        printf("Data Not Found!\n");
        printf(">> Enter to go back");
        char ch;
        ch = getch(); 
        switch (ch)
        {
        case '\r':
            salvatoreMenu1();
        case '\n':
            salvatoreMenu1();
        default:
            break;
        }
    }   
    int rows;
    scanf("%d",&rows);
    printList(rows,"price",l,r);

}

// Linearly search integers in the array of struct apartments

void intSearch(int N, int integer){

    switch (N)
    {
    case 4:
        int flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(apartments[i].rooms == integer){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        int rows;
        scanf("%d",&rows);
        printList(rows,"integer",N,integer);
        break;
    case 5:
        flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(apartments[i].bathroom == integer){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        scanf("%d",&rows);
        printList(rows,"integer",N,integer);
        break;
    case 6:
        flag1 = 0;
        for (int i = 0; i < ctr; i++)
        {
            if(apartments[i].carpark == integer){
                flag1 = 1;
                break;
            }
        }
        if(flag1){
            printf("Data Found!\nHow many rows you want to show: ");
        } else {
            printf("Data Not Found!\n");
            printf(">> Enter to go back");
            char ch;
            ch = getch(); 
            switch (ch)
            {
            case '\r':
                salvatoreMenu1();
            case '\n':
                salvatoreMenu1();
            default:
                break;
            }
        }   
        scanf("%d",&rows);
        printList(rows,"integer",N,integer);
        break;
    default:
        break;
    }

}

// Search the data based on the column options

void searchData(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       "); usleep(5000);
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __"); usleep(5000);
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /"); usleep(5000);
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / "); usleep(5000);
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  "); usleep(5000);
    puts("                                                                /_/                  /____/   "); usleep(100000);
    puts("===================================================================="); usleep(5000);
    puts("                             Search Data                            "); usleep(5000);
    puts("===================================================================="); usleep(100000);
    puts("1. Location");
    puts("2. City");
    puts("3. Price");
    puts("4. Rooms");
    puts("5. Bathrooms");
    puts("6. Carpark");
    puts("7. Type");
    puts("8. Furnish");
    printf("Enter the column you want to search: ");
    int choice;
    scanf("%d",&choice); getchar();
    while(!(choice <= 8 && choice >= 1)){
        puts("Invalid choice.");
        printf("Enter the column you want to search: ");
        int choice;
        scanf("%d",&choice); getchar();
    }
    switch (choice)
    {
    case 1:
        printf("Searching for Location...\n"); sleep(1);
        printf("Enter a location: ");
        char locationTemp[200];
        scanf("%[^\n]",locationTemp); getchar();
        stringSearch(1, locationTemp);
        break;
    case 2:
        printf("Searching for City...\n"); sleep(1);
        printf("Enter a City: ");
        char cityTemp[200];
        scanf("%[^\n]",cityTemp); getchar();
        stringSearch(2, cityTemp);
        break;
    case 3:
        printf("Searching for Price...\n"); sleep(1);
        long long lowestPrice, highestPrice;
        printf("Lowest Price: ");
        scanf("%lld",&lowestPrice); getchar();
        printf("Highest Price: ");
        scanf("%lld",&highestPrice); getchar();
        priceSearch(lowestPrice,highestPrice);
        break;
    case 4:
        printf("Searching for Rooms...\n"); sleep(1);
        printf("Enter Room(s) Quantity: ");
        int roomsTemp;
        scanf("%d",&roomsTemp); getchar();
        intSearch(4, roomsTemp);
        break;
    case 5:
        printf("Searching for Bathroom...\n"); sleep(1);
        printf("Enter Bathrooom(s) Quantity: ");
        int bathroomTemp;
        scanf("%d",&bathroomTemp); getchar();
        intSearch(5, bathroomTemp);
        break;
    case 6:
        printf("Searching for Carpark...\n"); sleep(1);
        printf("Enter Carpark(s) Quantity: ");
        int carparkTemp;
        scanf("%d",&carparkTemp); getchar();
        intSearch(6, carparkTemp);
        break;
    case 7:
        printf("Searching for Type...\n"); sleep(1);
        printf("Enter a Type: ");
        char typeTemp[200];
        scanf("%[^\n]",typeTemp);
        stringSearch(7, typeTemp);
        break;
    case 8:
        printf("Searching for Furnish...\n"); sleep(1);
        printf("Enter a Furnish: ");
        char furnishTemp[200];
        scanf("%[^\n]",furnishTemp);
        stringSearch(8, furnishTemp);
        break;
    default:
        break;
    }
    printf(">> Enter to go back");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case '\r':
        salvatoreMenu1();
    case '\n':
        salvatoreMenu1();
    default:
        break;
    }

}

// Bubble sort the strings in the array of struct apartments 

void stringSorting(int N, int AD){
    
    if (AD == 1)
    {
        switch (N)
        {
        case 1:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].location,apartments[j+1].location) > 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 2:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].city,apartments[j+1].city) > 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 7:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].type,apartments[j+1].type) > 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 8:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].furnish,apartments[j+1].furnish) > 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        default:
            break;
        } 
    } else {
        switch (N)
        {
        case 1:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].location,apartments[j+1].location) < 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 2:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].city,apartments[j+1].city) < 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 7:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].type,apartments[j+1].type) < 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 8:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (strcmp(apartments[j].furnish,apartments[j+1].furnish) < 0)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        default:
            break;
        } 
    }

}

// Bubble sort the prices in the array of struct apartments 

void priceSorting(int N, int AD){
    
    if(AD == 1){
        for (int i = 0; i < ctr; i++)
        {
            for(int j = 0; j < ctr - i - 1; j++){
                 if (apartments[j].price > apartments[j+1].price)
                {
                    temps = apartments[j];
                    apartments[j] = apartments[j+1];
                    apartments[j+1] = temps;
                }
            }
        }  
    } else {
        for (int i = 0; i < ctr; i++)
        {
            for(int j = 0; j < ctr - i - 1; j++){
                 if (apartments[j].price < apartments[j+1].price)
                {
                    temps = apartments[j];
                    apartments[j] = apartments[j+1];
                    apartments[j+1] = temps;
                }
            }
        }  
    }

}

// Bubble sort the integer in the array of struct apartments 

void intSorting(int N, int AD){
    
    if (AD == 1)
    {
        switch (N)
        {
        case 4:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (apartments[j].rooms > apartments[j+1].rooms)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 5:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (apartments[j].bathroom > apartments[j+1].bathroom)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 6:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (apartments[j].carpark > apartments[j+1].carpark)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        default:
            break;
        } 
    } else {
        switch (N)
        {
        case 4:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (apartments[j].rooms < apartments[j+1].rooms)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 5:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (apartments[j].bathroom < apartments[j+1].bathroom)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        case 6:
            for (int i = 0; i < ctr; i++)
            {
                for(int j = 0; j < ctr - i - 1; j++){
                    if (apartments[j].carpark < apartments[j+1].carpark)
                    {
                        temps = apartments[j];
                        apartments[j] = apartments[j+1];
                        apartments[j+1] = temps;
                    }
                }
            }
            break;
        default:
            break;
        } 
    }

}

// Sort the data based on the column options

void sortData(){

    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       "); usleep(5000);
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __"); usleep(5000);
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /"); usleep(5000);
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / "); usleep(5000);
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  "); usleep(5000);
    puts("                                                                /_/                  /____/   "); usleep(100000);
    puts("===================================================================="); usleep(5000);
    puts("                              Sort Data                             "); usleep(5000);
    puts("===================================================================="); usleep(100000);
    puts("1. Location");
    puts("2. City");
    puts("3. Price");
    puts("4. Rooms");
    puts("5. Bathrooms");
    puts("6. Carpark");
    puts("7. Type");
    puts("8. Furnish");
    printf("Enter the column you want to sort: ");
    int choice;
    scanf("%d",&choice); getchar();
    while(!(choice <= 8 && choice >= 1)){
        puts("Invalid choice.");
        printf("Enter the column you want to sort: ");
        int choice;
        scanf("%d",&choice); getchar();
    }
    switch (choice)
    {
    case 1:
        printf("Sorting for Location...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        int ad;
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        stringSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        int rows;
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 2:
        printf("Sorting for City...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        stringSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 3:
        printf("Sorting for Price...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        priceSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 4:
        printf("Sorting for Rooms...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        intSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 5:
        printf("Sorting for Bathroom...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> "); 
            scanf("%d",&ad); getchar();
        }
        intSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 6:
        printf("Sorting for Carpark...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        intSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 7:
        printf("Sorting for Type...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        stringSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    case 8:
        printf("Sorting for Furnish...\n"); sleep(1);
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf(">> ");
        scanf("%d",&ad); getchar();
        while(ad < 1 && ad > 2){
            puts("Invalid choice.");
            printf(">> ");
            scanf("%d",&ad); getchar();
        }
        stringSorting(choice, ad);
        puts("Sorting..."); sleep(1);
        puts("Sorted!");
        printf("How many rows you want to display: ");
        scanf("%d",&rows); getchar();
        printList(rows,"",0,0);
        break;
    default:
        break;
    }
    printf(">> Enter to go back");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case '\r':
        salvatoreMenu1();
    case '\n':
        salvatoreMenu1();
    default:
        break;
    }  

}

// Export the data based on the name given by the user input

void exportData(){
    
    system("cls");
    printf("\033[38;5;208m");
    puts("   _____       __            __                     ____                             __       "); usleep(5000);
    puts("  / ___/____ _/ /   ______ _/ /_____  ________     / __ \\_________  ____  ___  _____/ /___  __"); usleep(5000);
    puts("  \\__ \\/ __ `/ / | / / __ `/ __/ __ \\/ ___/ _ \\   / /_/ / ___/ __ \\/ __ \\/ _ \\/ ___/ __/ / / /"); usleep(5000);
    puts(" ___/ / /_/ / /| |/ / /_/ / /_/ /_/ / /  /  __/  / ____/ /  / /_/ / /_/ /  __/ /  / /_/ /_/ / "); usleep(5000);
    puts("/____/\\__,_/_/ |___/\\__,_/\\__/\\____/_/   \\___/  /_/   /_/   \\____/ .___/\\___/_/   \\__/\\__, /  "); usleep(5000);
    puts("                                                                /_/                  /____/   "); usleep(100000);
    puts("===================================================================="); usleep(5000);
    puts("                             Export Data                            "); usleep(5000);
    puts("===================================================================="); usleep(100000);
    char filename[100];
    FILE *file;
    printf("Enter the file name to save: ");
    scanf("%[^\n]", filename); getchar();
    for (int i = 0; i < strlen(filename); i++)
    {
        if (filename[i] == ' ')
        {
            filename[i] = '_';
        }
    }
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fprintf(file, "Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");
    for(int i = 0; i < ctr; i++){
        fprintf(file, "%s,%s,%lld,%d,%d,%d,%s,%s\n",
        apartments[i].location,
        apartments[i].city,
        apartments[i].price,
        apartments[i].rooms,
        apartments[i].bathroom,
        apartments[i].carpark,
        apartments[i].type,
        apartments[i].furnish);
    }
    fclose(file);
    printf("File '%s' has been created successfully.\n", filename);
    printf(">> Enter to go back");
    char ch;
    ch = getch(); 
    switch (ch)
    {
    case '\r':
        salvatoreMenu1();
    case '\n':
        salvatoreMenu1();
    default:
        break;
    }  

}
int main(){
    int number, processID;
    fprintf("Enter the number for series \n");
    fscanf("%d", &number); //scan for number entered

    if(number < 0){
        fprintf("no negative numbers allowed");
    }

    else { //if number > 0
        processID = fork() // fork() will return the process ID of the process 

    if(processID < 0){
        fprintf(stderr, "child process cannot be created."\n);

        return 1;
    }

    /* child process */

    else if (processID == 0){
        do
    if (number%2 != 0){ //odd number 
        number = (number * 3) + 1;
    }

    else { //even number
        number = number/2;
    }
    fprintf ("%2d", number);
    
    while(number!= 1); //when pid of parent is generated, parent will wait till the child process completes its execution

    }

    /*parent process*/

    else {
        fprintf("\n child process complete");

        wait (NULL);

    }
    }

    return 0;
}

/* Calling fork() to create child process, processID is returned. In child process, numbers are generated.
The parent process will wait using wait(NULL) till child process is finished. After that the parent process gets completed */

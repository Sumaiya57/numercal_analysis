% Task 1: Define two matrices A & B. The values will be taken as input from command-line

disp('Enter values for matrix A (e.g., [4 6; 3 4]):');
A = input('A = ');

disp('Enter values for matrix B (e.g., [7 6; 3 8]):');
B = input('B = ');

% Task 2: Print the max value from matrix A

max_value_A = max(max(A));
disp(['The maximum value in matrix A is: ' num2str(max_value_A)]);

% Task 3: Multiply matrix A & B. Handle the case where multiplication is not possible.

if size(A, 2) == size(B, 1)
    C = A * B;
    disp('Matrix multiplication is possible.');
    disp('Result matrix C =');
    disp(C);
else
    disp('Matrix multiplication is not possible because the number of columns in A');
    disp('does not match the number of rows in B.');
end


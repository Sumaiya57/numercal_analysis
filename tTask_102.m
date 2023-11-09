function roots = bisection_method(func, a, b, tol=1e-6, max_iterations=100)
    roots = [];
    for i = 1:max_iterations
        c = (a + b) / 2;
        roots = [roots; c];
        if func(c) == 0 || (b - a) / 2 < tol
            break;
        elseif func(c) * func(a) < 0
            b = c;
        else
            a = c;
        end
    end
end

% Define the function i want to find the root of
function y = func(x)
    y = x^3 - 6*x^2 + 11*x - 6;
end

% Define the interval [a, b] where i want to find the root
a = 0.5;
b = 4;

% Use bisection method to find the root
roots = bisection_method(@func, a, b);

% Display the roots
disp("Roots found by bisection method:");
disp(roots);

% Create a range of x values for plotting
x_values = linspace(0, 5, 100);
y_values = arrayfun(@func, x_values);

% Plot the function and roots
plot(x_values, y_values, 'LineWidth', 2);
hold on;
scatter(roots, zeros(size(roots)), 'r', 'filled');
xlabel('x');
ylabel('f(x)');
title('Root Finding with Bisection Method');
legend('f(x)', 'Roots');
grid on;
hold off;


int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);
    printf("Quarters: %d\n", quarters);

    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);
    printf("Dimes: %d\n", dimes);

    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);
    printf("Nickels: %d\n", nickels);

    int pennies = calculate_pennies(cents);
    cents = cents - (nickels * 1);
    printf("Pennies: %d\n", pennies);

    int sum = quarters + dimes + nickels + pennies;
    printf("Sum: %d\n", sum);
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}

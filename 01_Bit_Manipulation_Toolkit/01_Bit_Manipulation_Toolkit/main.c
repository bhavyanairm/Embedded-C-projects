#include <stdio.h>
#include <stdint.h>

/* Function to set a bit */
void set_bit(uint32_t *reg, uint8_t pos)
{
    *reg |= (1U << pos);
}

/* Function to clear a bit */
void clear_bit(uint32_t *reg, uint8_t pos)
{
    *reg &= ~(1U << pos);
}

/* Function to toggle a bit */
void toggle_bit(uint32_t *reg, uint8_t pos)
{
    *reg ^= (1U << pos);
}

/* Function to check a bit */
uint8_t check_bit(uint32_t reg, uint8_t pos)
{
    return (reg >> pos) & 1U;
}

int main()
{
    uint32_t simulated_register = 0x00000000;

    printf("Initial Register Value: 0x%X\n", simulated_register);

    set_bit(&simulated_register, 3);
    printf("After Setting Bit 3: 0x%X\n", simulated_register);

    clear_bit(&simulated_register, 3);
    printf("After Clearing Bit 3: 0x%X\n", simulated_register);

    toggle_bit(&simulated_register, 2);
    printf("After Toggling Bit 2: 0x%X\n", simulated_register);

    printf("Check Bit 2: %d\n", check_bit(simulated_register, 2));

    return 0;
}

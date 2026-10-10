// from server: 87% by atomic.potato
extern "C" void G1_func_0080B15D();

volatile unsigned char G1_flag_00CD3470;
volatile unsigned long G1_data_00CD3468;
volatile unsigned long G1_data_00CD346C;

void func_00710670()
{
    if (G1_flag_00CD3470 != 0)
        return;

    G1_flag_00CD3470 |= 1;
    G1_data_00CD3468 = 0;
    G1_data_00CD346C = 0;
    G1_func_0080B15D();
}

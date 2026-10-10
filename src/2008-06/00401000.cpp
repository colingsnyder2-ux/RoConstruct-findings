// from server: 91% by atomic.potato
extern int G1_func_006a0686();
extern void G1_func_006a0680(int);

void __stdcall func_00401000(int value)
{
    if (value == 0x8007000e)
        value = G1_func_006a0686();
    G1_func_006a0680(value);
}

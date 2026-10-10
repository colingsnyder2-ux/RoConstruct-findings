// from server: 65% by atomic.potato
extern "C" void G1_func_006fc5a0();

struct GuiButton
{
    void f(int, int, int);
};

void GuiButton::f(int, int a, int b)
{
    if (b != 4)
    {
        G1_func_006fc5a0();
        return;
    }
    *(int*)a = 0x00bdf408;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}

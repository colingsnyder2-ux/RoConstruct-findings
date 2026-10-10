// from server: 91% by atomic.potato
extern "C" void InitGlobal(const char *);

int GlobalFlag;
int GlobalValue1;
int GlobalValue2;

void Function006986f0()
{
    if (*(volatile unsigned char *)&GlobalFlag == 0)
    {
        GlobalFlag |= 1;
        GlobalValue1 = 0;
        GlobalValue2 = 0;
        InitGlobal("8csm");
    }
}

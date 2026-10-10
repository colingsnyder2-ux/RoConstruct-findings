// from server: 55% by atomic.potato
extern "C" void InitializeSpinButton();
extern "C" int __cdecl setmbcp(int);

struct CSpinButtonCtrl
{
    int Configure(int, int);
};

int CSpinButtonCtrl::Configure(int value, int data)
{
    InitializeSpinButton();
    *((unsigned char *)this + 0x14) = (unsigned char)value;
    *((int *)((unsigned char *)this + 0x44)) = data;
    if (value == 0)
        setmbcp(-3);
    return 1;
}

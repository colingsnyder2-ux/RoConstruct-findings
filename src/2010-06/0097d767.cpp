// from server: 55% by atomic.potato
extern "C" void __cdecl sub_007a7c5e();
extern "C" int __cdecl _setmbcp(int);

struct CSpinButtonCtrl
{
    int f(int, int);
};

int CSpinButtonCtrl::f(int a, int b)
{
    sub_007a7c5e();

    unsigned char* p = (unsigned char*)this;
    p[0x14] = (unsigned char)a;
    *(int*)(p + 0x44) = b;

    if (a == 0)
        _setmbcp(-3);

    return 1;
}

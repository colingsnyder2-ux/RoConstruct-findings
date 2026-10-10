// from server: 48% by colin
extern "C" {
    int __stdcall sub_6713D0(void*);
    void __stdcall sub_438E10(void*, void*);
    unsigned long __stdcall GetCurrentThreadId();
    void __stdcall sub_77DDBC(void*);
}

struct CPropertyGridItemBrickColor {
    char pad[0x20];
    int method(int, int, int, int, int);
};

int CPropertyGridItemBrickColor::method(int a1, int a2, int a3, int a4, int a5)
{
    int local;
    if (sub_6713D0(&a5) != 0)
        return (int)0x80070057;
    sub_438E10((char*)this - 0x20, &local);
    local = 0;
    int id = (int)GetCurrentThreadId();
    *(int*)a4 = id;
    sub_77DDBC(&local);
    return 0;
}

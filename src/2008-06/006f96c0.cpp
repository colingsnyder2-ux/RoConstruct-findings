// from server: 34% by colin
struct CXTPPrintPageHeaderFooter
{
    char pad0[0x20];
    int field20;
    char pad24[0x0c];
    int field30;
    int field34;
    int field38;
    int field3c;
    CXTPPrintPageHeaderFooter* construct();
    int getSomething();
};

extern "C" void __stdcall SetRect(int, int, int, int, int);
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl func_006f7360();
extern "C" void __cdecl func_006f78c0();
extern "C" void __cdecl func_007bbfaa();

CXTPPrintPageHeaderFooter* CXTPPrintPageHeaderFooter::construct()
{
    func_007bbfaa();
    this->field30 = 0;
    this->field34 = 0;
    *(void**)this = (void*)0x85a5a4;
    int v = this->getSomething();
    int val;
    if (v == 0)
        val = 0x3e8;
    else
        val = 0x3e8;
    SetRect(this->field20, val, val, val, val);
    void* p1 = operator_new(0x78);
    if (p1 != 0)
        func_006f7360();
    else
        p1 = 0;
    this->field38 = (int)p1;
    void* p2 = operator_new(0x78);
    if (p2 != 0)
        func_006f7360();
    else
        p2 = 0;
    this->field3c = (int)p2;
    this->field30 = 0;
    this->field34 = 0;
    return this;
}

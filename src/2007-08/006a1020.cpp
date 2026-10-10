// from server: 43% by colin
struct CXTPDockBar
{
    char pad[0x54];
    unsigned int m_dwStyle;
    void* func_006a1020(unsigned int, unsigned int, unsigned int);
};

extern "C" int __stdcall func_006a0ff0();
extern "C" void* __stdcall func_0067ff60(void*, void*, int);
extern "C" void* __stdcall func_0062fcda(void*, const char*);
extern "C" void* __stdcall func_0077ddb8(void*, const char*);
extern "C" void* __stdcall func_0077dd98(void*, unsigned int);
extern "C" void __stdcall func_0077ddbc(void*);

void* CXTPDockBar::func_006a1020(unsigned int a1, unsigned int a2, unsigned int a3)
{
    m_dwStyle = a1 & 0x40ffff;

    int result = func_006a0ff0();
    const char* name;
    if (result == 0)
        name = (const char*)0x7d32b4;
    else if (result == 2)
        name = (const char*)0x7d32a8;
    else if (result == 1)
        name = (const char*)0x7d3298;
    else
        name = (const char*)0x7d328c;

    char buf[0x10];
    func_0077ddb8(buf, name);

    void* p = func_0067ff60(buf, (void*)a2, 0);
    void* q = func_0077dd98((void*)a3, (unsigned int)p);
    void* r = func_0062fcda(this, (const char*)0x7d3280);
    func_0077ddbc(buf);
    return r;
}

// from server: 74% by colin
struct CXTPDrawHelpers
{
    void f();
};

extern "C" void* __stdcall sub_62FF02();
extern "C" void* __stdcall sub_7388F2(void*);
extern "C" void* __stdcall LoadCursorA(void*, const char*);
extern void* g_77ec2c;
extern void* g_77ec20;

void CXTPDrawHelpers::f()
{
    char buf[40];
    int i;
    for (i = 0; i < 40; i += 4)
        *(int*)(buf + i) = 0;

    *(void**)buf = *(void**)((char*)&buf + 0x34 - 0x28 + 0x28);
    void* p = *(void**)((char*)&buf + 0x2c - 0x28 + 0x28);
    *(void**)(buf + 4) = g_77ec2c;
    if (p == 0)
        p = (void*)((char*)sub_62FF02() + 8);
    *(void**)(buf + 0x10) = p;
    sub_62FF02();
    void* h = LoadCursorA(0, (const char*)0x7f00);
    *(void**)(buf + 0x18) = h;
    *(void**)(buf + 0x28) = *(void**)((char*)&buf + 0x30 - 0x28 + 0x28);
    *(void**)(buf + 0x18) = *(void**)((char*)&buf + 0x38 - 0x28 + 0x28);
    sub_7388F2(buf);
}

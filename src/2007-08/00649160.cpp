// from server: 93% by colin
struct CXTPCommandBar {
    void* field0;
    void* field4;
    void m(int);
};

extern "C" void* __stdcall func_0062ff02(void*, void*, int);
extern "C" void __fastcall func_00648ec0(void*);

void CXTPCommandBar::m(int a)
{
    void* p = func_0062ff02(field4, (void*)a, 0);
    void* q = *(void**)((char*)p + 0x94);
    func_00648ec0(*(void**)q);
}

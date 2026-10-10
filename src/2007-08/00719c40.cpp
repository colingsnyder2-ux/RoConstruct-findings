// from server: 82% by colin
struct CXTPRibbonSystemPopupBarPage
{
    char pad[0x180];
    void* field_180;
    int func_00719c40(int, int);
};

extern "C" int __stdcall sub_006301F0(void*);
extern "C" int __stdcall sub_006775C0(void*, int, int);
extern "C" void* __stdcall sub_00719A30(void*);

int CXTPRibbonSystemPopupBarPage::func_00719c40(int a1, int a2)
{
    void* p = *(void**)((char*)field_180 + 0xfc);
    int r = sub_006301F0(sub_00719A30(p));
    if (r == 0)
    {
        return sub_006775C0(this, a1, a2);
    }
    void* q = *(void**)((char*)field_180 + 0xfc);
    void** vt = *(void***)q;
    typedef void (__thiscall *Fn)(void*, void*);
    Fn fn = (Fn)vt[0x1a8 / 4];
    char buf[4];
    fn(q, buf);
    int* out = (int*)a1;
    int v = *(int*)(buf + 4);
    out[2] += 1;
    out[1] = v + 1;
    return 0;
}

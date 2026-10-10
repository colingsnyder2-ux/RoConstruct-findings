// from server: 60% by colin
extern "C" {
    int __stdcall InvalidateRect(void*, const void*, int);
    void* __cdecl memset(void*, int, unsigned int);
    void* __cdecl memcpy(void*, const void*, unsigned int);
}

struct CRobloxTreeCtrl {
    char pad[0x18];
    char field18[0x1c];
    char pad34[0x4];
    void* field34;
    void func_00668270(int, int);
};

void func_00667770(int, void*);
void* func_00668170(int);

void CRobloxTreeCtrl::func_00668270(int a, int b)
{
    char buf[0x3c];
    int local;
    void* p;

    local = -1;
    memset(buf, 0, 0x3c);

    func_00667770(a, buf);
    p = func_00668170(a);
    memcpy(p, buf, 0x44);

    InvalidateRect(*(void**)((char*)field34 + 0x20), 0, 1);
}

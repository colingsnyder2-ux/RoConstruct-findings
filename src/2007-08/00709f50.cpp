// from server: 38% by colin
struct CXTColorHex_PAUHEXCOLOR_CELL_CList
{
    void f(int, int);
    int sub_709B10(int, int);
    void sub_709E40(void*);
    char pad[0x20];
    void* field_20;
    char pad2[0x34];
    void* field_54;
    char pad3[0x20];
    int field_78;
};

extern "C" void* __stdcall GetParent(void*);
extern "C" int __stdcall GetClientRect(void*, void*);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);

extern "C" void* __stdcall sub_6301C0(void*);
extern "C" void __stdcall sub_630940(void*);
extern "C" void __stdcall sub_630946(void*);
extern "C" void* __stdcall sub_668F70();
extern "C" void* __stdcall sub_668770(void*, int);
extern "C" void __stdcall sub_6692B0(void*, void*);
extern "C" void __stdcall sub_6D7100(void*, void*, void*);
extern "C" void __stdcall sub_6D7280(void*);

void CXTColorHex_PAUHEXCOLOR_CELL_CList::f(int a1, int a2)
{
    int idx = sub_709B10(a1, a2);
    if (idx == -1)
        return;
    if (field_78 == idx)
        return;
    field_78 = idx;
    void* parent = GetParent(field_20);
    void* v = sub_6301C0(parent);
    SendMessageA(*(void**)((char*)v + 0x20), 0x2742, idx, 0);
    char rect[16];
    GetClientRect(field_20, rect);
    sub_630946(this);
    void* obj = sub_668F70();
    void* obj2 = sub_668770(obj, 0xf);
    char tmp[32];
    sub_6692B0(tmp, obj2);
    char tmp2[16];
    sub_6D7100(tmp2, tmp, rect);
    int w = *(int*)(rect + 8) - *(int*)(rect + 0);
    int h = *(int*)(rect + 12) - *(int*)(rect + 4);
    void* p = (char*)this + 0x54;
    if (p != 0)
        p = *(void**)((char*)p + 4);
    BitBlt(*(void**)(tmp2 + 0), 0, 0, w, h, p, 0, 0, 0xCC0020);
    sub_709E40(tmp2);
    sub_6D7280(tmp2);
    sub_630940(tmp2);
}

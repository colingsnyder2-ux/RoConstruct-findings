// from server: 69% by colin
// roc 2007-08 006a77d0  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a77d0
//
// 006a77d0  56                   push esi
// 006a77d1  8bf1                 mov esi, ecx
// 006a77d3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006a77d9  e862c2f9ff           call 0x643a40
// 006a77de  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 006a77e4  8b10                 mov edx, dword ptr [eax]
// 006a77e6  8b9264010000         mov edx, dword ptr [edx + 0x164]
// 006a77ec  51                   push ecx
// 006a77ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a77f1  56                   push esi
// 006a77f2  51                   push ecx
// 006a77f3  8bc8                 mov ecx, eax
// 006a77f5  ffd2                 call edx
// 006a77f7  5e                   pop esi
// 006a77f8  c20400               ret 4

struct CXTPRibbonScrollableBar {
    struct CControlGroupsScroll {
        int OnScroll(int);
    };
};

struct CXTPRibbonScrollableBarInner {
    char pad[0xfc];
    void* field_fc;
    char pad2[0x168 - 0xfc - 4];
    int field_168;
};

struct VTable {
    char pad[0x164];
    int (__stdcall *func_164)(void*, int, void*);
};

extern "C" void* __stdcall sub_643a40(void*);

int CXTPRibbonScrollableBar::CControlGroupsScroll::OnScroll(int arg) {
    CXTPRibbonScrollableBarInner* self = (CXTPRibbonScrollableBarInner*)this;
    void* result = sub_643a40(self->field_fc);
    VTable* vt = *(VTable**)result;
    return vt->func_164(result, self->field_168, (void*)self);
}

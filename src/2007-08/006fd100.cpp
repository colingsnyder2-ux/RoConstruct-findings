// from server: 100% by colin
// roc 2007-08 006fd100  unit: CXTPTabManagerItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd100
//
// 006fd100  83796000             cmp dword ptr [ecx + 0x60], 0
// 006fd104  740a                 je 0x6fd110
// 006fd106  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006fd109  8b01                 mov eax, dword ptr [ecx]
// 006fd10b  8b5008               mov edx, dword ptr [eax + 8]
// 006fd10e  ffe2                 jmp edx
// 006fd110  c3                   ret 

struct CXTPTabManagerItem;

struct CXTPTabManagerItemVtbl
{
    void* slot0;
    void* slot1;
    void* slot2;
};

struct CXTPTabManagerItem
{
    char pad[0x60];
    CXTPTabManagerItem* p60;
    void invoke();
};

void CXTPTabManagerItem::invoke()
{
    if (p60 != 0)
    {
        CXTPTabManagerItemVtbl* vt = *(CXTPTabManagerItemVtbl**)p60;
        void (__thiscall *fn)(CXTPTabManagerItem*) = (void (__thiscall *)(CXTPTabManagerItem*))vt->slot2;
        fn(p60);
    }
}

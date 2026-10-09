// roc 2007-03 006e5540  unit: seg_006e0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e5540
//
// 006e5540  83796000             cmp dword ptr [ecx + 0x60], 0
// 006e5544  740a                 je 0x6e5550
// 006e5546  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006e5549  8b01                 mov eax, dword ptr [ecx]
// 006e554b  8b5008               mov edx, dword ptr [eax + 8]
// 006e554e  ffe2                 jmp edx
// 006e5550  c3                   ret 
// copied from an identical function in another client (function ?invoke@CXTPTabManagerItem@ns_ROCX00008b@@QAEXXZ)

namespace ns_ROCX00008b {
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
}

// from server: 100% by king_originala
// roc 2008-06 00467000  unit: CSettingsPropGrid  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467000
//
// 00467000  56                   push esi
// 00467001  57                   push edi
// 00467002  8bf1                 mov esi, ecx
// 00467004  e8773dfaff           call 0x40ad80
// 00467009  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046700d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00467010  50                   push eax
// 00467011  e80a8e1000           call 0x56fe20
// 00467016  84c0                 test al, al
// 00467018  740d                 je 0x467027
// 0046701a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046701e  57                   push edi
// 0046701f  50                   push eax
// 00467020  8bce                 mov ecx, esi
// 00467022  e8099efdff           call 0x440e30
// 00467027  5f                   pop edi
// 00467028  5e                   pop esi
// 00467029  c20800               ret 8

struct Descriptor {
    bool __thiscall differs(const Descriptor&) const;
};

const Descriptor& __cdecl getDescriptor();

struct Item {
    unsigned char padding[12];
    Descriptor* descriptor;
};

struct CSettingsPropGrid {
    void __thiscall apply(int, Item*);
    void __thiscall f(int, Item*);
};

void CSettingsPropGrid::f(int value, Item* item)
{
    if (item->descriptor->differs(getDescriptor()))
        apply(value, item);
}

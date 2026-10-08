// from server: 59% by colin
// roc 2007-08 0064cb60  unit: CXTPImageManagerIconSet  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064cb60
//
// 0064cb60  56                   push esi
// 0064cb61  57                   push edi
// 0064cb62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064cb66  8d44240c             lea eax, [esp + 0xc]
// 0064cb6a  8d7124               lea esi, [ecx + 0x24]
// 0064cb6d  50                   push eax
// 0064cb6e  57                   push edi
// 0064cb6f  8bce                 mov ecx, esi
// 0064cb71  e8ea7efeff           call 0x634a60
// 0064cb76  85c0                 test eax, eax
// 0064cb78  7411                 je 0x64cb8b
// 0064cb7a  57                   push edi
// 0064cb7b  8bce                 mov ecx, esi
// 0064cb7d  e85e610500           call 0x6a2ce0
// 0064cb82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064cb86  e85936feff           call 0x6301e4
// 0064cb8b  5f                   pop edi
// 0064cb8c  5e                   pop esi
// 0064cb8d  c20400               ret 4

struct CXTPImageManagerIconSet {
    char pad[0x24];
    int field_24;
    void sub_64CB60(int arg);
};

extern "C" int __stdcall sub_634A60(int *a, int b);
extern "C" int __stdcall sub_6A2CE0(int a);
extern "C" int __stdcall sub_6301E4(int a);

void CXTPImageManagerIconSet::sub_64CB60(int arg) {
    int local;
    if (sub_634A60(&local, arg)) {
        sub_6A2CE0(arg);
        sub_6301E4(local);
    }
}

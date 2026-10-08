// from server: 70% by colin
// roc 2007-08 005e3bd0  unit: RBX::Unlocked  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3bd0
//
// 005e3bd0  51                   push ecx
// 005e3bd1  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005e3bd4  85c0                 test eax, eax
// 005e3bd6  c7042400000000       mov dword ptr [esp], 0
// 005e3bdd  7407                 je 0x5e3be6
// 005e3bdf  0528020000           add eax, 0x228
// 005e3be4  eb02                 jmp 0x5e3be8
// 005e3be6  33c0                 xor eax, eax
// 005e3be8  56                   push esi
// 005e3be9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e3bed  50                   push eax
// 005e3bee  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e3bf2  50                   push eax
// 005e3bf3  56                   push esi
// 005e3bf4  e857ffffff           call 0x5e3b50
// 005e3bf9  83c40c               add esp, 0xc
// 005e3bfc  8bc6                 mov eax, esi
// 005e3bfe  5e                   pop esi
// 005e3bff  59                   pop ecx
// 005e3c00  c20800               ret 8

struct HitTestFilter {
    int pad[6];
    void* field_18;
};

struct Unlocked : HitTestFilter {
    int filterResult(const void* testMe, int a) const;
};

extern "C" int __cdecl func_005e3b50(void* filter, int a, const void* testMe);

int Unlocked::filterResult(const void* testMe, int a) const
{
    void* p = field_18;
    if (p != 0)
        p = (char*)p + 0x228;
    else
        p = 0;
    func_005e3b50(p, a, testMe);
    return (int)testMe;
}

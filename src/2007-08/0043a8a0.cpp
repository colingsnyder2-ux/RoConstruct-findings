// from server: 100% by colin
// roc 2007-08 0043a8a0  unit: IIHAAH::?$CMap  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043a8a0
//
// 0043a8a0  56                   push esi
// 0043a8a1  57                   push edi
// 0043a8a2  8bf9                 mov edi, ecx
// 0043a8a4  85ff                 test edi, edi
// 0043a8a6  7408                 je 0x43a8b0
// 0043a8a8  8db714010000         lea esi, [edi + 0x114]
// 0043a8ae  eb02                 jmp 0x43a8b2
// 0043a8b0  33f6                 xor esi, esi
// 0043a8b2  8b4608               mov eax, dword ptr [esi + 8]
// 0043a8b5  85c0                 test eax, eax
// 0043a8b7  7409                 je 0x43a8c2
// 0043a8b9  50                   push eax
// 0043a8ba  e8a3531f00           call 0x62fc62
// 0043a8bf  83c404               add esp, 4
// 0043a8c2  8bcf                 mov ecx, edi
// 0043a8c4  5f                   pop edi
// 0043a8c5  c7460800000000       mov dword ptr [esi + 8], 0
// 0043a8cc  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043a8d3  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0043a8da  5e                   pop esi
// 0043a8db  e970342600           jmp 0x69dd50

struct CMap {
    char pad[0x114];
    int field_114;
    int field_118;
    int field_11c;
    void sub_69dd50();
    void sub_43a8a0();
};

extern "C" void __cdecl sub_62fc62(void*);

void CMap::sub_43a8a0()
{
    CMap* p = this;
    int* esi;
    if (p != 0)
        esi = (int*)((char*)p + 0x114);
    else
        esi = 0;
    if (esi[2] != 0)
        sub_62fc62((void*)esi[2]);
    esi[2] = 0;
    esi[3] = 0;
    esi[4] = 0;
    sub_69dd50();
}

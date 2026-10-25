// from server: 100% by king_originala
// roc 2008-06 00615d00  unit: RBX::Unlocked  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615d00
//
// 00615d00  51                   push ecx
// 00615d01  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00615d04  c7042400000000       mov dword ptr [esp], 0
// 00615d0b  85c0                 test eax, eax
// 00615d0d  7407                 je 0x615d16
// 00615d0f  0588020000           add eax, 0x288
// 00615d14  eb02                 jmp 0x615d18
// 00615d16  33c0                 xor eax, eax
// 00615d18  56                   push esi
// 00615d19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00615d1d  50                   push eax
// 00615d1e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00615d22  50                   push eax
// 00615d23  56                   push esi
// 00615d24  e807ffffff           call 0x615c30
// 00615d29  83c40c               add esp, 0xc
// 00615d2c  8bc6                 mov eax, esi
// 00615d2e  5e                   pop esi
// 00615d2f  59                   pop ecx
// 00615d30  c20800               ret 8

extern "C" void __cdecl sub_615c30(void*, void*, void*);

struct S
{
    char padding[0x18];
    char* object;
    void* f(void* result, void* input);
};

void* S::f(void* result, void* input)
{
    char* p = object;
    volatile int state = 0;
    void* adjusted = p ? p + 0x288 : 0;
    sub_615c30(result, input, adjusted);
    return result;
}

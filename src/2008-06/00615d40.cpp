// from server: 100% by colin
// roc 2008-06 00615d40  unit: RBX::Unlocked  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615d40
//
// 00615d40  51                   push ecx
// 00615d41  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00615d44  c7042400000000       mov dword ptr [esp], 0
// 00615d4b  85c0                 test eax, eax
// 00615d4d  7407                 je 0x615d56
// 00615d4f  0588020000           add eax, 0x288
// 00615d54  eb02                 jmp 0x615d58
// 00615d56  33c0                 xor eax, eax
// 00615d58  56                   push esi
// 00615d59  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00615d5d  50                   push eax
// 00615d5e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00615d62  50                   push eax
// 00615d63  56                   push esi
// 00615d64  e857ffffff           call 0x615cc0
// 00615d69  83c40c               add esp, 0xc
// 00615d6c  8bc6                 mov eax, esi
// 00615d6e  5e                   pop esi
// 00615d6f  59                   pop ecx
// 00615d70  c20800               ret 8

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

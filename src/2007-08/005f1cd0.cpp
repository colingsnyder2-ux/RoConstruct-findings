// from server: 32% by colin
// roc 2007-08 005f1cd0  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1cd0
//
// 005f1cd0  6aff                 push -1
// 005f1cd2  681bb67500           push 0x75b61b
// 005f1cd7  64a100000000         mov eax, dword ptr fs:[0]
// 005f1cdd  50                   push eax
// 005f1cde  64892500000000       mov dword ptr fs:[0], esp
// 005f1ce5  51                   push ecx
// 005f1ce6  56                   push esi
// 005f1ce7  6a10                 push 0x10
// 005f1ce9  8bf1                 mov esi, ecx
// 005f1ceb  e806e20300           call 0x62fef6
// 005f1cf0  83c404               add esp, 4
// 005f1cf3  89442404             mov dword ptr [esp + 4], eax
// 005f1cf7  85c0                 test eax, eax
// 005f1cf9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f1d01  740e                 je 0x5f1d11
// 005f1d03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f1d07  51                   push ecx
// 005f1d08  8bc8                 mov ecx, eax
// 005f1d0a  e8e1feffff           call 0x5f1bf0
// 005f1d0f  eb02                 jmp 0x5f1d13
// 005f1d11  33c0                 xor eax, eax
// 005f1d13  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1d17  8906                 mov dword ptr [esi], eax
// 005f1d19  8bc6                 mov eax, esi
// 005f1d1b  5e                   pop esi
// 005f1d1c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1d23  83c410               add esp, 0x10
// 005f1d26  c20400               ret 4

extern "C" void* __cdecl G1_func_0062fef6(unsigned int);

struct S_func_005f1bf0 {
    void construct(int);
};

struct S_func_005f1cd0 {
    void* m_p;
    void* construct(int);
};

void* S_func_005f1cd0::construct(int arg)
{
    void* p = G1_func_0062fef6(0x10);
    if (p)
        ((S_func_005f1bf0*)p)->construct(arg);
    else
        p = 0;
    m_p = p;
    return this;
}

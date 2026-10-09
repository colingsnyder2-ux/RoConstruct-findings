// from server: 37% by colin
// roc 2007-08 005f2310  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2310
//
// 005f2310  6aff                 push -1
// 005f2312  681bb67500           push 0x75b61b
// 005f2317  64a100000000         mov eax, dword ptr fs:[0]
// 005f231d  50                   push eax
// 005f231e  64892500000000       mov dword ptr fs:[0], esp
// 005f2325  51                   push ecx
// 005f2326  56                   push esi
// 005f2327  6a10                 push 0x10
// 005f2329  8bf1                 mov esi, ecx
// 005f232b  e8c6db0300           call 0x62fef6
// 005f2330  83c404               add esp, 4
// 005f2333  89442404             mov dword ptr [esp + 4], eax
// 005f2337  85c0                 test eax, eax
// 005f2339  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f2341  740e                 je 0x5f2351
// 005f2343  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f2347  51                   push ecx
// 005f2348  8bc8                 mov ecx, eax
// 005f234a  e861feffff           call 0x5f21b0
// 005f234f  eb02                 jmp 0x5f2353
// 005f2351  33c0                 xor eax, eax
// 005f2353  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2357  8906                 mov dword ptr [esi], eax
// 005f2359  8bc6                 mov eax, esi
// 005f235b  5e                   pop esi
// 005f235c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2363  83c410               add esp, 0x10
// 005f2366  c20400               ret 4

struct S_func_005f2310 {
    void* m_p;
    S_func_005f2310* f(void* arg);
};

extern "C" void* __cdecl func_0062fef6(unsigned int size);
extern "C" void func_005f21b0();

S_func_005f2310* S_func_005f2310::f(void* arg)
{
    void* mem = func_0062fef6(0x10);
    if (mem != 0) {
        func_005f21b0();
    } else {
        mem = 0;
    }
    m_p = mem;
    return this;
}

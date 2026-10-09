// from server: 42% by colin
// roc 2007-08 004cdcd0  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cdcd0
//
// 004cdcd0  6aff                 push -1
// 004cdcd2  681bb67500           push 0x75b61b
// 004cdcd7  64a100000000         mov eax, dword ptr fs:[0]
// 004cdcdd  50                   push eax
// 004cdcde  64892500000000       mov dword ptr fs:[0], esp
// 004cdce5  51                   push ecx
// 004cdce6  56                   push esi
// 004cdce7  6a10                 push 0x10
// 004cdce9  8bf1                 mov esi, ecx
// 004cdceb  e806221600           call 0x62fef6
// 004cdcf0  83c404               add esp, 4
// 004cdcf3  89442404             mov dword ptr [esp + 4], eax
// 004cdcf7  85c0                 test eax, eax
// 004cdcf9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cdd01  740e                 je 0x4cdd11
// 004cdd03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cdd07  51                   push ecx
// 004cdd08  8bc8                 mov ecx, eax
// 004cdd0a  e8f1fcffff           call 0x4cda00
// 004cdd0f  eb02                 jmp 0x4cdd13
// 004cdd11  33c0                 xor eax, eax
// 004cdd13  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cdd17  8906                 mov dword ptr [esi], eax
// 004cdd19  8bc6                 mov eax, esi
// 004cdd1b  5e                   pop esi
// 004cdd1c  64890d00000000       mov dword ptr fs:[0], ecx
// 004cdd23  83c410               add esp, 0x10
// 004cdd26  c20400               ret 4

extern "C" void* __cdecl func_0062fef6(unsigned int);
extern "C" void* __cdecl func_004cda00(void*);

struct S_func_004cdcd0 {
    void* f(void*);
};

void* S_func_004cdcd0::f(void* arg)
{
    void* mem = func_0062fef6(0x10);
    if (mem != 0) {
        mem = func_004cda00(arg);
    } else {
        mem = 0;
    }
    *(void**)this = mem;
    return this;
}

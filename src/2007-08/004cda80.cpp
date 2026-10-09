// from server: 30% by colin
// roc 2007-08 004cda80  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cda80
//
// 004cda80  6aff                 push -1
// 004cda82  681bb67500           push 0x75b61b
// 004cda87  64a100000000         mov eax, dword ptr fs:[0]
// 004cda8d  50                   push eax
// 004cda8e  64892500000000       mov dword ptr fs:[0], esp
// 004cda95  51                   push ecx
// 004cda96  56                   push esi
// 004cda97  6a10                 push 0x10
// 004cda99  8bf1                 mov esi, ecx
// 004cda9b  e856241600           call 0x62fef6
// 004cdaa0  83c404               add esp, 4
// 004cdaa3  89442404             mov dword ptr [esp + 4], eax
// 004cdaa7  85c0                 test eax, eax
// 004cdaa9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cdab1  741b                 je 0x4cdace
// 004cdab3  83c604               add esi, 4
// 004cdab6  56                   push esi
// 004cdab7  8bc8                 mov ecx, eax
// 004cdab9  e842ffffff           call 0x4cda00
// 004cdabe  5e                   pop esi
// 004cdabf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cdac3  64890d00000000       mov dword ptr fs:[0], ecx
// 004cdaca  83c410               add esp, 0x10
// 004cdacd  c3                   ret 
// 004cdace  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cdad2  33c0                 xor eax, eax
// 004cdad4  5e                   pop esi
// 004cdad5  64890d00000000       mov dword ptr fs:[0], ecx
// 004cdadc  83c410               add esp, 0x10
// 004cdadf  c3                   ret 

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);

struct Inner {
    void construct(int* p);
};

struct Outer {
    Inner inner;
    void* method();
};

void* Outer::method()
{
    void* mem = operator_new(0x10);
    if (mem != 0) {
        Inner* p = (Inner*)mem;
        p->construct((int*)((char*)this + 4));
        return mem;
    }
    return 0;
}

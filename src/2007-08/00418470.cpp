// from server: 27% by colin
// roc 2007-08 00418470  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00418470
//
// 00418470  6aff                 push -1
// 00418472  68b8b17300           push 0x73b1b8
// 00418477  64a100000000         mov eax, dword ptr fs:[0]
// 0041847d  50                   push eax
// 0041847e  51                   push ecx
// 0041847f  56                   push esi
// 00418480  a188518b00           mov eax, dword ptr [0x8b5188]
// 00418485  33c4                 xor eax, esp
// 00418487  50                   push eax
// 00418488  8d44240c             lea eax, [esp + 0xc]
// 0041848c  64a300000000         mov dword ptr fs:[0], eax
// 00418492  8bf1                 mov esi, ecx
// 00418494  89742408             mov dword ptr [esp + 8], esi
// 00418498  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0041849b  85c9                 test ecx, ecx
// 0041849d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004184a5  7408                 je 0x4184af
// 004184a7  8b01                 mov eax, dword ptr [ecx]
// 004184a9  8b10                 mov edx, dword ptr [eax]
// 004184ab  6a01                 push 1
// 004184ad  ffd2                 call edx
// 004184af  8bce                 mov ecx, esi
// 004184b1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004184b9  e852f1ffff           call 0x417610
// 004184be  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004184c2  64890d00000000       mov dword ptr fs:[0], ecx
// 004184c9  59                   pop ecx
// 004184ca  5e                   pop esi
// 004184cb  83c410               add esp, 0x10
// 004184ce  c3                   ret 

struct S_func_00418470 {
    char pad0[0x34];
    void* m_ptr;
    void f();
};

void S_func_00418470::f()
{
    if (m_ptr) {
        void** vtable = *(void***)m_ptr;
        void (*fn)(void*, int) = (void (*)(void*, int))vtable[0];
        fn(m_ptr, 1);
    }
    extern void sub_00417610(S_func_00418470*);
    sub_00417610(this);
}

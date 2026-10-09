// from server: 44% by colin
// roc 2007-08 005be7c0  unit: boost::detail::H::?$sp_counted_impl_p  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be7c0
//
// 005be7c0  6aff                 push -1
// 005be7c2  68416e7500           push 0x756e41
// 005be7c7  64a100000000         mov eax, dword ptr fs:[0]
// 005be7cd  50                   push eax
// 005be7ce  64892500000000       mov dword ptr fs:[0], esp
// 005be7d5  51                   push ecx
// 005be7d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005be7da  85c0                 test eax, eax
// 005be7dc  7405                 je 0x5be7e3
// 005be7de  8d48f4               lea ecx, [eax - 0xc]
// 005be7e1  eb02                 jmp 0x5be7e5
// 005be7e3  33c9                 xor ecx, ecx
// 005be7e5  894c2414             mov dword ptr [esp + 0x14], ecx
// 005be7e9  890c24               mov dword ptr [esp], ecx
// 005be7ec  85c9                 test ecx, ecx
// 005be7ee  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005be7f6  740a                 je 0x5be802
// 005be7f8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005be7fc  50                   push eax
// 005be7fd  e81effffff           call 0x5be720
// 005be802  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005be806  64890d00000000       mov dword ptr fs:[0], ecx
// 005be80d  83c410               add esp, 0x10
// 005be810  c3                   ret 

struct S_func_005be7c0 {
    void f();
};

extern "C" void __cdecl func_005be720(void*);

void S_func_005be7c0::f()
{
    void* p = *(void**)((char*)this + 0x14);
    void* q;
    if (p != 0) {
        q = (char*)p - 0xc;
    } else {
        q = 0;
    }
    *(void**)((char*)this + 0x14) = q;
    *(void**)((char*)this) = q;
    *(int*)((char*)this + 0xc) = 0;
    if (q != 0) {
        func_005be720(*(void**)((char*)this + 0x18));
    }
}

// from server: 33% by colin
// roc 2007-08 00536c70  unit: boost::any::placeholder  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536c70
//
// 00536c70  64a100000000         mov eax, dword ptr fs:[0]
// 00536c76  6aff                 push -1
// 00536c78  68c80a7500           push 0x750ac8
// 00536c7d  50                   push eax
// 00536c7e  64892500000000       mov dword ptr fs:[0], esp
// 00536c85  83ec28               sub esp, 0x28
// 00536c88  833900               cmp dword ptr [ecx], 0
// 00536c8b  7516                 jne 0x536ca3
// 00536c8d  8d0c24               lea ecx, [esp]
// 00536c90  e86bcfedff           call 0x413c00
// 00536c95  50                   push eax
// 00536c96  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00536c9e  e8cdd4edff           call 0x414170
// 00536ca3  8b442438             mov eax, dword ptr [esp + 0x38]
// 00536ca7  8b5104               mov edx, dword ptr [ecx + 4]
// 00536caa  50                   push eax
// 00536cab  8b4108               mov eax, dword ptr [ecx + 8]
// 00536cae  52                   push edx
// 00536caf  ffd0                 call eax
// 00536cb1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00536cb5  83c408               add esp, 8
// 00536cb8  64890d00000000       mov dword ptr fs:[0], ecx
// 00536cbf  83c434               add esp, 0x34
// 00536cc2  c20400               ret 4

struct S {
    void* field0;
    void* field4;
    void (*field8)(void*, void*);
    void method(void* arg);
};

extern "C" void* __cdecl func_00413c00(void*);
extern "C" void __cdecl func_00414170(void*);

void S::method(void* arg)
{
    if (field0 == 0) {
        void* p = func_00413c00(&p);
        func_00414170(p);
    }
    field8(field4, arg);
}

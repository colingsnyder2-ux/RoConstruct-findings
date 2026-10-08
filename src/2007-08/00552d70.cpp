// from server: 92% by colin
// roc 2007-08 00552d70  unit: boost::iostreams::Uinput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552d70
//
// 00552d70  56                   push esi
// 00552d71  8bf1                 mov esi, ecx
// 00552d73  e8d898ffff           call 0x54c650
// 00552d78  8b0ddce47700         mov ecx, dword ptr [0x77e4dc]
// 00552d7e  8d4618               lea eax, [esi + 0x18]
// 00552d81  8908                 mov dword ptr [eax], ecx
// 00552d83  8b15e0e47700         mov edx, dword ptr [0x77e4e0]
// 00552d89  50                   push eax
// 00552d8a  8910                 mov dword ptr [eax], edx
// 00552d8c  ff15e4e47700         call dword ptr [0x77e4e4]
// 00552d92  83c404               add esp, 4
// 00552d95  f644240801           test byte ptr [esp + 8], 1
// 00552d9a  7409                 je 0x552da5
// 00552d9c  56                   push esi
// 00552d9d  e8c0ce0d00           call 0x62fc62
// 00552da2  83c404               add esp, 4
// 00552da5  8bc6                 mov eax, esi
// 00552da7  5e                   pop esi
// 00552da8  c20400               ret 4

struct S {
    char pad[0x18];
    void* field_18;
    S* dtor(char flag);
};

extern "C" void __cdecl sub_54c650();
extern "C" void __cdecl sub_62fc62(void*);

extern void* g_77e4dc;
extern void* g_77e4e0;
extern void (__stdcall *g_77e4e4)(void*);

S* S::dtor(char flag) {
    sub_54c650();
    void* p = (void*)((char*)this + 0x18);
    *(void**)p = g_77e4dc;
    *(void**)p = g_77e4e0;
    g_77e4e4(p);
    if (flag & 1) {
        sub_62fc62(this);
    }
    return this;
}

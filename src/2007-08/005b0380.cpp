// from server: 53% by colin
// roc 2007-08 005b0380  unit: RBX::Joint  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0380
//
// 005b0380  6aff                 push -1
// 005b0382  68188b7500           push 0x758b18
// 005b0387  64a100000000         mov eax, dword ptr fs:[0]
// 005b038d  50                   push eax
// 005b038e  64892500000000       mov dword ptr fs:[0], esp
// 005b0395  51                   push ecx
// 005b0396  56                   push esi
// 005b0397  8bf1                 mov esi, ecx
// 005b0399  89742404             mov dword ptr [esp + 4], esi
// 005b039d  c70604617b00         mov dword ptr [esi], 0x7b6104
// 005b03a3  8d4e18               lea ecx, [esi + 0x18]
// 005b03a6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b03ae  e82dfbf8ff           call 0x53fee0
// 005b03b3  f644241801           test byte ptr [esp + 0x18], 1
// 005b03b8  c706a85e7b00         mov dword ptr [esi], 0x7b5ea8
// 005b03be  7409                 je 0x5b03c9
// 005b03c0  56                   push esi
// 005b03c1  e89cf80700           call 0x62fc62
// 005b03c6  83c404               add esp, 4
// 005b03c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b03cd  8bc6                 mov eax, esi
// 005b03cf  5e                   pop esi
// 005b03d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005b03d7  83c410               add esp, 0x10
// 005b03da  c20400               ret 4

struct Joint {
    void* vtable;
    char pad[0x14];
    int field18;
    void construct(int);
    ~Joint();
};

extern "C" void __stdcall sub_53FEE0(int*);
extern "C" void __cdecl sub_62FC62(void*);

void Joint::construct(int arg) {
    vtable = (void*)0x7b6104;
    field18 = 0;
    sub_53FEE0(&field18);
    vtable = (void*)0x7b5ea8;
    if (arg & 1) {
        sub_62FC62(this);
    }
}

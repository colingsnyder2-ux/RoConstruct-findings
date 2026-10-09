// from server: 87% by colin
// roc 2007-08 00600250  unit: RBX::BlockBlockContact  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00600250
//
// 00600250  56                   push esi
// 00600251  57                   push edi
// 00600252  8bf1                 mov esi, ecx
// 00600254  33ff                 xor edi, edi
// 00600256  897e3c               mov dword ptr [esi + 0x3c], edi
// 00600259  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060025c  3bc7                 cmp eax, edi
// 0060025e  7409                 je 0x600269
// 00600260  50                   push eax
// 00600261  e8fcf90200           call 0x62fc62
// 00600266  83c404               add esp, 4
// 00600269  897e44               mov dword ptr [esi + 0x44], edi
// 0060026c  897e48               mov dword ptr [esi + 0x48], edi
// 0060026f  897e4c               mov dword ptr [esi + 0x4c], edi
// 00600272  8b4630               mov eax, dword ptr [esi + 0x30]
// 00600275  3bc7                 cmp eax, edi
// 00600277  7409                 je 0x600282
// 00600279  50                   push eax
// 0060027a  e8e3f90200           call 0x62fc62
// 0060027f  83c404               add esp, 4
// 00600282  f644240c01           test byte ptr [esp + 0xc], 1
// 00600287  897e30               mov dword ptr [esi + 0x30], edi
// 0060028a  897e34               mov dword ptr [esi + 0x34], edi
// 0060028d  897e38               mov dword ptr [esi + 0x38], edi
// 00600290  c706a85e7b00         mov dword ptr [esi], 0x7b5ea8
// 00600296  7409                 je 0x6002a1
// 00600298  56                   push esi
// 00600299  e8c4f90200           call 0x62fc62
// 0060029e  83c404               add esp, 4
// 006002a1  5f                   pop edi
// 006002a2  8bc6                 mov eax, esi
// 006002a4  5e                   pop esi
// 006002a5  c20400               ret 4

struct S_func_00600250 {
    char pad0[0x30];
    void* m30;
    void* m34;
    void* m38;
    void* m3c;
    char pad40[4];
    void* m44;
    void* m48;
    void* m4c;
    S_func_00600250* dtor(char flag);
};

extern "C" void __cdecl free_62fc62(void* p);

S_func_00600250* S_func_00600250::dtor(char flag)
{
    m3c = 0;
    if (m44) {
        free_62fc62(m44);
    }
    m44 = 0;
    m48 = 0;
    m4c = 0;
    if (m30) {
        free_62fc62(m30);
    }
    m30 = 0;
    m34 = 0;
    m38 = 0;
    *(void**)this = (void*)0x7b5ea8;
    if (flag & 1) {
        free_62fc62(this);
    }
    return this;
}

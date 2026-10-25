// from server: 100% by king_originala
// roc 2008-06 00565ac0  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565ac0
//
// 00565ac0  6aff                 push -1
// 00565ac2  6811f47c00           push 0x7cf411
// 00565ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00565acd  50                   push eax
// 00565ace  64892500000000       mov dword ptr fs:[0], esp
// 00565ad5  83ec20               sub esp, 0x20
// 00565ad8  53                   push ebx
// 00565ad9  56                   push esi
// 00565ada  8bf1                 mov esi, ecx
// 00565adc  89742408             mov dword ptr [esp + 8], esi
// 00565ae0  e8cbfaffff           call 0x5655b0
// 00565ae5  33db                 xor ebx, ebx
// 00565ae7  68a0438200           push 0x8243a0
// 00565aec  8d4c2410             lea ecx, [esp + 0x10]
// 00565af0  895c2434             mov dword ptr [esp + 0x34], ebx
// 00565af4  c706e4e68200         mov dword ptr [esi], 0x82e6e4
// 00565afa  c74610d8e68200       mov dword ptr [esi + 0x10], 0x82e6d8
// 00565b01  c74614d0e68200       mov dword ptr [esi + 0x14], 0x82e6d0
// 00565b08  c74620c8e68200       mov dword ptr [esi + 0x20], 0x82e6c8
// 00565b0f  c74624b8e68200       mov dword ptr [esi + 0x24], 0x82e6b8
// 00565b16  c74644a8e68200       mov dword ptr [esi + 0x44], 0x82e6a8
// 00565b1d  c7466498e68200       mov dword ptr [esi + 0x64], 0x82e698
// 00565b24  c7868400000088e68200 mov dword ptr [esi + 0x84], 0x82e688
// 00565b2e  c786a400000078e68200 mov dword ptr [esi + 0xa4], 0x82e678
// 00565b38  c786c400000068e68200 mov dword ptr [esi + 0xc4], 0x82e668
// 00565b42  c6863001000001       mov byte ptr [esi + 0x130], 1
// 00565b49  889e31010000         mov byte ptr [esi + 0x131], bl
// 00565b4f  889e33010000         mov byte ptr [esi + 0x133], bl
// 00565b55  c7863401000001000000 mov dword ptr [esi + 0x134], 1
// 00565b5f  ff1558248000         call dword ptr [0x802458]
// 00565b65  8d44240c             lea eax, [esp + 0xc]
// 00565b69  50                   push eax
// 00565b6a  8bce                 mov ecx, esi
// 00565b6c  c644243401           mov byte ptr [esp + 0x34], 1
// 00565b71  e81a54ffff           call 0x55af90
// 00565b76  8d4c240c             lea ecx, [esp + 0xc]
// 00565b7a  885c2430             mov byte ptr [esp + 0x30], bl
// 00565b7e  ff1568248000         call dword ptr [0x802468]
// 00565b84  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00565b88  8bc6                 mov eax, esi
// 00565b8a  5e                   pop esi
// 00565b8b  5b                   pop ebx
// 00565b8c  64890d00000000       mov dword ptr fs:[0], ecx
// 00565b93  83c42c               add esp, 0x2c
// 00565b96  c3                   ret 

struct String;

extern "C" {
extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);
}

struct String {
    unsigned char storage[28];
    String(const char *text) { string_construct(this, text); }
    ~String() { string_destroy(this); }
};

struct Base {
    unsigned int words[76];
    unsigned char enabled;
    unsigned char flag1;
    unsigned char flag2;
    unsigned char flag3;
    int mode;

    Base();
    ~Base();
    void setName(const String &name);
};

struct S : Base {
    S();
};

S::S()
{
    words[0] = 0x82e6e4;
    words[4] = 0x82e6d8;
    words[5] = 0x82e6d0;
    words[8] = 0x82e6c8;
    words[9] = 0x82e6b8;
    words[17] = 0x82e6a8;
    words[25] = 0x82e698;
    words[33] = 0x82e688;
    words[41] = 0x82e678;
    words[49] = 0x82e668;
    enabled = 1;
    flag1 = 0;
    flag3 = 0;
    mode = 1;
    String name("Diagnostics");
    setName(name);
}

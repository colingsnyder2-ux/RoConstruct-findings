// from server: 41% by colin
// roc 2007-08 004c1a80  unit: RakPeer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1a80
//
// 004c1a80  53                   push ebx
// 004c1a81  55                   push ebp
// 004c1a82  56                   push esi
// 004c1a83  57                   push edi
// 004c1a84  8bd9                 mov ebx, ecx
// 004c1a86  e8e58fffff           call 0x4baa70
// 004c1a8b  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c1a8f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c1a93  8903                 mov dword ptr [ebx], eax
// 004c1a95  33c0                 xor eax, eax
// 004c1a97  894304               mov dword ptr [ebx + 4], eax
// 004c1a9a  894308               mov dword ptr [ebx + 8], eax
// 004c1a9d  89430c               mov dword ptr [ebx + 0xc], eax
// 004c1aa0  894310               mov dword ptr [ebx + 0x10], eax
// 004c1aa3  894314               mov dword ptr [ebx + 0x14], eax
// 004c1aa6  8d6b20               lea ebp, [ebx + 0x20]
// 004c1aa9  894318               mov dword ptr [ebx + 0x18], eax
// 004c1aac  89431c               mov dword ptr [ebx + 0x1c], eax
// 004c1aaf  b908000000           mov ecx, 8
// 004c1ab4  8bfd                 mov edi, ebp
// 004c1ab6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c1ab8  8d4b40               lea ecx, [ebx + 0x40]
// 004c1abb  51                   push ecx
// 004c1abc  55                   push ebp
// 004c1abd  e82eeeffff           call 0x4c08f0
// 004c1ac2  83c360               add ebx, 0x60
// 004c1ac5  53                   push ebx
// 004c1ac6  55                   push ebp
// 004c1ac7  e884bbffff           call 0x4bd650
// 004c1acc  83c410               add esp, 0x10
// 004c1acf  5f                   pop edi
// 004c1ad0  5e                   pop esi
// 004c1ad1  5d                   pop ebp
// 004c1ad2  5b                   pop ebx
// 004c1ad3  c20800               ret 8

struct RakPeer {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20[8];
    int field40;
    int field44;
    int field48;
    int field4C;
    int field50;
    int field54;
    int field58;
    int field5C;
    int field60;
    int field64;
    int field68;
    int field6C;
    int field70;
    int field74;
    int field78;
    int field7C;

    RakPeer(int a, int* b);
};

extern "C" void __cdecl sub_4BAA70();
extern "C" void __cdecl sub_4C08F0(int* a, int* b);
extern "C" void __cdecl sub_4BD650(int* a, int* b);

RakPeer::RakPeer(int a, int* b)
{
    sub_4BAA70();
    field0 = a;
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    field14 = 0;
    field18 = 0;
    field1C = 0;
    int* p = field20;
    for (int i = 0; i < 8; ++i)
        p[i] = b[i];
    sub_4C08F0(&field40, field20);
    sub_4BD650(&field60, field20);
}

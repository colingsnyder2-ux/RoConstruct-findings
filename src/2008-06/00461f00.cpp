// from server: 75% by colin
// from server: 74% by colin
// roc 2008-06 00461f00  unit: Scintilla::CScintillaFindReplaceDlg  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461f00
//
// 00461f00  6aff                 push -1
// 00461f02  6828317c00           push 0x7c3128
// 00461f07  64a100000000         mov eax, dword ptr fs:[0]
// 00461f0d  50                   push eax
// 00461f0e  64892500000000       mov dword ptr fs:[0], esp
// 00461f15  83ec08               sub esp, 8
// 00461f18  56                   push esi
// 00461f19  8bf1                 mov esi, ecx
// 00461f1b  57                   push edi
// 00461f1c  8974240c             mov dword ptr [esp + 0xc], esi
// 00461f20  e879f02300           call 0x6a0f9e
// 00461f25  33ff                 xor edi, edi
// 00461f27  8d4e58               lea ecx, [esi + 0x58]
// 00461f2a  897c2418             mov dword ptr [esp + 0x18], edi
// 00461f2e  c70674aa8100         mov dword ptr [esi], 0x81aa74
// 00461f34  e8a7e0ffff           call 0x45ffe0
// 00461f39  c786b40000005caa8100 mov dword ptr [esi + 0xb4], 0x81aa5c
// 00461f43  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00461f49  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 00461f4f  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 00461f55  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00461f5b  b801000000           mov eax, 1
// 00461f60  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 00461f66  89becc000000         mov dword ptr [esi + 0xcc], edi
// 00461f6c  89bed0000000         mov dword ptr [esi + 0xd0], edi
// 00461f72  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 00461f78  6a03                 push 3
// 00461f7a  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 00461f80  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 00461f86  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 00461f8c  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 00461f92  8d44240c             lea eax, [esp + 0xc]
// 00461f96  50                   push eax
// 00461f97  6a0d                 push 0xd
// 00461f99  6800040000           push 0x400
// 00461f9e  ff1520228000         call dword ptr [0x802220]
// 00461fa4  33c9                 xor ecx, ecx
// 00461fa6  807c240830           cmp byte ptr [esp + 8], 0x30
// 00461fab  5f                   pop edi
// 00461fac  0f94c1               sete cl
// 00461faf  8bc6                 mov eax, esi
// 00461fb1  898ee8000000         mov dword ptr [esi + 0xe8], ecx
// 00461fb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00461fbb  5e                   pop esi
// 00461fbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00461fc3  83c414               add esp, 0x14
// 00461fc6  c3                   ret 
#include <intrin.h>

extern "C" int __stdcall GetLocaleInfoA(unsigned long, unsigned long, char*, int);

struct Base {
    char data[0x54];
    Base();
    virtual ~Base();
};

struct Member {
    char data[0x5c];
    Member();
    ~Member();
};

struct S : Base {
    Member member_58;
    void* field_b4;
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    int field_d0;
    int field_d4;
    int field_d8;
    int field_dc;
    int field_e0;
    int field_e4;
    int field_e8;

    S();
    virtual ~S();
};

S::S()
{
    member_58.Member::Member();
    field_b4 = (void*)0x81aa5c;
    field_b8 = 0;
    _ReadWriteBarrier();
    field_c4 = 0;
    field_c0 = 0;
    field_bc = 0;
    field_c8 = 0;
    field_cc = 0;
    field_d0 = 0;
    field_d4 = 0;
    field_d8 = 1;
    field_dc = 1;
    field_e0 = 1;
    field_e4 = 1;

    char buffer[3];
    GetLocaleInfoA(0x400, 0x0d, buffer, 3);
    field_e8 = buffer[0] == '0';
}

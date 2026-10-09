// from server: 77% by colin
// roc 2007-08 00657080  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657080
//
// 00657080  53                   push ebx
// 00657081  56                   push esi
// 00657082  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00657086  57                   push edi
// 00657087  68ec837c00           push 0x7c83ec
// 0065708c  684c397c00           push 0x7c394c
// 00657091  8bce                 mov ecx, esi
// 00657093  ff157cdc7700         call dword ptr [0x77dc7c]
// 00657099  68e4837c00           push 0x7c83e4
// 0065709e  68e0837c00           push 0x7c83e0
// 006570a3  8bce                 mov ecx, esi
// 006570a5  ff157cdc7700         call dword ptr [0x77dc7c]
// 006570ab  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006570af  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006570b3  57                   push edi
// 006570b4  53                   push ebx
// 006570b5  56                   push esi
// 006570b6  e8b5e8ffff           call 0x655970
// 006570bb  57                   push edi
// 006570bc  53                   push ebx
// 006570bd  56                   push esi
// 006570be  e84de9ffff           call 0x655a10
// 006570c3  83c418               add esp, 0x18
// 006570c6  5f                   pop edi
// 006570c7  5e                   pop esi
// 006570c8  5b                   pop ebx
// 006570c9  c3                   ret 

struct VCXTPReportRow
{
    void f(int, int, int);
};

extern "C" void __stdcall sub_77DC7C(const char*, const char*);
extern "C" void __cdecl sub_655970(void*, int, int);
extern "C" void __cdecl sub_655A10(void*, int, int);

void VCXTPReportRow::f(int a, int b, int c)
{
    sub_77DC7C((const char*)0x7c394c, (const char*)0x7c83ec);
    sub_77DC7C((const char*)0x7c83e0, (const char*)0x7c83e4);
    sub_655970(this, b, c);
    sub_655A10(this, b, c);
}

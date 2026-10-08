// from server: 100% by colin
// roc 2007-08 00447f00  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447f00
//
// 00447f00  56                   push esi
// 00447f01  57                   push edi
// 00447f02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00447f06  57                   push edi
// 00447f07  8bf1                 mov esi, ecx
// 00447f09  e840881e00           call 0x63074e
// 00447f0e  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 00447f14  750a                 jne 0x447f20
// 00447f16  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00447f20  5f                   pop edi
// 00447f21  5e                   pop esi
// 00447f22  c20400               ret 4

struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void func_00447f00(void*);
};

void CRbxPlayDocTemplate::func_00447f00(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}

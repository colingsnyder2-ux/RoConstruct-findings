// roc 2011-06 00458c10  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00458c10
//
// 00458c10  56                   push esi
// 00458c11  57                   push edi
// 00458c12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00458c16  57                   push edi
// 00458c17  8bf1                 mov esi, ecx
// 00458c19  e87c203b00           call 0x80ac9a
// 00458c1e  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 00458c24  750a                 jne 0x458c30
// 00458c26  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00458c30  5f                   pop edi
// 00458c31  5e                   pop esi
// 00458c32  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00000e@CRbxPlayDocTemplate@ns_ROCX00000e@@QAEXPAX@Z)

namespace ns_ROCX00000e {
struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void fn_ROCX00000e(void*);
};

void CRbxPlayDocTemplate::fn_ROCX00000e(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}
}

// roc 2008-06 004496f0  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004496f0
//
// 004496f0  56                   push esi
// 004496f1  57                   push edi
// 004496f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004496f6  57                   push edi
// 004496f7  8bf1                 mov esi, ecx
// 004496f9  e8f87a2500           call 0x6a11f6
// 004496fe  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 00449704  750a                 jne 0x449710
// 00449706  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00449710  5f                   pop edi
// 00449711  5e                   pop esi
// 00449712  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00001b@CRbxPlayDocTemplate@ns_ROCX00001b@@QAEXPAX@Z)

namespace ns_ROCX00001b {
struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void fn_ROCX00001b(void*);
};

void CRbxPlayDocTemplate::fn_ROCX00001b(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}
}

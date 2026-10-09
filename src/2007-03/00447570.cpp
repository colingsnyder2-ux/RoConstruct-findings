// roc 2007-03 00447570  unit: seg_00440000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00447570
//
// 00447570  56                   push esi
// 00447571  57                   push edi
// 00447572  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00447576  57                   push edi
// 00447577  8bf1                 mov esi, ecx
// 00447579  e8d0761d00           call 0x61ec4e
// 0044757e  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 00447584  750a                 jne 0x447590
// 00447586  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 00447590  5f                   pop edi
// 00447591  5e                   pop esi
// 00447592  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000006@CRbxPlayDocTemplate@ns_ROCX000006@@QAEXPAX@Z)

namespace ns_ROCX000006 {
struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void fn_ROCX000006(void*);
};

void CRbxPlayDocTemplate::fn_ROCX000006(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}
}

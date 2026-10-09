// roc 2009-12 0044b310  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044b310
//
// 0044b310  56                   push esi
// 0044b311  57                   push edi
// 0044b312  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044b316  57                   push edi
// 0044b317  8bf1                 mov esi, ecx
// 0044b319  e878913a00           call 0x7f4496
// 0044b31e  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 0044b324  750a                 jne 0x44b330
// 0044b326  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0044b330  5f                   pop edi
// 0044b331  5e                   pop esi
// 0044b332  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000010@CRbxPlayDocTemplate@ns_ROCX000010@@QAEXPAX@Z)

namespace ns_ROCX000010 {
struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void fn_ROCX000010(void*);
};

void CRbxPlayDocTemplate::fn_ROCX000010(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}
}

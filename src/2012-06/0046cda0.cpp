// roc 2012-06 0046cda0  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046cda0
//
// 0046cda0  56                   push esi
// 0046cda1  57                   push edi
// 0046cda2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0046cda6  57                   push edi
// 0046cda7  8bf1                 mov esi, ecx
// 0046cda9  e8725f5100           call 0x982d20
// 0046cdae  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 0046cdb4  750a                 jne 0x46cdc0
// 0046cdb6  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0046cdc0  5f                   pop edi
// 0046cdc1  5e                   pop esi
// 0046cdc2  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000003@CRbxPlayDocTemplate@ns_ROCX000003@@QAEXPAX@Z)

namespace ns_ROCX000003 {
struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void fn_ROCX000003(void*);
};

void CRbxPlayDocTemplate::fn_ROCX000003(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}
}

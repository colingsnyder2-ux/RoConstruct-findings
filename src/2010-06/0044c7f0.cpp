// roc 2010-06 0044c7f0  unit: CRbxPlayDocTemplate  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044c7f0
//
// 0044c7f0  56                   push esi
// 0044c7f1  57                   push edi
// 0044c7f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044c7f6  57                   push edi
// 0044c7f7  8bf1                 mov esi, ecx
// 0044c7f9  e8d8bd3500           call 0x7a85d6
// 0044c7fe  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 0044c804  750a                 jne 0x44c810
// 0044c806  c7869000000000000000 mov dword ptr [esi + 0x90], 0
// 0044c810  5f                   pop edi
// 0044c811  5e                   pop esi
// 0044c812  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00000c@CRbxPlayDocTemplate@ns_ROCX00000c@@QAEXPAX@Z)

namespace ns_ROCX00000c {
struct CRbxPlayDocTemplate
{
    char pad[0x90];
    void* field_0x90;
    void sub_63074e(void*);
    void fn_ROCX00000c(void*);
};

void CRbxPlayDocTemplate::fn_ROCX00000c(void* arg)
{
    sub_63074e(arg);
    if (arg == field_0x90)
        field_0x90 = 0;
}
}

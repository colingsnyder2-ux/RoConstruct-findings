// roc 2007-03 0065e500  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065e500
//
// 0065e500  8b442408             mov eax, dword ptr [esp + 8]
// 0065e504  56                   push esi
// 0065e505  57                   push edi
// 0065e506  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065e50a  50                   push eax
// 0065e50b  57                   push edi
// 0065e50c  8bf1                 mov esi, ecx
// 0065e50e  e85d7e0100           call 0x676370
// 0065e513  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 0065e519  5f                   pop edi
// 0065e51a  898e78010000         mov dword ptr [esi + 0x178], ecx
// 0065e520  5e                   pop esi
// 0065e521  c20800               ret 8
// copied from an identical function in another client (function ?sub_00719130@CXTPControlPopupColor@ns_ROCX000000@@QAEXHH@Z)

namespace ns_ROCX000000 {
extern "C" void __stdcall sub_006710B0(int, int);

struct CXTPControlPopupColor
{
    char pad[0x178];
    int field_178;
    void sub_00719130(int, int);
};

void CXTPControlPopupColor::sub_00719130(int a, int b)
{
    sub_006710B0(a, b);
    *(int*)((char*)this + 0x178) = *(int*)((char*)a + 0x178);
}
}

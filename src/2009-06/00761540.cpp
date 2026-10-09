// roc 2009-06 00761540  unit: ATL::CRegObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761540
//
// 00761540  8b442408             mov eax, dword ptr [esp + 8]
// 00761544  85c0                 test eax, eax
// 00761546  7512                 jne 0x76155a
// 00761548  56                   push esi
// 00761549  8b742408             mov esi, dword ptr [esp + 8]
// 0076154d  50                   push eax
// 0076154e  56                   push esi
// 0076154f  e81cffffff           call 0x761470
// 00761554  8bc6                 mov eax, esi
// 00761556  5e                   pop esi
// 00761557  c20800               ret 8
// 0076155a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0076155d  56                   push esi
// 0076155e  8b742408             mov esi, dword ptr [esp + 8]
// 00761562  50                   push eax
// 00761563  56                   push esi
// 00761564  e807ffffff           call 0x761470
// 00761569  8bc6                 mov eax, esi
// 0076156b  5e                   pop esi
// 0076156c  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000016@ns_ROCX000016@@YGPAXPAXPAUCPropertyGridItemBrickColor@1@@Z)

namespace ns_ROCX000016 {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX000016(void* dst, void* src);

void* __stdcall fn_ROCX000016(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX000016(dst, value);
    return dst;
}
}

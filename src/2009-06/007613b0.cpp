// roc 2009-06 007613b0  unit: ATL::CRegObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007613b0
//
// 007613b0  8b442408             mov eax, dword ptr [esp + 8]
// 007613b4  85c0                 test eax, eax
// 007613b6  7512                 jne 0x7613ca
// 007613b8  56                   push esi
// 007613b9  8b742408             mov esi, dword ptr [esp + 8]
// 007613bd  50                   push eax
// 007613be  56                   push esi
// 007613bf  e8acffffff           call 0x761370
// 007613c4  8bc6                 mov eax, esi
// 007613c6  5e                   pop esi
// 007613c7  c20800               ret 8
// 007613ca  8b4020               mov eax, dword ptr [eax + 0x20]
// 007613cd  56                   push esi
// 007613ce  8b742408             mov esi, dword ptr [esp + 8]
// 007613d2  50                   push eax
// 007613d3  56                   push esi
// 007613d4  e897ffffff           call 0x761370
// 007613d9  8bc6                 mov eax, esi
// 007613db  5e                   pop esi
// 007613dc  c20800               ret 8
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

// roc 2009-12 00435a00  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00435a00
//
// 00435a00  8b442404             mov eax, dword ptr [esp + 4]
// 00435a04  8a08                 mov cl, byte ptr [eax]
// 00435a06  8b542408             mov edx, dword ptr [esp + 8]
// 00435a0a  33c0                 xor eax, eax
// 00435a0c  3a0a                 cmp cl, byte ptr [edx]
// 00435a0e  0f94c0               sete al
// 00435a11  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAE_NPBD0@Z)

namespace ns_ROCX000001 {
struct S {
    bool f(const char* a, const char* b);
};

bool S::f(const char* a, const char* b)
{
    return *a == *b;
}
}

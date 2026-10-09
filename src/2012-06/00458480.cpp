// roc 2012-06 00458480  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00458480
//
// 00458480  8b442404             mov eax, dword ptr [esp + 4]
// 00458484  8a08                 mov cl, byte ptr [eax]
// 00458486  8b542408             mov edx, dword ptr [esp + 8]
// 0045848a  33c0                 xor eax, eax
// 0045848c  3a0a                 cmp cl, byte ptr [edx]
// 0045848e  0f94c0               sete al
// 00458491  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000004@@QAE_NPBD0@Z)

namespace ns_ROCX000004 {
struct S {
    bool f(const char* a, const char* b);
};

bool S::f(const char* a, const char* b)
{
    return *a == *b;
}
}

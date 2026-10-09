// roc 2010-06 00437090  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00437090
//
// 00437090  8b442404             mov eax, dword ptr [esp + 4]
// 00437094  8a08                 mov cl, byte ptr [eax]
// 00437096  8b542408             mov edx, dword ptr [esp + 8]
// 0043709a  33c0                 xor eax, eax
// 0043709c  3a0a                 cmp cl, byte ptr [edx]
// 0043709e  0f94c0               sete al
// 004370a1  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAE_NPBD0@Z)

namespace ns_ROCX000005 {
struct S {
    bool f(const char* a, const char* b);
};

bool S::f(const char* a, const char* b)
{
    return *a == *b;
}
}

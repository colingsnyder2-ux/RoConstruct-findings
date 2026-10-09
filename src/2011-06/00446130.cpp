// roc 2011-06 00446130  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00446130
//
// 00446130  8b442404             mov eax, dword ptr [esp + 4]
// 00446134  8a08                 mov cl, byte ptr [eax]
// 00446136  8b542408             mov edx, dword ptr [esp + 8]
// 0044613a  33c0                 xor eax, eax
// 0044613c  3a0a                 cmp cl, byte ptr [edx]
// 0044613e  0f94c0               sete al
// 00446141  c20800               ret 8
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

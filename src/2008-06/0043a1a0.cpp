// roc 2008-06 0043a1a0  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a1a0
//
// 0043a1a0  8b442404             mov eax, dword ptr [esp + 4]
// 0043a1a4  8a08                 mov cl, byte ptr [eax]
// 0043a1a6  8b542408             mov edx, dword ptr [esp + 8]
// 0043a1aa  33c0                 xor eax, eax
// 0043a1ac  3a0a                 cmp cl, byte ptr [edx]
// 0043a1ae  0f94c0               sete al
// 0043a1b1  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000002@@QAE_NPBD0@Z)

namespace ns_ROCX000002 {
struct S {
    bool f(const char* a, const char* b);
};

bool S::f(const char* a, const char* b)
{
    return *a == *b;
}
}

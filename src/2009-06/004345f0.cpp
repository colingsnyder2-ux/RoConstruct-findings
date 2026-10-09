// roc 2009-06 004345f0  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004345f0
//
// 004345f0  8b442404             mov eax, dword ptr [esp + 4]
// 004345f4  8a08                 mov cl, byte ptr [eax]
// 004345f6  8b542408             mov edx, dword ptr [esp + 8]
// 004345fa  33c0                 xor eax, eax
// 004345fc  3a0a                 cmp cl, byte ptr [edx]
// 004345fe  0f94c0               sete al
// 00434601  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAE_NPBD0@Z)

namespace ns_ROCX000003 {
struct S {
    bool f(const char* a, const char* b);
};

bool S::f(const char* a, const char* b)
{
    return *a == *b;
}
}

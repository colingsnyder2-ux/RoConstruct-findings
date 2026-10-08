// from server: 100% by colin
// roc 2007-08 0043b700  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043b700
//
// 0043b700  8b442404             mov eax, dword ptr [esp + 4]
// 0043b704  8a08                 mov cl, byte ptr [eax]
// 0043b706  8b542408             mov edx, dword ptr [esp + 8]
// 0043b70a  33c0                 xor eax, eax
// 0043b70c  3a0a                 cmp cl, byte ptr [edx]
// 0043b70e  0f94c0               sete al
// 0043b711  c20800               ret 8

struct S {
    bool f(const char* a, const char* b);
};

bool S::f(const char* a, const char* b)
{
    return *a == *b;
}

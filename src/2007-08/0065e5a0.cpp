// from server: 100% by colin
// roc 2007-08 0065e5a0  unit: CXTPReportControl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e5a0
//
// 0065e5a0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0065e5a3  33d2                 xor edx, edx
// 0065e5a5  394840               cmp dword ptr [eax + 0x40], ecx
// 0065e5a8  0f94c2               sete dl
// 0065e5ab  8bc2                 mov eax, edx
// 0065e5ad  c3                   ret 

struct S;

struct Inner {
    char pad[0x40];
    S* owner;
};

struct S {
    char pad[0x54];
    Inner* field;
    int m();
};

int S::m()
{
    return field->owner == this;
}

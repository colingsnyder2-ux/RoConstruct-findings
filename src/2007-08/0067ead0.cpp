// from server: 66% by colin
// roc 2007-08 0067ead0  unit: CXTPControlSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ead0
//
// 0067ead0  83b97801000000       cmp dword ptr [ecx + 0x178], 0
// 0067ead7  7509                 jne 0x67eae2
// 0067ead9  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 0067eae0  7422                 je 0x67eb04
// 0067eae2  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 0067eae8  8b917c010000         mov edx, dword ptr [ecx + 0x17c]
// 0067eaee  898188010000         mov dword ptr [ecx + 0x188], eax
// 0067eaf4  8b01                 mov eax, dword ptr [ecx]
// 0067eaf6  89918c010000         mov dword ptr [ecx + 0x18c], edx
// 0067eafc  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0067eb02  ffd2                 call edx
// 0067eb04  c20800               ret 8

struct CXTPControlSelector {
    char pad0[0x178];
    int field178;
    int field17c;
    char pad1[0x8];
    int field188;
    int field18c;
    void method(int, int);
};

void CXTPControlSelector::method(int a, int b)
{
    if (this->field178 == 0 || this->field17c != 0)
    {
        this->field188 = this->field178;
        this->field18c = this->field17c;
        void (__stdcall *fn)(int, int) = *(void (__stdcall **)(int, int))((*(char **)this) + 0x98);
        fn(a, b);
    }
}

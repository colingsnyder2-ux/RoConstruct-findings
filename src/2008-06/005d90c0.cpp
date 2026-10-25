// from server: 100% by atomic.potato
// roc 2008-06 005d90c0  unit: RBX::VPartInstance::?$FilteredSelection  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d90c0
//
// 005d90c0  e84bfbffff           call 0x5d8c10
// 005d90c5  85c0                 test eax, eax
// 005d90c7  7406                 je 0x5d90cf
// 005d90c9  0528020000           add eax, 0x228
// 005d90ce  c3                   ret 
// 005d90cf  33c0                 xor eax, eax
// 005d90d1  c3                   ret 

extern "C" int __cdecl call_5d8c10();

struct S
{
    int *f();
};

int *S::f()
{
    int *p = (int *)call_5d8c10();
    if (p)
        return (int *)((char *)p + 0x228);
    return 0;
}

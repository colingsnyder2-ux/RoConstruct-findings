// from server: 100% by atomic.potato
// roc 2008-06 005d90e0  unit: RBX::VPartInstance::?$FilteredSelection  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d90e0
//
// 005d90e0  e82bfcffff           call 0x5d8d10
// 005d90e5  85c0                 test eax, eax
// 005d90e7  7406                 je 0x5d90ef
// 005d90e9  0528020000           add eax, 0x228
// 005d90ee  c3                   ret 
// 005d90ef  33c0                 xor eax, eax
// 005d90f1  c3                   ret 

struct S
{
    int f();
};

extern "C" int __cdecl sub_5d8d10();

int S::f()
{
    int v = sub_5d8d10();
    if (v)
        return v + 0x228;
    return 0;
}

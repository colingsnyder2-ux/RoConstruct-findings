// from server: 100% by atomic.potato
// roc 2008-06 005d9120  unit: RBX::VPartInstance::?$FilteredSelection  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9120
//
// 005d9120  e8ebfcffff           call 0x5d8e10
// 005d9125  85c0                 test eax, eax
// 005d9127  7406                 je 0x5d912f
// 005d9129  0528020000           add eax, 0x228
// 005d912e  c3                   ret 
// 005d912f  33c0                 xor eax, eax
// 005d9131  c3                   ret 

struct S
{
    int f();
};

extern "C" int __cdecl sub_005d8e10();

int S::f()
{
    int value = sub_005d8e10();
    if (value)
        return value + 0x228;
    return 0;
}

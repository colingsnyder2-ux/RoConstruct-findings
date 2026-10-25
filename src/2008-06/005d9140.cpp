// from server: 100% by atomic.potato
// roc 2008-06 005d9140  unit: RBX::VPartInstance::?$FilteredSelection  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9140
//
// 005d9140  e8cbfdffff           call 0x5d8f10
// 005d9145  85c0                 test eax, eax
// 005d9147  7406                 je 0x5d914f
// 005d9149  0528020000           add eax, 0x228
// 005d914e  c3                   ret 
// 005d914f  33c0                 xor eax, eax
// 005d9151  c3                   ret 

struct S
{
    int f();
};

extern "C" int __cdecl sub_5d8f10();

int S::f()
{
    int value = sub_5d8f10();
    if (value)
        return value + 0x228;
    return 0;
}

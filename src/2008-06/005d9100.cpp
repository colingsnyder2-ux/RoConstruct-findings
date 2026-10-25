// from server: 100% by atomic.potato
// roc 2008-06 005d9100  unit: RBX::VPartInstance::?$FilteredSelection  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9100
//
// 005d9100  e80bf9ffff           call 0x5d8a10
// 005d9105  85c0                 test eax, eax
// 005d9107  7406                 je 0x5d910f
// 005d9109  0528020000           add eax, 0x228
// 005d910e  c3                   ret 
// 005d910f  33c0                 xor eax, eax
// 005d9111  c3                   ret 

struct S
{
    int f();
};

extern "C" int __cdecl sub_5d8a10();

int S::f()
{
    int value = sub_5d8a10();
    if (value)
        return value + 0x228;
    return 0;
}

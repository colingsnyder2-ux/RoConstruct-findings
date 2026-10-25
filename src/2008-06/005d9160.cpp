// from server: 100% by atomic.potato
// roc 2008-06 005d9160  unit: RBX::VPartInstance::?$FilteredSelection  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9160
//
// 005d9160  e8abf9ffff           call 0x5d8b10
// 005d9165  85c0                 test eax, eax
// 005d9167  7407                 je 0x5d9170
// 005d9169  8b80c8020000         mov eax, dword ptr [eax + 0x2c8]
// 005d916f  c3                   ret 
// 005d9170  33c0                 xor eax, eax
// 005d9172  c3                   ret 

struct S
{
    int f();
};

extern "C" int* __cdecl sub_5d8b10();

int S::f()
{
    int* value = sub_5d8b10();
    if (value)
        return value[0x2c8 / sizeof(int)];
    return 0;
}

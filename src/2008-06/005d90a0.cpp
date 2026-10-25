// from server: 100% by atomic.potato
// roc 2008-06 005d90a0  unit: RBX::VPartInstance::?$FilteredSelection  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d90a0
//
// 005d90a0  e86bfaffff           call 0x5d8b10
// 005d90a5  85c0                 test eax, eax
// 005d90a7  7406                 je 0x5d90af
// 005d90a9  0528020000           add eax, 0x228
// 005d90ae  c3                   ret 
// 005d90af  33c0                 xor eax, eax
// 005d90b1  c3                   ret 

struct S
{
    void* f();
};

extern "C" void* __cdecl sub_005d8b10();

void* S::f()
{
    void* p = sub_005d8b10();
    return p ? (char*)p + 0x228 : 0;
}

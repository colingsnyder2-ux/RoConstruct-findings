// from server: 100% by tester
// roc 2011-06 0066cb80  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066cb80
//
// 0066cb80  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 0066cb86  8a8014010000         mov al, byte ptr [eax + 0x114]
// 0066cb8c  c3                   ret 

struct S_func_0065c5f0 {
    char pad0[0x168];
    unsigned char* m_ptr;
    unsigned char f();
};

unsigned char S_func_0065c5f0::f()
{
    return m_ptr[0x114];
}
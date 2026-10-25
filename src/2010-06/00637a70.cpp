// from server: 100% by tester
// roc 2010-06 00637a70  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00637a70
//
// 00637a70  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 00637a76  8a8000010000         mov al, byte ptr [eax + 0x100]
// 00637a7c  c3                   ret 

struct S_func_0065c5f0 {
    char pad0[0x168];
    unsigned char* m_ptr;
    unsigned char f();
};

unsigned char S_func_0065c5f0::f()
{
    return m_ptr[0x100];
}
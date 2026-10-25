// from server: 100% by tester
// roc 2010-06 00637ad0  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00637ad0
//
// 00637ad0  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 00637ad6  8a8001010000         mov al, byte ptr [eax + 0x101]
// 00637adc  c3                   ret 

struct S_func_0065c5f0 {
    char pad0[0x168];
    unsigned char* m_ptr;
    unsigned char f();
};

unsigned char S_func_0065c5f0::f()
{
    return m_ptr[0x101];
}
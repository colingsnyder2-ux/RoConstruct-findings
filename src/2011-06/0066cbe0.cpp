// from server: 100% by tester
// roc 2011-06 0066cbe0  unit: RBX::PartInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066cbe0
//
// 0066cbe0  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 0066cbe6  8a8015010000         mov al, byte ptr [eax + 0x115]
// 0066cbec  c3                   ret 

struct S_func_0065c5f0 {
    char pad0[0x168];
    unsigned char* m_ptr;
    unsigned char f();
};

unsigned char S_func_0065c5f0::f()
{
    return m_ptr[0x115];
}
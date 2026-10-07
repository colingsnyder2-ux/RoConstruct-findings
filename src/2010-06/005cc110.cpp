// roc 2010-06 005cc110  unit: RBX::VServiceProvider::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cc110
//
// 005cc110  8a81f80b0000         mov al, byte ptr [ecx + 0xbf8]
// 005cc116  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005cc110 {
    char pad0[3064];
    char m_x;
    char f();
};
char S_func_005cc110::f()
{
    return m_x;
}

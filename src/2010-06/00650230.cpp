// roc 2010-06 00650230  unit: RBX::VControllerService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00650230
//
// 00650230  8a8139010000         mov al, byte ptr [ecx + 0x139]
// 00650236  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00650230 {
    char pad0[313];
    char m_x;
    char f();
};
char S_func_00650230::f()
{
    return m_x;
}

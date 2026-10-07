// roc 2007-08 0055cd20  unit: RBX::DataModel  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0055cd20
//
// 0055cd20  8a4174               mov al, byte ptr [ecx + 0x74]
// 0055cd23  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0055cd20 {
    char pad0[116];
    char m_x;
    char f();
};
char S_func_0055cd20::f()
{
    return m_x;
}

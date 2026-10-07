// roc 2007-08 005725b0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005725b0
//
// 005725b0  d98114010000         fld dword ptr [ecx + 0x114]
// 005725b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005725b0 {
    char pad[276];
    float m_x;
    float f();
};
float S_func_005725b0::f()
{
    return m_x;
}

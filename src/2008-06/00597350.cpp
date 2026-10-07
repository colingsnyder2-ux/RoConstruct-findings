// roc 2008-06 00597350  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597350
//
// 00597350  d9816c010000         fld dword ptr [ecx + 0x16c]
// 00597356  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00597350 {
    char pad[364];
    float m_x;
    float f();
};
float S_func_00597350::f()
{
    return m_x;
}

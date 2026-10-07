// roc 2008-06 00597360  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597360
//
// 00597360  d98170010000         fld dword ptr [ecx + 0x170]
// 00597366  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00597360 {
    char pad[368];
    float m_x;
    float f();
};
float S_func_00597360::f()
{
    return m_x;
}

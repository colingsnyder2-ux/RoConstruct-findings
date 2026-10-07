// roc 2010-06 005cce00  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cce00
//
// 005cce00  8b89a80a0000         mov ecx, dword ptr [ecx + 0xaa8]
// 005cce06  e905f8fcff           jmp 0x59c610
// auto-matched from its assembly shape

struct P_func_005cce00 { void g(); };
struct S_func_005cce00 {
    char pad[2728];
    P_func_005cce00* m_p;
    void f();
};
void S_func_005cce00::f()
{
    m_p->g();
}

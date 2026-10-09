// roc 2009-12 00665fb0  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00665fb0
//
// 00665fb0  8b89980a0000         mov ecx, dword ptr [ecx + 0xa98]
// 00665fb6  e93548fdff           jmp 0x63a7f0
// auto-matched from its assembly shape

struct P_func_00665fb0 { void g(); };
struct S_func_00665fb0 {
    char pad[2712];
    P_func_00665fb0* m_p;
    void f();
};
void S_func_00665fb0::f()
{
    m_p->g();
}

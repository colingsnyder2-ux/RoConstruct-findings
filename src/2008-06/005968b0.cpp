// from server: 100% by auto
// roc 2008-06 005968b0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005968b0
//
// 005968b0  e9bbfbffff           jmp 0x596470

extern void G1_func_005968b0();
void func_005968b0()
{
    G1_func_005968b0();
}

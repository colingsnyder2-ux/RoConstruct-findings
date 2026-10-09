// roc 2009-12 00524fd0  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00524fd0
//
// 00524fd0  e93bd10200           jmp 0x552110
// copied from an identical function in another client (function ?fn_ROCX0000e9@ns_ROCX0000e9@@YAXXZ)

namespace ns_ROCX0000e9 {
extern void G1_func_00401050();
void fn_ROCX0000e9()
{
    G1_func_00401050();
}
}

// roc 2011-06 004df780  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004df780
//
// 004df780  c6416d00             mov byte ptr [ecx + 0x6d], 0
// 004df784  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004df780 {
    char pad0[109];
    char m_x;
    void f();
};
void S_func_004df780::f()
{
    m_x = (char)0;
}

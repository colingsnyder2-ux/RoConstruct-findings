// roc 2010-06 004d2b70  unit: XVCrashReporter::XV?$mf0::V?$bind_t::?$thread_data  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d2b70
//
// 004d2b70  c6417500             mov byte ptr [ecx + 0x75], 0
// 004d2b74  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d2b70 {
    char pad0[117];
    char m_x;
    void f();
};
void S_func_004d2b70::f()
{
    m_x = (char)0;
}

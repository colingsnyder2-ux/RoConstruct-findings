// roc 2011-06 0082f7d0  unit: XVCInstanceExplorer::XV?$mf1::V?$bind_t::?$callable_slot  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082f7d0
//
// 0082f7d0  b8b045ac00           mov eax, 0xac45b0
// 0082f7d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0082f7d0()
{
    return &G;
}

// roc 2010-06 007ce1b0  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce1b0
//
// 007ce1b0  b86468be00           mov eax, 0xbe6864
// 007ce1b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007ce1b0()
{
    return &G;
}

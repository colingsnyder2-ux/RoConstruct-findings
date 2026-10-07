// roc 2009-06 004bea70  unit: boost::any::N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bea70
//
// 004bea70  b8f4f29d00           mov eax, 0x9df2f4
// 004bea75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004bea70()
{
    return &G;
}

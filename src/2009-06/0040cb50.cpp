// roc 2009-06 0040cb50  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040cb50
//
// 0040cb50  b868dc8a00           mov eax, 0x8adc68
// 0040cb55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cb50()
{
    return &G;
}

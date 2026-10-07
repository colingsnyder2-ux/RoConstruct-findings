// roc 2010-06 008036b0  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008036b0
//
// 008036b0  b8c803a600           mov eax, 0xa603c8
// 008036b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008036b0()
{
    return &G;
}

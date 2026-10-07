// roc 2009-06 007e79c0  unit: CStatic  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e79c0
//
// 007e79c0  b8f0899000           mov eax, 0x9089f0
// 007e79c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e79c0()
{
    return &G;
}

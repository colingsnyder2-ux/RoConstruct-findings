// roc 2009-06 0046d620  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046d620
//
// 0046d620  b804d18b00           mov eax, 0x8bd104
// 0046d625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046d620()
{
    return &G;
}

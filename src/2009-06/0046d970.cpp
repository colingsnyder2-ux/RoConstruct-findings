// roc 2009-06 0046d970  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046d970
//
// 0046d970  b89cd38b00           mov eax, 0x8bd39c
// 0046d975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046d970()
{
    return &G;
}

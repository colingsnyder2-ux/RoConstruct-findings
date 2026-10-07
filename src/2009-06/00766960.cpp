// roc 2009-06 00766960  unit: CXTPCustomizeCommandsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766960
//
// 00766960  b8cc988f00           mov eax, 0x8f98cc
// 00766965  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00766960()
{
    return &G;
}

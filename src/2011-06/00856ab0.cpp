// roc 2011-06 00856ab0  unit: CXTPControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856ab0
//
// 00856ab0  b86c91ac00           mov eax, 0xac916c
// 00856ab5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856ab0()
{
    return &G;
}

// roc 2008-06 00798d70  unit: CXTPRibbonControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798d70
//
// 00798d70  b8a4c78600           mov eax, 0x86c7a4
// 00798d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00798d70()
{
    return &G;
}

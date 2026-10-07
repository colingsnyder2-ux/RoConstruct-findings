// roc 2009-06 007e67d0  unit: CXTPImageEditorPicker  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e67d0
//
// 007e67d0  b870859000           mov eax, 0x908570
// 007e67d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e67d0()
{
    return &G;
}

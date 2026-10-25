// from server: 100% by auto
// roc 2008-06 0076e0c0  unit: CXTPImageEditorPicker  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e0c0
//
// 0076e0c0  b840758600           mov eax, 0x867540
// 0076e0c5  c3                   ret 

extern char G;

char* func_0076e0c0()
{
    return &G;
}

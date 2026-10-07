// roc 2010-06 008754a0  unit: CXTPImageEditorPicker  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008754a0
//
// 008754a0  b8c8cca600           mov eax, 0xa6ccc8
// 008754a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008754a0()
{
    return &G;
}

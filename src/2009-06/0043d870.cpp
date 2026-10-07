// roc 2009-06 0043d870  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043d870
//
// 0043d870  b8b05d8b00           mov eax, 0x8b5db0
// 0043d875  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d870()
{
    return &G;
}

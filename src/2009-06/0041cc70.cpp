// roc 2009-06 0041cc70  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041cc70
//
// 0041cc70  b8f4028b00           mov eax, 0x8b02f4
// 0041cc75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041cc70()
{
    return &G;
}

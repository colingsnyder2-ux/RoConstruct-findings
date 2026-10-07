// roc 2009-06 00431050  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431050
//
// 00431050  b8243b8b00           mov eax, 0x8b3b24
// 00431055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00431050()
{
    return &G;
}

// roc 2009-06 00581d20  unit: seg_00580000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581d20
//
// 00581d20  b850b38c00           mov eax, 0x8cb350
// 00581d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00581d20()
{
    return &G;
}

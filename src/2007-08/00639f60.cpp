// roc 2007-08 00639f60  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639f60
//
// 00639f60  b824558b00           mov eax, 0x8b5524
// 00639f65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00639f60()
{
    return &G;
}

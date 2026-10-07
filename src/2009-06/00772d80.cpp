// roc 2009-06 00772d80  unit: CXTPPropertyGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772d80
//
// 00772d80  b8e0b78f00           mov eax, 0x8fb7e0
// 00772d85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00772d80()
{
    return &G;
}

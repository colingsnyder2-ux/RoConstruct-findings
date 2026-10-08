// roc 2007-08 0040b9e0  unit: CBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b9e0
//
// 0040b9e0  b8a0597800           mov eax, 0x7859a0
// 0040b9e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040b9e0()
{
    return &G;
}

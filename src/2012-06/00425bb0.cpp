// roc 2012-06 00425bb0  unit: RBX::FunctionMarshaller  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00425bb0
//
// 00425bb0  b8805a4200           mov eax, 0x425a80
// 00425bb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00425bb0()
{
    return &G;
}

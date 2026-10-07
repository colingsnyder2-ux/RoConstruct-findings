// roc 2011-06 00422100  unit: RBX::FunctionMarshaller  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00422100
//
// 00422100  b8d01f4200           mov eax, 0x421fd0
// 00422105  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00422100()
{
    return &G;
}

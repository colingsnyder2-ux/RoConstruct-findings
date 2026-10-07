// roc 2011-06 00595ba0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00595ba0
//
// 00595ba0  b8486dc300           mov eax, 0xc36d48
// 00595ba5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00595ba0()
{
    return &G;
}

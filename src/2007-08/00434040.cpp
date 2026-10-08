// roc 2007-08 00434040  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434040
//
// 00434040  b820c27800           mov eax, 0x78c220
// 00434045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00434040()
{
    return &G;
}

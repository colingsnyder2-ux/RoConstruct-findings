// roc 2007-08 00438700  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438700
//
// 00438700  b840d37800           mov eax, 0x78d340
// 00438705  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00438700()
{
    return &G;
}

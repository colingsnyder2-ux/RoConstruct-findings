// roc 2007-08 00419c30  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00419c30
//
// 00419c30  b838448800           mov eax, 0x884438
// 00419c35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00419c30()
{
    return &G;
}

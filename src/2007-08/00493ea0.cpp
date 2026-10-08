// roc 2007-08 00493ea0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493ea0
//
// 00493ea0  b898e58800           mov eax, 0x88e598
// 00493ea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00493ea0()
{
    return &G;
}

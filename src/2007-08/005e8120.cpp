// roc 2007-08 005e8120  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8120
//
// 005e8120  b8d0e78a00           mov eax, 0x8ae7d0
// 005e8125  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e8120()
{
    return &G;
}

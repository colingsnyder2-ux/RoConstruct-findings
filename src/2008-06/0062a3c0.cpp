// roc 2008-06 0062a3c0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a3c0
//
// 0062a3c0  b898b99500           mov eax, 0x95b998
// 0062a3c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0062a3c0()
{
    return &G;
}

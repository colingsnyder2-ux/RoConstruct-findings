// roc 2008-06 00499940  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499940
//
// 00499940  b8507f9300           mov eax, 0x937f50
// 00499945  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00499940()
{
    return &G;
}

// roc 2008-06 0049b660  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b660
//
// 0049b660  b850899300           mov eax, 0x938950
// 0049b665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049b660()
{
    return &G;
}

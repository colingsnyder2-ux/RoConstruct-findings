// roc 2011-06 00418420  unit: RBX::Reflection::VValue::$$CBV?$vector::$$A6AXV?$shared_ptr::V?$function::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418420
//
// 00418420  b878afc000           mov eax, 0xc0af78
// 00418425  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00418420()
{
    return &G;
}

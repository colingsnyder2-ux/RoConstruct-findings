// roc 2008-06 004b1e20  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1e20
//
// 004b1e20  b8a0b89300           mov eax, 0x93b8a0
// 004b1e25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b1e20()
{
    return &G;
}

// roc 2007-08 004179c0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004179c0
//
// 004179c0  b8183c8800           mov eax, 0x883c18
// 004179c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004179c0()
{
    return &G;
}

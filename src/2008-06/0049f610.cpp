// roc 2008-06 0049f610  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f610
//
// 0049f610  b8c0909300           mov eax, 0x9390c0
// 0049f615  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049f610()
{
    return &G;
}

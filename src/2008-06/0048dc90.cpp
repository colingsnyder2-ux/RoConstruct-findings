// roc 2008-06 0048dc90  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dc90
//
// 0048dc90  b8705a9300           mov eax, 0x935a70
// 0048dc95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048dc90()
{
    return &G;
}

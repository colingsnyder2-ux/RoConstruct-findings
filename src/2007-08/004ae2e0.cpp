// roc 2007-08 004ae2e0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ae2e0
//
// 004ae2e0  b898148900           mov eax, 0x891498
// 004ae2e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004ae2e0()
{
    return &G;
}

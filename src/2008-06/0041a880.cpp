// roc 2008-06 0041a880  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a880
//
// 0041a880  b848ce9200           mov eax, 0x92ce48
// 0041a885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041a880()
{
    return &G;
}

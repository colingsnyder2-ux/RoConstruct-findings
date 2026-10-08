// roc 2007-08 0049a350  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049a350
//
// 0049a350  b8f0f88800           mov eax, 0x88f8f0
// 0049a355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049a350()
{
    return &G;
}

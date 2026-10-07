// roc 2011-06 004e48e0  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e48e0
//
// 004e48e0  b8b08bc200           mov eax, 0xc28bb0
// 004e48e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e48e0()
{
    return &G;
}

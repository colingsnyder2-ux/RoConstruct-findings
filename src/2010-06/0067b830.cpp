// roc 2010-06 0067b830  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067b830
//
// 0067b830  b890fdb900           mov eax, 0xb9fd90
// 0067b835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067b830()
{
    return &G;
}

// roc 2007-08 0048a050  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a050
//
// 0048a050  b898cc8800           mov eax, 0x88cc98
// 0048a055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048a050()
{
    return &G;
}

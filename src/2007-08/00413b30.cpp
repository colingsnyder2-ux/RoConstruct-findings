// roc 2007-08 00413b30  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00413b30
//
// 00413b30  b8f8278800           mov eax, 0x8827f8
// 00413b35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00413b30()
{
    return &G;
}

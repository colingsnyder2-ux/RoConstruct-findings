// from server: 100% by auto
// roc 2012-06 008e2180  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2180
//
// 008e2180  51                   push ecx
// 008e2181  e86a88ebff           call 0x79a9f0
// 008e2186  83c404               add esp, 4
// 008e2189  c3                   ret 
// library boost-1.34.1/libs\regex\src\regex_traits_defaults.cpp (function ?do_global_lower@re_detail@boost@@YI_W_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/regex_traits_defaults.cpp

// roc 2009-12 00722f30  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722f30
//
// 00722f30  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00722f35  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00722f38  f7d8                 neg eax
// 00722f3a  1bc0                 sbb eax, eax
// 00722f3c  83e004               and eax, 4
// 00722f3f  83e2fb               and edx, 0xfffffffb
// 00722f42  0bc2                 or eax, edx
// 00722f44  894154               mov dword ptr [ecx + 0x54], eax
// 00722f47  c20400               ret 4
// copied from an identical function in another client (function ?set_auto_close@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp
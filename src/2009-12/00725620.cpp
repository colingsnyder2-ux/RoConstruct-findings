// roc 2009-12 00725620  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725620
//
// 00725620  8b4148               mov eax, dword ptr [ecx + 0x48]
// 00725623  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00725626  8902                 mov dword ptr [edx], eax
// 00725628  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0072562b  8902                 mov dword ptr [edx], eax
// 0072562d  8bd0                 mov edx, eax
// 0072562f  2bd0                 sub edx, eax
// 00725631  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00725634  8910                 mov dword ptr [eax], edx
// 00725636  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@EAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 client-rtti-bf08f30a8aa6090dc7b7.cpp
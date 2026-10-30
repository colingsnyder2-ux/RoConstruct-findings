// roc 2009-12 00722320  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722320
//
// 00722320  8b01                 mov eax, dword ptr [ecx]
// 00722322  83f801               cmp eax, 1
// 00722325  7520                 jne 0x722347
// 00722327  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072232b  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0072232e  a802                 test al, 2
// 00722330  753a                 jne 0x72236c
// 00722332  83c802               or eax, 2
// 00722335  89413c               mov dword ptr [ecx + 0x3c], eax
// 00722338  8b01                 mov eax, dword ptr [ecx]
// 0072233a  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0072233d  c744240401000000     mov dword ptr [esp + 4], 1
// 00722345  ffe2                 jmp edx
// 00722347  83f802               cmp eax, 2
// 0072234a  7520                 jne 0x72236c
// 0072234c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00722350  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00722353  a804                 test al, 4
// 00722355  7515                 jne 0x72236c
// 00722357  83c804               or eax, 4
// 0072235a  89413c               mov dword ptr [ecx + 0x3c], eax
// 0072235d  8b01                 mov eax, dword ptr [ecx]
// 0072235f  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00722362  c744240402000000     mov dword ptr [esp + 4], 2
// 0072236a  ffe2                 jmp edx
// 0072236c  c20400               ret 4
// copied from an identical function in another client (function ??Rcloser@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXPAV?$linked_streambuf@DU?$char_traits@D@std@@@234@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp
// roc 2009-12 007232d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007232d0
//
// 007232d0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 007232d3  d1e8                 shr eax, 1
// 007232d5  a801                 test al, 1
// 007232d7  741c                 je 0x7232f5
// 007232d9  8b5148               mov edx, dword ptr [ecx + 0x48]
// 007232dc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 007232df  56                   push esi
// 007232e0  8b7114               mov esi, dword ptr [ecx + 0x14]
// 007232e3  8916                 mov dword ptr [esi], edx
// 007232e5  8b7124               mov esi, dword ptr [ecx + 0x24]
// 007232e8  8916                 mov dword ptr [esi], edx
// 007232ea  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 007232ed  03c2                 add eax, edx
// 007232ef  2bc2                 sub eax, edx
// 007232f1  8901                 mov dword ptr [ecx], eax
// 007232f3  5e                   pop esi
// 007232f4  c3                   ret 
// 007232f5  8b5114               mov edx, dword ptr [ecx + 0x14]
// 007232f8  c70200000000         mov dword ptr [edx], 0
// 007232fe  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00723301  c70000000000         mov dword ptr [eax], 0
// 00723307  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0072330a  c70100000000         mov dword ptr [ecx], 0
// 00723310  c3                   ret 
// copied from an identical function in another client (function ?init_put_area@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp
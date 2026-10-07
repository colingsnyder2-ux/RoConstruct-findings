// roc 2009-06 00706b10  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00706b10
//
// 00706b10  51                   push ecx
// 00706b11  56                   push esi
// 00706b12  8bf1                 mov esi, ecx
// 00706b14  8b460c               mov eax, dword ptr [esi + 0xc]
// 00706b17  85c0                 test eax, eax
// 00706b19  741f                 je 0x706b3a
// 00706b1b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00706b1f  51                   push ecx
// 00706b20  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00706b23  8d5608               lea edx, [esi + 8]
// 00706b26  52                   push edx
// 00706b27  51                   push ecx
// 00706b28  50                   push eax
// 00706b29  e882f9ffff           call 0x7064b0
// 00706b2e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00706b31  52                   push edx
// 00706b32  e8fb1e0100           call 0x718a32
// 00706b37  83c414               add esp, 0x14
// 00706b3a  8b06                 mov eax, dword ptr [esi]
// 00706b3c  50                   push eax
// 00706b3d  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00706b44  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00706b4b  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00706b52  e8db1e0100           call 0x718a32
// 00706b57  83c404               add esp, 4
// 00706b5a  5e                   pop esi
// 00706b5b  59                   pop ecx
// 00706b5c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp

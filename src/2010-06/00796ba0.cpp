// roc 2010-06 00796ba0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00796ba0
//
// 00796ba0  51                   push ecx
// 00796ba1  56                   push esi
// 00796ba2  8bf1                 mov esi, ecx
// 00796ba4  8b460c               mov eax, dword ptr [esi + 0xc]
// 00796ba7  85c0                 test eax, eax
// 00796ba9  741f                 je 0x796bca
// 00796bab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00796baf  51                   push ecx
// 00796bb0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00796bb3  8d5608               lea edx, [esi + 8]
// 00796bb6  52                   push edx
// 00796bb7  51                   push ecx
// 00796bb8  50                   push eax
// 00796bb9  e822faffff           call 0x7965e0
// 00796bbe  8b560c               mov edx, dword ptr [esi + 0xc]
// 00796bc1  52                   push edx
// 00796bc2  e8d30d0100           call 0x7a799a
// 00796bc7  83c414               add esp, 0x14
// 00796bca  8b06                 mov eax, dword ptr [esi]
// 00796bcc  50                   push eax
// 00796bcd  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00796bd4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00796bdb  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00796be2  e8b30d0100           call 0x7a799a
// 00796be7  83c404               add esp, 4
// 00796bea  5e                   pop esi
// 00796beb  59                   pop ecx
// 00796bec  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp

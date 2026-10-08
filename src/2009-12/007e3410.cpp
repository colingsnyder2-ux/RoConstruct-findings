// roc 2009-12 007e3410  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e3410
//
// 007e3410  51                   push ecx
// 007e3411  56                   push esi
// 007e3412  8bf1                 mov esi, ecx
// 007e3414  8b460c               mov eax, dword ptr [esi + 0xc]
// 007e3417  85c0                 test eax, eax
// 007e3419  741f                 je 0x7e343a
// 007e341b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007e341f  51                   push ecx
// 007e3420  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007e3423  8d5608               lea edx, [esi + 8]
// 007e3426  52                   push edx
// 007e3427  51                   push ecx
// 007e3428  50                   push eax
// 007e3429  e8b2faffff           call 0x7e2ee0
// 007e342e  8b560c               mov edx, dword ptr [esi + 0xc]
// 007e3431  52                   push edx
// 007e3432  e823040100           call 0x7f385a
// 007e3437  83c414               add esp, 0x14
// 007e343a  8b06                 mov eax, dword ptr [esi]
// 007e343c  50                   push eax
// 007e343d  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007e3444  c7461000000000       mov dword ptr [esi + 0x10], 0
// 007e344b  c7461400000000       mov dword ptr [esi + 0x14], 0
// 007e3452  e803040100           call 0x7f385a
// 007e3457  83c404               add esp, 4
// 007e345a  5e                   pop esi
// 007e345b  59                   pop ecx
// 007e345c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp

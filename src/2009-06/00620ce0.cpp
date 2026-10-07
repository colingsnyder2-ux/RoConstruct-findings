// roc 2009-06 00620ce0  unit: TextXmlParser  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00620ce0
//
// 00620ce0  51                   push ecx
// 00620ce1  56                   push esi
// 00620ce2  8bf1                 mov esi, ecx
// 00620ce4  8b460c               mov eax, dword ptr [esi + 0xc]
// 00620ce7  85c0                 test eax, eax
// 00620ce9  741f                 je 0x620d0a
// 00620ceb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00620cef  51                   push ecx
// 00620cf0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00620cf3  8d5608               lea edx, [esi + 8]
// 00620cf6  52                   push edx
// 00620cf7  51                   push ecx
// 00620cf8  50                   push eax
// 00620cf9  e872feffff           call 0x620b70
// 00620cfe  8b560c               mov edx, dword ptr [esi + 0xc]
// 00620d01  52                   push edx
// 00620d02  e82b7d0f00           call 0x718a32
// 00620d07  83c414               add esp, 0x14
// 00620d0a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00620d11  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00620d18  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00620d1f  5e                   pop esi
// 00620d20  59                   pop ecx
// 00620d21  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp

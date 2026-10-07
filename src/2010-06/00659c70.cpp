// roc 2010-06 00659c70  unit: RBX::VKeyframeSequence::?$BoundFuncDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00659c70
//
// 00659c70  51                   push ecx
// 00659c71  56                   push esi
// 00659c72  8bf1                 mov esi, ecx
// 00659c74  8b460c               mov eax, dword ptr [esi + 0xc]
// 00659c77  85c0                 test eax, eax
// 00659c79  741f                 je 0x659c9a
// 00659c7b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00659c7f  51                   push ecx
// 00659c80  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00659c83  8d5608               lea edx, [esi + 8]
// 00659c86  52                   push edx
// 00659c87  51                   push ecx
// 00659c88  50                   push eax
// 00659c89  e8c2edffff           call 0x658a50
// 00659c8e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00659c91  52                   push edx
// 00659c92  e803dd1400           call 0x7a799a
// 00659c97  83c414               add esp, 0x14
// 00659c9a  8b06                 mov eax, dword ptr [esi]
// 00659c9c  50                   push eax
// 00659c9d  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00659ca4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00659cab  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00659cb2  e8e3dc1400           call 0x7a799a
// 00659cb7  83c404               add esp, 4
// 00659cba  5e                   pop esi
// 00659cbb  59                   pop ecx
// 00659cbc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp

// roc 2007-03 0042a740  unit: seg_00420000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042a740
//
// 0042a740  51                   push ecx
// 0042a741  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042a745  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0042a749  c6042400             mov byte ptr [esp], 0
// 0042a74d  8b0424               mov eax, dword ptr [esp]
// 0042a750  50                   push eax
// 0042a751  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042a755  51                   push ecx
// 0042a756  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042a75a  52                   push edx
// 0042a75b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042a75f  50                   push eax
// 0042a760  51                   push ecx
// 0042a761  52                   push edx
// 0042a762  e849f9ffff           call 0x42a0b0
// 0042a767  83c41c               add esp, 0x1c
// 0042a76a  c3                   ret 
// library rbxgs/v8world\MacroTypes.cpp (function ??$unchecked_copy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@stdext@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MacroTypes.cpp

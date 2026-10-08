// roc 2007-03 00444810  unit: seg_00440000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444810
//
// 00444810  51                   push ecx
// 00444811  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00444815  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00444819  c6042400             mov byte ptr [esp], 0
// 0044481d  8b0424               mov eax, dword ptr [esp]
// 00444820  50                   push eax
// 00444821  8b442414             mov eax, dword ptr [esp + 0x14]
// 00444825  51                   push ecx
// 00444826  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044482a  52                   push edx
// 0044482b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0044482f  50                   push eax
// 00444830  51                   push ecx
// 00444831  52                   push edx
// 00444832  e849feffff           call 0x444680
// 00444837  83c41c               add esp, 0x1c
// 0044483a  c3                   ret 
// library rbxgs/v8world\MacroTypes.cpp (function ??$unchecked_copy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@stdext@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MacroTypes.cpp

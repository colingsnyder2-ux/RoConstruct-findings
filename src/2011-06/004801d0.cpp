// roc 2011-06 004801d0  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004801d0
//
// 004801d0  51                   push ecx
// 004801d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004801d5  33c0                 xor eax, eax
// 004801d7  890424               mov dword ptr [esp], eax
// 004801da  56                   push esi
// 004801db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004801df  88442404             mov byte ptr [esp + 4], al
// 004801e3  8b442404             mov eax, dword ptr [esp + 4]
// 004801e7  50                   push eax
// 004801e8  51                   push ecx
// 004801e9  8bce                 mov ecx, esi
// 004801eb  e820fbffff           call 0x47fd10
// 004801f0  8bc6                 mov eax, esi
// 004801f2  5e                   pop esi
// 004801f3  59                   pop ecx
// 004801f4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

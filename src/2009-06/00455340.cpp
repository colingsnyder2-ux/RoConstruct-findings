// roc 2009-06 00455340  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00455340
//
// 00455340  51                   push ecx
// 00455341  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00455345  33c0                 xor eax, eax
// 00455347  890424               mov dword ptr [esp], eax
// 0045534a  56                   push esi
// 0045534b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045534f  88442404             mov byte ptr [esp + 4], al
// 00455353  8b442404             mov eax, dword ptr [esp + 4]
// 00455357  50                   push eax
// 00455358  51                   push ecx
// 00455359  8bce                 mov ecx, esi
// 0045535b  e850f3ffff           call 0x4546b0
// 00455360  8bc6                 mov eax, esi
// 00455362  5e                   pop esi
// 00455363  59                   pop ecx
// 00455364  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

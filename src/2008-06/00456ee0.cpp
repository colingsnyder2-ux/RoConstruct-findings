// roc 2008-06 00456ee0  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456ee0
//
// 00456ee0  51                   push ecx
// 00456ee1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00456ee5  33c0                 xor eax, eax
// 00456ee7  890424               mov dword ptr [esp], eax
// 00456eea  56                   push esi
// 00456eeb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00456eef  88442404             mov byte ptr [esp + 4], al
// 00456ef3  8b442404             mov eax, dword ptr [esp + 4]
// 00456ef7  50                   push eax
// 00456ef8  51                   push ecx
// 00456ef9  8bce                 mov ecx, esi
// 00456efb  e860f4ffff           call 0x456360
// 00456f00  8bc6                 mov eax, esi
// 00456f02  5e                   pop esi
// 00456f03  59                   pop ecx
// 00456f04  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

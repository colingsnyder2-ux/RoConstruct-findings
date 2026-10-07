// roc 2010-06 00462250  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00462250
//
// 00462250  51                   push ecx
// 00462251  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00462255  33c0                 xor eax, eax
// 00462257  890424               mov dword ptr [esp], eax
// 0046225a  56                   push esi
// 0046225b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046225f  88442404             mov byte ptr [esp + 4], al
// 00462263  8b442404             mov eax, dword ptr [esp + 4]
// 00462267  50                   push eax
// 00462268  51                   push ecx
// 00462269  8bce                 mov ecx, esi
// 0046226b  e860f3ffff           call 0x4615d0
// 00462270  8bc6                 mov eax, esi
// 00462272  5e                   pop esi
// 00462273  59                   pop ecx
// 00462274  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

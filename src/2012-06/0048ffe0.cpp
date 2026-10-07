// roc 2012-06 0048ffe0  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048ffe0
//
// 0048ffe0  51                   push ecx
// 0048ffe1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048ffe5  33c0                 xor eax, eax
// 0048ffe7  890424               mov dword ptr [esp], eax
// 0048ffea  56                   push esi
// 0048ffeb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048ffef  88442404             mov byte ptr [esp + 4], al
// 0048fff3  8b442404             mov eax, dword ptr [esp + 4]
// 0048fff7  50                   push eax
// 0048fff8  51                   push ecx
// 0048fff9  8bce                 mov ecx, esi
// 0048fffb  e870faffff           call 0x48fa70
// 00490000  8bc6                 mov eax, esi
// 00490002  5e                   pop esi
// 00490003  59                   pop ecx
// 00490004  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2009-12 0045cc70  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045cc70
//
// 0045cc70  51                   push ecx
// 0045cc71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045cc75  33c0                 xor eax, eax
// 0045cc77  890424               mov dword ptr [esp], eax
// 0045cc7a  56                   push esi
// 0045cc7b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045cc7f  88442404             mov byte ptr [esp + 4], al
// 0045cc83  8b442404             mov eax, dword ptr [esp + 4]
// 0045cc87  50                   push eax
// 0045cc88  51                   push ecx
// 0045cc89  8bce                 mov ecx, esi
// 0045cc8b  e810f4ffff           call 0x45c0a0
// 0045cc90  8bc6                 mov eax, esi
// 0045cc92  5e                   pop esi
// 0045cc93  59                   pop ecx
// 0045cc94  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2007-03 00485f40  unit: seg_00480000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00485f40
//
// 00485f40  51                   push ecx
// 00485f41  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00485f45  33c0                 xor eax, eax
// 00485f47  890424               mov dword ptr [esp], eax
// 00485f4a  56                   push esi
// 00485f4b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00485f4f  88442404             mov byte ptr [esp + 4], al
// 00485f53  8b442404             mov eax, dword ptr [esp + 4]
// 00485f57  50                   push eax
// 00485f58  51                   push ecx
// 00485f59  8bce                 mov ecx, esi
// 00485f5b  e8f0faffff           call 0x485a50
// 00485f60  8bc6                 mov eax, esi
// 00485f62  5e                   pop esi
// 00485f63  59                   pop ecx
// 00485f64  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

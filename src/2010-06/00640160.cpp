// roc 2010-06 00640160  unit: RBX::VVisit::?$BoundFuncDesc  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00640160
//
// 00640160  51                   push ecx
// 00640161  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00640165  33c0                 xor eax, eax
// 00640167  890424               mov dword ptr [esp], eax
// 0064016a  56                   push esi
// 0064016b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064016f  88442404             mov byte ptr [esp + 4], al
// 00640173  8b442404             mov eax, dword ptr [esp + 4]
// 00640177  50                   push eax
// 00640178  51                   push ecx
// 00640179  8bce                 mov ecx, esi
// 0064017b  e810feffff           call 0x63ff90
// 00640180  8bc6                 mov eax, esi
// 00640182  5e                   pop esi
// 00640183  59                   pop ecx
// 00640184  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

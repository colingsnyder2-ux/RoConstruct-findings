// roc 2012-06 0088a5e0  unit: RBX::VRelativePanel::?$NonFactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0088a5e0
//
// 0088a5e0  51                   push ecx
// 0088a5e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088a5e5  33c0                 xor eax, eax
// 0088a5e7  890424               mov dword ptr [esp], eax
// 0088a5ea  56                   push esi
// 0088a5eb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0088a5ef  88442404             mov byte ptr [esp + 4], al
// 0088a5f3  8b442404             mov eax, dword ptr [esp + 4]
// 0088a5f7  50                   push eax
// 0088a5f8  51                   push ecx
// 0088a5f9  8bce                 mov ecx, esi
// 0088a5fb  e8b0fcffff           call 0x88a2b0
// 0088a600  8bc6                 mov eax, esi
// 0088a602  5e                   pop esi
// 0088a603  59                   pop ecx
// 0088a604  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

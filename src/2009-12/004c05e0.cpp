// roc 2009-12 004c05e0  unit: RBX::RbxParticleEmitter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c05e0
//
// 004c05e0  51                   push ecx
// 004c05e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c05e5  33c0                 xor eax, eax
// 004c05e7  890424               mov dword ptr [esp], eax
// 004c05ea  56                   push esi
// 004c05eb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c05ef  88442404             mov byte ptr [esp + 4], al
// 004c05f3  8b442404             mov eax, dword ptr [esp + 4]
// 004c05f7  50                   push eax
// 004c05f8  51                   push ecx
// 004c05f9  8bce                 mov ecx, esi
// 004c05fb  e880feffff           call 0x4c0480
// 004c0600  8bc6                 mov eax, esi
// 004c0602  5e                   pop esi
// 004c0603  59                   pop ecx
// 004c0604  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

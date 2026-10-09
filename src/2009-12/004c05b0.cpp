// roc 2009-12 004c05b0  unit: RBX::RbxParticleEmitter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c05b0
//
// 004c05b0  51                   push ecx
// 004c05b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c05b5  33c0                 xor eax, eax
// 004c05b7  890424               mov dword ptr [esp], eax
// 004c05ba  56                   push esi
// 004c05bb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c05bf  88442404             mov byte ptr [esp + 4], al
// 004c05c3  8b442404             mov eax, dword ptr [esp + 4]
// 004c05c7  50                   push eax
// 004c05c8  51                   push ecx
// 004c05c9  8bce                 mov ecx, esi
// 004c05cb  e820feffff           call 0x4c03f0
// 004c05d0  8bc6                 mov eax, esi
// 004c05d2  5e                   pop esi
// 004c05d3  59                   pop ecx
// 004c05d4  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

// roc 2007-08 0042ae20  unit: VCLuaFunction::?$CComObject  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ae20
//
// 0042ae20  51                   push ecx
// 0042ae21  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042ae25  33c0                 xor eax, eax
// 0042ae27  890424               mov dword ptr [esp], eax
// 0042ae2a  56                   push esi
// 0042ae2b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042ae2f  88442404             mov byte ptr [esp + 4], al
// 0042ae33  8b442404             mov eax, dword ptr [esp + 4]
// 0042ae37  50                   push eax
// 0042ae38  51                   push ecx
// 0042ae39  8bce                 mov ecx, esi
// 0042ae3b  e8d0f8ffff           call 0x42a710
// 0042ae40  8bc6                 mov eax, esi
// 0042ae42  5e                   pop esi
// 0042ae43  59                   pop ecx
// 0042ae44  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

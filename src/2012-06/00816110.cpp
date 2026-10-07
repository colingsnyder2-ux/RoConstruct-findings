// roc 2012-06 00816110  unit: RBX::JointsService  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00816110
//
// 00816110  51                   push ecx
// 00816111  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00816115  33c0                 xor eax, eax
// 00816117  890424               mov dword ptr [esp], eax
// 0081611a  56                   push esi
// 0081611b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0081611f  88442404             mov byte ptr [esp + 4], al
// 00816123  8b442404             mov eax, dword ptr [esp + 4]
// 00816127  50                   push eax
// 00816128  51                   push ecx
// 00816129  8bce                 mov ecx, esi
// 0081612b  e820ffffff           call 0x816050
// 00816130  8bc6                 mov eax, esi
// 00816132  5e                   pop esi
// 00816133  59                   pop ecx
// 00816134  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

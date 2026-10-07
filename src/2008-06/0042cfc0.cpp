// roc 2008-06 0042cfc0  unit: boost::any::H::?$holder  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042cfc0
//
// 0042cfc0  6aff                 push -1
// 0042cfc2  6811e87c00           push 0x7ce811
// 0042cfc7  64a100000000         mov eax, dword ptr fs:[0]
// 0042cfcd  50                   push eax
// 0042cfce  64892500000000       mov dword ptr fs:[0], esp
// 0042cfd5  51                   push ecx
// 0042cfd6  56                   push esi
// 0042cfd7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042cfdb  89742418             mov dword ptr [esp + 0x18], esi
// 0042cfdf  89742404             mov dword ptr [esp + 4], esi
// 0042cfe3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042cfeb  85f6                 test esi, esi
// 0042cfed  742e                 je 0x42d01d
// 0042cfef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042cff3  8b08                 mov ecx, dword ptr [eax]
// 0042cff5  890e                 mov dword ptr [esi], ecx
// 0042cff7  8b4804               mov ecx, dword ptr [eax + 4]
// 0042cffa  85c9                 test ecx, ecx
// 0042cffc  741a                 je 0x42d018
// 0042cffe  8b11                 mov edx, dword ptr [ecx]
// 0042d000  8b4208               mov eax, dword ptr [edx + 8]
// 0042d003  ffd0                 call eax
// 0042d005  894604               mov dword ptr [esi + 4], eax
// 0042d008  5e                   pop esi
// 0042d009  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042d00d  64890d00000000       mov dword ptr fs:[0], ecx
// 0042d014  83c410               add esp, 0x10
// 0042d017  c3                   ret 
// 0042d018  33c0                 xor eax, eax
// 0042d01a  894604               mov dword ptr [esi + 4], eax
// 0042d01d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042d021  5e                   pop esi
// 0042d022  64890d00000000       mov dword ptr fs:[0], ecx
// 0042d029  83c410               add esp, 0x10
// 0042d02c  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$_Construct@VValue@Reflection@RBX@@V123@@std@@YAXPAVValue@Reflection@RBX@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

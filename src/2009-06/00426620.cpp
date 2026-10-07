// roc 2009-06 00426620  unit: boost::any::H::?$holder  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426620
//
// 00426620  56                   push esi
// 00426621  8b742408             mov esi, dword ptr [esp + 8]
// 00426625  57                   push edi
// 00426626  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042662a  3bf7                 cmp esi, edi
// 0042662c  7418                 je 0x426646
// 0042662e  8bff                 mov edi, edi
// 00426630  8b4e04               mov ecx, dword ptr [esi + 4]
// 00426633  85c9                 test ecx, ecx
// 00426635  7408                 je 0x42663f
// 00426637  8b01                 mov eax, dword ptr [ecx]
// 00426639  8b10                 mov edx, dword ptr [eax]
// 0042663b  6a01                 push 1
// 0042663d  ffd2                 call edx
// 0042663f  83c608               add esi, 8
// 00426642  3bf7                 cmp esi, edi
// 00426644  75ea                 jne 0x426630
// 00426646  5f                   pop edi
// 00426647  5e                   pop esi
// 00426648  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Destroy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXPAVValue@Reflection@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

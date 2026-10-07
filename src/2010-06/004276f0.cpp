// roc 2010-06 004276f0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004276f0
//
// 004276f0  56                   push esi
// 004276f1  8b742408             mov esi, dword ptr [esp + 8]
// 004276f5  57                   push edi
// 004276f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004276fa  3bf7                 cmp esi, edi
// 004276fc  7418                 je 0x427716
// 004276fe  8bff                 mov edi, edi
// 00427700  8b4e04               mov ecx, dword ptr [esi + 4]
// 00427703  85c9                 test ecx, ecx
// 00427705  7408                 je 0x42770f
// 00427707  8b01                 mov eax, dword ptr [ecx]
// 00427709  8b10                 mov edx, dword ptr [eax]
// 0042770b  6a01                 push 1
// 0042770d  ffd2                 call edx
// 0042770f  83c608               add esi, 8
// 00427712  3bf7                 cmp esi, edi
// 00427714  75ea                 jne 0x427700
// 00427716  5f                   pop edi
// 00427717  5e                   pop esi
// 00427718  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Destroy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXPAVValue@Reflection@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

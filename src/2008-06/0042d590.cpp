// from server: 100% by tester
// roc 2007-03 0042e9f0  unit: seg_00420000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e9f0
//
// 0042e9f0  56                   push esi
// 0042e9f1  8b742408             mov esi, dword ptr [esp + 8]
// 0042e9f5  57                   push edi
// 0042e9f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042e9fa  3bf7                 cmp esi, edi
// 0042e9fc  7418                 je 0x42ea16
// 0042e9fe  8bff                 mov edi, edi
// 0042ea00  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042ea03  85c9                 test ecx, ecx
// 0042ea05  7408                 je 0x42ea0f
// 0042ea07  8b01                 mov eax, dword ptr [ecx]
// 0042ea09  8b10                 mov edx, dword ptr [eax]
// 0042ea0b  6a01                 push 1
// 0042ea0d  ffd2                 call edx
// 0042ea0f  83c608               add esi, 8
// 0042ea12  3bf7                 cmp esi, edi
// 0042ea14  75ea                 jne 0x42ea00
// 0042ea16  5f                   pop edi
// 0042ea17  5e                   pop esi
// 0042ea18  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Destroy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXPAVValue@Reflection@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

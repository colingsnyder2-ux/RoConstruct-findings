// roc 2011-06 00418aa0  unit: VCRbxObject::?$CComObjectNoLock  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418aa0
//
// 00418aa0  56                   push esi
// 00418aa1  8b742408             mov esi, dword ptr [esp + 8]
// 00418aa5  57                   push edi
// 00418aa6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00418aaa  3bf7                 cmp esi, edi
// 00418aac  7418                 je 0x418ac6
// 00418aae  8bff                 mov edi, edi
// 00418ab0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00418ab3  85c9                 test ecx, ecx
// 00418ab5  7408                 je 0x418abf
// 00418ab7  8b01                 mov eax, dword ptr [ecx]
// 00418ab9  8b10                 mov edx, dword ptr [eax]
// 00418abb  6a01                 push 1
// 00418abd  ffd2                 call edx
// 00418abf  83c608               add esi, 8
// 00418ac2  3bf7                 cmp esi, edi
// 00418ac4  75ea                 jne 0x418ab0
// 00418ac6  5f                   pop edi
// 00418ac7  5e                   pop esi
// 00418ac8  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Destroy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXPAVValue@Reflection@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

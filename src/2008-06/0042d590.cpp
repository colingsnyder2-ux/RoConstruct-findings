// roc 2008-06 0042d590  unit: boost::any::H::?$holder  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d590
//
// 0042d590  56                   push esi
// 0042d591  8b742408             mov esi, dword ptr [esp + 8]
// 0042d595  57                   push edi
// 0042d596  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042d59a  3bf7                 cmp esi, edi
// 0042d59c  7418                 je 0x42d5b6
// 0042d59e  8bff                 mov edi, edi
// 0042d5a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042d5a3  85c9                 test ecx, ecx
// 0042d5a5  7408                 je 0x42d5af
// 0042d5a7  8b01                 mov eax, dword ptr [ecx]
// 0042d5a9  8b10                 mov edx, dword ptr [eax]
// 0042d5ab  6a01                 push 1
// 0042d5ad  ffd2                 call edx
// 0042d5af  83c608               add esi, 8
// 0042d5b2  3bf7                 cmp esi, edi
// 0042d5b4  75ea                 jne 0x42d5a0
// 0042d5b6  5f                   pop edi
// 0042d5b7  5e                   pop esi
// 0042d5b8  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Destroy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXPAVValue@Reflection@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

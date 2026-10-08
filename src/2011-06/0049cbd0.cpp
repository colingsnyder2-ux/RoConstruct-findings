// roc 2011-06 0049cbd0  unit: VCWorkspace::?$CComObject  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049cbd0
//
// 0049cbd0  56                   push esi
// 0049cbd1  8b31                 mov esi, dword ptr [ecx]
// 0049cbd3  85f6                 test esi, esi
// 0049cbd5  743d                 je 0x49cc14
// 0049cbd7  8b4604               mov eax, dword ptr [esi + 4]
// 0049cbda  85c0                 test eax, eax
// 0049cbdc  7418                 je 0x49cbf6
// 0049cbde  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049cbe1  51                   push ecx
// 0049cbe2  50                   push eax
// 0049cbe3  8bce                 mov ecx, esi
// 0049cbe5  e8b6bef7ff           call 0x418aa0
// 0049cbea  8b5604               mov edx, dword ptr [esi + 4]
// 0049cbed  52                   push edx
// 0049cbee  e865d43600           call 0x80a058
// 0049cbf3  83c404               add esp, 4
// 0049cbf6  56                   push esi
// 0049cbf7  c7460400000000       mov dword ptr [esi + 4], 0
// 0049cbfe  c7460800000000       mov dword ptr [esi + 8], 0
// 0049cc05  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0049cc0c  e847d43600           call 0x80a058
// 0049cc11  83c404               add esp, 4
// 0049cc14  5e                   pop esi
// 0049cc15  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

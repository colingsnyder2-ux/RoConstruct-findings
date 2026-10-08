// roc 2007-03 0042edb0  unit: seg_00420000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042edb0
//
// 0042edb0  56                   push esi
// 0042edb1  8b31                 mov esi, dword ptr [ecx]
// 0042edb3  85f6                 test esi, esi
// 0042edb5  743d                 je 0x42edf4
// 0042edb7  8b4604               mov eax, dword ptr [esi + 4]
// 0042edba  85c0                 test eax, eax
// 0042edbc  7418                 je 0x42edd6
// 0042edbe  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042edc1  51                   push ecx
// 0042edc2  50                   push eax
// 0042edc3  8bce                 mov ecx, esi
// 0042edc5  e826fcffff           call 0x42e9f0
// 0042edca  8b5604               mov edx, dword ptr [esi + 4]
// 0042edcd  52                   push edx
// 0042edce  e81df31e00           call 0x61e0f0
// 0042edd3  83c404               add esp, 4
// 0042edd6  56                   push esi
// 0042edd7  c7460400000000       mov dword ptr [esi + 4], 0
// 0042edde  c7460800000000       mov dword ptr [esi + 8], 0
// 0042ede5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042edec  e8fff21e00           call 0x61e0f0
// 0042edf1  83c404               add esp, 4
// 0042edf4  5e                   pop esi
// 0042edf5  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

// roc 2007-03 0053b790  unit: seg_00530000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b790
//
// 0053b790  51                   push ecx
// 0053b791  56                   push esi
// 0053b792  8bf1                 mov esi, ecx
// 0053b794  8b4604               mov eax, dword ptr [esi + 4]
// 0053b797  85c0                 test eax, eax
// 0053b799  741c                 je 0x53b7b7
// 0053b79b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053b79f  8b5608               mov edx, dword ptr [esi + 8]
// 0053b7a2  51                   push ecx
// 0053b7a3  56                   push esi
// 0053b7a4  52                   push edx
// 0053b7a5  50                   push eax
// 0053b7a6  e805efffff           call 0x53a6b0
// 0053b7ab  8b4604               mov eax, dword ptr [esi + 4]
// 0053b7ae  50                   push eax
// 0053b7af  e83c290e00           call 0x61e0f0
// 0053b7b4  83c414               add esp, 0x14
// 0053b7b7  c7460400000000       mov dword ptr [esi + 4], 0
// 0053b7be  c7460800000000       mov dword ptr [esi + 8], 0
// 0053b7c5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053b7cc  5e                   pop esi
// 0053b7cd  59                   pop ecx
// 0053b7ce  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

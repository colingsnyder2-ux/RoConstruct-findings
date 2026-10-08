// roc 2007-03 00579890  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00579890
//
// 00579890  51                   push ecx
// 00579891  56                   push esi
// 00579892  8bf1                 mov esi, ecx
// 00579894  8b4604               mov eax, dword ptr [esi + 4]
// 00579897  85c0                 test eax, eax
// 00579899  741c                 je 0x5798b7
// 0057989b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057989f  8b5608               mov edx, dword ptr [esi + 8]
// 005798a2  51                   push ecx
// 005798a3  56                   push esi
// 005798a4  52                   push edx
// 005798a5  50                   push eax
// 005798a6  e835b1ffff           call 0x5749e0
// 005798ab  8b4604               mov eax, dword ptr [esi + 4]
// 005798ae  50                   push eax
// 005798af  e83c480a00           call 0x61e0f0
// 005798b4  83c414               add esp, 0x14
// 005798b7  c7460400000000       mov dword ptr [esi + 4], 0
// 005798be  c7460800000000       mov dword ptr [esi + 8], 0
// 005798c5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005798cc  5e                   pop esi
// 005798cd  59                   pop ecx
// 005798ce  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

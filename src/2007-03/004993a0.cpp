// roc 2007-03 004993a0  unit: seg_00490000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004993a0
//
// 004993a0  51                   push ecx
// 004993a1  56                   push esi
// 004993a2  8bf1                 mov esi, ecx
// 004993a4  8b4604               mov eax, dword ptr [esi + 4]
// 004993a7  85c0                 test eax, eax
// 004993a9  741c                 je 0x4993c7
// 004993ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004993af  8b5608               mov edx, dword ptr [esi + 8]
// 004993b2  51                   push ecx
// 004993b3  56                   push esi
// 004993b4  52                   push edx
// 004993b5  50                   push eax
// 004993b6  e8d5feffff           call 0x499290
// 004993bb  8b4604               mov eax, dword ptr [esi + 4]
// 004993be  50                   push eax
// 004993bf  e82c4d1800           call 0x61e0f0
// 004993c4  83c414               add esp, 0x14
// 004993c7  c7460400000000       mov dword ptr [esi + 4], 0
// 004993ce  c7460800000000       mov dword ptr [esi + 8], 0
// 004993d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004993dc  5e                   pop esi
// 004993dd  59                   pop ecx
// 004993de  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

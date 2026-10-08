// roc 2007-03 004e6060  unit: seg_004e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e6060
//
// 004e6060  51                   push ecx
// 004e6061  56                   push esi
// 004e6062  8bf1                 mov esi, ecx
// 004e6064  8b4604               mov eax, dword ptr [esi + 4]
// 004e6067  85c0                 test eax, eax
// 004e6069  741c                 je 0x4e6087
// 004e606b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e606f  8b5608               mov edx, dword ptr [esi + 8]
// 004e6072  51                   push ecx
// 004e6073  56                   push esi
// 004e6074  52                   push edx
// 004e6075  50                   push eax
// 004e6076  e855f7ffff           call 0x4e57d0
// 004e607b  8b4604               mov eax, dword ptr [esi + 4]
// 004e607e  50                   push eax
// 004e607f  e86c801300           call 0x61e0f0
// 004e6084  83c414               add esp, 0x14
// 004e6087  c7460400000000       mov dword ptr [esi + 4], 0
// 004e608e  c7460800000000       mov dword ptr [esi + 8], 0
// 004e6095  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004e609c  5e                   pop esi
// 004e609d  59                   pop ecx
// 004e609e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

// roc 2007-03 004e3f40  unit: seg_004e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3f40
//
// 004e3f40  51                   push ecx
// 004e3f41  56                   push esi
// 004e3f42  8bf1                 mov esi, ecx
// 004e3f44  8b4604               mov eax, dword ptr [esi + 4]
// 004e3f47  85c0                 test eax, eax
// 004e3f49  741c                 je 0x4e3f67
// 004e3f4b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e3f4f  8b5608               mov edx, dword ptr [esi + 8]
// 004e3f52  51                   push ecx
// 004e3f53  56                   push esi
// 004e3f54  52                   push edx
// 004e3f55  50                   push eax
// 004e3f56  e865f8ffff           call 0x4e37c0
// 004e3f5b  8b4604               mov eax, dword ptr [esi + 4]
// 004e3f5e  50                   push eax
// 004e3f5f  e88ca11300           call 0x61e0f0
// 004e3f64  83c414               add esp, 0x14
// 004e3f67  c7460400000000       mov dword ptr [esi + 4], 0
// 004e3f6e  c7460800000000       mov dword ptr [esi + 8], 0
// 004e3f75  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004e3f7c  5e                   pop esi
// 004e3f7d  59                   pop ecx
// 004e3f7e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

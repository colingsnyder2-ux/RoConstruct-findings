// roc 2007-03 0060ad10  unit: seg_00600000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060ad10
//
// 0060ad10  51                   push ecx
// 0060ad11  56                   push esi
// 0060ad12  8bf1                 mov esi, ecx
// 0060ad14  8b4604               mov eax, dword ptr [esi + 4]
// 0060ad17  85c0                 test eax, eax
// 0060ad19  741c                 je 0x60ad37
// 0060ad1b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060ad1f  8b5608               mov edx, dword ptr [esi + 8]
// 0060ad22  51                   push ecx
// 0060ad23  56                   push esi
// 0060ad24  52                   push edx
// 0060ad25  50                   push eax
// 0060ad26  e8b5e4ffff           call 0x6091e0
// 0060ad2b  8b4604               mov eax, dword ptr [esi + 4]
// 0060ad2e  50                   push eax
// 0060ad2f  e8bc330100           call 0x61e0f0
// 0060ad34  83c414               add esp, 0x14
// 0060ad37  c7460400000000       mov dword ptr [esi + 4], 0
// 0060ad3e  c7460800000000       mov dword ptr [esi + 8], 0
// 0060ad45  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0060ad4c  5e                   pop esi
// 0060ad4d  59                   pop ecx
// 0060ad4e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

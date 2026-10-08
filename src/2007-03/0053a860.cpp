// roc 2007-03 0053a860  unit: seg_00530000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a860
//
// 0053a860  51                   push ecx
// 0053a861  56                   push esi
// 0053a862  8bf1                 mov esi, ecx
// 0053a864  8b4604               mov eax, dword ptr [esi + 4]
// 0053a867  85c0                 test eax, eax
// 0053a869  741c                 je 0x53a887
// 0053a86b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053a86f  8b5608               mov edx, dword ptr [esi + 8]
// 0053a872  51                   push ecx
// 0053a873  56                   push esi
// 0053a874  52                   push edx
// 0053a875  50                   push eax
// 0053a876  e87551f6ff           call 0x49f9f0
// 0053a87b  8b4604               mov eax, dword ptr [esi + 4]
// 0053a87e  50                   push eax
// 0053a87f  e86c380e00           call 0x61e0f0
// 0053a884  83c414               add esp, 0x14
// 0053a887  c7460400000000       mov dword ptr [esi + 4], 0
// 0053a88e  c7460800000000       mov dword ptr [esi + 8], 0
// 0053a895  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053a89c  5e                   pop esi
// 0053a89d  59                   pop ecx
// 0053a89e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?_Tidy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

// roc 2007-03 0053c360  unit: seg_00530000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053c360
//
// 0053c360  57                   push edi
// 0053c361  8b7c2408             mov edi, dword ptr [esp + 8]
// 0053c365  85ff                 test edi, edi
// 0053c367  7446                 je 0x53c3af
// 0053c369  8b4708               mov eax, dword ptr [edi + 8]
// 0053c36c  85c0                 test eax, eax
// 0053c36e  56                   push esi
// 0053c36f  8d7704               lea esi, [edi + 4]
// 0053c372  741c                 je 0x53c390
// 0053c374  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053c378  8b5608               mov edx, dword ptr [esi + 8]
// 0053c37b  51                   push ecx
// 0053c37c  56                   push esi
// 0053c37d  52                   push edx
// 0053c37e  50                   push eax
// 0053c37f  e82ce3ffff           call 0x53a6b0
// 0053c384  8b4604               mov eax, dword ptr [esi + 4]
// 0053c387  50                   push eax
// 0053c388  e8631d0e00           call 0x61e0f0
// 0053c38d  83c414               add esp, 0x14
// 0053c390  57                   push edi
// 0053c391  c7460400000000       mov dword ptr [esi + 4], 0
// 0053c398  c7460800000000       mov dword ptr [esi + 8], 0
// 0053c39f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053c3a6  e8451d0e00           call 0x61e0f0
// 0053c3ab  83c404               add esp, 4
// 0053c3ae  5e                   pop esi
// 0053c3af  5f                   pop edi
// 0053c3b0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??$checked_delete@VYieldingThreads@Lua@RBX@@@boost@@YAXPAVYieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

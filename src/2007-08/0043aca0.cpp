// roc 2007-08 0043aca0  unit: CSelectionPropGrid  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043aca0
//
// 0043aca0  51                   push ecx
// 0043aca1  8b4108               mov eax, dword ptr [ecx + 8]
// 0043aca4  85c0                 test eax, eax
// 0043aca6  56                   push esi
// 0043aca7  8d7104               lea esi, [ecx + 4]
// 0043acaa  741c                 je 0x43acc8
// 0043acac  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043acb0  8b5608               mov edx, dword ptr [esi + 8]
// 0043acb3  51                   push ecx
// 0043acb4  56                   push esi
// 0043acb5  52                   push edx
// 0043acb6  50                   push eax
// 0043acb7  e8942efdff           call 0x40db50
// 0043acbc  8b4604               mov eax, dword ptr [esi + 4]
// 0043acbf  50                   push eax
// 0043acc0  e89d4f1f00           call 0x62fc62
// 0043acc5  83c414               add esp, 0x14
// 0043acc8  c7460400000000       mov dword ptr [esi + 4], 0
// 0043accf  c7460800000000       mov dword ptr [esi + 8], 0
// 0043acd6  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043acdd  5e                   pop esi
// 0043acde  59                   pop ecx
// 0043acdf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1YieldingThreads@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

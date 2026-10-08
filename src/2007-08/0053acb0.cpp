// roc 2007-08 0053acb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053acb0
//
// 0053acb0  57                   push edi
// 0053acb1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0053acb5  85ff                 test edi, edi
// 0053acb7  7446                 je 0x53acff
// 0053acb9  8b4708               mov eax, dword ptr [edi + 8]
// 0053acbc  85c0                 test eax, eax
// 0053acbe  56                   push esi
// 0053acbf  8d7704               lea esi, [edi + 4]
// 0053acc2  741c                 je 0x53ace0
// 0053acc4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053acc8  8b5608               mov edx, dword ptr [esi + 8]
// 0053accb  51                   push ecx
// 0053accc  56                   push esi
// 0053accd  52                   push edx
// 0053acce  50                   push eax
// 0053accf  e80ce2ffff           call 0x538ee0
// 0053acd4  8b4604               mov eax, dword ptr [esi + 4]
// 0053acd7  50                   push eax
// 0053acd8  e8854f0f00           call 0x62fc62
// 0053acdd  83c414               add esp, 0x14
// 0053ace0  57                   push edi
// 0053ace1  c7460400000000       mov dword ptr [esi + 4], 0
// 0053ace8  c7460800000000       mov dword ptr [esi + 8], 0
// 0053acef  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053acf6  e8674f0f00           call 0x62fc62
// 0053acfb  83c404               add esp, 4
// 0053acfe  5e                   pop esi
// 0053acff  5f                   pop edi
// 0053ad00  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??$checked_delete@VYieldingThreads@Lua@RBX@@@boost@@YAXPAVYieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

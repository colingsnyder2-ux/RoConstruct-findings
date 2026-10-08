// roc 2007-08 00443c60  unit: RBX::MergeBinder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443c60
//
// 00443c60  51                   push ecx
// 00443c61  8b4108               mov eax, dword ptr [ecx + 8]
// 00443c64  85c0                 test eax, eax
// 00443c66  56                   push esi
// 00443c67  8d7104               lea esi, [ecx + 4]
// 00443c6a  741c                 je 0x443c88
// 00443c6c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00443c70  8b5608               mov edx, dword ptr [esi + 8]
// 00443c73  51                   push ecx
// 00443c74  56                   push esi
// 00443c75  52                   push edx
// 00443c76  50                   push eax
// 00443c77  e8d4f7ffff           call 0x443450
// 00443c7c  8b4604               mov eax, dword ptr [esi + 4]
// 00443c7f  50                   push eax
// 00443c80  e8ddbf1e00           call 0x62fc62
// 00443c85  83c414               add esp, 0x14
// 00443c88  c7460400000000       mov dword ptr [esi + 4], 0
// 00443c8f  c7460800000000       mov dword ptr [esi + 8], 0
// 00443c96  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00443c9d  5e                   pop esi
// 00443c9e  59                   pop ecx
// 00443c9f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1YieldingThreads@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

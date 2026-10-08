// roc 2007-08 004a2740  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a2740
//
// 004a2740  51                   push ecx
// 004a2741  8b4108               mov eax, dword ptr [ecx + 8]
// 004a2744  85c0                 test eax, eax
// 004a2746  56                   push esi
// 004a2747  8d7104               lea esi, [ecx + 4]
// 004a274a  741c                 je 0x4a2768
// 004a274c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a2750  8b5608               mov edx, dword ptr [esi + 8]
// 004a2753  51                   push ecx
// 004a2754  56                   push esi
// 004a2755  52                   push edx
// 004a2756  50                   push eax
// 004a2757  e844f4ffff           call 0x4a1ba0
// 004a275c  8b4604               mov eax, dword ptr [esi + 4]
// 004a275f  50                   push eax
// 004a2760  e8fdd41800           call 0x62fc62
// 004a2765  83c414               add esp, 0x14
// 004a2768  c7460400000000       mov dword ptr [esi + 4], 0
// 004a276f  c7460800000000       mov dword ptr [esi + 8], 0
// 004a2776  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004a277d  5e                   pop esi
// 004a277e  59                   pop ecx
// 004a277f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1YieldingThreads@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

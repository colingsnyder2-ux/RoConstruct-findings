// roc 2007-03 00499810  unit: seg_00490000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499810
//
// 00499810  51                   push ecx
// 00499811  8b4108               mov eax, dword ptr [ecx + 8]
// 00499814  85c0                 test eax, eax
// 00499816  56                   push esi
// 00499817  8d7104               lea esi, [ecx + 4]
// 0049981a  741c                 je 0x499838
// 0049981c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00499820  8b5608               mov edx, dword ptr [esi + 8]
// 00499823  51                   push ecx
// 00499824  56                   push esi
// 00499825  52                   push edx
// 00499826  50                   push eax
// 00499827  e864faffff           call 0x499290
// 0049982c  8b4604               mov eax, dword ptr [esi + 4]
// 0049982f  50                   push eax
// 00499830  e8bb481800           call 0x61e0f0
// 00499835  83c414               add esp, 0x14
// 00499838  c7460400000000       mov dword ptr [esi + 4], 0
// 0049983f  c7460800000000       mov dword ptr [esi + 8], 0
// 00499846  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0049984d  5e                   pop esi
// 0049984e  59                   pop ecx
// 0049984f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1YieldingThreads@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp

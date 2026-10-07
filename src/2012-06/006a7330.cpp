// roc 2012-06 006a7330  unit: RBX::VScriptContext::?$FactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a7330
//
// 006a7330  6aff                 push -1
// 006a7332  6898dea900           push 0xa9de98
// 006a7337  64a100000000         mov eax, dword ptr fs:[0]
// 006a733d  50                   push eax
// 006a733e  64892500000000       mov dword ptr fs:[0], esp
// 006a7345  51                   push ecx
// 006a7346  56                   push esi
// 006a7347  8bf1                 mov esi, ecx
// 006a7349  89742404             mov dword ptr [esp + 4], esi
// 006a734d  8d4e08               lea ecx, [esi + 8]
// 006a7350  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a7358  e8f3feffff           call 0x6a7250
// 006a735d  8b7604               mov esi, dword ptr [esi + 4]
// 006a7360  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a7368  85f6                 test esi, esi
// 006a736a  742a                 je 0x6a7396
// 006a736c  8d4604               lea eax, [esi + 4]
// 006a736f  83c9ff               or ecx, 0xffffffff
// 006a7372  f00fc108             lock xadd dword ptr [eax], ecx
// 006a7376  751e                 jne 0x6a7396
// 006a7378  8b16                 mov edx, dword ptr [esi]
// 006a737a  8b4204               mov eax, dword ptr [edx + 4]
// 006a737d  8bce                 mov ecx, esi
// 006a737f  ffd0                 call eax
// 006a7381  8d4e08               lea ecx, [esi + 8]
// 006a7384  83caff               or edx, 0xffffffff
// 006a7387  f00fc111             lock xadd dword ptr [ecx], edx
// 006a738b  7509                 jne 0x6a7396
// 006a738d  8b06                 mov eax, dword ptr [esi]
// 006a738f  8b5008               mov edx, dword ptr [eax + 8]
// 006a7392  8bce                 mov ecx, esi
// 006a7394  ffd2                 call edx
// 006a7396  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a739a  5e                   pop esi
// 006a739b  64890d00000000       mov dword ptr fs:[0], ecx
// 006a73a2  83c410               add esp, 0x10
// 006a73a5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

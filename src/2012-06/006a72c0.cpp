// roc 2012-06 006a72c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a72c0
//
// 006a72c0  6aff                 push -1
// 006a72c2  6898dea900           push 0xa9de98
// 006a72c7  64a100000000         mov eax, dword ptr fs:[0]
// 006a72cd  50                   push eax
// 006a72ce  64892500000000       mov dword ptr fs:[0], esp
// 006a72d5  51                   push ecx
// 006a72d6  56                   push esi
// 006a72d7  8bf1                 mov esi, ecx
// 006a72d9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a72dd  8b01                 mov eax, dword ptr [ecx]
// 006a72df  8906                 mov dword ptr [esi], eax
// 006a72e1  8b4104               mov eax, dword ptr [ecx + 4]
// 006a72e4  89742404             mov dword ptr [esp + 4], esi
// 006a72e8  894604               mov dword ptr [esi + 4], eax
// 006a72eb  85c0                 test eax, eax
// 006a72ed  740c                 je 0x6a72fb
// 006a72ef  83c004               add eax, 4
// 006a72f2  ba01000000           mov edx, 1
// 006a72f7  f00fc110             lock xadd dword ptr [eax], edx
// 006a72fb  83c108               add ecx, 8
// 006a72fe  51                   push ecx
// 006a72ff  8d4e08               lea ecx, [esi + 8]
// 006a7302  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a730a  e841f6ffff           call 0x6a6950
// 006a730f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a7313  8bc6                 mov eax, esi
// 006a7315  5e                   pop esi
// 006a7316  64890d00000000       mov dword ptr fs:[0], ecx
// 006a731d  83c410               add esp, 0x10
// 006a7320  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

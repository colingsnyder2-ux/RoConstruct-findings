// roc 2007-08 005c3920  unit: RBX::Lua::LuaArguments  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3920
//
// 005c3920  6aff                 push -1
// 005c3922  68a8137500           push 0x7513a8
// 005c3927  64a100000000         mov eax, dword ptr fs:[0]
// 005c392d  50                   push eax
// 005c392e  64892500000000       mov dword ptr fs:[0], esp
// 005c3935  51                   push ecx
// 005c3936  56                   push esi
// 005c3937  8bf1                 mov esi, ecx
// 005c3939  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c393d  8b01                 mov eax, dword ptr [ecx]
// 005c393f  8906                 mov dword ptr [esi], eax
// 005c3941  8b4104               mov eax, dword ptr [ecx + 4]
// 005c3944  85c0                 test eax, eax
// 005c3946  89742404             mov dword ptr [esp + 4], esi
// 005c394a  894604               mov dword ptr [esi + 4], eax
// 005c394d  740c                 je 0x5c395b
// 005c394f  83c004               add eax, 4
// 005c3952  ba01000000           mov edx, 1
// 005c3957  f00fc110             lock xadd dword ptr [eax], edx
// 005c395b  83c108               add ecx, 8
// 005c395e  51                   push ecx
// 005c395f  8d4e08               lea ecx, [esi + 8]
// 005c3962  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c396a  e8b190faff           call 0x56ca20
// 005c396f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c3973  8bc6                 mov eax, esi
// 005c3975  5e                   pop esi
// 005c3976  64890d00000000       mov dword ptr fs:[0], ecx
// 005c397d  83c410               add esp, 0x10
// 005c3980  c20400               ret 4
// library rbxgs/script\LuaSignalBridge.cpp (function ??0WaitScriptSlot@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

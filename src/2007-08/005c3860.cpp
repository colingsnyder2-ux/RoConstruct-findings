// roc 2007-08 005c3860  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3860
//
// 005c3860  6aff                 push -1
// 005c3862  68a8137500           push 0x7513a8
// 005c3867  64a100000000         mov eax, dword ptr fs:[0]
// 005c386d  50                   push eax
// 005c386e  64892500000000       mov dword ptr fs:[0], esp
// 005c3875  51                   push ecx
// 005c3876  56                   push esi
// 005c3877  8bf1                 mov esi, ecx
// 005c3879  89742404             mov dword ptr [esp + 4], esi
// 005c387d  8d4e08               lea ecx, [esi + 8]
// 005c3880  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c3888  e88392faff           call 0x56cb10
// 005c388d  8b7604               mov esi, dword ptr [esi + 4]
// 005c3890  85f6                 test esi, esi
// 005c3892  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c389a  742a                 je 0x5c38c6
// 005c389c  8d4604               lea eax, [esi + 4]
// 005c389f  83c9ff               or ecx, 0xffffffff
// 005c38a2  f00fc108             lock xadd dword ptr [eax], ecx
// 005c38a6  751e                 jne 0x5c38c6
// 005c38a8  8b16                 mov edx, dword ptr [esi]
// 005c38aa  8b4204               mov eax, dword ptr [edx + 4]
// 005c38ad  8bce                 mov ecx, esi
// 005c38af  ffd0                 call eax
// 005c38b1  8d4e08               lea ecx, [esi + 8]
// 005c38b4  83caff               or edx, 0xffffffff
// 005c38b7  f00fc111             lock xadd dword ptr [ecx], edx
// 005c38bb  7509                 jne 0x5c38c6
// 005c38bd  8b06                 mov eax, dword ptr [esi]
// 005c38bf  8b5008               mov edx, dword ptr [eax + 8]
// 005c38c2  8bce                 mov ecx, esi
// 005c38c4  ffd2                 call edx
// 005c38c6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c38ca  5e                   pop esi
// 005c38cb  64890d00000000       mov dword ptr fs:[0], ecx
// 005c38d2  83c410               add esp, 0x10
// 005c38d5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

// roc 2008-06 0061f350  unit: RBX::Lua::LuaArguments  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f350
//
// 0061f350  6aff                 push -1
// 0061f352  6838077d00           push 0x7d0738
// 0061f357  64a100000000         mov eax, dword ptr fs:[0]
// 0061f35d  50                   push eax
// 0061f35e  64892500000000       mov dword ptr fs:[0], esp
// 0061f365  51                   push ecx
// 0061f366  56                   push esi
// 0061f367  8bf1                 mov esi, ecx
// 0061f369  89742404             mov dword ptr [esp + 4], esi
// 0061f36d  8d4e08               lea ecx, [esi + 8]
// 0061f370  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061f378  e80350f7ff           call 0x594380
// 0061f37d  8b7604               mov esi, dword ptr [esi + 4]
// 0061f380  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061f388  85f6                 test esi, esi
// 0061f38a  742a                 je 0x61f3b6
// 0061f38c  8d4604               lea eax, [esi + 4]
// 0061f38f  83c9ff               or ecx, 0xffffffff
// 0061f392  f00fc108             lock xadd dword ptr [eax], ecx
// 0061f396  751e                 jne 0x61f3b6
// 0061f398  8b16                 mov edx, dword ptr [esi]
// 0061f39a  8b4204               mov eax, dword ptr [edx + 4]
// 0061f39d  8bce                 mov ecx, esi
// 0061f39f  ffd0                 call eax
// 0061f3a1  8d4e08               lea ecx, [esi + 8]
// 0061f3a4  83caff               or edx, 0xffffffff
// 0061f3a7  f00fc111             lock xadd dword ptr [ecx], edx
// 0061f3ab  7509                 jne 0x61f3b6
// 0061f3ad  8b06                 mov eax, dword ptr [esi]
// 0061f3af  8b5008               mov edx, dword ptr [eax + 8]
// 0061f3b2  8bce                 mov ecx, esi
// 0061f3b4  ffd2                 call edx
// 0061f3b6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061f3ba  5e                   pop esi
// 0061f3bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f3c2  83c410               add esp, 0x10
// 0061f3c5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

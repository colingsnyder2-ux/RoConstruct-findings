// roc 2007-03 005be920  unit: seg_005b0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be920
//
// 005be920  6aff                 push -1
// 005be922  68a8417500           push 0x7541a8
// 005be927  64a100000000         mov eax, dword ptr fs:[0]
// 005be92d  50                   push eax
// 005be92e  64892500000000       mov dword ptr fs:[0], esp
// 005be935  51                   push ecx
// 005be936  56                   push esi
// 005be937  8bf1                 mov esi, ecx
// 005be939  89742404             mov dword ptr [esp + 4], esi
// 005be93d  8d4e08               lea ecx, [esi + 8]
// 005be940  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005be948  e863ddfaff           call 0x56c6b0
// 005be94d  8b7604               mov esi, dword ptr [esi + 4]
// 005be950  85f6                 test esi, esi
// 005be952  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005be95a  742a                 je 0x5be986
// 005be95c  8d4604               lea eax, [esi + 4]
// 005be95f  83c9ff               or ecx, 0xffffffff
// 005be962  f00fc108             lock xadd dword ptr [eax], ecx
// 005be966  751e                 jne 0x5be986
// 005be968  8b16                 mov edx, dword ptr [esi]
// 005be96a  8b4204               mov eax, dword ptr [edx + 4]
// 005be96d  8bce                 mov ecx, esi
// 005be96f  ffd0                 call eax
// 005be971  8d4e08               lea ecx, [esi + 8]
// 005be974  83caff               or edx, 0xffffffff
// 005be977  f00fc111             lock xadd dword ptr [ecx], edx
// 005be97b  7509                 jne 0x5be986
// 005be97d  8b06                 mov eax, dword ptr [esi]
// 005be97f  8b5008               mov edx, dword ptr [eax + 8]
// 005be982  8bce                 mov ecx, esi
// 005be984  ffd2                 call edx
// 005be986  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005be98a  5e                   pop esi
// 005be98b  64890d00000000       mov dword ptr fs:[0], ecx
// 005be992  83c410               add esp, 0x10
// 005be995  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

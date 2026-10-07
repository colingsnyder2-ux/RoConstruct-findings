// roc 2010-06 004b3d40  unit: rbx::signals::$$A6AXXZ::?$signal::slot  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b3d40
//
// 004b3d40  6aff                 push -1
// 004b3d42  6878879a00           push 0x9a8778
// 004b3d47  64a100000000         mov eax, dword ptr fs:[0]
// 004b3d4d  50                   push eax
// 004b3d4e  64892500000000       mov dword ptr fs:[0], esp
// 004b3d55  51                   push ecx
// 004b3d56  56                   push esi
// 004b3d57  8bf1                 mov esi, ecx
// 004b3d59  89742404             mov dword ptr [esp + 4], esi
// 004b3d5d  8d4e08               lea ecx, [esi + 8]
// 004b3d60  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b3d68  e84377ffff           call 0x4ab4b0
// 004b3d6d  8b7604               mov esi, dword ptr [esi + 4]
// 004b3d70  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004b3d78  85f6                 test esi, esi
// 004b3d7a  742a                 je 0x4b3da6
// 004b3d7c  8d4604               lea eax, [esi + 4]
// 004b3d7f  83c9ff               or ecx, 0xffffffff
// 004b3d82  f00fc108             lock xadd dword ptr [eax], ecx
// 004b3d86  751e                 jne 0x4b3da6
// 004b3d88  8b16                 mov edx, dword ptr [esi]
// 004b3d8a  8b4204               mov eax, dword ptr [edx + 4]
// 004b3d8d  8bce                 mov ecx, esi
// 004b3d8f  ffd0                 call eax
// 004b3d91  8d4e08               lea ecx, [esi + 8]
// 004b3d94  83caff               or edx, 0xffffffff
// 004b3d97  f00fc111             lock xadd dword ptr [ecx], edx
// 004b3d9b  7509                 jne 0x4b3da6
// 004b3d9d  8b06                 mov eax, dword ptr [esi]
// 004b3d9f  8b5008               mov edx, dword ptr [eax + 8]
// 004b3da2  8bce                 mov ecx, esi
// 004b3da4  ffd2                 call edx
// 004b3da6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b3daa  5e                   pop esi
// 004b3dab  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3db2  83c410               add esp, 0x10
// 004b3db5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

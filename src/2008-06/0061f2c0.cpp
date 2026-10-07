// roc 2008-06 0061f2c0  unit: RBX::Lua::LuaArguments  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f2c0
//
// 0061f2c0  6aff                 push -1
// 0061f2c2  6803957d00           push 0x7d9503
// 0061f2c7  64a100000000         mov eax, dword ptr fs:[0]
// 0061f2cd  50                   push eax
// 0061f2ce  64892500000000       mov dword ptr fs:[0], esp
// 0061f2d5  51                   push ecx
// 0061f2d6  56                   push esi
// 0061f2d7  8bf1                 mov esi, ecx
// 0061f2d9  89742404             mov dword ptr [esp + 4], esi
// 0061f2dd  8d4e30               lea ecx, [esi + 0x30]
// 0061f2e0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0061f2e8  e89350f7ff           call 0x594380
// 0061f2ed  8d4e0c               lea ecx, [esi + 0xc]
// 0061f2f0  c644241000           mov byte ptr [esp + 0x10], 0
// 0061f2f5  e87651f7ff           call 0x594470
// 0061f2fa  8b7604               mov esi, dword ptr [esi + 4]
// 0061f2fd  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061f305  85f6                 test esi, esi
// 0061f307  742a                 je 0x61f333
// 0061f309  8d4604               lea eax, [esi + 4]
// 0061f30c  83c9ff               or ecx, 0xffffffff
// 0061f30f  f00fc108             lock xadd dword ptr [eax], ecx
// 0061f313  751e                 jne 0x61f333
// 0061f315  8b16                 mov edx, dword ptr [esi]
// 0061f317  8b4204               mov eax, dword ptr [edx + 4]
// 0061f31a  8bce                 mov ecx, esi
// 0061f31c  ffd0                 call eax
// 0061f31e  8d4e08               lea ecx, [esi + 8]
// 0061f321  83caff               or edx, 0xffffffff
// 0061f324  f00fc111             lock xadd dword ptr [ecx], edx
// 0061f328  7509                 jne 0x61f333
// 0061f32a  8b06                 mov eax, dword ptr [esi]
// 0061f32c  8b5008               mov edx, dword ptr [eax + 8]
// 0061f32f  8bce                 mov ecx, esi
// 0061f331  ffd2                 call edx
// 0061f333  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061f337  5e                   pop esi
// 0061f338  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f33f  83c410               add esp, 0x10
// 0061f342  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1FunctionScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp

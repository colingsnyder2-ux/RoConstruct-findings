// roc 2007-08 005c0db0  unit: RBX::Lua::LuaArguments  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c0db0
//
// 005c0db0  6aff                 push -1
// 005c0db2  6810167500           push 0x751610
// 005c0db7  64a100000000         mov eax, dword ptr fs:[0]
// 005c0dbd  50                   push eax
// 005c0dbe  64892500000000       mov dword ptr fs:[0], esp
// 005c0dc5  83ec14               sub esp, 0x14
// 005c0dc8  56                   push esi
// 005c0dc9  57                   push edi
// 005c0dca  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005c0dce  6a00                 push 0
// 005c0dd0  6a01                 push 1
// 005c0dd2  57                   push edi
// 005c0dd3  e8a8cbffff           call 0x5bd980
// 005c0dd8  50                   push eax
// 005c0dd9  e8c2bef6ff           call 0x52cca0
// 005c0dde  50                   push eax
// 005c0ddf  8d442420             lea eax, [esp + 0x20]
// 005c0de3  50                   push eax
// 005c0de4  e877c2e5ff           call 0x41d060
// 005c0de9  57                   push edi
// 005c0dea  c744244000000000     mov dword ptr [esp + 0x40], 0
// 005c0df2  e889c7ffff           call 0x5bd580
// 005c0df7  83c41c               add esp, 0x1c
// 005c0dfa  83f802               cmp eax, 2
// 005c0dfd  7c5e                 jl 0x5c0e5d
// 005c0dff  6a02                 push 2
// 005c0e01  8d4c2418             lea ecx, [esp + 0x18]
// 005c0e05  57                   push edi
// 005c0e06  51                   push ecx
// 005c0e07  e804f6ffff           call 0x5c0410
// 005c0e0c  83c40c               add esp, 0xc
// 005c0e0f  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c0e13  85c0                 test eax, eax
// 005c0e15  c644242401           mov byte ptr [esp + 0x24], 1
// 005c0e1a  740a                 je 0x5c0e26
// 005c0e1c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c0e20  50                   push eax
// 005c0e21  e80a08f8ff           call 0x541630
// 005c0e26  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c0e2a  85f6                 test esi, esi
// 005c0e2c  c644242400           mov byte ptr [esp + 0x24], 0
// 005c0e31  742a                 je 0x5c0e5d
// 005c0e33  8d5604               lea edx, [esi + 4]
// 005c0e36  83c8ff               or eax, 0xffffffff
// 005c0e39  f00fc102             lock xadd dword ptr [edx], eax
// 005c0e3d  751e                 jne 0x5c0e5d
// 005c0e3f  8b16                 mov edx, dword ptr [esi]
// 005c0e41  8b4204               mov eax, dword ptr [edx + 4]
// 005c0e44  8bce                 mov ecx, esi
// 005c0e46  ffd0                 call eax
// 005c0e48  8d4e08               lea ecx, [esi + 8]
// 005c0e4b  83caff               or edx, 0xffffffff
// 005c0e4e  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0e52  7509                 jne 0x5c0e5d
// 005c0e54  8b06                 mov eax, dword ptr [esi]
// 005c0e56  8b5008               mov edx, dword ptr [eax + 8]
// 005c0e59  8bce                 mov ecx, esi
// 005c0e5b  ffd2                 call edx
// 005c0e5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c0e61  83ec08               sub esp, 8
// 005c0e64  85c9                 test ecx, ecx
// 005c0e66  89642410             mov dword ptr [esp + 0x10], esp
// 005c0e6a  8bc4                 mov eax, esp
// 005c0e6c  7405                 je 0x5c0e73
// 005c0e6e  83c104               add ecx, 4
// 005c0e71  eb02                 jmp 0x5c0e75
// 005c0e73  33c9                 xor ecx, ecx
// 005c0e75  8908                 mov dword ptr [eax], ecx
// 005c0e77  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c0e7b  894804               mov dword ptr [eax + 4], ecx
// 005c0e7e  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c0e82  85c0                 test eax, eax
// 005c0e84  740c                 je 0x5c0e92
// 005c0e86  83c004               add eax, 4
// 005c0e89  ba01000000           mov edx, 1
// 005c0e8e  f00fc110             lock xadd dword ptr [eax], edx
// 005c0e92  57                   push edi
// 005c0e93  e80858f7ff           call 0x5366a0
// 005c0e98  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c0e9c  83c40c               add esp, 0xc
// 005c0e9f  85f6                 test esi, esi
// 005c0ea1  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005c0ea9  742a                 je 0x5c0ed5
// 005c0eab  8d4604               lea eax, [esi + 4]
// 005c0eae  83c9ff               or ecx, 0xffffffff
// 005c0eb1  f00fc108             lock xadd dword ptr [eax], ecx
// 005c0eb5  751e                 jne 0x5c0ed5
// 005c0eb7  8b16                 mov edx, dword ptr [esi]
// 005c0eb9  8b4204               mov eax, dword ptr [edx + 4]
// 005c0ebc  8bce                 mov ecx, esi
// 005c0ebe  ffd0                 call eax
// 005c0ec0  8d4e08               lea ecx, [esi + 8]
// 005c0ec3  83caff               or edx, 0xffffffff
// 005c0ec6  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0eca  7509                 jne 0x5c0ed5
// 005c0ecc  8b06                 mov eax, dword ptr [esi]
// 005c0ece  8b5008               mov edx, dword ptr [eax + 8]
// 005c0ed1  8bce                 mov ecx, esi
// 005c0ed3  ffd2                 call edx
// 005c0ed5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c0ed9  5f                   pop edi
// 005c0eda  b801000000           mov eax, 1
// 005c0edf  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0ee6  5e                   pop esi
// 005c0ee7  83c420               add esp, 0x20
// 005c0eea  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?newInstance@ObjectBridge@Lua@RBX@@SAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

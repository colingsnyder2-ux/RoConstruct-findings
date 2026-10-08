// roc 2007-08 005c0410  unit: RBX::Lua::LuaArguments  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c0410
//
// 005c0410  6aff                 push -1
// 005c0412  687a957500           push 0x75957a
// 005c0417  64a100000000         mov eax, dword ptr fs:[0]
// 005c041d  50                   push eax
// 005c041e  64892500000000       mov dword ptr fs:[0], esp
// 005c0425  83ec50               sub esp, 0x50
// 005c0428  8b442468             mov eax, dword ptr [esp + 0x68]
// 005c042c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005c0430  56                   push esi
// 005c0431  50                   push eax
// 005c0432  51                   push ecx
// 005c0433  8d542410             lea edx, [esp + 0x10]
// 005c0437  52                   push edx
// 005c0438  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c0440  e87bf3ffff           call 0x5bf7c0
// 005c0445  83c40c               add esp, 0xc
// 005c0448  8b742408             mov esi, dword ptr [esp + 8]
// 005c044c  85f6                 test esi, esi
// 005c044e  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 005c0456  746a                 je 0x5c04c2
// 005c0458  6a00                 push 0
// 005c045a  684c1f8800           push 0x881f4c
// 005c045f  689c208800           push 0x88209c
// 005c0464  6a00                 push 0
// 005c0466  56                   push esi
// 005c0467  e8ca080700           call 0x630d36
// 005c046c  83c414               add esp, 0x14
// 005c046f  85c0                 test eax, eax
// 005c0471  754a                 jne 0x5c04bd
// 005c0473  e8887fe5ff           call 0x418400
// 005c0478  8b4004               mov eax, dword ptr [eax + 4]
// 005c047b  83c004               add eax, 4
// 005c047e  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005c0482  7205                 jb 0x5c0489
// 005c0484  8b4004               mov eax, dword ptr [eax + 4]
// 005c0487  eb03                 jmp 0x5c048c
// 005c0489  83c004               add eax, 4
// 005c048c  50                   push eax
// 005c048d  8d442414             lea eax, [esp + 0x14]
// 005c0491  68f4917b00           push 0x7b91f4
// 005c0496  50                   push eax
// 005c0497  e82413f4ff           call 0x5017c0
// 005c049c  83c40c               add esp, 0xc
// 005c049f  50                   push eax
// 005c04a0  8d4c2430             lea ecx, [esp + 0x30]
// 005c04a4  c644246002           mov byte ptr [esp + 0x60], 2
// 005c04a9  e81229e5ff           call 0x412dc0
// 005c04ae  68c0108400           push 0x8410c0
// 005c04b3  8d4c2430             lea ecx, [esp + 0x30]
// 005c04b7  51                   push ecx
// 005c04b8  e8e1060700           call 0x630b9e
// 005c04bd  8d46fc               lea eax, [esi - 4]
// 005c04c0  eb02                 jmp 0x5c04c4
// 005c04c2  33c0                 xor eax, eax
// 005c04c4  57                   push edi
// 005c04c5  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 005c04c9  50                   push eax
// 005c04ca  57                   push edi
// 005c04cb  e8a0d1edff           call 0x49d670
// 005c04d0  83c408               add esp, 8
// 005c04d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c04d7  85f6                 test esi, esi
// 005c04d9  c744240801000000     mov dword ptr [esp + 8], 1
// 005c04e1  c644246000           mov byte ptr [esp + 0x60], 0
// 005c04e6  742a                 je 0x5c0512
// 005c04e8  8d5604               lea edx, [esi + 4]
// 005c04eb  83c8ff               or eax, 0xffffffff
// 005c04ee  f00fc102             lock xadd dword ptr [edx], eax
// 005c04f2  751e                 jne 0x5c0512
// 005c04f4  8b16                 mov edx, dword ptr [esi]
// 005c04f6  8b4204               mov eax, dword ptr [edx + 4]
// 005c04f9  8bce                 mov ecx, esi
// 005c04fb  ffd0                 call eax
// 005c04fd  8d4e08               lea ecx, [esi + 8]
// 005c0500  83caff               or edx, 0xffffffff
// 005c0503  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0507  7509                 jne 0x5c0512
// 005c0509  8b06                 mov eax, dword ptr [esi]
// 005c050b  8b5008               mov edx, dword ptr [eax + 8]
// 005c050e  8bce                 mov ecx, esi
// 005c0510  ffd2                 call edx
// 005c0512  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005c0516  8bc7                 mov eax, edi
// 005c0518  5f                   pop edi
// 005c0519  5e                   pop esi
// 005c051a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0521  83c45c               add esp, 0x5c
// 005c0524  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getInstance@ObjectBridge@Lua@RBX@@SA?AV?$shared_ptr@VInstance@RBX@@@boost@@PAUlua_State@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp

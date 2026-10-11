// roc 2007-08 005c3990  unit: RBX::Lua::LuaArguments  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3990
//
// 005c3990  64a100000000         mov eax, dword ptr fs:[0]
// 005c3996  6aff                 push -1
// 005c3998  68d9967500           push 0x7596d9
// 005c399d  50                   push eax
// 005c399e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c39a2  64892500000000       mov dword ptr fs:[0], esp
// 005c39a9  83ec44               sub esp, 0x44
// 005c39ac  56                   push esi
// 005c39ad  57                   push edi
// 005c39ae  bf90957b00           mov edi, 0x7b9590
// 005c39b3  8bf0                 mov esi, eax
// 005c39b5  b90b000000           mov ecx, 0xb
// 005c39ba  33d2                 xor edx, edx
// 005c39bc  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c39be  7529                 jne 0x5c39e9
// 005c39c0  8b442464             mov eax, dword ptr [esp + 0x64]
// 005c39c4  52                   push edx
// 005c39c5  68e0385c00           push 0x5c38e0
// 005c39ca  50                   push eax
// 005c39cb  e8f0a2ffff           call 0x5bdcc0
// 005c39d0  83c40c               add esp, 0xc
// 005c39d3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005c39d7  5f                   pop edi
// 005c39d8  b801000000           mov eax, 1
// 005c39dd  5e                   pop esi
// 005c39de  64890d00000000       mov dword ptr fs:[0], ecx
// 005c39e5  83c450               add esp, 0x50
// 005c39e8  c3                   ret 
// 005c39e9  bf84957b00           mov edi, 0x7b9584
// 005c39ee  8bf0                 mov esi, eax
// 005c39f0  b90a000000           mov ecx, 0xa
// 005c39f5  33d2                 xor edx, edx
// 005c39f7  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c39f9  752c                 jne 0x5c3a27
// 005c39fb  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005c39ff  8b4004               mov eax, dword ptr [eax + 4]
// 005c3a02  85c0                 test eax, eax
// 005c3a04  740c                 je 0x5c3a12
// 005c3a06  395008               cmp dword ptr [eax + 8], edx
// 005c3a09  7407                 je 0x5c3a12
// 005c3a0b  b801000000           mov eax, 1
// 005c3a10  eb02                 jmp 0x5c3a14
// 005c3a12  33c0                 xor eax, eax
// 005c3a14  8b542464             mov edx, dword ptr [esp + 0x64]
// 005c3a18  0fb6c8               movzx ecx, al
// 005c3a1b  51                   push ecx
// 005c3a1c  52                   push edx
// 005c3a1d  e83ea3ffff           call 0x5bdd60
// 005c3a22  83c408               add esp, 8
// 005c3a25  ebac                 jmp 0x5c39d3
// 005c3a27  50                   push eax
// 005c3a28  8d44240c             lea eax, [esp + 0xc]
// 005c3a2c  68109f7a00           push 0x7a9f10
// 005c3a31  50                   push eax
// 005c3a32  e889ddf3ff           call 0x5017c0
// 005c3a37  83c40c               add esp, 0xc
// 005c3a3a  50                   push eax
// 005c3a3b  8d4c2428             lea ecx, [esp + 0x28]
// 005c3a3f  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005c3a47  e874f3e4ff           call 0x412dc0
// 005c3a4c  68c0108400           push 0x8410c0
// 005c3a51  8d4c2428             lea ecx, [esp + 0x28]
// 005c3a55  51                   push ecx
// 005c3a56  e843d10600           call 0x630b9e
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_index@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHABVconnection@signals@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp

// roc 2007-03 005bea50  unit: seg_005b0000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bea50
//
// 005bea50  64a100000000         mov eax, dword ptr fs:[0]
// 005bea56  6aff                 push -1
// 005bea58  68e96e7500           push 0x756ee9
// 005bea5d  50                   push eax
// 005bea5e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bea62  64892500000000       mov dword ptr fs:[0], esp
// 005bea69  83ec44               sub esp, 0x44
// 005bea6c  56                   push esi
// 005bea6d  57                   push edi
// 005bea6e  bf9cb47900           mov edi, 0x79b49c
// 005bea73  8bf0                 mov esi, eax
// 005bea75  b90b000000           mov ecx, 0xb
// 005bea7a  33d2                 xor edx, edx
// 005bea7c  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bea7e  7529                 jne 0x5beaa9
// 005bea80  8b442464             mov eax, dword ptr [esp + 0x64]
// 005bea84  52                   push edx
// 005bea85  68a0e95b00           push 0x5be9a0
// 005bea8a  50                   push eax
// 005bea8b  e800a7ffff           call 0x5b9190
// 005bea90  83c40c               add esp, 0xc
// 005bea93  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005bea97  5f                   pop edi
// 005bea98  b801000000           mov eax, 1
// 005bea9d  5e                   pop esi
// 005bea9e  64890d00000000       mov dword ptr fs:[0], ecx
// 005beaa5  83c450               add esp, 0x50
// 005beaa8  c3                   ret 
// 005beaa9  bf4c967b00           mov edi, 0x7b964c
// 005beaae  8bf0                 mov esi, eax
// 005beab0  b90a000000           mov ecx, 0xa
// 005beab5  33d2                 xor edx, edx
// 005beab7  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005beab9  752c                 jne 0x5beae7
// 005beabb  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005beabf  8b4004               mov eax, dword ptr [eax + 4]
// 005beac2  85c0                 test eax, eax
// 005beac4  740c                 je 0x5bead2
// 005beac6  395008               cmp dword ptr [eax + 8], edx
// 005beac9  7407                 je 0x5bead2
// 005beacb  b801000000           mov eax, 1
// 005bead0  eb02                 jmp 0x5bead4
// 005bead2  33c0                 xor eax, eax
// 005bead4  8b542464             mov edx, dword ptr [esp + 0x64]
// 005bead8  0fb6c8               movzx ecx, al
// 005beadb  51                   push ecx
// 005beadc  52                   push edx
// 005beadd  e84ea7ffff           call 0x5b9230
// 005beae2  83c408               add esp, 8
// 005beae5  ebac                 jmp 0x5bea93
// 005beae7  50                   push eax
// 005beae8  8d44240c             lea eax, [esp + 0xc]
// 005beaec  6808b67a00           push 0x7ab608
// 005beaf1  50                   push eax
// 005beaf2  e83968f3ff           call 0x4f5330
// 005beaf7  83c40c               add esp, 0xc
// 005beafa  50                   push eax
// 005beafb  8d4c2428             lea ecx, [esp + 0x28]
// 005beaff  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005beb07  e81452e5ff           call 0x413d20
// 005beb0c  68e0138400           push 0x8413e0
// 005beb11  8d4c2428             lea ecx, [esp + 0x28]
// 005beb15  51                   push ecx
// 005beb16  e813050600           call 0x61f02e
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_index@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHABVconnection@signals@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp

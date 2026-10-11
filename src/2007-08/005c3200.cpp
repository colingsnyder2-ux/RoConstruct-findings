// roc 2007-08 005c3200  unit: RBX::Lua::LuaArguments  size: 768 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3200
//
// 005c3200  64a100000000         mov eax, dword ptr fs:[0]
// 005c3206  6aff                 push -1
// 005c3208  68d9967500           push 0x7596d9
// 005c320d  50                   push eax
// 005c320e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c3212  64892500000000       mov dword ptr fs:[0], esp
// 005c3219  83ec48               sub esp, 0x48
// 005c321c  56                   push esi
// 005c321d  57                   push edi
// 005c321e  bf1c957b00           mov edi, 0x7b951c
// 005c3223  8bf0                 mov esi, eax
// 005c3225  b902000000           mov ecx, 2
// 005c322a  33d2                 xor edx, edx
// 005c322c  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c322e  7541                 jne 0x5c3271
// 005c3230  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005c3234  d94124               fld dword ptr [ecx + 0x24]
// 005c3237  83ec0c               sub esp, 0xc
// 005c323a  8bc4                 mov eax, esp
// 005c323c  d918                 fstp dword ptr [eax]
// 005c323e  89642414             mov dword ptr [esp + 0x14], esp
// 005c3242  d94128               fld dword ptr [ecx + 0x28]
// 005c3245  d95804               fstp dword ptr [eax + 4]
// 005c3248  d9412c               fld dword ptr [ecx + 0x2c]
// 005c324b  d95808               fstp dword ptr [eax + 8]
// 005c324e  8b442474             mov eax, dword ptr [esp + 0x74]
// 005c3252  50                   push eax
// 005c3253  e8f81af7ff           call 0x534d50
// 005c3258  83c410               add esp, 0x10
// 005c325b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005c325f  5f                   pop edi
// 005c3260  b801000000           mov eax, 1
// 005c3265  64890d00000000       mov dword ptr fs:[0], ecx
// 005c326c  5e                   pop esi
// 005c326d  83c454               add esp, 0x54
// 005c3270  c3                   ret 
// 005c3271  bf10957b00           mov edi, 0x7b9510
// 005c3276  8bf0                 mov esi, eax
// 005c3278  b90b000000           mov ecx, 0xb
// 005c327d  33d2                 xor edx, edx
// 005c327f  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c3281  751a                 jne 0x5c329d
// 005c3283  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005c3287  83ec0c               sub esp, 0xc
// 005c328a  8bc4                 mov eax, esp
// 005c328c  89642414             mov dword ptr [esp + 0x14], esp
// 005c3290  50                   push eax
// 005c3291  e8baa5f5ff           call 0x51d850
// 005c3296  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005c329a  51                   push ecx
// 005c329b  ebb6                 jmp 0x5c3253
// 005c329d  bf50587a00           mov edi, 0x7a5850
// 005c32a2  8bf0                 mov esi, eax
// 005c32a4  b908000000           mov ecx, 8
// 005c32a9  33d2                 xor edx, edx
// 005c32ab  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c32ad  751e                 jne 0x5c32cd
// 005c32af  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c32b3  6aff                 push -1
// 005c32b5  56                   push esi
// 005c32b6  e885a4ffff           call 0x5bd740
// 005c32bb  6a01                 push 1
// 005c32bd  6870275c00           push 0x5c2770
// 005c32c2  56                   push esi
// 005c32c3  e8f8a9ffff           call 0x5bdcc0
// 005c32c8  83c414               add esp, 0x14
// 005c32cb  eb8e                 jmp 0x5c325b
// 005c32cd  bf00957b00           mov edi, 0x7b9500
// 005c32d2  8bf0                 mov esi, eax
// 005c32d4  b90d000000           mov ecx, 0xd
// 005c32d9  33d2                 xor edx, edx
// 005c32db  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c32dd  7521                 jne 0x5c3300
// 005c32df  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c32e3  6aff                 push -1
// 005c32e5  56                   push esi
// 005c32e6  e855a4ffff           call 0x5bd740
// 005c32eb  6a01                 push 1
// 005c32ed  68e0275c00           push 0x5c27e0
// 005c32f2  56                   push esi
// 005c32f3  e8c8a9ffff           call 0x5bdcc0
// 005c32f8  83c414               add esp, 0x14
// 005c32fb  e95bffffff           jmp 0x5c325b
// 005c3300  bff0947b00           mov edi, 0x7b94f0
// 005c3305  8bf0                 mov esi, eax
// 005c3307  b90e000000           mov ecx, 0xe
// 005c330c  33d2                 xor edx, edx
// 005c330e  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c3310  7521                 jne 0x5c3333
// 005c3312  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c3316  6aff                 push -1
// 005c3318  56                   push esi
// 005c3319  e822a4ffff           call 0x5bd740
// 005c331e  6a01                 push 1
// 005c3320  68e0285c00           push 0x5c28e0
// 005c3325  56                   push esi
// 005c3326  e895a9ffff           call 0x5bdcc0
// 005c332b  83c414               add esp, 0x14
// 005c332e  e928ffffff           jmp 0x5c325b
// 005c3333  bfdc947b00           mov edi, 0x7b94dc
// 005c3338  8bf0                 mov esi, eax
// 005c333a  b912000000           mov ecx, 0x12
// 005c333f  33d2                 xor edx, edx
// 005c3341  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c3343  7521                 jne 0x5c3366
// 005c3345  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c3349  6aff                 push -1
// 005c334b  56                   push esi
// 005c334c  e8efa3ffff           call 0x5bd740
// 005c3351  6a01                 push 1
// 005c3353  68d0295c00           push 0x5c29d0
// 005c3358  56                   push esi
// 005c3359  e862a9ffff           call 0x5bdcc0
// 005c335e  83c414               add esp, 0x14
// 005c3361  e9f5feffff           jmp 0x5c325b
// 005c3366  bfc8947b00           mov edi, 0x7b94c8
// 005c336b  8bf0                 mov esi, eax
// 005c336d  b913000000           mov ecx, 0x13
// 005c3372  33d2                 xor edx, edx
// 005c3374  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c3376  7521                 jne 0x5c3399
// 005c3378  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c337c  6aff                 push -1
// 005c337e  56                   push esi
// 005c337f  e8bca3ffff           call 0x5bd740
// 005c3384  6a01                 push 1
// 005c3386  68102b5c00           push 0x5c2b10
// 005c338b  56                   push esi
// 005c338c  e82fa9ffff           call 0x5bdcc0
// 005c3391  83c414               add esp, 0x14
// 005c3394  e9c2feffff           jmp 0x5c325b
// 005c3399  bfb4947b00           mov edi, 0x7b94b4
// 005c339e  8bf0                 mov esi, eax
// 005c33a0  b913000000           mov ecx, 0x13
// 005c33a5  33d2                 xor edx, edx
// 005c33a7  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c33a9  7521                 jne 0x5c33cc
// 005c33ab  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c33af  6aff                 push -1
// 005c33b1  56                   push esi
// 005c33b2  e889a3ffff           call 0x5bd740
// 005c33b7  6a01                 push 1
// 005c33b9  68502c5c00           push 0x5c2c50
// 005c33be  56                   push esi
// 005c33bf  e8fca8ffff           call 0x5bdcc0
// 005c33c4  83c414               add esp, 0x14
// 005c33c7  e98ffeffff           jmp 0x5c325b
// 005c33cc  bfa0947b00           mov edi, 0x7b94a0
// 005c33d1  8bf0                 mov esi, eax
// 005c33d3  b914000000           mov ecx, 0x14
// 005c33d8  33d2                 xor edx, edx
// 005c33da  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c33dc  7521                 jne 0x5c33ff
// 005c33de  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c33e2  6aff                 push -1
// 005c33e4  56                   push esi
// 005c33e5  e856a3ffff           call 0x5bd740
// 005c33ea  6a01                 push 1
// 005c33ec  68f02e5c00           push 0x5c2ef0
// 005c33f1  56                   push esi
// 005c33f2  e8c9a8ffff           call 0x5bdcc0
// 005c33f7  83c414               add esp, 0x14
// 005c33fa  e95cfeffff           jmp 0x5c325b
// 005c33ff  bf8c947b00           mov edi, 0x7b948c
// 005c3404  8bf0                 mov esi, eax
// 005c3406  b911000000           mov ecx, 0x11
// 005c340b  33d2                 xor edx, edx
// 005c340d  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c340f  7521                 jne 0x5c3432
// 005c3411  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c3415  6aff                 push -1
// 005c3417  56                   push esi
// 005c3418  e823a3ffff           call 0x5bd740
// 005c341d  6a01                 push 1
// 005c341f  68802e5c00           push 0x5c2e80
// 005c3424  56                   push esi
// 005c3425  e896a8ffff           call 0x5bdcc0
// 005c342a  83c414               add esp, 0x14
// 005c342d  e929feffff           jmp 0x5c325b
// 005c3432  bf80947b00           mov edi, 0x7b9480
// 005c3437  8bf0                 mov esi, eax
// 005c3439  b90b000000           mov ecx, 0xb
// 005c343e  33d2                 xor edx, edx
// 005c3440  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c3442  7521                 jne 0x5c3465
// 005c3444  8b742468             mov esi, dword ptr [esp + 0x68]
// 005c3448  6aff                 push -1
// 005c344a  56                   push esi
// 005c344b  e8f0a2ffff           call 0x5bd740
// 005c3450  6a01                 push 1
// 005c3452  68f02d5c00           push 0x5c2df0
// 005c3457  56                   push esi
// 005c3458  e863a8ffff           call 0x5bdcc0
// 005c345d  83c414               add esp, 0x14
// 005c3460  e9f6fdffff           jmp 0x5c325b
// 005c3465  bfb4797800           mov edi, 0x7879b4
// 005c346a  8bf0                 mov esi, eax
// 005c346c  b902000000           mov ecx, 2
// 005c3471  33d2                 xor edx, edx
// 005c3473  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c3475  751f                 jne 0x5c3496
// 005c3477  8b442460             mov eax, dword ptr [esp + 0x60]
// 005c347b  d94024               fld dword ptr [eax + 0x24]
// 005c347e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005c3482  83ec08               sub esp, 8
// 005c3485  dd1c24               fstp qword ptr [esp]
// 005c3488  51                   push ecx
// 005c3489  e8e2a6ffff           call 0x5bdb70
// 005c348e  83c40c               add esp, 0xc
// 005c3491  e9c5fdffff           jmp 0x5c325b
// 005c3496  bfb8797800           mov edi, 0x7879b8
// 005c349b  8bf0                 mov esi, eax
// 005c349d  b902000000           mov ecx, 2
// 005c34a2  33d2                 xor edx, edx
// 005c34a4  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c34a6  7509                 jne 0x5c34b1
// 005c34a8  8b442460             mov eax, dword ptr [esp + 0x60]
// 005c34ac  d94028               fld dword ptr [eax + 0x28]
// 005c34af  ebcd                 jmp 0x5c347e
// 005c34b1  bf7ce87800           mov edi, 0x78e87c
// 005c34b6  8bf0                 mov esi, eax
// 005c34b8  b902000000           mov ecx, 2
// 005c34bd  33d2                 xor edx, edx
// 005c34bf  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c34c1  7509                 jne 0x5c34cc
// 005c34c3  8b442460             mov eax, dword ptr [esp + 0x60]
// 005c34c7  d9402c               fld dword ptr [eax + 0x2c]
// 005c34ca  ebb2                 jmp 0x5c347e
// 005c34cc  50                   push eax
// 005c34cd  8d542410             lea edx, [esp + 0x10]
// 005c34d1  68109f7a00           push 0x7a9f10
// 005c34d6  52                   push edx
// 005c34d7  e8e4e2f3ff           call 0x5017c0
// 005c34dc  83c40c               add esp, 0xc
// 005c34df  50                   push eax
// 005c34e0  8d4c242c             lea ecx, [esp + 0x2c]
// 005c34e4  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 005c34ec  e8cff8e4ff           call 0x412dc0
// 005c34f1  68c0108400           push 0x8410c0
// 005c34f6  8d44242c             lea eax, [esp + 0x2c]
// 005c34fa  50                   push eax
// 005c34fb  e89ed60600           call 0x630b9e
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHABVCoordinateFrame@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

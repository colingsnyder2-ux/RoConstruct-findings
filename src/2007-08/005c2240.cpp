// roc 2007-08 005c2240  unit: RBX::Lua::LuaArguments  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c2240
//
// 005c2240  64a100000000         mov eax, dword ptr fs:[0]
// 005c2246  6aff                 push -1
// 005c2248  68d9967500           push 0x7596d9
// 005c224d  50                   push eax
// 005c224e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c2252  64892500000000       mov dword ptr fs:[0], esp
// 005c2259  83ec54               sub esp, 0x54
// 005c225c  56                   push esi
// 005c225d  57                   push edi
// 005c225e  bf5c947b00           mov edi, 0x7b945c
// 005c2263  8bf0                 mov esi, eax
// 005c2265  b907000000           mov ecx, 7
// 005c226a  33d2                 xor edx, edx
// 005c226c  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c226e  752a                 jne 0x5c229a
// 005c2270  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 005c2274  8b08                 mov ecx, dword ptr [eax]
// 005c2276  8b542474             mov edx, dword ptr [esp + 0x74]
// 005c227a  51                   push ecx
// 005c227b  52                   push edx
// 005c227c  e80fb9ffff           call 0x5bdb90
// 005c2281  83c408               add esp, 8
// 005c2284  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005c2288  5f                   pop edi
// 005c2289  b801000000           mov eax, 1
// 005c228e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2295  5e                   pop esi
// 005c2296  83c460               add esp, 0x60
// 005c2299  c3                   ret 
// 005c229a  bf54947b00           mov edi, 0x7b9454
// 005c229f  8bf0                 mov esi, eax
// 005c22a1  b907000000           mov ecx, 7
// 005c22a6  33d2                 xor edx, edx
// 005c22a8  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c22aa  74c4                 je 0x5c2270
// 005c22ac  bfe0ac7800           mov edi, 0x78ace0
// 005c22b1  8bf0                 mov esi, eax
// 005c22b3  b906000000           mov ecx, 6
// 005c22b8  33d2                 xor edx, edx
// 005c22ba  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c22bc  7525                 jne 0x5c22e3
// 005c22be  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005c22c2  83ec0c               sub esp, 0xc
// 005c22c5  8bc4                 mov eax, esp
// 005c22c7  89642414             mov dword ptr [esp + 0x14], esp
// 005c22cb  50                   push eax
// 005c22cc  e8af48fcff           call 0x586b80
// 005c22d1  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005c22d8  51                   push ecx
// 005c22d9  e89225f7ff           call 0x534870
// 005c22de  83c410               add esp, 0x10
// 005c22e1  eba1                 jmp 0x5c2284
// 005c22e3  bff4f47900           mov edi, 0x79f4f4
// 005c22e8  8bf0                 mov esi, eax
// 005c22ea  b902000000           mov ecx, 2
// 005c22ef  33d2                 xor edx, edx
// 005c22f1  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c22f3  7528                 jne 0x5c231d
// 005c22f5  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005c22f9  8d44240c             lea eax, [esp + 0xc]
// 005c22fd  50                   push eax
// 005c22fe  e87d48fcff           call 0x586b80
// 005c2303  d900                 fld dword ptr [eax]
// 005c2305  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005c2309  83ec08               sub esp, 8
// 005c230c  dd1c24               fstp qword ptr [esp]
// 005c230f  51                   push ecx
// 005c2310  e85bb8ffff           call 0x5bdb70
// 005c2315  83c40c               add esp, 0xc
// 005c2318  e967ffffff           jmp 0x5c2284
// 005c231d  bf34947b00           mov edi, 0x7b9434
// 005c2322  8bf0                 mov esi, eax
// 005c2324  b902000000           mov ecx, 2
// 005c2329  33d2                 xor edx, edx
// 005c232b  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c232d  7513                 jne 0x5c2342
// 005c232f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005c2333  8d44240c             lea eax, [esp + 0xc]
// 005c2337  50                   push eax
// 005c2338  e84348fcff           call 0x586b80
// 005c233d  d94004               fld dword ptr [eax + 4]
// 005c2340  ebc3                 jmp 0x5c2305
// 005c2342  bf30947b00           mov edi, 0x7b9430
// 005c2347  8bf0                 mov esi, eax
// 005c2349  b902000000           mov ecx, 2
// 005c234e  33d2                 xor edx, edx
// 005c2350  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c2352  7513                 jne 0x5c2367
// 005c2354  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005c2358  8d44240c             lea eax, [esp + 0xc]
// 005c235c  50                   push eax
// 005c235d  e81e48fcff           call 0x586b80
// 005c2362  d94008               fld dword ptr [eax + 8]
// 005c2365  eb9e                 jmp 0x5c2305
// 005c2367  bf10617900           mov edi, 0x796110
// 005c236c  8bf0                 mov esi, eax
// 005c236e  b905000000           mov ecx, 5
// 005c2373  33d2                 xor edx, edx
// 005c2375  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c2377  7535                 jne 0x5c23ae
// 005c2379  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005c237d  e84e47fcff           call 0x586ad0
// 005c2382  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005c2386  7213                 jb 0x5c239b
// 005c2388  8b4004               mov eax, dword ptr [eax + 4]
// 005c238b  50                   push eax
// 005c238c  8b442478             mov eax, dword ptr [esp + 0x78]
// 005c2390  50                   push eax
// 005c2391  e85ab8ffff           call 0x5bdbf0
// 005c2396  e9e6feffff           jmp 0x5c2281
// 005c239b  83c004               add eax, 4
// 005c239e  50                   push eax
// 005c239f  8b442478             mov eax, dword ptr [esp + 0x78]
// 005c23a3  50                   push eax
// 005c23a4  e847b8ffff           call 0x5bdbf0
// 005c23a9  e9d3feffff           jmp 0x5c2281
// 005c23ae  bfd47e7800           mov edi, 0x787ed4
// 005c23b3  8bf0                 mov esi, eax
// 005c23b5  b905000000           mov ecx, 5
// 005c23ba  33d2                 xor edx, edx
// 005c23bc  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005c23be  74b9                 je 0x5c2379
// 005c23c0  50                   push eax
// 005c23c1  8d4c241c             lea ecx, [esp + 0x1c]
// 005c23c5  68109f7a00           push 0x7a9f10
// 005c23ca  51                   push ecx
// 005c23cb  e8f0f3f3ff           call 0x5017c0
// 005c23d0  83c40c               add esp, 0xc
// 005c23d3  50                   push eax
// 005c23d4  8d4c2438             lea ecx, [esp + 0x38]
// 005c23d8  c744246800000000     mov dword ptr [esp + 0x68], 0
// 005c23e0  e8db09e5ff           call 0x412dc0
// 005c23e5  68c0108400           push 0x8410c0
// 005c23ea  8d542438             lea edx, [esp + 0x38]
// 005c23ee  52                   push edx
// 005c23ef  e8aae70600           call 0x630b9e
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHABVBrickColor@3@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

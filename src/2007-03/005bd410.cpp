// roc 2007-03 005bd410  unit: seg_005b0000  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bd410
//
// 005bd410  64a100000000         mov eax, dword ptr fs:[0]
// 005bd416  6aff                 push -1
// 005bd418  68e96e7500           push 0x756ee9
// 005bd41d  50                   push eax
// 005bd41e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bd422  64892500000000       mov dword ptr fs:[0], esp
// 005bd429  83ec54               sub esp, 0x54
// 005bd42c  56                   push esi
// 005bd42d  57                   push edi
// 005bd42e  bf44957b00           mov edi, 0x7b9544
// 005bd433  8bf0                 mov esi, eax
// 005bd435  b907000000           mov ecx, 7
// 005bd43a  33d2                 xor edx, edx
// 005bd43c  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd43e  752a                 jne 0x5bd46a
// 005bd440  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 005bd444  8b08                 mov ecx, dword ptr [eax]
// 005bd446  8b542474             mov edx, dword ptr [esp + 0x74]
// 005bd44a  51                   push ecx
// 005bd44b  52                   push edx
// 005bd44c  e80fbcffff           call 0x5b9060
// 005bd451  83c408               add esp, 8
// 005bd454  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005bd458  5f                   pop edi
// 005bd459  b801000000           mov eax, 1
// 005bd45e  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd465  5e                   pop esi
// 005bd466  83c460               add esp, 0x60
// 005bd469  c3                   ret 
// 005bd46a  bf3c957b00           mov edi, 0x7b953c
// 005bd46f  8bf0                 mov esi, eax
// 005bd471  b907000000           mov ecx, 7
// 005bd476  33d2                 xor edx, edx
// 005bd478  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd47a  74c4                 je 0x5bd440
// 005bd47c  bf74a17800           mov edi, 0x78a174
// 005bd481  8bf0                 mov esi, eax
// 005bd483  b906000000           mov ecx, 6
// 005bd488  33d2                 xor edx, edx
// 005bd48a  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd48c  7525                 jne 0x5bd4b3
// 005bd48e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005bd492  83ec0c               sub esp, 0xc
// 005bd495  8bc4                 mov eax, esp
// 005bd497  89642414             mov dword ptr [esp + 0x14], esp
// 005bd49b  50                   push eax
// 005bd49c  e84f5efcff           call 0x5832f0
// 005bd4a1  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005bd4a8  51                   push ecx
// 005bd4a9  e87297f7ff           call 0x536c20
// 005bd4ae  83c410               add esp, 0x10
// 005bd4b1  eba1                 jmp 0x5bd454
// 005bd4b3  bf3ceb7900           mov edi, 0x79eb3c
// 005bd4b8  8bf0                 mov esi, eax
// 005bd4ba  b902000000           mov ecx, 2
// 005bd4bf  33d2                 xor edx, edx
// 005bd4c1  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd4c3  7528                 jne 0x5bd4ed
// 005bd4c5  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005bd4c9  8d44240c             lea eax, [esp + 0xc]
// 005bd4cd  50                   push eax
// 005bd4ce  e81d5efcff           call 0x5832f0
// 005bd4d3  d900                 fld dword ptr [eax]
// 005bd4d5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005bd4d9  83ec08               sub esp, 8
// 005bd4dc  dd1c24               fstp qword ptr [esp]
// 005bd4df  51                   push ecx
// 005bd4e0  e85bbbffff           call 0x5b9040
// 005bd4e5  83c40c               add esp, 0xc
// 005bd4e8  e967ffffff           jmp 0x5bd454
// 005bd4ed  bf1c957b00           mov edi, 0x7b951c
// 005bd4f2  8bf0                 mov esi, eax
// 005bd4f4  b902000000           mov ecx, 2
// 005bd4f9  33d2                 xor edx, edx
// 005bd4fb  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd4fd  7513                 jne 0x5bd512
// 005bd4ff  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005bd503  8d44240c             lea eax, [esp + 0xc]
// 005bd507  50                   push eax
// 005bd508  e8e35dfcff           call 0x5832f0
// 005bd50d  d94004               fld dword ptr [eax + 4]
// 005bd510  ebc3                 jmp 0x5bd4d5
// 005bd512  bf18957b00           mov edi, 0x7b9518
// 005bd517  8bf0                 mov esi, eax
// 005bd519  b902000000           mov ecx, 2
// 005bd51e  33d2                 xor edx, edx
// 005bd520  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd522  7513                 jne 0x5bd537
// 005bd524  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005bd528  8d44240c             lea eax, [esp + 0xc]
// 005bd52c  50                   push eax
// 005bd52d  e8be5dfcff           call 0x5832f0
// 005bd532  d94008               fld dword ptr [eax + 8]
// 005bd535  eb9e                 jmp 0x5bd4d5
// 005bd537  bf20557900           mov edi, 0x795520
// 005bd53c  8bf0                 mov esi, eax
// 005bd53e  b905000000           mov ecx, 5
// 005bd543  33d2                 xor edx, edx
// 005bd545  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd547  7535                 jne 0x5bd57e
// 005bd549  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005bd54d  e8ee5cfcff           call 0x583240
// 005bd552  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005bd556  7213                 jb 0x5bd56b
// 005bd558  8b4004               mov eax, dword ptr [eax + 4]
// 005bd55b  50                   push eax
// 005bd55c  8b442478             mov eax, dword ptr [esp + 0x78]
// 005bd560  50                   push eax
// 005bd561  e85abbffff           call 0x5b90c0
// 005bd566  e9e6feffff           jmp 0x5bd451
// 005bd56b  83c004               add eax, 4
// 005bd56e  50                   push eax
// 005bd56f  8b442478             mov eax, dword ptr [esp + 0x78]
// 005bd573  50                   push eax
// 005bd574  e847bbffff           call 0x5b90c0
// 005bd579  e9d3feffff           jmp 0x5bd451
// 005bd57e  bf5c6f7800           mov edi, 0x786f5c
// 005bd583  8bf0                 mov esi, eax
// 005bd585  b905000000           mov ecx, 5
// 005bd58a  33d2                 xor edx, edx
// 005bd58c  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bd58e  74b9                 je 0x5bd549
// 005bd590  50                   push eax
// 005bd591  8d4c241c             lea ecx, [esp + 0x1c]
// 005bd595  6808b67a00           push 0x7ab608
// 005bd59a  51                   push ecx
// 005bd59b  e8907df3ff           call 0x4f5330
// 005bd5a0  83c40c               add esp, 0xc
// 005bd5a3  50                   push eax
// 005bd5a4  8d4c2438             lea ecx, [esp + 0x38]
// 005bd5a8  c744246800000000     mov dword ptr [esp + 0x68], 0
// 005bd5b0  e86b67e5ff           call 0x413d20
// 005bd5b5  68e0138400           push 0x8413e0
// 005bd5ba  8d542438             lea edx, [esp + 0x38]
// 005bd5be  52                   push edx
// 005bd5bf  e86a1a0600           call 0x61f02e
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHABVBrickColor@3@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp

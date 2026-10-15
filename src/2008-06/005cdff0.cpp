// roc 2008-06 005cdff0  unit: RBX::Camera  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cdff0
//
// 005cdff0  64a100000000         mov eax, dword ptr fs:[0]
// 005cdff6  d944240c             fld dword ptr [esp + 0xc]
// 005cdffa  d8642404             fsub dword ptr [esp + 4]
// 005cdffe  6aff                 push -1
// 005ce000  68b8547d00           push 0x7d54b8
// 005ce005  50                   push eax
// 005ce006  64892500000000       mov dword ptr fs:[0], esp
// 005ce00d  dc1d30128100         fcomp qword ptr [0x811230]
// 005ce013  83ec18               sub esp, 0x18
// 005ce016  56                   push esi
// 005ce017  8bf1                 mov esi, ecx
// 005ce019  dfe0                 fnstsw ax
// 005ce01b  f6c405               test ah, 5
// 005ce01e  0f8b9a000000         jnp 0x5ce0be
// 005ce024  d9442430             fld dword ptr [esp + 0x30]
// 005ce028  53                   push ebx
// 005ce029  55                   push ebp
// 005ce02a  57                   push edi
// 005ce02b  51                   push ecx
// 005ce02c  d91c24               fstp dword ptr [esp]
// 005ce02f  e89ce2ffff           call 0x5cc2d0
// 005ce034  8bce                 mov ecx, esi
// 005ce036  e885ebffff           call 0x5ccbc0
// 005ce03b  8bce                 mov ecx, esi
// 005ce03d  e82effffff           call 0x5cdf70
// 005ce042  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 005ce046  57                   push edi
// 005ce047  8d442414             lea eax, [esp + 0x14]
// 005ce04b  50                   push eax
// 005ce04c  8d8e30010000         lea ecx, [esi + 0x130]
// 005ce052  e8293cf4ff           call 0x511c80
// 005ce057  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 005ce05b  50                   push eax
// 005ce05c  8bcd                 mov ecx, ebp
// 005ce05e  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ce066  e8b5170400           call 0x60f820
// 005ce06b  8d4c2410             lea ecx, [esp + 0x10]
// 005ce06f  8ad8                 mov bl, al
// 005ce071  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005ce079  e8822ff4ff           call 0x511000
// 005ce07e  57                   push edi
// 005ce07f  55                   push ebp
// 005ce080  83ec0c               sub esp, 0xc
// 005ce083  8bce                 mov ecx, esi
// 005ce085  84db                 test bl, bl
// 005ce087  740e                 je 0x5ce097
// 005ce089  d9442450             fld dword ptr [esp + 0x50]
// 005ce08d  d9542408             fst dword ptr [esp + 8]
// 005ce091  d944244c             fld dword ptr [esp + 0x4c]
// 005ce095  eb0c                 jmp 0x5ce0a3
// 005ce097  d9442454             fld dword ptr [esp + 0x54]
// 005ce09b  d9542408             fst dword ptr [esp + 8]
// 005ce09f  d9442450             fld dword ptr [esp + 0x50]
// 005ce0a3  d9c0                 fld st(0)
// 005ce0a5  dec2                 faddp st(2)
// 005ce0a7  d9c9                 fxch st(1)
// 005ce0a9  d80dac9b8100         fmul dword ptr [0x819bac]
// 005ce0af  d95c2404             fstp dword ptr [esp + 4]
// 005ce0b3  d91c24               fstp dword ptr [esp]
// 005ce0b6  e835ffffff           call 0x5cdff0
// 005ce0bb  5f                   pop edi
// 005ce0bc  5d                   pop ebp
// 005ce0bd  5b                   pop ebx
// 005ce0be  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ce0c2  5e                   pop esi
// 005ce0c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005ce0ca  83c424               add esp, 0x24
// 005ce0cd  c21400               ret 0x14
// library rbxgs/roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp (function ?tryZoomExtents@Camera@RBX@@AAEXMMMABVExtents@2@ABVRect2D@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp

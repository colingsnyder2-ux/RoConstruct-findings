// roc 2012-06 00a954f0  unit: seg_00a90000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a954f0
//
// 00a954f0  83ec18               sub esp, 0x18
// 00a954f3  8d0424               lea eax, [esp]
// 00a954f6  50                   push eax
// 00a954f7  ff154823b200         call dword ptr [0xb22348]
// 00a954fd  85c0                 test eax, eax
// 00a954ff  745b                 je 0xa9555c
// 00a95501  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a95505  8b1424               mov edx, dword ptr [esp]
// 00a95508  53                   push ebx
// 00a95509  56                   push esi
// 00a9550a  57                   push edi
// 00a9550b  6a00                 push 0
// 00a9550d  68e8030000           push 0x3e8
// 00a95512  51                   push ecx
// 00a95513  52                   push edx
// 00a95514  e847dfeeff           call 0x983460
// 00a95519  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a9551d  6a00                 push 0
// 00a9551f  51                   push ecx
// 00a95520  52                   push edx
// 00a95521  50                   push eax
// 00a95522  e819deeeff           call 0x983340
// 00a95527  8b3d4423b200         mov edi, dword ptr [0xb22344]
// 00a9552d  8bf2                 mov esi, edx
// 00a9552f  8d54241c             lea edx, [esp + 0x1c]
// 00a95533  52                   push edx
// 00a95534  8bd8                 mov ebx, eax
// 00a95536  ffd7                 call edi
// 00a95538  8d442414             lea eax, [esp + 0x14]
// 00a9553c  50                   push eax
// 00a9553d  ffd7                 call edi
// 00a9553f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a95543  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00a95547  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a9554b  1b442420             sbb eax, dword ptr [esp + 0x20]
// 00a9554f  3bc6                 cmp eax, esi
// 00a95551  7ce5                 jl 0xa95538
// 00a95553  7f04                 jg 0xa95559
// 00a95555  3bcb                 cmp ecx, ebx
// 00a95557  72df                 jb 0xa95538
// 00a95559  5f                   pop edi
// 00a9555a  5e                   pop esi
// 00a9555b  5b                   pop ebx
// 00a9555c  83c418               add esp, 0x18
// 00a9555f  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp

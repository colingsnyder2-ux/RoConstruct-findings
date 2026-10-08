// roc 2008-06 005014b0  unit: boost::bad_lexical_cast  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005014b0
//
// 005014b0  83ec18               sub esp, 0x18
// 005014b3  8d0424               lea eax, [esp]
// 005014b6  50                   push eax
// 005014b7  ff155c228000         call dword ptr [0x80225c]
// 005014bd  85c0                 test eax, eax
// 005014bf  745b                 je 0x50151c
// 005014c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005014c5  8b1424               mov edx, dword ptr [esp]
// 005014c8  53                   push ebx
// 005014c9  56                   push esi
// 005014ca  57                   push edi
// 005014cb  6a00                 push 0
// 005014cd  68e8030000           push 0x3e8
// 005014d2  51                   push ecx
// 005014d3  52                   push edx
// 005014d4  e857071a00           call 0x6a1c30
// 005014d9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005014dd  6a00                 push 0
// 005014df  51                   push ecx
// 005014e0  52                   push edx
// 005014e1  50                   push eax
// 005014e2  e8e9011a00           call 0x6a16d0
// 005014e7  8b3d50228000         mov edi, dword ptr [0x802250]
// 005014ed  8bf2                 mov esi, edx
// 005014ef  8d54241c             lea edx, [esp + 0x1c]
// 005014f3  52                   push edx
// 005014f4  8bd8                 mov ebx, eax
// 005014f6  ffd7                 call edi
// 005014f8  8d442414             lea eax, [esp + 0x14]
// 005014fc  50                   push eax
// 005014fd  ffd7                 call edi
// 005014ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00501503  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00501507  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050150b  1b442420             sbb eax, dword ptr [esp + 0x20]
// 0050150f  3bc6                 cmp eax, esi
// 00501511  7ce5                 jl 0x5014f8
// 00501513  7f04                 jg 0x501519
// 00501515  3bcb                 cmp ecx, ebx
// 00501517  72df                 jb 0x5014f8
// 00501519  5f                   pop edi
// 0050151a  5e                   pop esi
// 0050151b  5b                   pop ebx
// 0050151c  83c418               add esp, 0x18
// 0050151f  c3                   ret 
// library rbxgs-render/Profiler.cpp (function ?Delay@Render@RBX@@YAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Profiler.cpp

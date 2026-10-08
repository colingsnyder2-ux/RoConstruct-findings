// roc 2007-08 005e26b0  unit: seg_005e0000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e26b0
//
// 005e26b0  6aff                 push -1
// 005e26b2  686baa7500           push 0x75aa6b
// 005e26b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e26bd  50                   push eax
// 005e26be  64892500000000       mov dword ptr fs:[0], esp
// 005e26c5  51                   push ecx
// 005e26c6  53                   push ebx
// 005e26c7  56                   push esi
// 005e26c8  8bf1                 mov esi, ecx
// 005e26ca  57                   push edi
// 005e26cb  8974240c             mov dword ptr [esp + 0xc], esi
// 005e26cf  33db                 xor ebx, ebx
// 005e26d1  395e08               cmp dword ptr [esi + 8], ebx
// 005e26d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e26d8  7406                 je 0x5e26e0
// 005e26da  53                   push ebx
// 005e26db  e8d0fdffff           call 0x5e24b0
// 005e26e0  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005e26e3  3bfb                 cmp edi, ebx
// 005e26e5  7410                 je 0x5e26f7
// 005e26e7  8bcf                 mov ecx, edi
// 005e26e9  e832a5e2ff           call 0x40cc20
// 005e26ee  57                   push edi
// 005e26ef  e86ed50400           call 0x62fc62
// 005e26f4  83c404               add esp, 4
// 005e26f7  895e20               mov dword ptr [esi + 0x20], ebx
// 005e26fa  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e26fd  50                   push eax
// 005e26fe  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e2706  e805d1f1ff           call 0x4ff810
// 005e270b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e270f  83c404               add esp, 4
// 005e2712  895e10               mov dword ptr [esi + 0x10], ebx
// 005e2715  895e14               mov dword ptr [esi + 0x14], ebx
// 005e2718  895e18               mov dword ptr [esi + 0x18], ebx
// 005e271b  5f                   pop edi
// 005e271c  5e                   pop esi
// 005e271d  5b                   pop ebx
// 005e271e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2725  83c410               add esp, 0x10
// 005e2728  c3                   ret 
// library openrbx-client/App\v8kernel\Body.cpp (function ??1Body@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Body.cpp

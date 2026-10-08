// roc 2007-03 004f0c90  unit: seg_004f0000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0c90
//
// 004f0c90  8b442408             mov eax, dword ptr [esp + 8]
// 004f0c94  57                   push edi
// 004f0c95  8b7c2408             mov edi, dword ptr [esp + 8]
// 004f0c99  3bf8                 cmp edi, eax
// 004f0c9b  0f8481000000         je 0x4f0d22
// 004f0ca1  56                   push esi
// 004f0ca2  8d7704               lea esi, [edi + 4]
// 004f0ca5  3bf0                 cmp esi, eax
// 004f0ca7  7478                 je 0x4f0d21
// 004f0ca9  53                   push ebx
// 004f0caa  55                   push ebp
// 004f0cab  8d6e04               lea ebp, [esi + 4]
// 004f0cae  8bff                 mov edi, edi
// 004f0cb0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004f0cb4  57                   push edi
// 004f0cb5  56                   push esi
// 004f0cb6  ffd3                 call ebx
// 004f0cb8  83c408               add esp, 8
// 004f0cbb  84c0                 test al, al
// 004f0cbd  7419                 je 0x4f0cd8
// 004f0cbf  3bfe                 cmp edi, esi
// 004f0cc1  7450                 je 0x4f0d13
// 004f0cc3  3bf5                 cmp esi, ebp
// 004f0cc5  744c                 je 0x4f0d13
// 004f0cc7  6a00                 push 0
// 004f0cc9  6a00                 push 0
// 004f0ccb  55                   push ebp
// 004f0ccc  56                   push esi
// 004f0ccd  57                   push edi
// 004f0cce  e8bdfbffff           call 0x4f0890
// 004f0cd3  83c414               add esp, 0x14
// 004f0cd6  eb3b                 jmp 0x4f0d13
// 004f0cd8  8d7df8               lea edi, [ebp - 8]
// 004f0cdb  57                   push edi
// 004f0cdc  56                   push esi
// 004f0cdd  ffd3                 call ebx
// 004f0cdf  83c408               add esp, 8
// 004f0ce2  84c0                 test al, al
// 004f0ce4  7429                 je 0x4f0d0f
// 004f0ce6  8bdf                 mov ebx, edi
// 004f0ce8  83ef04               sub edi, 4
// 004f0ceb  57                   push edi
// 004f0cec  56                   push esi
// 004f0ced  ff542424             call dword ptr [esp + 0x24]
// 004f0cf1  83c408               add esp, 8
// 004f0cf4  84c0                 test al, al
// 004f0cf6  75ee                 jne 0x4f0ce6
// 004f0cf8  3bde                 cmp ebx, esi
// 004f0cfa  7413                 je 0x4f0d0f
// 004f0cfc  3bf5                 cmp esi, ebp
// 004f0cfe  740f                 je 0x4f0d0f
// 004f0d00  6a00                 push 0
// 004f0d02  6a00                 push 0
// 004f0d04  55                   push ebp
// 004f0d05  56                   push esi
// 004f0d06  53                   push ebx
// 004f0d07  e884fbffff           call 0x4f0890
// 004f0d0c  83c414               add esp, 0x14
// 004f0d0f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f0d13  83c604               add esi, 4
// 004f0d16  83c504               add ebp, 4
// 004f0d19  3b742418             cmp esi, dword ptr [esp + 0x18]
// 004f0d1d  7591                 jne 0x4f0cb0
// 004f0d1f  5d                   pop ebp
// 004f0d20  5b                   pop ebx
// 004f0d21  5e                   pop esi
// 004f0d22  5f                   pop edi
// 004f0d23  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Insertion_sort@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YAXPAPAVRenderSurface@Render@RBX@@0P6A_NABQAV123@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp

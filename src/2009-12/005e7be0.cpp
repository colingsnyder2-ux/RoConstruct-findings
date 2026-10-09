// roc 2009-12 005e7be0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7be0
//
// 005e7be0  8b442408             mov eax, dword ptr [esp + 8]
// 005e7be4  83ec0c               sub esp, 0xc
// 005e7be7  56                   push esi
// 005e7be8  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e7bec  3bf0                 cmp esi, eax
// 005e7bee  0f84b6000000         je 0x5e7caa
// 005e7bf4  53                   push ebx
// 005e7bf5  8d5e04               lea ebx, [esi + 4]
// 005e7bf8  3bd8                 cmp ebx, eax
// 005e7bfa  0f84a9000000         je 0x5e7ca9
// 005e7c00  8d43fc               lea eax, [ebx - 4]
// 005e7c03  8944240c             mov dword ptr [esp + 0xc], eax
// 005e7c07  b804000000           mov eax, 4
// 005e7c0c  55                   push ebp
// 005e7c0d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005e7c11  2bc6                 sub eax, esi
// 005e7c13  57                   push edi
// 005e7c14  89442418             mov dword ptr [esp + 0x18], eax
// 005e7c18  8b0b                 mov ecx, dword ptr [ebx]
// 005e7c1a  8d542410             lea edx, [esp + 0x10]
// 005e7c1e  56                   push esi
// 005e7c1f  52                   push edx
// 005e7c20  8bfb                 mov edi, ebx
// 005e7c22  894c2418             mov dword ptr [esp + 0x18], ecx
// 005e7c26  ffd5                 call ebp
// 005e7c28  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e7c2c  83c408               add esp, 8
// 005e7c2f  84c0                 test al, al
// 005e7c31  742d                 je 0x5e7c60
// 005e7c33  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7c37  03c1                 add eax, ecx
// 005e7c39  c1f802               sar eax, 2
// 005e7c3c  85c0                 test eax, eax
// 005e7c3e  7e18                 jle 0x5e7c58
// 005e7c40  03c0                 add eax, eax
// 005e7c42  03c0                 add eax, eax
// 005e7c44  50                   push eax
// 005e7c45  8bd3                 mov edx, ebx
// 005e7c47  56                   push esi
// 005e7c48  2bd0                 sub edx, eax
// 005e7c4a  50                   push eax
// 005e7c4b  83c204               add edx, 4
// 005e7c4e  52                   push edx
// 005e7c4f  ff15c0b79800         call dword ptr [0x98b7c0]
// 005e7c55  83c410               add esp, 0x10
// 005e7c58  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e7c5c  8906                 mov dword ptr [esi], eax
// 005e7c5e  eb35                 jmp 0x5e7c95
// 005e7c60  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e7c64  51                   push ecx
// 005e7c65  8d542414             lea edx, [esp + 0x14]
// 005e7c69  52                   push edx
// 005e7c6a  ffd5                 call ebp
// 005e7c6c  83c408               add esp, 8
// 005e7c6f  84c0                 test al, al
// 005e7c71  7418                 je 0x5e7c8b
// 005e7c73  8b06                 mov eax, dword ptr [esi]
// 005e7c75  8907                 mov dword ptr [edi], eax
// 005e7c77  8bfe                 mov edi, esi
// 005e7c79  83ee04               sub esi, 4
// 005e7c7c  8d4c2410             lea ecx, [esp + 0x10]
// 005e7c80  56                   push esi
// 005e7c81  51                   push ecx
// 005e7c82  ffd5                 call ebp
// 005e7c84  83c408               add esp, 8
// 005e7c87  84c0                 test al, al
// 005e7c89  75e8                 jne 0x5e7c73
// 005e7c8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e7c8f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e7c93  8917                 mov dword ptr [edi], edx
// 005e7c95  8344241404           add dword ptr [esp + 0x14], 4
// 005e7c9a  83c304               add ebx, 4
// 005e7c9d  3b5c2424             cmp ebx, dword ptr [esp + 0x24]
// 005e7ca1  0f8571ffffff         jne 0x5e7c18
// 005e7ca7  5f                   pop edi
// 005e7ca8  5d                   pop ebp
// 005e7ca9  5b                   pop ebx
// 005e7caa  5e                   pop esi
// 005e7cab  83c40c               add esp, 0xc
// 005e7cae  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderSurface.cpp (function ??$_Insertion_sort1@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@ZPAV123@@std@@YAXPAPAVRenderSurface@Render@RBX@@0P6A_NABQAV123@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderSurface.cpp

// from server: 100% by auto
// roc 2007-03 004b2a20  unit: seg_004b0000  size: 677 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b2a20
//
// 004b2a20  55                   push ebp
// 004b2a21  8bec                 mov ebp, esp
// 004b2a23  83ec68               sub esp, 0x68
// 004b2a26  53                   push ebx
// 004b2a27  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004b2a2a  56                   push esi
// 004b2a2b  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b2a2e  33c0                 xor eax, eax
// 004b2a30  57                   push edi
// 004b2a31  8945dc               mov dword ptr [ebp - 0x24], eax
// 004b2a34  8945e0               mov dword ptr [ebp - 0x20], eax
// 004b2a37  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004b2a3a  8d4598               lea eax, [ebp - 0x68]
// 004b2a3d  50                   push eax
// 004b2a3e  8d4db8               lea ecx, [ebp - 0x48]
// 004b2a41  51                   push ecx
// 004b2a42  53                   push ebx
// 004b2a43  56                   push esi
// 004b2a44  c745d801000000       mov dword ptr [ebp - 0x28], 1
// 004b2a4b  e890e0ffff           call 0x4b0ae0
// 004b2a50  8b16                 mov edx, dword ptr [esi]
// 004b2a52  8b4604               mov eax, dword ptr [esi + 4]
// 004b2a55  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b2a58  8955e8               mov dword ptr [ebp - 0x18], edx
// 004b2a5b  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b2a5e  8945ec               mov dword ptr [ebp - 0x14], eax
// 004b2a61  894df0               mov dword ptr [ebp - 0x10], ecx
// 004b2a64  8d45b8               lea eax, [ebp - 0x48]
// 004b2a67  8d4de8               lea ecx, [ebp - 0x18]
// 004b2a6a  83c410               add esp, 0x10
// 004b2a6d  8955f4               mov dword ptr [ebp - 0xc], edx
// 004b2a70  8945f8               mov dword ptr [ebp - 8], eax
// 004b2a73  894dfc               mov dword ptr [ebp - 4], ecx
// 004b2a76  c7450800000000       mov dword ptr [ebp + 8], 0
// 004b2a7d  8b75f8               mov esi, dword ptr [ebp - 8]
// 004b2a80  8b7dfc               mov edi, dword ptr [ebp - 4]
// 004b2a83  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b2a86  8b06                 mov eax, dword ptr [esi]
// 004b2a88  33d2                 xor edx, edx
// 004b2a8a  2907                 sub dword ptr [edi], eax
// 004b2a8c  8b4604               mov eax, dword ptr [esi + 4]
// 004b2a8f  194704               sbb dword ptr [edi + 4], eax
// 004b2a92  8b4608               mov eax, dword ptr [esi + 8]
// 004b2a95  194708               sbb dword ptr [edi + 8], eax
// 004b2a98  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b2a9b  19470c               sbb dword ptr [edi + 0xc], eax
// 004b2a9e  e322                 jecxz 0x4b2ac2
// 004b2aa0  42                   inc edx
// 004b2aa1  42                   inc edx
// 004b2aa2  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b2aa5  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b2aa8  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b2aac  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b2ab0  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b2ab4  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b2ab8  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b2abc  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b2ac0  e2de                 loop 0x4b2aa0
// 004b2ac2  8b13                 mov edx, dword ptr [ebx]
// 004b2ac4  8b4304               mov eax, dword ptr [ebx + 4]
// 004b2ac7  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004b2aca  8955c8               mov dword ptr [ebp - 0x38], edx
// 004b2acd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 004b2ad0  8945cc               mov dword ptr [ebp - 0x34], eax
// 004b2ad3  894dd0               mov dword ptr [ebp - 0x30], ecx
// 004b2ad6  8955d4               mov dword ptr [ebp - 0x2c], edx
// 004b2ad9  8da42400000000       lea esp, [esp]
// 004b2ae0  8d45c8               lea eax, [ebp - 0x38]
// 004b2ae3  50                   push eax
// 004b2ae4  8d4db8               lea ecx, [ebp - 0x48]
// 004b2ae7  51                   push ecx
// 004b2ae8  8d5598               lea edx, [ebp - 0x68]
// 004b2aeb  52                   push edx
// 004b2aec  50                   push eax
// 004b2aed  e8eedfffff           call 0x4b0ae0
// 004b2af2  83c410               add esp, 0x10
// 004b2af5  33c0                 xor eax, eax
// 004b2af7  837c85c800           cmp dword ptr [ebp + eax*4 - 0x38], 0
// 004b2afc  7529                 jne 0x4b2b27
// 004b2afe  83c001               add eax, 1
// 004b2b01  83f804               cmp eax, 4
// 004b2b04  72f1                 jb 0x4b2af7
// 004b2b06  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004b2b09  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004b2b0c  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004b2b0f  8908                 mov dword ptr [eax], ecx
// 004b2b11  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b2b14  895004               mov dword ptr [eax + 4], edx
// 004b2b17  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 004b2b1a  5f                   pop edi
// 004b2b1b  5e                   pop esi
// 004b2b1c  894808               mov dword ptr [eax + 8], ecx
// 004b2b1f  89500c               mov dword ptr [eax + 0xc], edx
// 004b2b22  5b                   pop ebx
// 004b2b23  8be5                 mov esp, ebp
// 004b2b25  5d                   pop ebp
// 004b2b26  c3                   ret 
// 004b2b27  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b2b2a  8d4da8               lea ecx, [ebp - 0x58]
// 004b2b2d  51                   push ecx
// 004b2b2e  56                   push esi
// 004b2b2f  8d55d8               lea edx, [ebp - 0x28]
// 004b2b32  52                   push edx
// 004b2b33  8d45b8               lea eax, [ebp - 0x48]
// 004b2b36  50                   push eax
// 004b2b37  8d4de8               lea ecx, [ebp - 0x18]
// 004b2b3a  51                   push ecx
// 004b2b3b  e860e2ffff           call 0x4b0da0
// 004b2b40  8d5598               lea edx, [ebp - 0x68]
// 004b2b43  52                   push edx
// 004b2b44  8d45b8               lea eax, [ebp - 0x48]
// 004b2b47  50                   push eax
// 004b2b48  8d4dc8               lea ecx, [ebp - 0x38]
// 004b2b4b  51                   push ecx
// 004b2b4c  52                   push edx
// 004b2b4d  e88edfffff           call 0x4b0ae0
// 004b2b52  83c424               add esp, 0x24
// 004b2b55  33c0                 xor eax, eax
// 004b2b57  837c859800           cmp dword ptr [ebp + eax*4 - 0x68], 0
// 004b2b5c  7529                 jne 0x4b2b87
// 004b2b5e  83c001               add eax, 1
// 004b2b61  83f804               cmp eax, 4
// 004b2b64  72f1                 jb 0x4b2b57
// 004b2b66  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004b2b69  8b4da8               mov ecx, dword ptr [ebp - 0x58]
// 004b2b6c  8b55ac               mov edx, dword ptr [ebp - 0x54]
// 004b2b6f  8908                 mov dword ptr [eax], ecx
// 004b2b71  8b4db0               mov ecx, dword ptr [ebp - 0x50]
// 004b2b74  895004               mov dword ptr [eax + 4], edx
// 004b2b77  8b55b4               mov edx, dword ptr [ebp - 0x4c]
// 004b2b7a  5f                   pop edi
// 004b2b7b  5e                   pop esi
// 004b2b7c  894808               mov dword ptr [eax + 8], ecx
// 004b2b7f  89500c               mov dword ptr [eax + 0xc], edx
// 004b2b82  5b                   pop ebx
// 004b2b83  8be5                 mov esp, ebp
// 004b2b85  5d                   pop ebp
// 004b2b86  c3                   ret 
// 004b2b87  8d45d8               lea eax, [ebp - 0x28]
// 004b2b8a  50                   push eax
// 004b2b8b  56                   push esi
// 004b2b8c  8d4de8               lea ecx, [ebp - 0x18]
// 004b2b8f  51                   push ecx
// 004b2b90  8d55b8               lea edx, [ebp - 0x48]
// 004b2b93  52                   push edx
// 004b2b94  8d45a8               lea eax, [ebp - 0x58]
// 004b2b97  50                   push eax
// 004b2b98  e803e2ffff           call 0x4b0da0
// 004b2b9d  8d4dc8               lea ecx, [ebp - 0x38]
// 004b2ba0  51                   push ecx
// 004b2ba1  8d55b8               lea edx, [ebp - 0x48]
// 004b2ba4  52                   push edx
// 004b2ba5  8d4598               lea eax, [ebp - 0x68]
// 004b2ba8  50                   push eax
// 004b2ba9  51                   push ecx
// 004b2baa  e831dfffff           call 0x4b0ae0
// 004b2baf  83c424               add esp, 0x24
// 004b2bb2  33c0                 xor eax, eax
// 004b2bb4  837c85c800           cmp dword ptr [ebp + eax*4 - 0x38], 0
// 004b2bb9  7529                 jne 0x4b2be4
// 004b2bbb  83c001               add eax, 1
// 004b2bbe  83f804               cmp eax, 4
// 004b2bc1  72f1                 jb 0x4b2bb4
// 004b2bc3  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004b2bc6  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 004b2bc9  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 004b2bcc  8908                 mov dword ptr [eax], ecx
// 004b2bce  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004b2bd1  895004               mov dword ptr [eax + 4], edx
// 004b2bd4  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004b2bd7  5f                   pop edi
// 004b2bd8  5e                   pop esi
// 004b2bd9  894808               mov dword ptr [eax + 8], ecx
// 004b2bdc  89500c               mov dword ptr [eax + 0xc], edx
// 004b2bdf  5b                   pop ebx
// 004b2be0  8be5                 mov esp, ebp
// 004b2be2  5d                   pop ebp
// 004b2be3  c3                   ret 
// 004b2be4  8d55e8               lea edx, [ebp - 0x18]
// 004b2be7  52                   push edx
// 004b2be8  56                   push esi
// 004b2be9  8d45a8               lea eax, [ebp - 0x58]
// 004b2bec  50                   push eax
// 004b2bed  8d4db8               lea ecx, [ebp - 0x48]
// 004b2bf0  51                   push ecx
// 004b2bf1  8d55d8               lea edx, [ebp - 0x28]
// 004b2bf4  52                   push edx
// 004b2bf5  e8a6e1ffff           call 0x4b0da0
// 004b2bfa  8d4598               lea eax, [ebp - 0x68]
// 004b2bfd  50                   push eax
// 004b2bfe  8d4db8               lea ecx, [ebp - 0x48]
// 004b2c01  51                   push ecx
// 004b2c02  8d55c8               lea edx, [ebp - 0x38]
// 004b2c05  52                   push edx
// 004b2c06  50                   push eax
// 004b2c07  e8d4deffff           call 0x4b0ae0
// 004b2c0c  83c424               add esp, 0x24
// 004b2c0f  33c0                 xor eax, eax
// 004b2c11  837c859800           cmp dword ptr [ebp + eax*4 - 0x68], 0
// 004b2c16  750d                 jne 0x4b2c25
// 004b2c18  83c001               add eax, 1
// 004b2c1b  83f804               cmp eax, 4
// 004b2c1e  72f1                 jb 0x4b2c11
// 004b2c20  e9e1feffff           jmp 0x4b2b06
// 004b2c25  8d4da8               lea ecx, [ebp - 0x58]
// 004b2c28  51                   push ecx
// 004b2c29  56                   push esi
// 004b2c2a  8d55d8               lea edx, [ebp - 0x28]
// 004b2c2d  52                   push edx
// 004b2c2e  8d45b8               lea eax, [ebp - 0x48]
// 004b2c31  50                   push eax
// 004b2c32  8d4de8               lea ecx, [ebp - 0x18]
// 004b2c35  51                   push ecx
// 004b2c36  e865e1ffff           call 0x4b0da0
// 004b2c3b  8d55c8               lea edx, [ebp - 0x38]
// 004b2c3e  52                   push edx
// 004b2c3f  8d45b8               lea eax, [ebp - 0x48]
// 004b2c42  50                   push eax
// 004b2c43  8d4d98               lea ecx, [ebp - 0x68]
// 004b2c46  51                   push ecx
// 004b2c47  52                   push edx
// 004b2c48  e893deffff           call 0x4b0ae0
// 004b2c4d  83c424               add esp, 0x24
// 004b2c50  33c0                 xor eax, eax
// 004b2c52  837c85c800           cmp dword ptr [ebp + eax*4 - 0x38], 0
// 004b2c57  750d                 jne 0x4b2c66
// 004b2c59  83c001               add eax, 1
// 004b2c5c  83f804               cmp eax, 4
// 004b2c5f  72f1                 jb 0x4b2c52
// 004b2c61  e900ffffff           jmp 0x4b2b66
// 004b2c66  8d45d8               lea eax, [ebp - 0x28]
// 004b2c69  50                   push eax
// 004b2c6a  56                   push esi
// 004b2c6b  8d4de8               lea ecx, [ebp - 0x18]
// 004b2c6e  51                   push ecx
// 004b2c6f  8d55b8               lea edx, [ebp - 0x48]
// 004b2c72  52                   push edx
// 004b2c73  8d45a8               lea eax, [ebp - 0x58]
// 004b2c76  50                   push eax
// 004b2c77  e824e1ffff           call 0x4b0da0
// 004b2c7c  8d4d98               lea ecx, [ebp - 0x68]
// 004b2c7f  51                   push ecx
// 004b2c80  8d55b8               lea edx, [ebp - 0x48]
// 004b2c83  52                   push edx
// 004b2c84  8d45c8               lea eax, [ebp - 0x38]
// 004b2c87  50                   push eax
// 004b2c88  51                   push ecx
// 004b2c89  e852deffff           call 0x4b0ae0
// 004b2c8e  83c424               add esp, 0x24
// 004b2c91  33c0                 xor eax, eax
// 004b2c93  837c859800           cmp dword ptr [ebp + eax*4 - 0x68], 0
// 004b2c98  750d                 jne 0x4b2ca7
// 004b2c9a  83c001               add eax, 1
// 004b2c9d  83f804               cmp eax, 4
// 004b2ca0  72f1                 jb 0x4b2c93
// 004b2ca2  e91cffffff           jmp 0x4b2bc3
// 004b2ca7  8d55e8               lea edx, [ebp - 0x18]
// 004b2caa  52                   push edx
// 004b2cab  56                   push esi
// 004b2cac  8d45a8               lea eax, [ebp - 0x58]
// 004b2caf  50                   push eax
// 004b2cb0  8d4db8               lea ecx, [ebp - 0x48]
// 004b2cb3  51                   push ecx
// 004b2cb4  8d55d8               lea edx, [ebp - 0x28]
// 004b2cb7  52                   push edx
// 004b2cb8  e8e3e0ffff           call 0x4b0da0
// 004b2cbd  83c414               add esp, 0x14
// 004b2cc0  e91bfeffff           jmp 0x4b2ae0

// from server: 20% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp
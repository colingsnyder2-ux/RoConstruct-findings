// roc 2009-12 005f0b80  unit: seg_005f0000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f0b80
//
// 005f0b80  51                   push ecx
// 005f0b81  53                   push ebx
// 005f0b82  55                   push ebp
// 005f0b83  33c0                 xor eax, eax
// 005f0b85  56                   push esi
// 005f0b86  57                   push edi
// 005f0b87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005f0b8b  8bf1                 mov esi, ecx
// 005f0b8d  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005f0b90  8b5e08               mov ebx, dword ptr [esi + 8]
// 005f0b93  50                   push eax
// 005f0b94  89442414             mov dword ptr [esp + 0x14], eax
// 005f0b98  c70798559b00         mov dword ptr [edi], 0x9b5598
// 005f0b9e  894704               mov dword ptr [edi + 4], eax
// 005f0ba1  894708               mov dword ptr [edi + 8], eax
// 005f0ba4  89470c               mov dword ptr [edi + 0xc], eax
// 005f0ba7  e8f4b5f6ff           call 0x55c1a0
// 005f0bac  895f08               mov dword ptr [edi + 8], ebx
// 005f0baf  0fafdd               imul ebx, ebp
// 005f0bb2  03db                 add ebx, ebx
// 005f0bb4  03db                 add ebx, ebx
// 005f0bb6  6a01                 push 1
// 005f0bb8  53                   push ebx
// 005f0bb9  c7470400000000       mov dword ptr [edi + 4], 0
// 005f0bc0  896f0c               mov dword ptr [edi + 0xc], ebp
// 005f0bc3  c7471004000000       mov dword ptr [edi + 0x10], 4
// 005f0bca  e8e196ffff           call 0x5ea2b0
// 005f0bcf  8b5608               mov edx, dword ptr [esi + 8]
// 005f0bd2  0faf560c             imul edx, dword ptr [esi + 0xc]
// 005f0bd6  83c40c               add esp, 0xc
// 005f0bd9  33c9                 xor ecx, ecx
// 005f0bdb  894704               mov dword ptr [edi + 4], eax
// 005f0bde  85d2                 test edx, edx
// 005f0be0  7e55                 jle 0x5f0c37
// 005f0be2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005f0be6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005f0be9  8b6e04               mov ebp, dword ptr [esi + 4]
// 005f0bec  0fafd9               imul ebx, ecx
// 005f0bef  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005f0bf3  881c88               mov byte ptr [eax + ecx*4], bl
// 005f0bf6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005f0bf9  8b6e04               mov ebp, dword ptr [esi + 4]
// 005f0bfc  0fafd9               imul ebx, ecx
// 005f0bff  0fb65c2b01           movzx ebx, byte ptr [ebx + ebp + 1]
// 005f0c04  885c8801             mov byte ptr [eax + ecx*4 + 1], bl
// 005f0c08  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005f0c0b  8b6e04               mov ebp, dword ptr [esi + 4]
// 005f0c0e  0fafd9               imul ebx, ecx
// 005f0c11  0fb65c2b02           movzx ebx, byte ptr [ebx + ebp + 2]
// 005f0c16  885c8802             mov byte ptr [eax + ecx*4 + 2], bl
// 005f0c1a  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 005f0c1d  8b6a04               mov ebp, dword ptr [edx + 4]
// 005f0c20  0fafd9               imul ebx, ecx
// 005f0c23  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005f0c27  885c8803             mov byte ptr [eax + ecx*4 + 3], bl
// 005f0c2b  8b5e08               mov ebx, dword ptr [esi + 8]
// 005f0c2e  0faf5e0c             imul ebx, dword ptr [esi + 0xc]
// 005f0c32  41                   inc ecx
// 005f0c33  3bcb                 cmp ecx, ebx
// 005f0c35  7caf                 jl 0x5f0be6
// 005f0c37  8bc7                 mov eax, edi
// 005f0c39  5f                   pop edi
// 005f0c3a  5e                   pop esi
// 005f0c3b  5d                   pop ebp
// 005f0c3c  5b                   pop ebx
// 005f0c3d  59                   pop ecx
// 005f0c3e  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?insertRedAsAlpha@GImage@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp

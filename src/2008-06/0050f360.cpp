// from server: 100% by auto
// roc 2008-06 0050f360  unit: seg_00500000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050f360
//
// 0050f360  51                   push ecx
// 0050f361  53                   push ebx
// 0050f362  55                   push ebp
// 0050f363  33c0                 xor eax, eax
// 0050f365  56                   push esi
// 0050f366  57                   push edi
// 0050f367  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0050f36b  8bf1                 mov esi, ecx
// 0050f36d  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0050f370  8b5e08               mov ebx, dword ptr [esi + 8]
// 0050f373  50                   push eax
// 0050f374  89442414             mov dword ptr [esp + 0x14], eax
// 0050f378  c7075c978100         mov dword ptr [edi], 0x81975c
// 0050f37e  894704               mov dword ptr [edi + 4], eax
// 0050f381  894708               mov dword ptr [edi + 8], eax
// 0050f384  89470c               mov dword ptr [edi + 0xc], eax
// 0050f387  e87489ffff           call 0x507d00
// 0050f38c  895f08               mov dword ptr [edi + 8], ebx
// 0050f38f  0fafdd               imul ebx, ebp
// 0050f392  03db                 add ebx, ebx
// 0050f394  03db                 add ebx, ebx
// 0050f396  6a01                 push 1
// 0050f398  53                   push ebx
// 0050f399  c7470400000000       mov dword ptr [edi + 4], 0
// 0050f3a0  896f0c               mov dword ptr [edi + 0xc], ebp
// 0050f3a3  c7471004000000       mov dword ptr [edi + 0x10], 4
// 0050f3aa  e87197ffff           call 0x508b20
// 0050f3af  8b5608               mov edx, dword ptr [esi + 8]
// 0050f3b2  0faf560c             imul edx, dword ptr [esi + 0xc]
// 0050f3b6  83c40c               add esp, 0xc
// 0050f3b9  33c9                 xor ecx, ecx
// 0050f3bb  894704               mov dword ptr [edi + 4], eax
// 0050f3be  85d2                 test edx, edx
// 0050f3c0  7e55                 jle 0x50f417
// 0050f3c2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050f3c6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0050f3c9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0050f3cc  0fafd9               imul ebx, ecx
// 0050f3cf  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0050f3d3  881c88               mov byte ptr [eax + ecx*4], bl
// 0050f3d6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0050f3d9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0050f3dc  0fafd9               imul ebx, ecx
// 0050f3df  0fb65c2b01           movzx ebx, byte ptr [ebx + ebp + 1]
// 0050f3e4  885c8801             mov byte ptr [eax + ecx*4 + 1], bl
// 0050f3e8  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0050f3eb  8b6e04               mov ebp, dword ptr [esi + 4]
// 0050f3ee  0fafd9               imul ebx, ecx
// 0050f3f1  0fb65c2b02           movzx ebx, byte ptr [ebx + ebp + 2]
// 0050f3f6  885c8802             mov byte ptr [eax + ecx*4 + 2], bl
// 0050f3fa  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 0050f3fd  8b6a04               mov ebp, dword ptr [edx + 4]
// 0050f400  0fafd9               imul ebx, ecx
// 0050f403  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0050f407  885c8803             mov byte ptr [eax + ecx*4 + 3], bl
// 0050f40b  8b5e08               mov ebx, dword ptr [esi + 8]
// 0050f40e  0faf5e0c             imul ebx, dword ptr [esi + 0xc]
// 0050f412  41                   inc ecx
// 0050f413  3bcb                 cmp ecx, ebx
// 0050f415  7caf                 jl 0x50f3c6
// 0050f417  8bc7                 mov eax, edi
// 0050f419  5f                   pop edi
// 0050f41a  5e                   pop esi
// 0050f41b  5d                   pop ebp
// 0050f41c  5b                   pop ebx
// 0050f41d  59                   pop ecx
// 0050f41e  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?insertRedAsAlpha@GImage@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp

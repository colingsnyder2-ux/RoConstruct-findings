// from server: 100% by auto
// roc 2010-06 00554a80  unit: seg_00550000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00554a80
//
// 00554a80  51                   push ecx
// 00554a81  53                   push ebx
// 00554a82  55                   push ebp
// 00554a83  33c0                 xor eax, eax
// 00554a85  56                   push esi
// 00554a86  57                   push edi
// 00554a87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00554a8b  8bf1                 mov esi, ecx
// 00554a8d  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00554a90  8b5e08               mov ebx, dword ptr [esi + 8]
// 00554a93  50                   push eax
// 00554a94  89442414             mov dword ptr [esp + 0x14], eax
// 00554a98  c7074832a100         mov dword ptr [edi], 0xa13248
// 00554a9e  894704               mov dword ptr [edi + 4], eax
// 00554aa1  894708               mov dword ptr [edi + 8], eax
// 00554aa4  89470c               mov dword ptr [edi + 0xc], eax
// 00554aa7  e80461fbff           call 0x50abb0
// 00554aac  895f08               mov dword ptr [edi + 8], ebx
// 00554aaf  0fafdd               imul ebx, ebp
// 00554ab2  03db                 add ebx, ebx
// 00554ab4  03db                 add ebx, ebx
// 00554ab6  6a01                 push 1
// 00554ab8  53                   push ebx
// 00554ab9  c7470400000000       mov dword ptr [edi + 4], 0
// 00554ac0  896f0c               mov dword ptr [edi + 0xc], ebp
// 00554ac3  c7471004000000       mov dword ptr [edi + 0x10], 4
// 00554aca  e8b18dffff           call 0x54d880
// 00554acf  8b5608               mov edx, dword ptr [esi + 8]
// 00554ad2  0faf560c             imul edx, dword ptr [esi + 0xc]
// 00554ad6  83c40c               add esp, 0xc
// 00554ad9  33c9                 xor ecx, ecx
// 00554adb  894704               mov dword ptr [edi + 4], eax
// 00554ade  85d2                 test edx, edx
// 00554ae0  7e55                 jle 0x554b37
// 00554ae2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00554ae6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00554ae9  8b6e04               mov ebp, dword ptr [esi + 4]
// 00554aec  0fafd9               imul ebx, ecx
// 00554aef  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00554af3  881c88               mov byte ptr [eax + ecx*4], bl
// 00554af6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00554af9  8b6e04               mov ebp, dword ptr [esi + 4]
// 00554afc  0fafd9               imul ebx, ecx
// 00554aff  0fb65c2b01           movzx ebx, byte ptr [ebx + ebp + 1]
// 00554b04  885c8801             mov byte ptr [eax + ecx*4 + 1], bl
// 00554b08  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00554b0b  8b6e04               mov ebp, dword ptr [esi + 4]
// 00554b0e  0fafd9               imul ebx, ecx
// 00554b11  0fb65c2b02           movzx ebx, byte ptr [ebx + ebp + 2]
// 00554b16  885c8802             mov byte ptr [eax + ecx*4 + 2], bl
// 00554b1a  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 00554b1d  8b6a04               mov ebp, dword ptr [edx + 4]
// 00554b20  0fafd9               imul ebx, ecx
// 00554b23  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00554b27  885c8803             mov byte ptr [eax + ecx*4 + 3], bl
// 00554b2b  8b5e08               mov ebx, dword ptr [esi + 8]
// 00554b2e  0faf5e0c             imul ebx, dword ptr [esi + 0xc]
// 00554b32  41                   inc ecx
// 00554b33  3bcb                 cmp ecx, ebx
// 00554b35  7caf                 jl 0x554ae6
// 00554b37  8bc7                 mov eax, edi
// 00554b39  5f                   pop edi
// 00554b3a  5e                   pop esi
// 00554b3b  5d                   pop ebp
// 00554b3c  5b                   pop ebx
// 00554b3d  59                   pop ecx
// 00554b3e  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?insertRedAsAlpha@GImage@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp

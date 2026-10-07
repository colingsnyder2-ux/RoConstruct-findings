// roc 2009-06 00571a80  unit: seg_00570000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00571a80
//
// 00571a80  51                   push ecx
// 00571a81  53                   push ebx
// 00571a82  55                   push ebp
// 00571a83  33c0                 xor eax, eax
// 00571a85  56                   push esi
// 00571a86  57                   push edi
// 00571a87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00571a8b  8bf1                 mov esi, ecx
// 00571a8d  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00571a90  8b5e08               mov ebx, dword ptr [esi + 8]
// 00571a93  50                   push eax
// 00571a94  89442414             mov dword ptr [esp + 0x14], eax
// 00571a98  c707a0fc8b00         mov dword ptr [edi], 0x8bfca0
// 00571a9e  894704               mov dword ptr [edi + 4], eax
// 00571aa1  894708               mov dword ptr [edi + 8], eax
// 00571aa4  89470c               mov dword ptr [edi + 0xc], eax
// 00571aa7  e8b496ffff           call 0x56b160
// 00571aac  895f08               mov dword ptr [edi + 8], ebx
// 00571aaf  0fafdd               imul ebx, ebp
// 00571ab2  03db                 add ebx, ebx
// 00571ab4  03db                 add ebx, ebx
// 00571ab6  6a01                 push 1
// 00571ab8  53                   push ebx
// 00571ab9  c7470400000000       mov dword ptr [edi + 4], 0
// 00571ac0  896f0c               mov dword ptr [edi + 0xc], ebp
// 00571ac3  c7471004000000       mov dword ptr [edi + 0x10], 4
// 00571aca  e88196ffff           call 0x56b150
// 00571acf  8b5608               mov edx, dword ptr [esi + 8]
// 00571ad2  0faf560c             imul edx, dword ptr [esi + 0xc]
// 00571ad6  83c40c               add esp, 0xc
// 00571ad9  33c9                 xor ecx, ecx
// 00571adb  894704               mov dword ptr [edi + 4], eax
// 00571ade  85d2                 test edx, edx
// 00571ae0  7e55                 jle 0x571b37
// 00571ae2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00571ae6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00571ae9  8b6e04               mov ebp, dword ptr [esi + 4]
// 00571aec  0fafd9               imul ebx, ecx
// 00571aef  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00571af3  881c88               mov byte ptr [eax + ecx*4], bl
// 00571af6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00571af9  8b6e04               mov ebp, dword ptr [esi + 4]
// 00571afc  0fafd9               imul ebx, ecx
// 00571aff  0fb65c2b01           movzx ebx, byte ptr [ebx + ebp + 1]
// 00571b04  885c8801             mov byte ptr [eax + ecx*4 + 1], bl
// 00571b08  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00571b0b  8b6e04               mov ebp, dword ptr [esi + 4]
// 00571b0e  0fafd9               imul ebx, ecx
// 00571b11  0fb65c2b02           movzx ebx, byte ptr [ebx + ebp + 2]
// 00571b16  885c8802             mov byte ptr [eax + ecx*4 + 2], bl
// 00571b1a  8b5a10               mov ebx, dword ptr [edx + 0x10]
// 00571b1d  8b6a04               mov ebp, dword ptr [edx + 4]
// 00571b20  0fafd9               imul ebx, ecx
// 00571b23  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00571b27  885c8803             mov byte ptr [eax + ecx*4 + 3], bl
// 00571b2b  8b5e08               mov ebx, dword ptr [esi + 8]
// 00571b2e  0faf5e0c             imul ebx, dword ptr [esi + 0xc]
// 00571b32  41                   inc ecx
// 00571b33  3bcb                 cmp ecx, ebx
// 00571b35  7caf                 jl 0x571ae6
// 00571b37  8bc7                 mov eax, edi
// 00571b39  5f                   pop edi
// 00571b3a  5e                   pop esi
// 00571b3b  5d                   pop ebp
// 00571b3c  5b                   pop ebx
// 00571b3d  59                   pop ecx
// 00571b3e  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?insertRedAsAlpha@GImage@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp

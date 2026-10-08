// roc 2007-03 0047b020  unit: seg_00470000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b020
//
// 0047b020  8b442404             mov eax, dword ptr [esp + 4]
// 0047b024  53                   push ebx
// 0047b025  55                   push ebp
// 0047b026  56                   push esi
// 0047b027  8bf1                 mov esi, ecx
// 0047b029  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047b02c  b901000000           mov ecx, 1
// 0047b031  894604               mov dword ptr [esi + 4], eax
// 0047b034  840d507f8b00         test byte ptr [0x8b7f50], cl
// 0047b03a  57                   push edi
// 0047b03b  7513                 jne 0x47b050
// 0047b03d  090d507f8b00         or dword ptr [0x8b7f50], ecx
// 0047b043  bb0a000000           mov ebx, 0xa
// 0047b048  891d4c7f8b00         mov dword ptr [0x8b7f4c], ebx
// 0047b04e  eb06                 jmp 0x47b056
// 0047b050  8b1d4c7f8b00         mov ebx, dword ptr [0x8b7f4c]
// 0047b056  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b059  8b7e04               mov edi, dword ptr [esi + 4]
// 0047b05c  3bf9                 cmp edi, ecx
// 0047b05e  0f8e92000000         jle 0x47b0f6
// 0047b064  85c9                 test ecx, ecx
// 0047b066  7512                 jne 0x47b07a
// 0047b068  55                   push ebp
// 0047b069  8bce                 mov ecx, esi
// 0047b06b  894608               mov dword ptr [esi + 8], eax
// 0047b06e  e85dca1400           call 0x5c7ad0
// 0047b073  5f                   pop edi
// 0047b074  5e                   pop esi
// 0047b075  5d                   pop ebp
// 0047b076  5b                   pop ebx
// 0047b077  c20800               ret 8
// 0047b07a  3bfb                 cmp edi, ebx
// 0047b07c  7d12                 jge 0x47b090
// 0047b07e  55                   push ebp
// 0047b07f  8bce                 mov ecx, esi
// 0047b081  895e08               mov dword ptr [esi + 8], ebx
// 0047b084  e847ca1400           call 0x5c7ad0
// 0047b089  5f                   pop edi
// 0047b08a  5e                   pop esi
// 0047b08b  5d                   pop ebp
// 0047b08c  5b                   pop ebx
// 0047b08d  c20800               ret 8
// 0047b090  d905104c7900         fld dword ptr [0x794c10]
// 0047b096  8bc1                 mov eax, ecx
// 0047b098  03c0                 add eax, eax
// 0047b09a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b09e  03c0                 add eax, eax
// 0047b0a0  3d801a0600           cmp eax, 0x61a80
// 0047b0a5  7608                 jbe 0x47b0af
// 0047b0a7  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047b0ad  eb0d                 jmp 0x47b0bc
// 0047b0af  3d00fa0000           cmp eax, 0xfa00
// 0047b0b4  760a                 jbe 0x47b0c0
// 0047b0b6  d905084c7900         fld dword ptr [0x794c08]
// 0047b0bc  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b0c0  8bd9                 mov ebx, ecx
// 0047b0c2  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047b0c6  db442414             fild dword ptr [esp + 0x14]
// 0047b0ca  d84c2418             fmul dword ptr [esp + 0x18]
// 0047b0ce  e82d411a00           call 0x61f200
// 0047b0d3  2bc3                 sub eax, ebx
// 0047b0d5  03c7                 add eax, edi
// 0047b0d7  894608               mov dword ptr [esi + 8], eax
// 0047b0da  8b0d4c7f8b00         mov ecx, dword ptr [0x8b7f4c]
// 0047b0e0  3bc1                 cmp eax, ecx
// 0047b0e2  7d03                 jge 0x47b0e7
// 0047b0e4  894e08               mov dword ptr [esi + 8], ecx
// 0047b0e7  55                   push ebp
// 0047b0e8  8bce                 mov ecx, esi
// 0047b0ea  e8e1c91400           call 0x5c7ad0
// 0047b0ef  5f                   pop edi
// 0047b0f0  5e                   pop esi
// 0047b0f1  5d                   pop ebp
// 0047b0f2  5b                   pop ebx
// 0047b0f3  c20800               ret 8
// 0047b0f6  b856555555           mov eax, 0x55555556
// 0047b0fb  f7e9                 imul ecx
// 0047b0fd  8bc2                 mov eax, edx
// 0047b0ff  c1e81f               shr eax, 0x1f
// 0047b102  03c2                 add eax, edx
// 0047b104  3bf8                 cmp edi, eax
// 0047b106  7f19                 jg 0x47b121
// 0047b108  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047b10d  7412                 je 0x47b121
// 0047b10f  3bfb                 cmp edi, ebx
// 0047b111  7e0e                 jle 0x47b121
// 0047b113  3bfd                 cmp edi, ebp
// 0047b115  7c02                 jl 0x47b119
// 0047b117  8bfd                 mov edi, ebp
// 0047b119  57                   push edi
// 0047b11a  8bce                 mov ecx, esi
// 0047b11c  e8afc91400           call 0x5c7ad0
// 0047b121  5f                   pop edi
// 0047b122  5e                   pop esi
// 0047b123  5d                   pop ebp
// 0047b124  5b                   pop ebx
// 0047b125  c20800               ret 8
// library rbxgs/tool\DragUtilities.cpp (function ?resize@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp

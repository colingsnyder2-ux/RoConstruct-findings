// roc 2007-08 004b9f50  unit: RakPeer  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9f50
//
// 004b9f50  55                   push ebp
// 004b9f51  8bec                 mov ebp, esp
// 004b9f53  83ec54               sub esp, 0x54
// 004b9f56  8b4508               mov eax, dword ptr [ebp + 8]
// 004b9f59  53                   push ebx
// 004b9f5a  56                   push esi
// 004b9f5b  57                   push edi
// 004b9f5c  6a40                 push 0x40
// 004b9f5e  8bf0                 mov esi, eax
// 004b9f60  6a00                 push 0
// 004b9f62  b910000000           mov ecx, 0x10
// 004b9f67  8d7dac               lea edi, [ebp - 0x54]
// 004b9f6a  50                   push eax
// 004b9f6b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b9f6d  e81a6c1700           call 0x630b8c
// 004b9f72  33c0                 xor eax, eax
// 004b9f74  83c40c               add esp, 0xc
// 004b9f77  33c9                 xor ecx, ecx
// 004b9f79  8945fc               mov dword ptr [ebp - 4], eax
// 004b9f7c  894df4               mov dword ptr [ebp - 0xc], ecx
// 004b9f7f  90                   nop 
// 004b9f80  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004b9f83  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004b9f86  85db                 test ebx, ebx
// 004b9f88  c745f820000000       mov dword ptr [ebp - 8], 0x20
// 004b9f8f  0f848c000000         je 0x4ba021
// 004b9f95  f6c301               test bl, 1
// 004b9f98  746d                 je 0x4ba007
// 004b9f9a  85c0                 test eax, eax
// 004b9f9c  7414                 je 0x4b9fb2
// 004b9f9e  50                   push eax
// 004b9f9f  8d45ac               lea eax, [ebp - 0x54]
// 004b9fa2  50                   push eax
// 004b9fa3  e8b8fbffff           call 0x4b9b60
// 004b9fa8  83c408               add esp, 8
// 004b9fab  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b9fb2  8d4dac               lea ecx, [ebp - 0x54]
// 004b9fb5  894dec               mov dword ptr [ebp - 0x14], ecx
// 004b9fb8  c745f003000000       mov dword ptr [ebp - 0x10], 3
// 004b9fbf  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004b9fc2  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b9fc5  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b9fc8  8b06                 mov eax, dword ptr [esi]
// 004b9fca  33d2                 xor edx, edx
// 004b9fcc  0107                 add dword ptr [edi], eax
// 004b9fce  8b4604               mov eax, dword ptr [esi + 4]
// 004b9fd1  114704               adc dword ptr [edi + 4], eax
// 004b9fd4  8b4608               mov eax, dword ptr [esi + 8]
// 004b9fd7  114708               adc dword ptr [edi + 8], eax
// 004b9fda  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9fdd  11470c               adc dword ptr [edi + 0xc], eax
// 004b9fe0  e322                 jecxz 0x4ba004
// 004b9fe2  42                   inc edx
// 004b9fe3  42                   inc edx
// 004b9fe4  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b9fe7  1104d7               adc dword ptr [edi + edx*8], eax
// 004b9fea  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b9fee  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b9ff2  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b9ff6  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b9ffa  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b9ffe  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004ba002  e2de                 loop 0x4b9fe2
// 004ba004  8b45fc               mov eax, dword ptr [ebp - 4]
// 004ba007  8145f8ffff0000       add dword ptr [ebp - 8], 0xffff
// 004ba00e  d1eb                 shr ebx, 1
// 004ba010  83c001               add eax, 1
// 004ba013  85db                 test ebx, ebx
// 004ba015  8945fc               mov dword ptr [ebp - 4], eax
// 004ba018  0f8577ffffff         jne 0x4b9f95
// 004ba01e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ba021  0fb755f8             movzx edx, word ptr [ebp - 8]
// 004ba025  83c101               add ecx, 1
// 004ba028  03c2                 add eax, edx
// 004ba02a  83f908               cmp ecx, 8
// 004ba02d  8945fc               mov dword ptr [ebp - 4], eax
// 004ba030  894df4               mov dword ptr [ebp - 0xc], ecx
// 004ba033  0f8247ffffff         jb 0x4b9f80
// 004ba039  5f                   pop edi
// 004ba03a  5e                   pop esi
// 004ba03b  5b                   pop ebx
// 004ba03c  8be5                 mov esp, ebp
// 004ba03e  5d                   pop ebp
// 004ba03f  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$umultiply@$$BY07I$$BY0BA@I@big@@YAXAAY0BA@IAAY07I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp

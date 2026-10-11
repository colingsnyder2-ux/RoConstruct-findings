// roc 2007-08 004bc5a0  unit: RakPeer  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc5a0
//
// 004bc5a0  55                   push ebp
// 004bc5a1  8bec                 mov ebp, esp
// 004bc5a3  83ec30               sub esp, 0x30
// 004bc5a6  53                   push ebx
// 004bc5a7  56                   push esi
// 004bc5a8  8b7508               mov esi, dword ptr [ebp + 8]
// 004bc5ab  57                   push edi
// 004bc5ac  6a00                 push 0
// 004bc5ae  8d45f0               lea eax, [ebp - 0x10]
// 004bc5b1  6a00                 push 0
// 004bc5b3  b908000000           mov ecx, 8
// 004bc5b8  8d7dd0               lea edi, [ebp - 0x30]
// 004bc5bb  50                   push eax
// 004bc5bc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bc5be  e8c9451700           call 0x630b8c
// 004bc5c3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bc5c6  33c0                 xor eax, eax
// 004bc5c8  8901                 mov dword ptr [ecx], eax
// 004bc5ca  894104               mov dword ptr [ecx + 4], eax
// 004bc5cd  894108               mov dword ptr [ecx + 8], eax
// 004bc5d0  89410c               mov dword ptr [ecx + 0xc], eax
// 004bc5d3  894110               mov dword ptr [ecx + 0x10], eax
// 004bc5d6  894114               mov dword ptr [ecx + 0x14], eax
// 004bc5d9  894118               mov dword ptr [ecx + 0x18], eax
// 004bc5dc  83c40c               add esp, 0xc
// 004bc5df  89411c               mov dword ptr [ecx + 0x1c], eax
// 004bc5e2  33c9                 xor ecx, ecx
// 004bc5e4  894508               mov dword ptr [ebp + 8], eax
// 004bc5e7  894df8               mov dword ptr [ebp - 8], ecx
// 004bc5ea  8d9b00000000         lea ebx, [ebx]
// 004bc5f0  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004bc5f3  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004bc5f6  85db                 test ebx, ebx
// 004bc5f8  c745fc20000000       mov dword ptr [ebp - 4], 0x20
// 004bc5ff  0f848c000000         je 0x4bc691
// 004bc605  f6c301               test bl, 1
// 004bc608  746d                 je 0x4bc677
// 004bc60a  85c0                 test eax, eax
// 004bc60c  7414                 je 0x4bc622
// 004bc60e  50                   push eax
// 004bc60f  8d45d0               lea eax, [ebp - 0x30]
// 004bc612  50                   push eax
// 004bc613  e888d3ffff           call 0x4b99a0
// 004bc618  83c408               add esp, 8
// 004bc61b  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bc622  8d4dd0               lea ecx, [ebp - 0x30]
// 004bc625  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bc628  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 004bc62f  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004bc632  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bc635  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004bc638  8b06                 mov eax, dword ptr [esi]
// 004bc63a  33d2                 xor edx, edx
// 004bc63c  0107                 add dword ptr [edi], eax
// 004bc63e  8b4604               mov eax, dword ptr [esi + 4]
// 004bc641  114704               adc dword ptr [edi + 4], eax
// 004bc644  8b4608               mov eax, dword ptr [esi + 8]
// 004bc647  114708               adc dword ptr [edi + 8], eax
// 004bc64a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bc64d  11470c               adc dword ptr [edi + 0xc], eax
// 004bc650  e322                 jecxz 0x4bc674
// 004bc652  42                   inc edx
// 004bc653  42                   inc edx
// 004bc654  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bc657  1104d7               adc dword ptr [edi + edx*8], eax
// 004bc65a  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bc65e  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004bc662  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bc666  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004bc66a  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bc66e  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004bc672  e2de                 loop 0x4bc652
// 004bc674  8b4508               mov eax, dword ptr [ebp + 8]
// 004bc677  8145fcffff0000       add dword ptr [ebp - 4], 0xffff
// 004bc67e  d1eb                 shr ebx, 1
// 004bc680  83c001               add eax, 1
// 004bc683  85db                 test ebx, ebx
// 004bc685  894508               mov dword ptr [ebp + 8], eax
// 004bc688  0f8577ffffff         jne 0x4bc605
// 004bc68e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004bc691  0fb755fc             movzx edx, word ptr [ebp - 4]
// 004bc695  83c101               add ecx, 1
// 004bc698  03c2                 add eax, edx
// 004bc69a  83f908               cmp ecx, 8
// 004bc69d  894508               mov dword ptr [ebp + 8], eax
// 004bc6a0  894df8               mov dword ptr [ebp - 8], ecx
// 004bc6a3  0f8247ffffff         jb 0x4bc5f0
// 004bc6a9  5f                   pop edi
// 004bc6aa  5e                   pop esi
// 004bc6ab  5b                   pop ebx
// 004bc6ac  8be5                 mov esp, ebp
// 004bc6ae  5d                   pop ebp
// 004bc6af  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$umultiply@$$BY07I$$BY07I@big@@YAXAAY07I00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp

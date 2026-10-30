// from server: 100% by auto
// roc 2007-03 004b0700  unit: seg_004b0000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b0700
//
// 004b0700  55                   push ebp
// 004b0701  8bec                 mov ebp, esp
// 004b0703  83ec34               sub esp, 0x34
// 004b0706  8b4508               mov eax, dword ptr [ebp + 8]
// 004b0709  53                   push ebx
// 004b070a  56                   push esi
// 004b070b  57                   push edi
// 004b070c  8bf0                 mov esi, eax
// 004b070e  b908000000           mov ecx, 8
// 004b0713  8d7dcc               lea edi, [ebp - 0x34]
// 004b0716  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b0718  33c9                 xor ecx, ecx
// 004b071a  8908                 mov dword ptr [eax], ecx
// 004b071c  894804               mov dword ptr [eax + 4], ecx
// 004b071f  894808               mov dword ptr [eax + 8], ecx
// 004b0722  89480c               mov dword ptr [eax + 0xc], ecx
// 004b0725  894810               mov dword ptr [eax + 0x10], ecx
// 004b0728  894814               mov dword ptr [eax + 0x14], ecx
// 004b072b  894818               mov dword ptr [eax + 0x18], ecx
// 004b072e  89481c               mov dword ptr [eax + 0x1c], ecx
// 004b0731  33c0                 xor eax, eax
// 004b0733  8945fc               mov dword ptr [ebp - 4], eax
// 004b0736  894df4               mov dword ptr [ebp - 0xc], ecx
// 004b0739  8da42400000000       lea esp, [esp]
// 004b0740  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004b0743  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004b0746  85db                 test ebx, ebx
// 004b0748  c745f820000000       mov dword ptr [ebp - 8], 0x20
// 004b074f  0f848c000000         je 0x4b07e1
// 004b0755  f6c301               test bl, 1
// 004b0758  746d                 je 0x4b07c7
// 004b075a  85c0                 test eax, eax
// 004b075c  7414                 je 0x4b0772
// 004b075e  50                   push eax
// 004b075f  8d45cc               lea eax, [ebp - 0x34]
// 004b0762  50                   push eax
// 004b0763  e898e3ffff           call 0x4aeb00
// 004b0768  83c408               add esp, 8
// 004b076b  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b0772  8d4dcc               lea ecx, [ebp - 0x34]
// 004b0775  894dec               mov dword ptr [ebp - 0x14], ecx
// 004b0778  c745f001000000       mov dword ptr [ebp - 0x10], 1
// 004b077f  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004b0782  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b0785  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b0788  8b06                 mov eax, dword ptr [esi]
// 004b078a  33d2                 xor edx, edx
// 004b078c  0107                 add dword ptr [edi], eax
// 004b078e  8b4604               mov eax, dword ptr [esi + 4]
// 004b0791  114704               adc dword ptr [edi + 4], eax
// 004b0794  8b4608               mov eax, dword ptr [esi + 8]
// 004b0797  114708               adc dword ptr [edi + 8], eax
// 004b079a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b079d  11470c               adc dword ptr [edi + 0xc], eax
// 004b07a0  e322                 jecxz 0x4b07c4
// 004b07a2  42                   inc edx
// 004b07a3  42                   inc edx
// 004b07a4  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b07a7  1104d7               adc dword ptr [edi + edx*8], eax
// 004b07aa  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b07ae  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b07b2  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b07b6  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b07ba  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b07be  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004b07c2  e2de                 loop 0x4b07a2
// 004b07c4  8b45fc               mov eax, dword ptr [ebp - 4]
// 004b07c7  8145f8ffff0000       add dword ptr [ebp - 8], 0xffff
// 004b07ce  d1eb                 shr ebx, 1
// 004b07d0  83c001               add eax, 1
// 004b07d3  85db                 test ebx, ebx
// 004b07d5  8945fc               mov dword ptr [ebp - 4], eax
// 004b07d8  0f8577ffffff         jne 0x4b0755
// 004b07de  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b07e1  0fb755f8             movzx edx, word ptr [ebp - 8]
// 004b07e5  83c101               add ecx, 1
// 004b07e8  03c2                 add eax, edx
// 004b07ea  83f908               cmp ecx, 8
// 004b07ed  8945fc               mov dword ptr [ebp - 4], eax
// 004b07f0  894df4               mov dword ptr [ebp - 0xc], ecx
// 004b07f3  0f8247ffffff         jb 0x4b0740
// 004b07f9  5f                   pop edi
// 004b07fa  5e                   pop esi
// 004b07fb  5b                   pop ebx
// 004b07fc  8be5                 mov esp, ebp
// 004b07fe  5d                   pop ebp
// 004b07ff  c3                   ret 

// from server: 31% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp
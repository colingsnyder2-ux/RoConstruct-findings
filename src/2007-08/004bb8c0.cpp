// from server: 100% by auto
// roc 2007-08 004bb8c0  unit: RakPeer  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bb8c0
//
// 004bb8c0  55                   push ebp
// 004bb8c1  8bec                 mov ebp, esp
// 004bb8c3  83ec50               sub esp, 0x50
// 004bb8c6  53                   push ebx
// 004bb8c7  56                   push esi
// 004bb8c8  8b7508               mov esi, dword ptr [ebp + 8]
// 004bb8cb  57                   push edi
// 004bb8cc  6a00                 push 0
// 004bb8ce  8d45f0               lea eax, [ebp - 0x10]
// 004bb8d1  6a00                 push 0
// 004bb8d3  b910000000           mov ecx, 0x10
// 004bb8d8  8d7db0               lea edi, [ebp - 0x50]
// 004bb8db  50                   push eax
// 004bb8dc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb8de  e8a9521700           call 0x630b8c
// 004bb8e3  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bb8e6  6a40                 push 0x40
// 004bb8e8  6a00                 push 0
// 004bb8ea  51                   push ecx
// 004bb8eb  e89c521700           call 0x630b8c
// 004bb8f0  33c0                 xor eax, eax
// 004bb8f2  83c418               add esp, 0x18
// 004bb8f5  33c9                 xor ecx, ecx
// 004bb8f7  894508               mov dword ptr [ebp + 8], eax
// 004bb8fa  894df8               mov dword ptr [ebp - 8], ecx
// 004bb8fd  8d4900               lea ecx, [ecx]
// 004bb900  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004bb903  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004bb906  85db                 test ebx, ebx
// 004bb908  c745fc20000000       mov dword ptr [ebp - 4], 0x20
// 004bb90f  0f848c000000         je 0x4bb9a1
// 004bb915  f6c301               test bl, 1
// 004bb918  746d                 je 0x4bb987
// 004bb91a  85c0                 test eax, eax
// 004bb91c  7414                 je 0x4bb932
// 004bb91e  50                   push eax
// 004bb91f  8d45b0               lea eax, [ebp - 0x50]
// 004bb922  50                   push eax
// 004bb923  e838e2ffff           call 0x4b9b60
// 004bb928  83c408               add esp, 8
// 004bb92b  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bb932  8d4db0               lea ecx, [ebp - 0x50]
// 004bb935  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bb938  c745f403000000       mov dword ptr [ebp - 0xc], 3
// 004bb93f  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004bb942  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bb945  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004bb948  8b06                 mov eax, dword ptr [esi]
// 004bb94a  33d2                 xor edx, edx
// 004bb94c  0107                 add dword ptr [edi], eax
// 004bb94e  8b4604               mov eax, dword ptr [esi + 4]
// 004bb951  114704               adc dword ptr [edi + 4], eax
// 004bb954  8b4608               mov eax, dword ptr [esi + 8]
// 004bb957  114708               adc dword ptr [edi + 8], eax
// 004bb95a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bb95d  11470c               adc dword ptr [edi + 0xc], eax
// 004bb960  e322                 jecxz 0x4bb984
// 004bb962  42                   inc edx
// 004bb963  42                   inc edx
// 004bb964  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bb967  1104d7               adc dword ptr [edi + edx*8], eax
// 004bb96a  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bb96e  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004bb972  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bb976  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004bb97a  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bb97e  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004bb982  e2de                 loop 0x4bb962
// 004bb984  8b4508               mov eax, dword ptr [ebp + 8]
// 004bb987  8145fcffff0000       add dword ptr [ebp - 4], 0xffff
// 004bb98e  d1eb                 shr ebx, 1
// 004bb990  83c001               add eax, 1
// 004bb993  85db                 test ebx, ebx
// 004bb995  894508               mov dword ptr [ebp + 8], eax
// 004bb998  0f8577ffffff         jne 0x4bb915
// 004bb99e  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004bb9a1  0fb755fc             movzx edx, word ptr [ebp - 4]
// 004bb9a5  83c101               add ecx, 1
// 004bb9a8  03c2                 add eax, edx
// 004bb9aa  83f910               cmp ecx, 0x10
// 004bb9ad  894508               mov dword ptr [ebp + 8], eax
// 004bb9b0  894df8               mov dword ptr [ebp - 8], ecx
// 004bb9b3  0f8247ffffff         jb 0x4bb900
// 004bb9b9  5f                   pop edi
// 004bb9ba  5e                   pop esi
// 004bb9bb  5b                   pop ebx
// 004bb9bc  8be5                 mov esp, ebp
// 004bb9be  5d                   pop ebp
// 004bb9bf  c3                   ret 

// from server: 31% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
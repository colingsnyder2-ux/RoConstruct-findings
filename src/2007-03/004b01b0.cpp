// from server: 100% by auto
// roc 2007-03 004b01b0  unit: seg_004b0000  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b01b0
//
// 004b01b0  55                   push ebp
// 004b01b1  8bec                 mov ebp, esp
// 004b01b3  83ec44               sub esp, 0x44
// 004b01b6  53                   push ebx
// 004b01b7  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004b01ba  56                   push esi
// 004b01bb  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b01be  57                   push edi
// 004b01bf  b910000000           mov ecx, 0x10
// 004b01c4  8d7dbc               lea edi, [ebp - 0x44]
// 004b01c7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b01c9  8b7508               mov esi, dword ptr [ebp + 8]
// 004b01cc  b910000000           mov ecx, 0x10
// 004b01d1  8bfb                 mov edi, ebx
// 004b01d3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b01d5  bf00000080           mov edi, 0x80000000
// 004b01da  857df8               test dword ptr [ebp - 8], edi
// 004b01dd  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004b01e4  0f851b010000         jne 0x4b0305
// 004b01ea  8d45bc               lea eax, [ebp - 0x44]
// 004b01ed  50                   push eax
// 004b01ee  53                   push ebx
// 004b01ef  e88ceaffff           call 0x4aec80
// 004b01f4  83c408               add esp, 8
// 004b01f7  84c0                 test al, al
// 004b01f9  0f8406010000         je 0x4b0305
// 004b01ff  b80f000000           mov eax, 0xf
// 004b0204  8d4b34               lea ecx, [ebx + 0x34]
// 004b0207  83790800             cmp dword ptr [ecx + 8], 0
// 004b020b  752a                 jne 0x4b0237
// 004b020d  83790400             cmp dword ptr [ecx + 4], 0
// 004b0211  7517                 jne 0x4b022a
// 004b0213  833900               cmp dword ptr [ecx], 0
// 004b0216  7517                 jne 0x4b022f
// 004b0218  8379fc00             cmp dword ptr [ecx - 4], 0
// 004b021c  7516                 jne 0x4b0234
// 004b021e  83e804               sub eax, 4
// 004b0221  83e910               sub ecx, 0x10
// 004b0224  85c0                 test eax, eax
// 004b0226  7ddf                 jge 0x4b0207
// 004b0228  eb0d                 jmp 0x4b0237
// 004b022a  83e801               sub eax, 1
// 004b022d  eb08                 jmp 0x4b0237
// 004b022f  83e802               sub eax, 2
// 004b0232  eb03                 jmp 0x4b0237
// 004b0234  83e803               sub eax, 3
// 004b0237  85c0                 test eax, eax
// 004b0239  8bc8                 mov ecx, eax
// 004b023b  7c2c                 jl 0x4b0269
// 004b023d  8d4900               lea ecx, [ecx]
// 004b0240  837c8dbc00           cmp dword ptr [ebp + ecx*4 - 0x44], 0
// 004b0245  7505                 jne 0x4b024c
// 004b0247  83e901               sub ecx, 1
// 004b024a  79f4                 jns 0x4b0240
// 004b024c  3bc1                 cmp eax, ecx
// 004b024e  7419                 je 0x4b0269
// 004b0250  2bc1                 sub eax, ecx
// 004b0252  c1e005               shl eax, 5
// 004b0255  8bf0                 mov esi, eax
// 004b0257  8d4dbc               lea ecx, [ebp - 0x44]
// 004b025a  56                   push esi
// 004b025b  51                   push ecx
// 004b025c  e85feaffff           call 0x4aecc0
// 004b0261  83c408               add esp, 8
// 004b0264  83c601               add esi, 1
// 004b0267  eb03                 jmp 0x4b026c
// 004b0269  8b75fc               mov esi, dword ptr [ebp - 4]
// 004b026c  857df8               test dword ptr [ebp - 8], edi
// 004b026f  754f                 jne 0x4b02c0
// 004b0271  b80f000000           mov eax, 0xf
// 004b0276  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004b0279  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004b027d  3bca                 cmp ecx, edx
// 004b027f  7709                 ja 0x4b028a
// 004b0281  723d                 jb 0x4b02c0
// 004b0283  83e801               sub eax, 1
// 004b0286  79ee                 jns 0x4b0276
// 004b0288  eb36                 jmp 0x4b02c0
// 004b028a  33d2                 xor edx, edx
// 004b028c  33c9                 xor ecx, ecx
// 004b028e  8bff                 mov edi, edi
// 004b0290  8b448dbc             mov eax, dword ptr [ebp + ecx*4 - 0x44]
// 004b0294  8d3c00               lea edi, [eax + eax]
// 004b0297  0bfa                 or edi, edx
// 004b0299  897c8dbc             mov dword ptr [ebp + ecx*4 - 0x44], edi
// 004b029d  c1e81f               shr eax, 0x1f
// 004b02a0  83c101               add ecx, 1
// 004b02a3  83f910               cmp ecx, 0x10
// 004b02a6  8bd0                 mov edx, eax
// 004b02a8  72e6                 jb 0x4b0290
// 004b02aa  83c601               add esi, 1
// 004b02ad  f745f800000080       test dword ptr [ebp - 8], 0x80000000
// 004b02b4  74bb                 je 0x4b0271
// 004b02b6  eb08                 jmp 0x4b02c0
// 004b02b8  8da42400000000       lea esp, [esp]
// 004b02bf  90                   nop 
// 004b02c0  b80f000000           mov eax, 0xf
// 004b02c5  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004b02c8  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004b02cc  3bd1                 cmp edx, ecx
// 004b02ce  7711                 ja 0x4b02e1
// 004b02d0  7205                 jb 0x4b02d7
// 004b02d2  83e801               sub eax, 1
// 004b02d5  79ee                 jns 0x4b02c5
// 004b02d7  85f6                 test esi, esi
// 004b02d9  0f84e1000000         je 0x4b03c0
// 004b02df  eb3f                 jmp 0x4b0320
// 004b02e1  33c9                 xor ecx, ecx
// 004b02e3  ba0f000000           mov edx, 0xf
// 004b02e8  8b4495bc             mov eax, dword ptr [ebp + edx*4 - 0x44]
// 004b02ec  8bf8                 mov edi, eax
// 004b02ee  d1ef                 shr edi, 1
// 004b02f0  0bf9                 or edi, ecx
// 004b02f2  c1e01f               shl eax, 0x1f
// 004b02f5  83ea01               sub edx, 1
// 004b02f8  897c95c0             mov dword ptr [ebp + edx*4 - 0x40], edi
// 004b02fc  8bc8                 mov ecx, eax
// 004b02fe  79e8                 jns 0x4b02e8
// 004b0300  83ee01               sub esi, 1
// 004b0303  ebbb                 jmp 0x4b02c0
// 004b0305  8d55bc               lea edx, [ebp - 0x44]
// 004b0308  53                   push ebx
// 004b0309  52                   push edx
// 004b030a  e871e9ffff           call 0x4aec80
// 004b030f  83c408               add esp, 8
// 004b0312  84c0                 test al, al
// 004b0314  0f85a6000000         jne 0x4b03c0
// 004b031a  8b75fc               mov esi, dword ptr [ebp - 4]
// 004b031d  8d4900               lea ecx, [ecx]
// 004b0320  83ee01               sub esi, 1
// 004b0323  8975fc               mov dword ptr [ebp - 4], esi
// 004b0326  b80f000000           mov eax, 0xf
// 004b032b  eb03                 jmp 0x4b0330
// 004b032d  8d4900               lea ecx, [ecx]
// 004b0330  8b0c83               mov ecx, dword ptr [ebx + eax*4]
// 004b0333  8b5485bc             mov edx, dword ptr [ebp + eax*4 - 0x44]
// 004b0337  3bd1                 cmp edx, ecx
// 004b0339  775c                 ja 0x4b0397
// 004b033b  7205                 jb 0x4b0342
// 004b033d  83e801               sub eax, 1
// 004b0340  79ee                 jns 0x4b0330
// 004b0342  8d45bc               lea eax, [ebp - 0x44]
// 004b0345  894508               mov dword ptr [ebp + 8], eax
// 004b0348  c7450c03000000       mov dword ptr [ebp + 0xc], 3
// 004b034f  8b7508               mov esi, dword ptr [ebp + 8]
// 004b0352  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004b0355  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004b0358  8b06                 mov eax, dword ptr [esi]
// 004b035a  33d2                 xor edx, edx
// 004b035c  2907                 sub dword ptr [edi], eax
// 004b035e  8b4604               mov eax, dword ptr [esi + 4]
// 004b0361  194704               sbb dword ptr [edi + 4], eax
// 004b0364  8b4608               mov eax, dword ptr [esi + 8]
// 004b0367  194708               sbb dword ptr [edi + 8], eax
// 004b036a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b036d  19470c               sbb dword ptr [edi + 0xc], eax
// 004b0370  e322                 jecxz 0x4b0394
// 004b0372  42                   inc edx
// 004b0373  42                   inc edx
// 004b0374  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b0377  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b037a  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b037e  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b0382  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b0386  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b038a  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b038e  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b0392  e2de                 loop 0x4b0372
// 004b0394  8b75fc               mov esi, dword ptr [ebp - 4]
// 004b0397  33c9                 xor ecx, ecx
// 004b0399  ba0f000000           mov edx, 0xf
// 004b039e  8bff                 mov edi, edi
// 004b03a0  8b4495bc             mov eax, dword ptr [ebp + edx*4 - 0x44]
// 004b03a4  8bf8                 mov edi, eax
// 004b03a6  d1ef                 shr edi, 1
// 004b03a8  0bf9                 or edi, ecx
// 004b03aa  c1e01f               shl eax, 0x1f
// 004b03ad  83ea01               sub edx, 1
// 004b03b0  897c95c0             mov dword ptr [ebp + edx*4 - 0x40], edi
// 004b03b4  8bc8                 mov ecx, eax
// 004b03b6  79e8                 jns 0x4b03a0
// 004b03b8  85f6                 test esi, esi
// 004b03ba  0f8560ffffff         jne 0x4b0320
// 004b03c0  5f                   pop edi
// 004b03c1  5e                   pop esi
// 004b03c2  5b                   pop ebx
// 004b03c3  8be5                 mov esp, ebp
// 004b03c5  5d                   pop ebp
// 004b03c6  c3                   ret 

// from server: 22% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
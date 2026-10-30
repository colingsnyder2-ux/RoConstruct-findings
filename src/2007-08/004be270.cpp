// from server: 100% by auto
// roc 2007-08 004be270  unit: RakPeer  size: 647 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004be270
//
// 004be270  55                   push ebp
// 004be271  8d6c2494             lea ebp, [esp - 0x6c]
// 004be275  81ecc8000000         sub esp, 0xc8
// 004be27b  33c0                 xor eax, eax
// 004be27d  53                   push ebx
// 004be27e  8b5d74               mov ebx, dword ptr [ebp + 0x74]
// 004be281  56                   push esi
// 004be282  8b7578               mov esi, dword ptr [ebp + 0x78]
// 004be285  57                   push edi
// 004be286  894550               mov dword ptr [ebp + 0x50], eax
// 004be289  894554               mov dword ptr [ebp + 0x54], eax
// 004be28c  894558               mov dword ptr [ebp + 0x58], eax
// 004be28f  89455c               mov dword ptr [ebp + 0x5c], eax
// 004be292  894560               mov dword ptr [ebp + 0x60], eax
// 004be295  894564               mov dword ptr [ebp + 0x64], eax
// 004be298  894568               mov dword ptr [ebp + 0x68], eax
// 004be29b  8d45e4               lea eax, [ebp - 0x1c]
// 004be29e  50                   push eax
// 004be29f  8d4d2c               lea ecx, [ebp + 0x2c]
// 004be2a2  51                   push ecx
// 004be2a3  53                   push ebx
// 004be2a4  56                   push esi
// 004be2a5  c7454c01000000       mov dword ptr [ebp + 0x4c], 1
// 004be2ac  e8afdbffff           call 0x4bbe60
// 004be2b1  b908000000           mov ecx, 8
// 004be2b6  8d7dc4               lea edi, [ebp - 0x3c]
// 004be2b9  8d552c               lea edx, [ebp + 0x2c]
// 004be2bc  8d45c4               lea eax, [ebp - 0x3c]
// 004be2bf  83c410               add esp, 0x10
// 004be2c2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004be2c4  895528               mov dword ptr [ebp + 0x28], edx
// 004be2c7  894524               mov dword ptr [ebp + 0x24], eax
// 004be2ca  c7457401000000       mov dword ptr [ebp + 0x74], 1
// 004be2d1  8b7528               mov esi, dword ptr [ebp + 0x28]
// 004be2d4  8b7d24               mov edi, dword ptr [ebp + 0x24]
// 004be2d7  8b4d74               mov ecx, dword ptr [ebp + 0x74]
// 004be2da  8b06                 mov eax, dword ptr [esi]
// 004be2dc  33d2                 xor edx, edx
// 004be2de  2907                 sub dword ptr [edi], eax
// 004be2e0  8b4604               mov eax, dword ptr [esi + 4]
// 004be2e3  194704               sbb dword ptr [edi + 4], eax
// 004be2e6  8b4608               mov eax, dword ptr [esi + 8]
// 004be2e9  194708               sbb dword ptr [edi + 8], eax
// 004be2ec  8b460c               mov eax, dword ptr [esi + 0xc]
// 004be2ef  19470c               sbb dword ptr [edi + 0xc], eax
// 004be2f2  e322                 jecxz 0x4be316
// 004be2f4  42                   inc edx
// 004be2f5  42                   inc edx
// 004be2f6  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004be2f9  1904d7               sbb dword ptr [edi + edx*8], eax
// 004be2fc  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004be300  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004be304  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004be308  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004be30c  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004be310  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004be314  e2de                 loop 0x4be2f4
// 004be316  b908000000           mov ecx, 8
// 004be31b  8bf3                 mov esi, ebx
// 004be31d  8d7d04               lea edi, [ebp + 4]
// 004be320  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004be322  8d4d04               lea ecx, [ebp + 4]
// 004be325  51                   push ecx
// 004be326  8d552c               lea edx, [ebp + 0x2c]
// 004be329  52                   push edx
// 004be32a  8d45e4               lea eax, [ebp - 0x1c]
// 004be32d  50                   push eax
// 004be32e  51                   push ecx
// 004be32f  e82cdbffff           call 0x4bbe60
// 004be334  83c410               add esp, 0x10
// 004be337  33c0                 xor eax, eax
// 004be339  8da42400000000       lea esp, [esp]
// 004be340  837c850400           cmp dword ptr [ebp + eax*4 + 4], 0
// 004be345  751f                 jne 0x4be366
// 004be347  83c001               add eax, 1
// 004be34a  83f808               cmp eax, 8
// 004be34d  72f1                 jb 0x4be340
// 004be34f  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 004be352  8d75c4               lea esi, [ebp - 0x3c]
// 004be355  b908000000           mov ecx, 8
// 004be35a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004be35c  5f                   pop edi
// 004be35d  5e                   pop esi
// 004be35e  5b                   pop ebx
// 004be35f  83c56c               add ebp, 0x6c
// 004be362  8be5                 mov esp, ebp
// 004be364  5d                   pop ebp
// 004be365  c3                   ret 
// 004be366  8b7578               mov esi, dword ptr [ebp + 0x78]
// 004be369  8d55a4               lea edx, [ebp - 0x5c]
// 004be36c  52                   push edx
// 004be36d  56                   push esi
// 004be36e  8d454c               lea eax, [ebp + 0x4c]
// 004be371  50                   push eax
// 004be372  8d4d2c               lea ecx, [ebp + 0x2c]
// 004be375  51                   push ecx
// 004be376  8d55c4               lea edx, [ebp - 0x3c]
// 004be379  52                   push edx
// 004be37a  e8e1e0ffff           call 0x4bc460
// 004be37f  8d45e4               lea eax, [ebp - 0x1c]
// 004be382  50                   push eax
// 004be383  8d4d2c               lea ecx, [ebp + 0x2c]
// 004be386  51                   push ecx
// 004be387  8d5504               lea edx, [ebp + 4]
// 004be38a  52                   push edx
// 004be38b  50                   push eax
// 004be38c  e8cfdaffff           call 0x4bbe60
// 004be391  83c424               add esp, 0x24
// 004be394  33c0                 xor eax, eax
// 004be396  837c85e400           cmp dword ptr [ebp + eax*4 - 0x1c], 0
// 004be39b  751f                 jne 0x4be3bc
// 004be39d  83c001               add eax, 1
// 004be3a0  83f808               cmp eax, 8
// 004be3a3  72f1                 jb 0x4be396
// 004be3a5  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 004be3a8  8d75a4               lea esi, [ebp - 0x5c]
// 004be3ab  b908000000           mov ecx, 8
// 004be3b0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004be3b2  5f                   pop edi
// 004be3b3  5e                   pop esi
// 004be3b4  5b                   pop ebx
// 004be3b5  83c56c               add ebp, 0x6c
// 004be3b8  8be5                 mov esp, ebp
// 004be3ba  5d                   pop ebp
// 004be3bb  c3                   ret 
// 004be3bc  8d4d4c               lea ecx, [ebp + 0x4c]
// 004be3bf  51                   push ecx
// 004be3c0  56                   push esi
// 004be3c1  8d55c4               lea edx, [ebp - 0x3c]
// 004be3c4  52                   push edx
// 004be3c5  8d452c               lea eax, [ebp + 0x2c]
// 004be3c8  50                   push eax
// 004be3c9  8d4da4               lea ecx, [ebp - 0x5c]
// 004be3cc  51                   push ecx
// 004be3cd  e88ee0ffff           call 0x4bc460
// 004be3d2  8d5504               lea edx, [ebp + 4]
// 004be3d5  52                   push edx
// 004be3d6  8d452c               lea eax, [ebp + 0x2c]
// 004be3d9  50                   push eax
// 004be3da  8d4de4               lea ecx, [ebp - 0x1c]
// 004be3dd  51                   push ecx
// 004be3de  52                   push edx
// 004be3df  e87cdaffff           call 0x4bbe60
// 004be3e4  83c424               add esp, 0x24
// 004be3e7  33c0                 xor eax, eax
// 004be3e9  8da42400000000       lea esp, [esp]
// 004be3f0  837c850400           cmp dword ptr [ebp + eax*4 + 4], 0
// 004be3f5  751f                 jne 0x4be416
// 004be3f7  83c001               add eax, 1
// 004be3fa  83f808               cmp eax, 8
// 004be3fd  72f1                 jb 0x4be3f0
// 004be3ff  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 004be402  8d754c               lea esi, [ebp + 0x4c]
// 004be405  b908000000           mov ecx, 8
// 004be40a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004be40c  5f                   pop edi
// 004be40d  5e                   pop esi
// 004be40e  5b                   pop ebx
// 004be40f  83c56c               add ebp, 0x6c
// 004be412  8be5                 mov esp, ebp
// 004be414  5d                   pop ebp
// 004be415  c3                   ret 
// 004be416  8d45c4               lea eax, [ebp - 0x3c]
// 004be419  50                   push eax
// 004be41a  56                   push esi
// 004be41b  8d4da4               lea ecx, [ebp - 0x5c]
// 004be41e  51                   push ecx
// 004be41f  8d552c               lea edx, [ebp + 0x2c]
// 004be422  52                   push edx
// 004be423  8d454c               lea eax, [ebp + 0x4c]
// 004be426  50                   push eax
// 004be427  e834e0ffff           call 0x4bc460
// 004be42c  8d4de4               lea ecx, [ebp - 0x1c]
// 004be42f  51                   push ecx
// 004be430  8d552c               lea edx, [ebp + 0x2c]
// 004be433  52                   push edx
// 004be434  8d4504               lea eax, [ebp + 4]
// 004be437  50                   push eax
// 004be438  51                   push ecx
// 004be439  e822daffff           call 0x4bbe60
// 004be43e  83c424               add esp, 0x24
// 004be441  33c0                 xor eax, eax
// 004be443  837c85e400           cmp dword ptr [ebp + eax*4 - 0x1c], 0
// 004be448  750d                 jne 0x4be457
// 004be44a  83c001               add eax, 1
// 004be44d  83f808               cmp eax, 8
// 004be450  72f1                 jb 0x4be443
// 004be452  e9f8feffff           jmp 0x4be34f
// 004be457  8d55a4               lea edx, [ebp - 0x5c]
// 004be45a  52                   push edx
// 004be45b  56                   push esi
// 004be45c  8d454c               lea eax, [ebp + 0x4c]
// 004be45f  50                   push eax
// 004be460  8d4d2c               lea ecx, [ebp + 0x2c]
// 004be463  51                   push ecx
// 004be464  8d55c4               lea edx, [ebp - 0x3c]
// 004be467  52                   push edx
// 004be468  e8f3dfffff           call 0x4bc460
// 004be46d  8d4504               lea eax, [ebp + 4]
// 004be470  50                   push eax
// 004be471  8d4d2c               lea ecx, [ebp + 0x2c]
// 004be474  51                   push ecx
// 004be475  8d55e4               lea edx, [ebp - 0x1c]
// 004be478  52                   push edx
// 004be479  50                   push eax
// 004be47a  e8e1d9ffff           call 0x4bbe60
// 004be47f  83c424               add esp, 0x24
// 004be482  33c0                 xor eax, eax
// 004be484  837c850400           cmp dword ptr [ebp + eax*4 + 4], 0
// 004be489  750d                 jne 0x4be498
// 004be48b  83c001               add eax, 1
// 004be48e  83f808               cmp eax, 8
// 004be491  72f1                 jb 0x4be484
// 004be493  e90dffffff           jmp 0x4be3a5
// 004be498  8d4d4c               lea ecx, [ebp + 0x4c]
// 004be49b  51                   push ecx
// 004be49c  56                   push esi
// 004be49d  8d55c4               lea edx, [ebp - 0x3c]
// 004be4a0  52                   push edx
// 004be4a1  8d452c               lea eax, [ebp + 0x2c]
// 004be4a4  50                   push eax
// 004be4a5  8d4da4               lea ecx, [ebp - 0x5c]
// 004be4a8  51                   push ecx
// 004be4a9  e8b2dfffff           call 0x4bc460
// 004be4ae  8d55e4               lea edx, [ebp - 0x1c]
// 004be4b1  52                   push edx
// 004be4b2  8d452c               lea eax, [ebp + 0x2c]
// 004be4b5  50                   push eax
// 004be4b6  8d4d04               lea ecx, [ebp + 4]
// 004be4b9  51                   push ecx
// 004be4ba  52                   push edx
// 004be4bb  e8a0d9ffff           call 0x4bbe60
// 004be4c0  83c424               add esp, 0x24
// 004be4c3  33c0                 xor eax, eax
// 004be4c5  837c85e400           cmp dword ptr [ebp + eax*4 - 0x1c], 0
// 004be4ca  750d                 jne 0x4be4d9
// 004be4cc  83c001               add eax, 1
// 004be4cf  83f808               cmp eax, 8
// 004be4d2  72f1                 jb 0x4be4c5
// 004be4d4  e926ffffff           jmp 0x4be3ff
// 004be4d9  8d45c4               lea eax, [ebp - 0x3c]
// 004be4dc  50                   push eax
// 004be4dd  56                   push esi
// 004be4de  8d4da4               lea ecx, [ebp - 0x5c]
// 004be4e1  51                   push ecx
// 004be4e2  8d552c               lea edx, [ebp + 0x2c]
// 004be4e5  52                   push edx
// 004be4e6  8d454c               lea eax, [ebp + 0x4c]
// 004be4e9  50                   push eax
// 004be4ea  e871dfffff           call 0x4bc460
// 004be4ef  83c414               add esp, 0x14
// 004be4f2  e92bfeffff           jmp 0x4be322

// from server: 22% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
// from server: 100% by auto
// roc 2007-08 004badd0  unit: RakPeer  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004badd0
//
// 004badd0  55                   push ebp
// 004badd1  8bec                 mov ebp, esp
// 004badd3  83ec30               sub esp, 0x30
// 004badd6  8b4508               mov eax, dword ptr [ebp + 8]
// 004badd9  8b08                 mov ecx, dword ptr [eax]
// 004baddb  8b5004               mov edx, dword ptr [eax + 4]
// 004badde  894dd0               mov dword ptr [ebp - 0x30], ecx
// 004bade1  8b4808               mov ecx, dword ptr [eax + 8]
// 004bade4  8955d4               mov dword ptr [ebp - 0x2c], edx
// 004bade7  8b500c               mov edx, dword ptr [eax + 0xc]
// 004badea  33c0                 xor eax, eax
// 004badec  894dd8               mov dword ptr [ebp - 0x28], ecx
// 004badef  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004badf2  8901                 mov dword ptr [ecx], eax
// 004badf4  894104               mov dword ptr [ecx + 4], eax
// 004badf7  894108               mov dword ptr [ecx + 8], eax
// 004badfa  89410c               mov dword ptr [ecx + 0xc], eax
// 004badfd  894110               mov dword ptr [ecx + 0x10], eax
// 004bae00  894114               mov dword ptr [ecx + 0x14], eax
// 004bae03  894118               mov dword ptr [ecx + 0x18], eax
// 004bae06  53                   push ebx
// 004bae07  89411c               mov dword ptr [ecx + 0x1c], eax
// 004bae0a  33c9                 xor ecx, ecx
// 004bae0c  56                   push esi
// 004bae0d  8955dc               mov dword ptr [ebp - 0x24], edx
// 004bae10  8945e0               mov dword ptr [ebp - 0x20], eax
// 004bae13  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004bae16  8945e8               mov dword ptr [ebp - 0x18], eax
// 004bae19  8945ec               mov dword ptr [ebp - 0x14], eax
// 004bae1c  894508               mov dword ptr [ebp + 8], eax
// 004bae1f  894df8               mov dword ptr [ebp - 8], ecx
// 004bae22  57                   push edi
// 004bae23  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004bae26  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004bae29  85db                 test ebx, ebx
// 004bae2b  c745fc20000000       mov dword ptr [ebp - 4], 0x20
// 004bae32  0f848c000000         je 0x4baec4
// 004bae38  f6c301               test bl, 1
// 004bae3b  746d                 je 0x4baeaa
// 004bae3d  85c0                 test eax, eax
// 004bae3f  7414                 je 0x4bae55
// 004bae41  50                   push eax
// 004bae42  8d45d0               lea eax, [ebp - 0x30]
// 004bae45  50                   push eax
// 004bae46  e855ebffff           call 0x4b99a0
// 004bae4b  83c408               add esp, 8
// 004bae4e  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bae55  8d4dd0               lea ecx, [ebp - 0x30]
// 004bae58  894df0               mov dword ptr [ebp - 0x10], ecx
// 004bae5b  c745f401000000       mov dword ptr [ebp - 0xc], 1
// 004bae62  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004bae65  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004bae68  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004bae6b  8b06                 mov eax, dword ptr [esi]
// 004bae6d  33d2                 xor edx, edx
// 004bae6f  0107                 add dword ptr [edi], eax
// 004bae71  8b4604               mov eax, dword ptr [esi + 4]
// 004bae74  114704               adc dword ptr [edi + 4], eax
// 004bae77  8b4608               mov eax, dword ptr [esi + 8]
// 004bae7a  114708               adc dword ptr [edi + 8], eax
// 004bae7d  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bae80  11470c               adc dword ptr [edi + 0xc], eax
// 004bae83  e322                 jecxz 0x4baea7
// 004bae85  42                   inc edx
// 004bae86  42                   inc edx
// 004bae87  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bae8a  1104d7               adc dword ptr [edi + edx*8], eax
// 004bae8d  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bae91  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004bae95  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bae99  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004bae9d  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004baea1  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004baea5  e2de                 loop 0x4bae85
// 004baea7  8b4508               mov eax, dword ptr [ebp + 8]
// 004baeaa  8145fcffff0000       add dword ptr [ebp - 4], 0xffff
// 004baeb1  d1eb                 shr ebx, 1
// 004baeb3  83c001               add eax, 1
// 004baeb6  85db                 test ebx, ebx
// 004baeb8  894508               mov dword ptr [ebp + 8], eax
// 004baebb  0f8577ffffff         jne 0x4bae38
// 004baec1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 004baec4  0fb755fc             movzx edx, word ptr [ebp - 4]
// 004baec8  83c101               add ecx, 1
// 004baecb  03c2                 add eax, edx
// 004baecd  83f904               cmp ecx, 4
// 004baed0  894508               mov dword ptr [ebp + 8], eax
// 004baed3  894df8               mov dword ptr [ebp - 8], ecx
// 004baed6  0f8247ffffff         jb 0x4bae23
// 004baedc  5f                   pop edi
// 004baedd  5e                   pop esi
// 004baede  5b                   pop ebx
// 004baedf  8be5                 mov esp, ebp
// 004baee1  5d                   pop ebp
// 004baee2  c3                   ret 

// from server: 29% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
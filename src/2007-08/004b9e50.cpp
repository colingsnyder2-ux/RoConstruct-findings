// from server: 100% by auto
// roc 2007-08 004b9e50  unit: RakPeer  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9e50
//
// 004b9e50  55                   push ebp
// 004b9e51  8bec                 mov ebp, esp
// 004b9e53  83ec34               sub esp, 0x34
// 004b9e56  8b4508               mov eax, dword ptr [ebp + 8]
// 004b9e59  53                   push ebx
// 004b9e5a  56                   push esi
// 004b9e5b  57                   push edi
// 004b9e5c  8bf0                 mov esi, eax
// 004b9e5e  b908000000           mov ecx, 8
// 004b9e63  8d7dcc               lea edi, [ebp - 0x34]
// 004b9e66  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b9e68  33c9                 xor ecx, ecx
// 004b9e6a  8908                 mov dword ptr [eax], ecx
// 004b9e6c  894804               mov dword ptr [eax + 4], ecx
// 004b9e6f  894808               mov dword ptr [eax + 8], ecx
// 004b9e72  89480c               mov dword ptr [eax + 0xc], ecx
// 004b9e75  894810               mov dword ptr [eax + 0x10], ecx
// 004b9e78  894814               mov dword ptr [eax + 0x14], ecx
// 004b9e7b  894818               mov dword ptr [eax + 0x18], ecx
// 004b9e7e  89481c               mov dword ptr [eax + 0x1c], ecx
// 004b9e81  33c0                 xor eax, eax
// 004b9e83  8945fc               mov dword ptr [ebp - 4], eax
// 004b9e86  894df4               mov dword ptr [ebp - 0xc], ecx
// 004b9e89  8da42400000000       lea esp, [esp]
// 004b9e90  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004b9e93  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004b9e96  85db                 test ebx, ebx
// 004b9e98  c745f820000000       mov dword ptr [ebp - 8], 0x20
// 004b9e9f  0f848c000000         je 0x4b9f31
// 004b9ea5  f6c301               test bl, 1
// 004b9ea8  746d                 je 0x4b9f17
// 004b9eaa  85c0                 test eax, eax
// 004b9eac  7414                 je 0x4b9ec2
// 004b9eae  50                   push eax
// 004b9eaf  8d45cc               lea eax, [ebp - 0x34]
// 004b9eb2  50                   push eax
// 004b9eb3  e8e8faffff           call 0x4b99a0
// 004b9eb8  83c408               add esp, 8
// 004b9ebb  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b9ec2  8d4dcc               lea ecx, [ebp - 0x34]
// 004b9ec5  894dec               mov dword ptr [ebp - 0x14], ecx
// 004b9ec8  c745f001000000       mov dword ptr [ebp - 0x10], 1
// 004b9ecf  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004b9ed2  8b7d08               mov edi, dword ptr [ebp + 8]
// 004b9ed5  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b9ed8  8b06                 mov eax, dword ptr [esi]
// 004b9eda  33d2                 xor edx, edx
// 004b9edc  0107                 add dword ptr [edi], eax
// 004b9ede  8b4604               mov eax, dword ptr [esi + 4]
// 004b9ee1  114704               adc dword ptr [edi + 4], eax
// 004b9ee4  8b4608               mov eax, dword ptr [esi + 8]
// 004b9ee7  114708               adc dword ptr [edi + 8], eax
// 004b9eea  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9eed  11470c               adc dword ptr [edi + 0xc], eax
// 004b9ef0  e322                 jecxz 0x4b9f14
// 004b9ef2  42                   inc edx
// 004b9ef3  42                   inc edx
// 004b9ef4  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b9ef7  1104d7               adc dword ptr [edi + edx*8], eax
// 004b9efa  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b9efe  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b9f02  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b9f06  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b9f0a  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b9f0e  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004b9f12  e2de                 loop 0x4b9ef2
// 004b9f14  8b45fc               mov eax, dword ptr [ebp - 4]
// 004b9f17  8145f8ffff0000       add dword ptr [ebp - 8], 0xffff
// 004b9f1e  d1eb                 shr ebx, 1
// 004b9f20  83c001               add eax, 1
// 004b9f23  85db                 test ebx, ebx
// 004b9f25  8945fc               mov dword ptr [ebp - 4], eax
// 004b9f28  0f8577ffffff         jne 0x4b9ea5
// 004b9f2e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b9f31  0fb755f8             movzx edx, word ptr [ebp - 8]
// 004b9f35  83c101               add ecx, 1
// 004b9f38  03c2                 add eax, edx
// 004b9f3a  83f904               cmp ecx, 4
// 004b9f3d  8945fc               mov dword ptr [ebp - 4], eax
// 004b9f40  894df4               mov dword ptr [ebp - 0xc], ecx
// 004b9f43  0f8247ffffff         jb 0x4b9e90
// 004b9f49  5f                   pop edi
// 004b9f4a  5e                   pop esi
// 004b9f4b  5b                   pop ebx
// 004b9f4c  8be5                 mov esp, ebp
// 004b9f4e  5d                   pop ebp
// 004b9f4f  c3                   ret 

// from server: 31% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
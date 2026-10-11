// from server: 100% by auto
// roc 2007-08 004bb6a0  unit: RakPeer  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bb6a0
//
// 004bb6a0  55                   push ebp
// 004bb6a1  8bec                 mov ebp, esp
// 004bb6a3  83ec34               sub esp, 0x34
// 004bb6a6  8b4508               mov eax, dword ptr [ebp + 8]
// 004bb6a9  53                   push ebx
// 004bb6aa  56                   push esi
// 004bb6ab  57                   push edi
// 004bb6ac  8bf0                 mov esi, eax
// 004bb6ae  b908000000           mov ecx, 8
// 004bb6b3  8d7dcc               lea edi, [ebp - 0x34]
// 004bb6b6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb6b8  33c9                 xor ecx, ecx
// 004bb6ba  8908                 mov dword ptr [eax], ecx
// 004bb6bc  894804               mov dword ptr [eax + 4], ecx
// 004bb6bf  894808               mov dword ptr [eax + 8], ecx
// 004bb6c2  89480c               mov dword ptr [eax + 0xc], ecx
// 004bb6c5  894810               mov dword ptr [eax + 0x10], ecx
// 004bb6c8  894814               mov dword ptr [eax + 0x14], ecx
// 004bb6cb  894818               mov dword ptr [eax + 0x18], ecx
// 004bb6ce  89481c               mov dword ptr [eax + 0x1c], ecx
// 004bb6d1  33c0                 xor eax, eax
// 004bb6d3  8945fc               mov dword ptr [ebp - 4], eax
// 004bb6d6  894df4               mov dword ptr [ebp - 0xc], ecx
// 004bb6d9  8da42400000000       lea esp, [esp]
// 004bb6e0  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004bb6e3  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 004bb6e6  85db                 test ebx, ebx
// 004bb6e8  c745f820000000       mov dword ptr [ebp - 8], 0x20
// 004bb6ef  0f848c000000         je 0x4bb781
// 004bb6f5  f6c301               test bl, 1
// 004bb6f8  746d                 je 0x4bb767
// 004bb6fa  85c0                 test eax, eax
// 004bb6fc  7414                 je 0x4bb712
// 004bb6fe  50                   push eax
// 004bb6ff  8d45cc               lea eax, [ebp - 0x34]
// 004bb702  50                   push eax
// 004bb703  e898e2ffff           call 0x4b99a0
// 004bb708  83c408               add esp, 8
// 004bb70b  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004bb712  8d4dcc               lea ecx, [ebp - 0x34]
// 004bb715  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bb718  c745f001000000       mov dword ptr [ebp - 0x10], 1
// 004bb71f  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004bb722  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bb725  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004bb728  8b06                 mov eax, dword ptr [esi]
// 004bb72a  33d2                 xor edx, edx
// 004bb72c  0107                 add dword ptr [edi], eax
// 004bb72e  8b4604               mov eax, dword ptr [esi + 4]
// 004bb731  114704               adc dword ptr [edi + 4], eax
// 004bb734  8b4608               mov eax, dword ptr [esi + 8]
// 004bb737  114708               adc dword ptr [edi + 8], eax
// 004bb73a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bb73d  11470c               adc dword ptr [edi + 0xc], eax
// 004bb740  e322                 jecxz 0x4bb764
// 004bb742  42                   inc edx
// 004bb743  42                   inc edx
// 004bb744  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bb747  1104d7               adc dword ptr [edi + edx*8], eax
// 004bb74a  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bb74e  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004bb752  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bb756  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004bb75a  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bb75e  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004bb762  e2de                 loop 0x4bb742
// 004bb764  8b45fc               mov eax, dword ptr [ebp - 4]
// 004bb767  8145f8ffff0000       add dword ptr [ebp - 8], 0xffff
// 004bb76e  d1eb                 shr ebx, 1
// 004bb770  83c001               add eax, 1
// 004bb773  85db                 test ebx, ebx
// 004bb775  8945fc               mov dword ptr [ebp - 4], eax
// 004bb778  0f8577ffffff         jne 0x4bb6f5
// 004bb77e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004bb781  0fb755f8             movzx edx, word ptr [ebp - 8]
// 004bb785  83c101               add ecx, 1
// 004bb788  03c2                 add eax, edx
// 004bb78a  83f908               cmp ecx, 8
// 004bb78d  8945fc               mov dword ptr [ebp - 4], eax
// 004bb790  894df4               mov dword ptr [ebp - 0xc], ecx
// 004bb793  0f8247ffffff         jb 0x4bb6e0
// 004bb799  5f                   pop edi
// 004bb79a  5e                   pop esi
// 004bb79b  5b                   pop ebx
// 004bb79c  8be5                 mov esp, ebp
// 004bb79e  5d                   pop ebp
// 004bb79f  c3                   ret 

// from server: 33% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
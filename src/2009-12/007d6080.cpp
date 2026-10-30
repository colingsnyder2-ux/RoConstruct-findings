// roc 2009-12 007d6080  unit: seg_007d0000  size: 1700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d6080
//
// 007d6080  83ec50               sub esp, 0x50
// 007d6083  53                   push ebx
// 007d6084  55                   push ebp
// 007d6085  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 007d6089  56                   push esi
// 007d608a  8bf0                 mov esi, eax
// 007d608c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007d608f  33db                 xor ebx, ebx
// 007d6091  57                   push edi
// 007d6092  8b3d24b89800         mov edi, dword ptr [0x98b824]
// 007d6098  895804               mov dword ptr [eax + 4], ebx
// 007d609b  eb03                 jmp 0x7d60a0
// 007d609d  8d4900               lea ecx, [ecx]
// 007d60a0  8b06                 mov eax, dword ptr [esi]
// 007d60a2  8d4801               lea ecx, [eax + 1]
// 007d60a5  83f97f               cmp ecx, 0x7f
// 007d60a8  0f87fb000000         ja 0x7d61a9
// 007d60ae  0fb689a4667d00       movzx ecx, byte ptr [ecx + 0x7d66a4]
// 007d60b5  ff248d78667d00       jmp dword ptr [ecx*4 + 0x7d6678]
// 007d60bc  e8eff2ffff           call 0x7d53b0
// 007d60c1  ebdd                 jmp 0x7d60a0
// 007d60c3  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d60c6  8b08                 mov ecx, dword ptr [eax]
// 007d60c8  8d51ff               lea edx, [ecx - 1]
// 007d60cb  8910                 mov dword ptr [eax], edx
// 007d60cd  3bcb                 cmp ecx, ebx
// 007d60cf  760f                 jbe 0x7d60e0
// 007d60d1  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d60d4  8b5104               mov edx, dword ptr [ecx + 4]
// 007d60d7  0fb602               movzx eax, byte ptr [edx]
// 007d60da  42                   inc edx
// 007d60db  895104               mov dword ptr [ecx + 4], edx
// 007d60de  eb0c                 jmp 0x7d60ec
// 007d60e0  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d60e3  50                   push eax
// 007d60e4  e8e7afffff           call 0x7d10d0
// 007d60e9  83c404               add esp, 4
// 007d60ec  8906                 mov dword ptr [esi], eax
// 007d60ee  83f82d               cmp eax, 0x2d
// 007d60f1  0f85f5000000         jne 0x7d61ec
// 007d60f7  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d60fa  8b08                 mov ecx, dword ptr [eax]
// 007d60fc  8d51ff               lea edx, [ecx - 1]
// 007d60ff  8910                 mov dword ptr [eax], edx
// 007d6101  3bcb                 cmp ecx, ebx
// 007d6103  760f                 jbe 0x7d6114
// 007d6105  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d6108  8b5104               mov edx, dword ptr [ecx + 4]
// 007d610b  0fb602               movzx eax, byte ptr [edx]
// 007d610e  42                   inc edx
// 007d610f  895104               mov dword ptr [ecx + 4], edx
// 007d6112  eb0c                 jmp 0x7d6120
// 007d6114  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6117  50                   push eax
// 007d6118  e8b3afffff           call 0x7d10d0
// 007d611d  83c404               add esp, 4
// 007d6120  8906                 mov dword ptr [esi], eax
// 007d6122  83f85b               cmp eax, 0x5b
// 007d6125  7526                 jne 0x7d614d
// 007d6127  e824f7ffff           call 0x7d5850
// 007d612c  3bc3                 cmp eax, ebx
// 007d612e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007d6131  895904               mov dword ptr [ecx + 4], ebx
// 007d6134  7c17                 jl 0x7d614d
// 007d6136  50                   push eax
// 007d6137  53                   push ebx
// 007d6138  8bc6                 mov eax, esi
// 007d613a  e861f8ffff           call 0x7d59a0
// 007d613f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 007d6142  83c408               add esp, 8
// 007d6145  895a04               mov dword ptr [edx + 4], ebx
// 007d6148  e953ffffff           jmp 0x7d60a0
// 007d614d  833e0a               cmp dword ptr [esi], 0xa
// 007d6150  0f844affffff         je 0x7d60a0
// 007d6156  eb08                 jmp 0x7d6160
// 007d6158  8da42400000000       lea esp, [esp]
// 007d615f  90                   nop 
// 007d6160  8b06                 mov eax, dword ptr [esi]
// 007d6162  83f80d               cmp eax, 0xd
// 007d6165  0f8435ffffff         je 0x7d60a0
// 007d616b  83f8ff               cmp eax, -1
// 007d616e  0f842cffffff         je 0x7d60a0
// 007d6174  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6177  8b08                 mov ecx, dword ptr [eax]
// 007d6179  8d51ff               lea edx, [ecx - 1]
// 007d617c  8910                 mov dword ptr [eax], edx
// 007d617e  3bcb                 cmp ecx, ebx
// 007d6180  760f                 jbe 0x7d6191
// 007d6182  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d6185  8b5104               mov edx, dword ptr [ecx + 4]
// 007d6188  0fb602               movzx eax, byte ptr [edx]
// 007d618b  42                   inc edx
// 007d618c  895104               mov dword ptr [ecx + 4], edx
// 007d618f  eb0c                 jmp 0x7d619d
// 007d6191  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6194  50                   push eax
// 007d6195  e836afffff           call 0x7d10d0
// 007d619a  83c404               add esp, 4
// 007d619d  8906                 mov dword ptr [esi], eax
// 007d619f  83f80a               cmp eax, 0xa
// 007d61a2  75bc                 jne 0x7d6160
// 007d61a4  e9f7feffff           jmp 0x7d60a0
// 007d61a9  50                   push eax
// 007d61aa  ffd7                 call edi
// 007d61ac  83c404               add esp, 4
// 007d61af  85c0                 test eax, eax
// 007d61b1  0f84d4030000         je 0x7d658b
// 007d61b7  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d61ba  8b08                 mov ecx, dword ptr [eax]
// 007d61bc  8d51ff               lea edx, [ecx - 1]
// 007d61bf  8910                 mov dword ptr [eax], edx
// 007d61c1  3bcb                 cmp ecx, ebx
// 007d61c3  7614                 jbe 0x7d61d9
// 007d61c5  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d61c8  8b5104               mov edx, dword ptr [ecx + 4]
// 007d61cb  0fb602               movzx eax, byte ptr [edx]
// 007d61ce  42                   inc edx
// 007d61cf  895104               mov dword ptr [ecx + 4], edx
// 007d61d2  8906                 mov dword ptr [esi], eax
// 007d61d4  e9c7feffff           jmp 0x7d60a0
// 007d61d9  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d61dc  50                   push eax
// 007d61dd  e8eeaeffff           call 0x7d10d0
// 007d61e2  83c404               add esp, 4
// 007d61e5  8906                 mov dword ptr [esi], eax
// 007d61e7  e9b4feffff           jmp 0x7d60a0
// 007d61ec  5f                   pop edi
// 007d61ed  5e                   pop esi
// 007d61ee  5d                   pop ebp
// 007d61ef  b82d000000           mov eax, 0x2d
// 007d61f4  5b                   pop ebx
// 007d61f5  83c450               add esp, 0x50
// 007d61f8  c3                   ret 
// 007d61f9  e852f6ffff           call 0x7d5850
// 007d61fe  3bc3                 cmp eax, ebx
// 007d6200  7c19                 jl 0x7d621b
// 007d6202  50                   push eax
// 007d6203  55                   push ebp
// 007d6204  8bc6                 mov eax, esi
// 007d6206  e895f7ffff           call 0x7d59a0
// 007d620b  83c408               add esp, 8
// 007d620e  5f                   pop edi
// 007d620f  5e                   pop esi
// 007d6210  5d                   pop ebp
// 007d6211  b81e010000           mov eax, 0x11e
// 007d6216  5b                   pop ebx
// 007d6217  83c450               add esp, 0x50
// 007d621a  c3                   ret 
// 007d621b  83f8ff               cmp eax, -1
// 007d621e  750d                 jne 0x7d622d
// 007d6220  5f                   pop edi
// 007d6221  5e                   pop esi
// 007d6222  5d                   pop ebp
// 007d6223  b85b000000           mov eax, 0x5b
// 007d6228  5b                   pop ebx
// 007d6229  83c450               add esp, 0x50
// 007d622c  c3                   ret 
// 007d622d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007d6230  6a50                 push 0x50
// 007d6232  83c110               add ecx, 0x10
// 007d6235  51                   push ecx
// 007d6236  8d542418             lea edx, [esp + 0x18]
// 007d623a  52                   push edx
// 007d623b  e86043fcff           call 0x79a5a0
// 007d6240  8b4604               mov eax, dword ptr [esi + 4]
// 007d6243  8b5634               mov edx, dword ptr [esi + 0x34]
// 007d6246  688cf49e00           push 0x9ef48c
// 007d624b  50                   push eax
// 007d624c  8d4c2424             lea ecx, [esp + 0x24]
// 007d6250  51                   push ecx
// 007d6251  68b4ab9e00           push 0x9eabb4
// 007d6256  52                   push edx
// 007d6257  e82443fcff           call 0x79a580
// 007d625c  53                   push ebx
// 007d625d  8bde                 mov ebx, esi
// 007d625f  8bf8                 mov edi, eax
// 007d6261  e81aefffff           call 0x7d5180
// 007d6266  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007d6269  8b00                 mov eax, dword ptr [eax]
// 007d626b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007d626e  50                   push eax
// 007d626f  57                   push edi
// 007d6270  68e4f39e00           push 0x9ef3e4
// 007d6275  51                   push ecx
// 007d6276  e80543fcff           call 0x79a580
// 007d627b  8b5634               mov edx, dword ptr [esi + 0x34]
// 007d627e  6a03                 push 3
// 007d6280  52                   push edx
// 007d6281  e8ca15fcff           call 0x797850
// 007d6286  83c43c               add esp, 0x3c
// 007d6289  33db                 xor ebx, ebx
// 007d628b  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d628e  8b08                 mov ecx, dword ptr [eax]
// 007d6290  8d51ff               lea edx, [ecx - 1]
// 007d6293  8910                 mov dword ptr [eax], edx
// 007d6295  3bcb                 cmp ecx, ebx
// 007d6297  760f                 jbe 0x7d62a8
// 007d6299  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d629c  8b5104               mov edx, dword ptr [ecx + 4]
// 007d629f  0fb602               movzx eax, byte ptr [edx]
// 007d62a2  42                   inc edx
// 007d62a3  895104               mov dword ptr [ecx + 4], edx
// 007d62a6  eb0c                 jmp 0x7d62b4
// 007d62a8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d62ab  50                   push eax
// 007d62ac  e81faeffff           call 0x7d10d0
// 007d62b1  83c404               add esp, 4
// 007d62b4  8906                 mov dword ptr [esi], eax
// 007d62b6  83f83d               cmp eax, 0x3d
// 007d62b9  740d                 je 0x7d62c8
// 007d62bb  5f                   pop edi
// 007d62bc  5e                   pop esi
// 007d62bd  5d                   pop ebp
// 007d62be  b83d000000           mov eax, 0x3d
// 007d62c3  5b                   pop ebx
// 007d62c4  83c450               add esp, 0x50
// 007d62c7  c3                   ret 
// 007d62c8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d62cb  8b08                 mov ecx, dword ptr [eax]
// 007d62cd  8d51ff               lea edx, [ecx - 1]
// 007d62d0  8910                 mov dword ptr [eax], edx
// 007d62d2  3bcb                 cmp ecx, ebx
// 007d62d4  761c                 jbe 0x7d62f2
// 007d62d6  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d62d9  8b5104               mov edx, dword ptr [ecx + 4]
// 007d62dc  0fb602               movzx eax, byte ptr [edx]
// 007d62df  42                   inc edx
// 007d62e0  5f                   pop edi
// 007d62e1  895104               mov dword ptr [ecx + 4], edx
// 007d62e4  8906                 mov dword ptr [esi], eax
// 007d62e6  5e                   pop esi
// 007d62e7  5d                   pop ebp
// 007d62e8  b818010000           mov eax, 0x118
// 007d62ed  5b                   pop ebx
// 007d62ee  83c450               add esp, 0x50
// 007d62f1  c3                   ret 
// 007d62f2  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d62f5  50                   push eax
// 007d62f6  e8d5adffff           call 0x7d10d0
// 007d62fb  83c404               add esp, 4
// 007d62fe  5f                   pop edi
// 007d62ff  8906                 mov dword ptr [esi], eax
// 007d6301  5e                   pop esi
// 007d6302  5d                   pop ebp
// 007d6303  b818010000           mov eax, 0x118
// 007d6308  5b                   pop ebx
// 007d6309  83c450               add esp, 0x50
// 007d630c  c3                   ret 
// 007d630d  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6310  8b08                 mov ecx, dword ptr [eax]
// 007d6312  8d51ff               lea edx, [ecx - 1]
// 007d6315  8910                 mov dword ptr [eax], edx
// 007d6317  3bcb                 cmp ecx, ebx
// 007d6319  760f                 jbe 0x7d632a
// 007d631b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d631e  8b5104               mov edx, dword ptr [ecx + 4]
// 007d6321  0fb602               movzx eax, byte ptr [edx]
// 007d6324  42                   inc edx
// 007d6325  895104               mov dword ptr [ecx + 4], edx
// 007d6328  eb0c                 jmp 0x7d6336
// 007d632a  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d632d  50                   push eax
// 007d632e  e89dadffff           call 0x7d10d0
// 007d6333  83c404               add esp, 4
// 007d6336  8906                 mov dword ptr [esi], eax
// 007d6338  83f83d               cmp eax, 0x3d
// 007d633b  740d                 je 0x7d634a
// 007d633d  5f                   pop edi
// 007d633e  5e                   pop esi
// 007d633f  5d                   pop ebp
// 007d6340  b83c000000           mov eax, 0x3c
// 007d6345  5b                   pop ebx
// 007d6346  83c450               add esp, 0x50
// 007d6349  c3                   ret 
// 007d634a  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d634d  8b08                 mov ecx, dword ptr [eax]
// 007d634f  8d51ff               lea edx, [ecx - 1]
// 007d6352  8910                 mov dword ptr [eax], edx
// 007d6354  3bcb                 cmp ecx, ebx
// 007d6356  761c                 jbe 0x7d6374
// 007d6358  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d635b  8b5104               mov edx, dword ptr [ecx + 4]
// 007d635e  0fb602               movzx eax, byte ptr [edx]
// 007d6361  42                   inc edx
// 007d6362  5f                   pop edi
// 007d6363  895104               mov dword ptr [ecx + 4], edx
// 007d6366  8906                 mov dword ptr [esi], eax
// 007d6368  5e                   pop esi
// 007d6369  5d                   pop ebp
// 007d636a  b81a010000           mov eax, 0x11a
// 007d636f  5b                   pop ebx
// 007d6370  83c450               add esp, 0x50
// 007d6373  c3                   ret 
// 007d6374  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6377  50                   push eax
// 007d6378  e853adffff           call 0x7d10d0
// 007d637d  83c404               add esp, 4
// 007d6380  5f                   pop edi
// 007d6381  8906                 mov dword ptr [esi], eax
// 007d6383  5e                   pop esi
// 007d6384  5d                   pop ebp
// 007d6385  b81a010000           mov eax, 0x11a
// 007d638a  5b                   pop ebx
// 007d638b  83c450               add esp, 0x50
// 007d638e  c3                   ret 
// 007d638f  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6392  8b08                 mov ecx, dword ptr [eax]
// 007d6394  8d51ff               lea edx, [ecx - 1]
// 007d6397  8910                 mov dword ptr [eax], edx
// 007d6399  3bcb                 cmp ecx, ebx
// 007d639b  760f                 jbe 0x7d63ac
// 007d639d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d63a0  8b5104               mov edx, dword ptr [ecx + 4]
// 007d63a3  0fb602               movzx eax, byte ptr [edx]
// 007d63a6  42                   inc edx
// 007d63a7  895104               mov dword ptr [ecx + 4], edx
// 007d63aa  eb0c                 jmp 0x7d63b8
// 007d63ac  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d63af  50                   push eax
// 007d63b0  e81badffff           call 0x7d10d0
// 007d63b5  83c404               add esp, 4
// 007d63b8  8906                 mov dword ptr [esi], eax
// 007d63ba  83f83d               cmp eax, 0x3d
// 007d63bd  740d                 je 0x7d63cc
// 007d63bf  5f                   pop edi
// 007d63c0  5e                   pop esi
// 007d63c1  5d                   pop ebp
// 007d63c2  b83e000000           mov eax, 0x3e
// 007d63c7  5b                   pop ebx
// 007d63c8  83c450               add esp, 0x50
// 007d63cb  c3                   ret 
// 007d63cc  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d63cf  8b08                 mov ecx, dword ptr [eax]
// 007d63d1  8d51ff               lea edx, [ecx - 1]
// 007d63d4  8910                 mov dword ptr [eax], edx
// 007d63d6  3bcb                 cmp ecx, ebx
// 007d63d8  761c                 jbe 0x7d63f6
// 007d63da  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d63dd  8b5104               mov edx, dword ptr [ecx + 4]
// 007d63e0  0fb602               movzx eax, byte ptr [edx]
// 007d63e3  42                   inc edx
// 007d63e4  5f                   pop edi
// 007d63e5  895104               mov dword ptr [ecx + 4], edx
// 007d63e8  8906                 mov dword ptr [esi], eax
// 007d63ea  5e                   pop esi
// 007d63eb  5d                   pop ebp
// 007d63ec  b819010000           mov eax, 0x119
// 007d63f1  5b                   pop ebx
// 007d63f2  83c450               add esp, 0x50
// 007d63f5  c3                   ret 
// 007d63f6  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d63f9  50                   push eax
// 007d63fa  e8d1acffff           call 0x7d10d0
// 007d63ff  83c404               add esp, 4
// 007d6402  5f                   pop edi
// 007d6403  8906                 mov dword ptr [esi], eax
// 007d6405  5e                   pop esi
// 007d6406  5d                   pop ebp
// 007d6407  b819010000           mov eax, 0x119
// 007d640c  5b                   pop ebx
// 007d640d  83c450               add esp, 0x50
// 007d6410  c3                   ret 
// 007d6411  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6414  8b08                 mov ecx, dword ptr [eax]
// 007d6416  8d51ff               lea edx, [ecx - 1]
// 007d6419  8910                 mov dword ptr [eax], edx
// 007d641b  3bcb                 cmp ecx, ebx
// 007d641d  760f                 jbe 0x7d642e
// 007d641f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d6422  8b5104               mov edx, dword ptr [ecx + 4]
// 007d6425  0fb602               movzx eax, byte ptr [edx]
// 007d6428  42                   inc edx
// 007d6429  895104               mov dword ptr [ecx + 4], edx
// 007d642c  eb0c                 jmp 0x7d643a
// 007d642e  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6431  50                   push eax
// 007d6432  e899acffff           call 0x7d10d0
// 007d6437  83c404               add esp, 4
// 007d643a  8906                 mov dword ptr [esi], eax
// 007d643c  83f83d               cmp eax, 0x3d
// 007d643f  740d                 je 0x7d644e
// 007d6441  5f                   pop edi
// 007d6442  5e                   pop esi
// 007d6443  5d                   pop ebp
// 007d6444  b87e000000           mov eax, 0x7e
// 007d6449  5b                   pop ebx
// 007d644a  83c450               add esp, 0x50
// 007d644d  c3                   ret 
// 007d644e  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6451  8b08                 mov ecx, dword ptr [eax]
// 007d6453  8d51ff               lea edx, [ecx - 1]
// 007d6456  8910                 mov dword ptr [eax], edx
// 007d6458  3bcb                 cmp ecx, ebx
// 007d645a  761c                 jbe 0x7d6478
// 007d645c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d645f  8b5104               mov edx, dword ptr [ecx + 4]
// 007d6462  0fb602               movzx eax, byte ptr [edx]
// 007d6465  42                   inc edx
// 007d6466  5f                   pop edi
// 007d6467  895104               mov dword ptr [ecx + 4], edx
// 007d646a  8906                 mov dword ptr [esi], eax
// 007d646c  5e                   pop esi
// 007d646d  5d                   pop ebp
// 007d646e  b81b010000           mov eax, 0x11b
// 007d6473  5b                   pop ebx
// 007d6474  83c450               add esp, 0x50
// 007d6477  c3                   ret 
// 007d6478  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d647b  50                   push eax
// 007d647c  e84facffff           call 0x7d10d0
// 007d6481  83c404               add esp, 4
// 007d6484  5f                   pop edi
// 007d6485  8906                 mov dword ptr [esi], eax
// 007d6487  5e                   pop esi
// 007d6488  5d                   pop ebp
// 007d6489  b81b010000           mov eax, 0x11b
// 007d648e  5b                   pop ebx
// 007d648f  83c450               add esp, 0x50
// 007d6492  c3                   ret 
// 007d6493  8b0e                 mov ecx, dword ptr [esi]
// 007d6495  55                   push ebp
// 007d6496  51                   push ecx
// 007d6497  8bc6                 mov eax, esi
// 007d6499  e852f7ffff           call 0x7d5bf0
// 007d649e  83c408               add esp, 8
// 007d64a1  5f                   pop edi
// 007d64a2  5e                   pop esi
// 007d64a3  5d                   pop ebp
// 007d64a4  b81e010000           mov eax, 0x11e
// 007d64a9  5b                   pop ebx
// 007d64aa  83c450               add esp, 0x50
// 007d64ad  c3                   ret 
// 007d64ae  8b16                 mov edx, dword ptr [esi]
// 007d64b0  52                   push edx
// 007d64b1  8bde                 mov ebx, esi
// 007d64b3  e8c8ecffff           call 0x7d5180
// 007d64b8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d64bb  8b08                 mov ecx, dword ptr [eax]
// 007d64bd  83c404               add esp, 4
// 007d64c0  8d51ff               lea edx, [ecx - 1]
// 007d64c3  8910                 mov dword ptr [eax], edx
// 007d64c5  85c9                 test ecx, ecx
// 007d64c7  760f                 jbe 0x7d64d8
// 007d64c9  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d64cc  8b5104               mov edx, dword ptr [ecx + 4]
// 007d64cf  0fb602               movzx eax, byte ptr [edx]
// 007d64d2  42                   inc edx
// 007d64d3  895104               mov dword ptr [ecx + 4], edx
// 007d64d6  eb0c                 jmp 0x7d64e4
// 007d64d8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d64db  50                   push eax
// 007d64dc  e8efabffff           call 0x7d10d0
// 007d64e1  83c404               add esp, 4
// 007d64e4  50                   push eax
// 007d64e5  6884169b00           push 0x9b1684
// 007d64ea  8906                 mov dword ptr [esi], eax
// 007d64ec  ff1530b89800         call dword ptr [0x98b830]
// 007d64f2  8b0e                 mov ecx, dword ptr [esi]
// 007d64f4  83c408               add esp, 8
// 007d64f7  51                   push ecx
// 007d64f8  85c0                 test eax, eax
// 007d64fa  7452                 je 0x7d654e
// 007d64fc  e87fecffff           call 0x7d5180
// 007d6501  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6504  8b08                 mov ecx, dword ptr [eax]
// 007d6506  83c404               add esp, 4
// 007d6509  8d51ff               lea edx, [ecx - 1]
// 007d650c  8910                 mov dword ptr [eax], edx
// 007d650e  85c9                 test ecx, ecx
// 007d6510  760f                 jbe 0x7d6521
// 007d6512  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d6515  8b5104               mov edx, dword ptr [ecx + 4]
// 007d6518  0fb602               movzx eax, byte ptr [edx]
// 007d651b  42                   inc edx
// 007d651c  895104               mov dword ptr [ecx + 4], edx
// 007d651f  eb0c                 jmp 0x7d652d
// 007d6521  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6524  50                   push eax
// 007d6525  e8a6abffff           call 0x7d10d0
// 007d652a  83c404               add esp, 4
// 007d652d  8906                 mov dword ptr [esi], eax
// 007d652f  b984169b00           mov ecx, 0x9b1684
// 007d6534  8bc6                 mov eax, esi
// 007d6536  e895efffff           call 0x7d54d0
// 007d653b  f7d8                 neg eax
// 007d653d  5f                   pop edi
// 007d653e  1bc0                 sbb eax, eax
// 007d6540  5e                   pop esi
// 007d6541  f7d8                 neg eax
// 007d6543  5d                   pop ebp
// 007d6544  0516010000           add eax, 0x116
// 007d6549  5b                   pop ebx
// 007d654a  83c450               add esp, 0x50
// 007d654d  c3                   ret 
// 007d654e  ff15dcb89800         call dword ptr [0x98b8dc]
// 007d6554  83c404               add esp, 4
// 007d6557  85c0                 test eax, eax
// 007d6559  750d                 jne 0x7d6568
// 007d655b  5f                   pop edi
// 007d655c  5e                   pop esi
// 007d655d  5d                   pop ebp
// 007d655e  b82e000000           mov eax, 0x2e
// 007d6563  5b                   pop ebx
// 007d6564  83c450               add esp, 0x50
// 007d6567  c3                   ret 
// 007d6568  55                   push ebp
// 007d6569  e8a2f0ffff           call 0x7d5610
// 007d656e  83c404               add esp, 4
// 007d6571  5f                   pop edi
// 007d6572  5e                   pop esi
// 007d6573  5d                   pop ebp
// 007d6574  b81c010000           mov eax, 0x11c
// 007d6579  5b                   pop ebx
// 007d657a  83c450               add esp, 0x50
// 007d657d  c3                   ret 
// 007d657e  5f                   pop edi
// 007d657f  5e                   pop esi
// 007d6580  5d                   pop ebp
// 007d6581  b81f010000           mov eax, 0x11f
// 007d6586  5b                   pop ebx
// 007d6587  83c450               add esp, 0x50
// 007d658a  c3                   ret 
// 007d658b  8b16                 mov edx, dword ptr [esi]
// 007d658d  52                   push edx
// 007d658e  ff15dcb89800         call dword ptr [0x98b8dc]
// 007d6594  83c404               add esp, 4
// 007d6597  85c0                 test eax, eax
// 007d6599  75cd                 jne 0x7d6568
// 007d659b  8b06                 mov eax, dword ptr [esi]
// 007d659d  50                   push eax
// 007d659e  ff154cb89800         call dword ptr [0x98b84c]
// 007d65a4  83c404               add esp, 4
// 007d65a7  85c0                 test eax, eax
// 007d65a9  7546                 jne 0x7d65f1
// 007d65ab  8b3e                 mov edi, dword ptr [esi]
// 007d65ad  83ff5f               cmp edi, 0x5f
// 007d65b0  743f                 je 0x7d65f1
// 007d65b2  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d65b5  8b08                 mov ecx, dword ptr [eax]
// 007d65b7  8d51ff               lea edx, [ecx - 1]
// 007d65ba  8910                 mov dword ptr [eax], edx
// 007d65bc  3bcb                 cmp ecx, ebx
// 007d65be  7619                 jbe 0x7d65d9
// 007d65c0  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d65c3  8b5104               mov edx, dword ptr [ecx + 4]
// 007d65c6  0fb602               movzx eax, byte ptr [edx]
// 007d65c9  42                   inc edx
// 007d65ca  895104               mov dword ptr [ecx + 4], edx
// 007d65cd  8906                 mov dword ptr [esi], eax
// 007d65cf  8bc7                 mov eax, edi
// 007d65d1  5f                   pop edi
// 007d65d2  5e                   pop esi
// 007d65d3  5d                   pop ebp
// 007d65d4  5b                   pop ebx
// 007d65d5  83c450               add esp, 0x50
// 007d65d8  c3                   ret 
// 007d65d9  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d65dc  50                   push eax
// 007d65dd  e8eeaaffff           call 0x7d10d0
// 007d65e2  83c404               add esp, 4
// 007d65e5  8906                 mov dword ptr [esi], eax
// 007d65e7  8bc7                 mov eax, edi
// 007d65e9  5f                   pop edi
// 007d65ea  5e                   pop esi
// 007d65eb  5d                   pop ebp
// 007d65ec  5b                   pop ebx
// 007d65ed  83c450               add esp, 0x50
// 007d65f0  c3                   ret 
// 007d65f1  8b3d54b99800         mov edi, dword ptr [0x98b954]
// 007d65f7  8b0e                 mov ecx, dword ptr [esi]
// 007d65f9  51                   push ecx
// 007d65fa  8bde                 mov ebx, esi
// 007d65fc  e87febffff           call 0x7d5180
// 007d6601  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6604  8b08                 mov ecx, dword ptr [eax]
// 007d6606  83c404               add esp, 4
// 007d6609  8d51ff               lea edx, [ecx - 1]
// 007d660c  8910                 mov dword ptr [eax], edx
// 007d660e  85c9                 test ecx, ecx
// 007d6610  760f                 jbe 0x7d6621
// 007d6612  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d6615  8b5104               mov edx, dword ptr [ecx + 4]
// 007d6618  0fb602               movzx eax, byte ptr [edx]
// 007d661b  42                   inc edx
// 007d661c  895104               mov dword ptr [ecx + 4], edx
// 007d661f  eb0c                 jmp 0x7d662d
// 007d6621  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d6624  50                   push eax
// 007d6625  e8a6aaffff           call 0x7d10d0
// 007d662a  83c404               add esp, 4
// 007d662d  50                   push eax
// 007d662e  8906                 mov dword ptr [esi], eax
// 007d6630  ffd7                 call edi
// 007d6632  83c404               add esp, 4
// 007d6635  85c0                 test eax, eax
// 007d6637  75be                 jne 0x7d65f7
// 007d6639  833e5f               cmp dword ptr [esi], 0x5f
// 007d663c  74b9                 je 0x7d65f7
// 007d663e  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007d6641  8b4804               mov ecx, dword ptr [eax + 4]
// 007d6644  8b10                 mov edx, dword ptr [eax]
// 007d6646  51                   push ecx
// 007d6647  52                   push edx
// 007d6648  56                   push esi
// 007d6649  e812edffff           call 0x7d5360
// 007d664e  8a4806               mov cl, byte ptr [eax + 6]
// 007d6651  83c40c               add esp, 0xc
// 007d6654  84c9                 test cl, cl
// 007d6656  7610                 jbe 0x7d6668
// 007d6658  5f                   pop edi
// 007d6659  5e                   pop esi
// 007d665a  0fb6c1               movzx eax, cl
// 007d665d  5d                   pop ebp
// 007d665e  0500010000           add eax, 0x100
// 007d6663  5b                   pop ebx
// 007d6664  83c450               add esp, 0x50
// 007d6667  c3                   ret 
// 007d6668  5f                   pop edi
// 007d6669  5e                   pop esi
// 007d666a  894500               mov dword ptr [ebp], eax
// 007d666d  5d                   pop ebp
// 007d666e  b81d010000           mov eax, 0x11d
// 007d6673  5b                   pop ebx
// 007d6674  83c450               add esp, 0x50
// 007d6677  c3                   ret 
// 007d6678  7e65                 jle 0x7d66df
// 007d667a  7d00                 jge 0x7d667c
// 007d667c  bc607d0093           mov esp, 0x93007d60
// 007d6681  647d00               jge 0x7d6684
// 007d6684  c3                   ret 
// 007d6685  60                   pushal 
// 007d6686  7d00                 jge 0x7d6688
// 007d6688  ae                   scasb al, byte ptr es:[edi]
// 007d6689  647d00               jge 0x7d668c
// 007d668c  0d637d008b           or eax, 0x8b007d63
// 007d6691  627d00               bound edi, qword ptr [ebp]
// copied from an identical function in another client (function _llex)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll llex.c
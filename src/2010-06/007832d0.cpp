// roc 2010-06 007832d0  unit: seg_00780000  size: 1700 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007832d0
//
// 007832d0  83ec50               sub esp, 0x50
// 007832d3  53                   push ebx
// 007832d4  55                   push ebp
// 007832d5  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 007832d9  56                   push esi
// 007832da  8bf0                 mov esi, eax
// 007832dc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007832df  33db                 xor ebx, ebx
// 007832e1  57                   push edi
// 007832e2  8b3d40a79e00         mov edi, dword ptr [0x9ea740]
// 007832e8  895804               mov dword ptr [eax + 4], ebx
// 007832eb  eb03                 jmp 0x7832f0
// 007832ed  8d4900               lea ecx, [ecx]
// 007832f0  8b06                 mov eax, dword ptr [esi]
// 007832f2  8d4801               lea ecx, [eax + 1]
// 007832f5  83f97f               cmp ecx, 0x7f
// 007832f8  0f87fb000000         ja 0x7833f9
// 007832fe  0fb689f4387800       movzx ecx, byte ptr [ecx + 0x7838f4]
// 00783305  ff248dc8387800       jmp dword ptr [ecx*4 + 0x7838c8]
// 0078330c  e8eff2ffff           call 0x782600
// 00783311  ebdd                 jmp 0x7832f0
// 00783313  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783316  8b08                 mov ecx, dword ptr [eax]
// 00783318  8d51ff               lea edx, [ecx - 1]
// 0078331b  8910                 mov dword ptr [eax], edx
// 0078331d  3bcb                 cmp ecx, ebx
// 0078331f  760f                 jbe 0x783330
// 00783321  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783324  8b5104               mov edx, dword ptr [ecx + 4]
// 00783327  0fb602               movzx eax, byte ptr [edx]
// 0078332a  42                   inc edx
// 0078332b  895104               mov dword ptr [ecx + 4], edx
// 0078332e  eb0c                 jmp 0x78333c
// 00783330  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783333  50                   push eax
// 00783334  e8e7afffff           call 0x77e320
// 00783339  83c404               add esp, 4
// 0078333c  8906                 mov dword ptr [esi], eax
// 0078333e  83f82d               cmp eax, 0x2d
// 00783341  0f85f5000000         jne 0x78343c
// 00783347  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078334a  8b08                 mov ecx, dword ptr [eax]
// 0078334c  8d51ff               lea edx, [ecx - 1]
// 0078334f  8910                 mov dword ptr [eax], edx
// 00783351  3bcb                 cmp ecx, ebx
// 00783353  760f                 jbe 0x783364
// 00783355  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783358  8b5104               mov edx, dword ptr [ecx + 4]
// 0078335b  0fb602               movzx eax, byte ptr [edx]
// 0078335e  42                   inc edx
// 0078335f  895104               mov dword ptr [ecx + 4], edx
// 00783362  eb0c                 jmp 0x783370
// 00783364  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783367  50                   push eax
// 00783368  e8b3afffff           call 0x77e320
// 0078336d  83c404               add esp, 4
// 00783370  8906                 mov dword ptr [esi], eax
// 00783372  83f85b               cmp eax, 0x5b
// 00783375  7526                 jne 0x78339d
// 00783377  e824f7ffff           call 0x782aa0
// 0078337c  3bc3                 cmp eax, ebx
// 0078337e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00783381  895904               mov dword ptr [ecx + 4], ebx
// 00783384  7c17                 jl 0x78339d
// 00783386  50                   push eax
// 00783387  53                   push ebx
// 00783388  8bc6                 mov eax, esi
// 0078338a  e861f8ffff           call 0x782bf0
// 0078338f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00783392  83c408               add esp, 8
// 00783395  895a04               mov dword ptr [edx + 4], ebx
// 00783398  e953ffffff           jmp 0x7832f0
// 0078339d  833e0a               cmp dword ptr [esi], 0xa
// 007833a0  0f844affffff         je 0x7832f0
// 007833a6  eb08                 jmp 0x7833b0
// 007833a8  8da42400000000       lea esp, [esp]
// 007833af  90                   nop 
// 007833b0  8b06                 mov eax, dword ptr [esi]
// 007833b2  83f80d               cmp eax, 0xd
// 007833b5  0f8435ffffff         je 0x7832f0
// 007833bb  83f8ff               cmp eax, -1
// 007833be  0f842cffffff         je 0x7832f0
// 007833c4  8b4638               mov eax, dword ptr [esi + 0x38]
// 007833c7  8b08                 mov ecx, dword ptr [eax]
// 007833c9  8d51ff               lea edx, [ecx - 1]
// 007833cc  8910                 mov dword ptr [eax], edx
// 007833ce  3bcb                 cmp ecx, ebx
// 007833d0  760f                 jbe 0x7833e1
// 007833d2  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007833d5  8b5104               mov edx, dword ptr [ecx + 4]
// 007833d8  0fb602               movzx eax, byte ptr [edx]
// 007833db  42                   inc edx
// 007833dc  895104               mov dword ptr [ecx + 4], edx
// 007833df  eb0c                 jmp 0x7833ed
// 007833e1  8b4638               mov eax, dword ptr [esi + 0x38]
// 007833e4  50                   push eax
// 007833e5  e836afffff           call 0x77e320
// 007833ea  83c404               add esp, 4
// 007833ed  8906                 mov dword ptr [esi], eax
// 007833ef  83f80a               cmp eax, 0xa
// 007833f2  75bc                 jne 0x7833b0
// 007833f4  e9f7feffff           jmp 0x7832f0
// 007833f9  50                   push eax
// 007833fa  ffd7                 call edi
// 007833fc  83c404               add esp, 4
// 007833ff  85c0                 test eax, eax
// 00783401  0f84d4030000         je 0x7837db
// 00783407  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078340a  8b08                 mov ecx, dword ptr [eax]
// 0078340c  8d51ff               lea edx, [ecx - 1]
// 0078340f  8910                 mov dword ptr [eax], edx
// 00783411  3bcb                 cmp ecx, ebx
// 00783413  7614                 jbe 0x783429
// 00783415  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783418  8b5104               mov edx, dword ptr [ecx + 4]
// 0078341b  0fb602               movzx eax, byte ptr [edx]
// 0078341e  42                   inc edx
// 0078341f  895104               mov dword ptr [ecx + 4], edx
// 00783422  8906                 mov dword ptr [esi], eax
// 00783424  e9c7feffff           jmp 0x7832f0
// 00783429  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078342c  50                   push eax
// 0078342d  e8eeaeffff           call 0x77e320
// 00783432  83c404               add esp, 4
// 00783435  8906                 mov dword ptr [esi], eax
// 00783437  e9b4feffff           jmp 0x7832f0
// 0078343c  5f                   pop edi
// 0078343d  5e                   pop esi
// 0078343e  5d                   pop ebp
// 0078343f  b82d000000           mov eax, 0x2d
// 00783444  5b                   pop ebx
// 00783445  83c450               add esp, 0x50
// 00783448  c3                   ret 
// 00783449  e852f6ffff           call 0x782aa0
// 0078344e  3bc3                 cmp eax, ebx
// 00783450  7c19                 jl 0x78346b
// 00783452  50                   push eax
// 00783453  55                   push ebp
// 00783454  8bc6                 mov eax, esi
// 00783456  e895f7ffff           call 0x782bf0
// 0078345b  83c408               add esp, 8
// 0078345e  5f                   pop edi
// 0078345f  5e                   pop esi
// 00783460  5d                   pop ebp
// 00783461  b81e010000           mov eax, 0x11e
// 00783466  5b                   pop ebx
// 00783467  83c450               add esp, 0x50
// 0078346a  c3                   ret 
// 0078346b  83f8ff               cmp eax, -1
// 0078346e  750d                 jne 0x78347d
// 00783470  5f                   pop edi
// 00783471  5e                   pop esi
// 00783472  5d                   pop ebp
// 00783473  b85b000000           mov eax, 0x5b
// 00783478  5b                   pop ebx
// 00783479  83c450               add esp, 0x50
// 0078347c  c3                   ret 
// 0078347d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00783480  6a50                 push 0x50
// 00783482  83c110               add ecx, 0x10
// 00783485  51                   push ecx
// 00783486  8d542418             lea edx, [esp + 0x18]
// 0078348a  52                   push edx
// 0078348b  e870f9faff           call 0x732e00
// 00783490  8b4604               mov eax, dword ptr [esi + 4]
// 00783493  8b5634               mov edx, dword ptr [esi + 0x34]
// 00783496  68f436a500           push 0xa536f4
// 0078349b  50                   push eax
// 0078349c  8d4c2424             lea ecx, [esp + 0x24]
// 007834a0  51                   push ecx
// 007834a1  6808dea400           push 0xa4de08
// 007834a6  52                   push edx
// 007834a7  e834f9faff           call 0x732de0
// 007834ac  53                   push ebx
// 007834ad  8bde                 mov ebx, esi
// 007834af  8bf8                 mov edi, eax
// 007834b1  e81aefffff           call 0x7823d0
// 007834b6  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007834b9  8b00                 mov eax, dword ptr [eax]
// 007834bb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007834be  50                   push eax
// 007834bf  57                   push edi
// 007834c0  684c36a500           push 0xa5364c
// 007834c5  51                   push ecx
// 007834c6  e815f9faff           call 0x732de0
// 007834cb  8b5634               mov edx, dword ptr [esi + 0x34]
// 007834ce  6a03                 push 3
// 007834d0  52                   push edx
// 007834d1  e8dacbfaff           call 0x7300b0
// 007834d6  83c43c               add esp, 0x3c
// 007834d9  33db                 xor ebx, ebx
// 007834db  8b4638               mov eax, dword ptr [esi + 0x38]
// 007834de  8b08                 mov ecx, dword ptr [eax]
// 007834e0  8d51ff               lea edx, [ecx - 1]
// 007834e3  8910                 mov dword ptr [eax], edx
// 007834e5  3bcb                 cmp ecx, ebx
// 007834e7  760f                 jbe 0x7834f8
// 007834e9  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007834ec  8b5104               mov edx, dword ptr [ecx + 4]
// 007834ef  0fb602               movzx eax, byte ptr [edx]
// 007834f2  42                   inc edx
// 007834f3  895104               mov dword ptr [ecx + 4], edx
// 007834f6  eb0c                 jmp 0x783504
// 007834f8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007834fb  50                   push eax
// 007834fc  e81faeffff           call 0x77e320
// 00783501  83c404               add esp, 4
// 00783504  8906                 mov dword ptr [esi], eax
// 00783506  83f83d               cmp eax, 0x3d
// 00783509  740d                 je 0x783518
// 0078350b  5f                   pop edi
// 0078350c  5e                   pop esi
// 0078350d  5d                   pop ebp
// 0078350e  b83d000000           mov eax, 0x3d
// 00783513  5b                   pop ebx
// 00783514  83c450               add esp, 0x50
// 00783517  c3                   ret 
// 00783518  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078351b  8b08                 mov ecx, dword ptr [eax]
// 0078351d  8d51ff               lea edx, [ecx - 1]
// 00783520  8910                 mov dword ptr [eax], edx
// 00783522  3bcb                 cmp ecx, ebx
// 00783524  761c                 jbe 0x783542
// 00783526  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783529  8b5104               mov edx, dword ptr [ecx + 4]
// 0078352c  0fb602               movzx eax, byte ptr [edx]
// 0078352f  42                   inc edx
// 00783530  5f                   pop edi
// 00783531  895104               mov dword ptr [ecx + 4], edx
// 00783534  8906                 mov dword ptr [esi], eax
// 00783536  5e                   pop esi
// 00783537  5d                   pop ebp
// 00783538  b818010000           mov eax, 0x118
// 0078353d  5b                   pop ebx
// 0078353e  83c450               add esp, 0x50
// 00783541  c3                   ret 
// 00783542  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783545  50                   push eax
// 00783546  e8d5adffff           call 0x77e320
// 0078354b  83c404               add esp, 4
// 0078354e  5f                   pop edi
// 0078354f  8906                 mov dword ptr [esi], eax
// 00783551  5e                   pop esi
// 00783552  5d                   pop ebp
// 00783553  b818010000           mov eax, 0x118
// 00783558  5b                   pop ebx
// 00783559  83c450               add esp, 0x50
// 0078355c  c3                   ret 
// 0078355d  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783560  8b08                 mov ecx, dword ptr [eax]
// 00783562  8d51ff               lea edx, [ecx - 1]
// 00783565  8910                 mov dword ptr [eax], edx
// 00783567  3bcb                 cmp ecx, ebx
// 00783569  760f                 jbe 0x78357a
// 0078356b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0078356e  8b5104               mov edx, dword ptr [ecx + 4]
// 00783571  0fb602               movzx eax, byte ptr [edx]
// 00783574  42                   inc edx
// 00783575  895104               mov dword ptr [ecx + 4], edx
// 00783578  eb0c                 jmp 0x783586
// 0078357a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078357d  50                   push eax
// 0078357e  e89dadffff           call 0x77e320
// 00783583  83c404               add esp, 4
// 00783586  8906                 mov dword ptr [esi], eax
// 00783588  83f83d               cmp eax, 0x3d
// 0078358b  740d                 je 0x78359a
// 0078358d  5f                   pop edi
// 0078358e  5e                   pop esi
// 0078358f  5d                   pop ebp
// 00783590  b83c000000           mov eax, 0x3c
// 00783595  5b                   pop ebx
// 00783596  83c450               add esp, 0x50
// 00783599  c3                   ret 
// 0078359a  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078359d  8b08                 mov ecx, dword ptr [eax]
// 0078359f  8d51ff               lea edx, [ecx - 1]
// 007835a2  8910                 mov dword ptr [eax], edx
// 007835a4  3bcb                 cmp ecx, ebx
// 007835a6  761c                 jbe 0x7835c4
// 007835a8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007835ab  8b5104               mov edx, dword ptr [ecx + 4]
// 007835ae  0fb602               movzx eax, byte ptr [edx]
// 007835b1  42                   inc edx
// 007835b2  5f                   pop edi
// 007835b3  895104               mov dword ptr [ecx + 4], edx
// 007835b6  8906                 mov dword ptr [esi], eax
// 007835b8  5e                   pop esi
// 007835b9  5d                   pop ebp
// 007835ba  b81a010000           mov eax, 0x11a
// 007835bf  5b                   pop ebx
// 007835c0  83c450               add esp, 0x50
// 007835c3  c3                   ret 
// 007835c4  8b4638               mov eax, dword ptr [esi + 0x38]
// 007835c7  50                   push eax
// 007835c8  e853adffff           call 0x77e320
// 007835cd  83c404               add esp, 4
// 007835d0  5f                   pop edi
// 007835d1  8906                 mov dword ptr [esi], eax
// 007835d3  5e                   pop esi
// 007835d4  5d                   pop ebp
// 007835d5  b81a010000           mov eax, 0x11a
// 007835da  5b                   pop ebx
// 007835db  83c450               add esp, 0x50
// 007835de  c3                   ret 
// 007835df  8b4638               mov eax, dword ptr [esi + 0x38]
// 007835e2  8b08                 mov ecx, dword ptr [eax]
// 007835e4  8d51ff               lea edx, [ecx - 1]
// 007835e7  8910                 mov dword ptr [eax], edx
// 007835e9  3bcb                 cmp ecx, ebx
// 007835eb  760f                 jbe 0x7835fc
// 007835ed  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007835f0  8b5104               mov edx, dword ptr [ecx + 4]
// 007835f3  0fb602               movzx eax, byte ptr [edx]
// 007835f6  42                   inc edx
// 007835f7  895104               mov dword ptr [ecx + 4], edx
// 007835fa  eb0c                 jmp 0x783608
// 007835fc  8b4638               mov eax, dword ptr [esi + 0x38]
// 007835ff  50                   push eax
// 00783600  e81badffff           call 0x77e320
// 00783605  83c404               add esp, 4
// 00783608  8906                 mov dword ptr [esi], eax
// 0078360a  83f83d               cmp eax, 0x3d
// 0078360d  740d                 je 0x78361c
// 0078360f  5f                   pop edi
// 00783610  5e                   pop esi
// 00783611  5d                   pop ebp
// 00783612  b83e000000           mov eax, 0x3e
// 00783617  5b                   pop ebx
// 00783618  83c450               add esp, 0x50
// 0078361b  c3                   ret 
// 0078361c  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078361f  8b08                 mov ecx, dword ptr [eax]
// 00783621  8d51ff               lea edx, [ecx - 1]
// 00783624  8910                 mov dword ptr [eax], edx
// 00783626  3bcb                 cmp ecx, ebx
// 00783628  761c                 jbe 0x783646
// 0078362a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0078362d  8b5104               mov edx, dword ptr [ecx + 4]
// 00783630  0fb602               movzx eax, byte ptr [edx]
// 00783633  42                   inc edx
// 00783634  5f                   pop edi
// 00783635  895104               mov dword ptr [ecx + 4], edx
// 00783638  8906                 mov dword ptr [esi], eax
// 0078363a  5e                   pop esi
// 0078363b  5d                   pop ebp
// 0078363c  b819010000           mov eax, 0x119
// 00783641  5b                   pop ebx
// 00783642  83c450               add esp, 0x50
// 00783645  c3                   ret 
// 00783646  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783649  50                   push eax
// 0078364a  e8d1acffff           call 0x77e320
// 0078364f  83c404               add esp, 4
// 00783652  5f                   pop edi
// 00783653  8906                 mov dword ptr [esi], eax
// 00783655  5e                   pop esi
// 00783656  5d                   pop ebp
// 00783657  b819010000           mov eax, 0x119
// 0078365c  5b                   pop ebx
// 0078365d  83c450               add esp, 0x50
// 00783660  c3                   ret 
// 00783661  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783664  8b08                 mov ecx, dword ptr [eax]
// 00783666  8d51ff               lea edx, [ecx - 1]
// 00783669  8910                 mov dword ptr [eax], edx
// 0078366b  3bcb                 cmp ecx, ebx
// 0078366d  760f                 jbe 0x78367e
// 0078366f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783672  8b5104               mov edx, dword ptr [ecx + 4]
// 00783675  0fb602               movzx eax, byte ptr [edx]
// 00783678  42                   inc edx
// 00783679  895104               mov dword ptr [ecx + 4], edx
// 0078367c  eb0c                 jmp 0x78368a
// 0078367e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783681  50                   push eax
// 00783682  e899acffff           call 0x77e320
// 00783687  83c404               add esp, 4
// 0078368a  8906                 mov dword ptr [esi], eax
// 0078368c  83f83d               cmp eax, 0x3d
// 0078368f  740d                 je 0x78369e
// 00783691  5f                   pop edi
// 00783692  5e                   pop esi
// 00783693  5d                   pop ebp
// 00783694  b87e000000           mov eax, 0x7e
// 00783699  5b                   pop ebx
// 0078369a  83c450               add esp, 0x50
// 0078369d  c3                   ret 
// 0078369e  8b4638               mov eax, dword ptr [esi + 0x38]
// 007836a1  8b08                 mov ecx, dword ptr [eax]
// 007836a3  8d51ff               lea edx, [ecx - 1]
// 007836a6  8910                 mov dword ptr [eax], edx
// 007836a8  3bcb                 cmp ecx, ebx
// 007836aa  761c                 jbe 0x7836c8
// 007836ac  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007836af  8b5104               mov edx, dword ptr [ecx + 4]
// 007836b2  0fb602               movzx eax, byte ptr [edx]
// 007836b5  42                   inc edx
// 007836b6  5f                   pop edi
// 007836b7  895104               mov dword ptr [ecx + 4], edx
// 007836ba  8906                 mov dword ptr [esi], eax
// 007836bc  5e                   pop esi
// 007836bd  5d                   pop ebp
// 007836be  b81b010000           mov eax, 0x11b
// 007836c3  5b                   pop ebx
// 007836c4  83c450               add esp, 0x50
// 007836c7  c3                   ret 
// 007836c8  8b4638               mov eax, dword ptr [esi + 0x38]
// 007836cb  50                   push eax
// 007836cc  e84facffff           call 0x77e320
// 007836d1  83c404               add esp, 4
// 007836d4  5f                   pop edi
// 007836d5  8906                 mov dword ptr [esi], eax
// 007836d7  5e                   pop esi
// 007836d8  5d                   pop ebp
// 007836d9  b81b010000           mov eax, 0x11b
// 007836de  5b                   pop ebx
// 007836df  83c450               add esp, 0x50
// 007836e2  c3                   ret 
// 007836e3  8b0e                 mov ecx, dword ptr [esi]
// 007836e5  55                   push ebp
// 007836e6  51                   push ecx
// 007836e7  8bc6                 mov eax, esi
// 007836e9  e852f7ffff           call 0x782e40
// 007836ee  83c408               add esp, 8
// 007836f1  5f                   pop edi
// 007836f2  5e                   pop esi
// 007836f3  5d                   pop ebp
// 007836f4  b81e010000           mov eax, 0x11e
// 007836f9  5b                   pop ebx
// 007836fa  83c450               add esp, 0x50
// 007836fd  c3                   ret 
// 007836fe  8b16                 mov edx, dword ptr [esi]
// 00783700  52                   push edx
// 00783701  8bde                 mov ebx, esi
// 00783703  e8c8ecffff           call 0x7823d0
// 00783708  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078370b  8b08                 mov ecx, dword ptr [eax]
// 0078370d  83c404               add esp, 4
// 00783710  8d51ff               lea edx, [ecx - 1]
// 00783713  8910                 mov dword ptr [eax], edx
// 00783715  85c9                 test ecx, ecx
// 00783717  760f                 jbe 0x783728
// 00783719  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0078371c  8b5104               mov edx, dword ptr [ecx + 4]
// 0078371f  0fb602               movzx eax, byte ptr [edx]
// 00783722  42                   inc edx
// 00783723  895104               mov dword ptr [ecx + 4], edx
// 00783726  eb0c                 jmp 0x783734
// 00783728  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078372b  50                   push eax
// 0078372c  e8efabffff           call 0x77e320
// 00783731  83c404               add esp, 4
// 00783734  50                   push eax
// 00783735  683428a100           push 0xa12834
// 0078373a  8906                 mov dword ptr [esi], eax
// 0078373c  ff153ca89e00         call dword ptr [0x9ea83c]
// 00783742  8b0e                 mov ecx, dword ptr [esi]
// 00783744  83c408               add esp, 8
// 00783747  51                   push ecx
// 00783748  85c0                 test eax, eax
// 0078374a  7452                 je 0x78379e
// 0078374c  e87fecffff           call 0x7823d0
// 00783751  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783754  8b08                 mov ecx, dword ptr [eax]
// 00783756  83c404               add esp, 4
// 00783759  8d51ff               lea edx, [ecx - 1]
// 0078375c  8910                 mov dword ptr [eax], edx
// 0078375e  85c9                 test ecx, ecx
// 00783760  760f                 jbe 0x783771
// 00783762  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783765  8b5104               mov edx, dword ptr [ecx + 4]
// 00783768  0fb602               movzx eax, byte ptr [edx]
// 0078376b  42                   inc edx
// 0078376c  895104               mov dword ptr [ecx + 4], edx
// 0078376f  eb0c                 jmp 0x78377d
// 00783771  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783774  50                   push eax
// 00783775  e8a6abffff           call 0x77e320
// 0078377a  83c404               add esp, 4
// 0078377d  8906                 mov dword ptr [esi], eax
// 0078377f  b93428a100           mov ecx, 0xa12834
// 00783784  8bc6                 mov eax, esi
// 00783786  e895efffff           call 0x782720
// 0078378b  f7d8                 neg eax
// 0078378d  5f                   pop edi
// 0078378e  1bc0                 sbb eax, eax
// 00783790  5e                   pop esi
// 00783791  f7d8                 neg eax
// 00783793  5d                   pop ebp
// 00783794  0516010000           add eax, 0x116
// 00783799  5b                   pop ebx
// 0078379a  83c450               add esp, 0x50
// 0078379d  c3                   ret 
// 0078379e  ff15eca79e00         call dword ptr [0x9ea7ec]
// 007837a4  83c404               add esp, 4
// 007837a7  85c0                 test eax, eax
// 007837a9  750d                 jne 0x7837b8
// 007837ab  5f                   pop edi
// 007837ac  5e                   pop esi
// 007837ad  5d                   pop ebp
// 007837ae  b82e000000           mov eax, 0x2e
// 007837b3  5b                   pop ebx
// 007837b4  83c450               add esp, 0x50
// 007837b7  c3                   ret 
// 007837b8  55                   push ebp
// 007837b9  e8a2f0ffff           call 0x782860
// 007837be  83c404               add esp, 4
// 007837c1  5f                   pop edi
// 007837c2  5e                   pop esi
// 007837c3  5d                   pop ebp
// 007837c4  b81c010000           mov eax, 0x11c
// 007837c9  5b                   pop ebx
// 007837ca  83c450               add esp, 0x50
// 007837cd  c3                   ret 
// 007837ce  5f                   pop edi
// 007837cf  5e                   pop esi
// 007837d0  5d                   pop ebp
// 007837d1  b81f010000           mov eax, 0x11f
// 007837d6  5b                   pop ebx
// 007837d7  83c450               add esp, 0x50
// 007837da  c3                   ret 
// 007837db  8b16                 mov edx, dword ptr [esi]
// 007837dd  52                   push edx
// 007837de  ff15eca79e00         call dword ptr [0x9ea7ec]
// 007837e4  83c404               add esp, 4
// 007837e7  85c0                 test eax, eax
// 007837e9  75cd                 jne 0x7837b8
// 007837eb  8b06                 mov eax, dword ptr [esi]
// 007837ed  50                   push eax
// 007837ee  ff15f0a79e00         call dword ptr [0x9ea7f0]
// 007837f4  83c404               add esp, 4
// 007837f7  85c0                 test eax, eax
// 007837f9  7546                 jne 0x783841
// 007837fb  8b3e                 mov edi, dword ptr [esi]
// 007837fd  83ff5f               cmp edi, 0x5f
// 00783800  743f                 je 0x783841
// 00783802  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783805  8b08                 mov ecx, dword ptr [eax]
// 00783807  8d51ff               lea edx, [ecx - 1]
// 0078380a  8910                 mov dword ptr [eax], edx
// 0078380c  3bcb                 cmp ecx, ebx
// 0078380e  7619                 jbe 0x783829
// 00783810  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783813  8b5104               mov edx, dword ptr [ecx + 4]
// 00783816  0fb602               movzx eax, byte ptr [edx]
// 00783819  42                   inc edx
// 0078381a  895104               mov dword ptr [ecx + 4], edx
// 0078381d  8906                 mov dword ptr [esi], eax
// 0078381f  8bc7                 mov eax, edi
// 00783821  5f                   pop edi
// 00783822  5e                   pop esi
// 00783823  5d                   pop ebp
// 00783824  5b                   pop ebx
// 00783825  83c450               add esp, 0x50
// 00783828  c3                   ret 
// 00783829  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078382c  50                   push eax
// 0078382d  e8eeaaffff           call 0x77e320
// 00783832  83c404               add esp, 4
// 00783835  8906                 mov dword ptr [esi], eax
// 00783837  8bc7                 mov eax, edi
// 00783839  5f                   pop edi
// 0078383a  5e                   pop esi
// 0078383b  5d                   pop ebp
// 0078383c  5b                   pop ebx
// 0078383d  83c450               add esp, 0x50
// 00783840  c3                   ret 
// 00783841  8b3d00a99e00         mov edi, dword ptr [0x9ea900]
// 00783847  8b0e                 mov ecx, dword ptr [esi]
// 00783849  51                   push ecx
// 0078384a  8bde                 mov ebx, esi
// 0078384c  e87febffff           call 0x7823d0
// 00783851  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783854  8b08                 mov ecx, dword ptr [eax]
// 00783856  83c404               add esp, 4
// 00783859  8d51ff               lea edx, [ecx - 1]
// 0078385c  8910                 mov dword ptr [eax], edx
// 0078385e  85c9                 test ecx, ecx
// 00783860  760f                 jbe 0x783871
// 00783862  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00783865  8b5104               mov edx, dword ptr [ecx + 4]
// 00783868  0fb602               movzx eax, byte ptr [edx]
// 0078386b  42                   inc edx
// 0078386c  895104               mov dword ptr [ecx + 4], edx
// 0078386f  eb0c                 jmp 0x78387d
// 00783871  8b4638               mov eax, dword ptr [esi + 0x38]
// 00783874  50                   push eax
// 00783875  e8a6aaffff           call 0x77e320
// 0078387a  83c404               add esp, 4
// 0078387d  50                   push eax
// 0078387e  8906                 mov dword ptr [esi], eax
// 00783880  ffd7                 call edi
// 00783882  83c404               add esp, 4
// 00783885  85c0                 test eax, eax
// 00783887  75be                 jne 0x783847
// 00783889  833e5f               cmp dword ptr [esi], 0x5f
// 0078388c  74b9                 je 0x783847
// 0078388e  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00783891  8b4804               mov ecx, dword ptr [eax + 4]
// 00783894  8b10                 mov edx, dword ptr [eax]
// 00783896  51                   push ecx
// 00783897  52                   push edx
// 00783898  56                   push esi
// 00783899  e812edffff           call 0x7825b0
// 0078389e  8a4806               mov cl, byte ptr [eax + 6]
// 007838a1  83c40c               add esp, 0xc
// 007838a4  84c9                 test cl, cl
// 007838a6  7610                 jbe 0x7838b8
// 007838a8  5f                   pop edi
// 007838a9  5e                   pop esi
// 007838aa  0fb6c1               movzx eax, cl
// 007838ad  5d                   pop ebp
// 007838ae  0500010000           add eax, 0x100
// 007838b3  5b                   pop ebx
// 007838b4  83c450               add esp, 0x50
// 007838b7  c3                   ret 
// 007838b8  5f                   pop edi
// 007838b9  5e                   pop esi
// 007838ba  894500               mov dword ptr [ebp], eax
// 007838bd  5d                   pop ebp
// 007838be  b81d010000           mov eax, 0x11d
// 007838c3  5b                   pop ebx
// 007838c4  83c450               add esp, 0x50
// 007838c7  c3                   ret 
// 007838c8  ce                   into 
// 007838c9  37                   aaa 
// 007838ca  7800                 js 0x7838cc
// 007838cc  0c33                 or al, 0x33
// 007838ce  7800                 js 0x7838d0
// 007838d0  e336                 jecxz 0x783908
// 007838d2  7800                 js 0x7838d4
// 007838d4  1333                 adc esi, dword ptr [ebx]
// 007838d6  7800                 js 0x7838d8
// copied from an identical function in another client (function _llex)

// roc-cl: 30729
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1-dll llex.c
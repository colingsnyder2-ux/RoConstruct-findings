// roc 2009-12 008d4fe0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d4fe0
//
// 008d4fe0  83ec20               sub esp, 0x20
// 008d4fe3  53                   push ebx
// 008d4fe4  55                   push ebp
// 008d4fe5  56                   push esi
// 008d4fe6  57                   push edi
// 008d4fe7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008d4feb  8bf1                 mov esi, ecx
// 008d4fed  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d4ff1  8b16                 mov edx, dword ptr [esi]
// 008d4ff3  8b5208               mov edx, dword ptr [edx + 8]
// 008d4ff6  57                   push edi
// 008d4ff7  83ec10               sub esp, 0x10
// 008d4ffa  8bc4                 mov eax, esp
// 008d4ffc  8908                 mov dword ptr [eax], ecx
// 008d4ffe  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008d5002  894804               mov dword ptr [eax + 4], ecx
// 008d5005  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d5009  894808               mov dword ptr [eax + 8], ecx
// 008d500c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008d5010  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5013  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d5017  50                   push eax
// 008d5018  8bce                 mov ecx, esi
// 008d501a  ffd2                 call edx
// 008d501c  8b07                 mov eax, dword ptr [edi]
// 008d501e  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d5021  8bcf                 mov ecx, edi
// 008d5023  33db                 xor ebx, ebx
// 008d5025  33ed                 xor ebp, ebp
// 008d5027  ffd2                 call edx
// 008d5029  50                   push eax
// 008d502a  83ec10               sub esp, 0x10
// 008d502d  8bc4                 mov eax, esp
// 008d502f  8918                 mov dword ptr [eax], ebx
// 008d5031  896804               mov dword ptr [eax + 4], ebp
// 008d5034  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008d5038  33c9                 xor ecx, ecx
// 008d503a  894808               mov dword ptr [eax + 8], ecx
// 008d503d  b901000000           mov ecx, 1
// 008d5042  55                   push ebp
// 008d5043  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5046  e865eeffff           call 0x8d3eb0
// 008d504b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d504e  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d5054  8b5d00               mov ebx, dword ptr [ebp]
// 008d5057  8b11                 mov edx, dword ptr [ecx]
// 008d5059  83c418               add esp, 0x18
// 008d505c  57                   push edi
// 008d505d  83ec10               sub esp, 0x10
// 008d5060  8bc4                 mov eax, esp
// 008d5062  8918                 mov dword ptr [eax], ebx
// 008d5064  8b5d04               mov ebx, dword ptr [ebp + 4]
// 008d5067  895804               mov dword ptr [eax + 4], ebx
// 008d506a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 008d506d  895808               mov dword ptr [eax + 8], ebx
// 008d5070  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 008d5073  89580c               mov dword ptr [eax + 0xc], ebx
// 008d5076  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008d507a  8b420c               mov eax, dword ptr [edx + 0xc]
// 008d507d  53                   push ebx
// 008d507e  ffd0                 call eax
// 008d5080  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d5084  8b16                 mov edx, dword ptr [esi]
// 008d5086  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d5089  57                   push edi
// 008d508a  83ec10               sub esp, 0x10
// 008d508d  8bc4                 mov eax, esp
// 008d508f  8908                 mov dword ptr [eax], ecx
// 008d5091  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008d5095  894804               mov dword ptr [eax + 4], ecx
// 008d5098  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008d509c  894808               mov dword ptr [eax + 8], ecx
// 008d509f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008d50a3  89480c               mov dword ptr [eax + 0xc], ecx
// 008d50a6  8d442424             lea eax, [esp + 0x24]
// 008d50aa  50                   push eax
// 008d50ab  8bce                 mov ecx, esi
// 008d50ad  ffd2                 call edx
// 008d50af  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d50b2  83783800             cmp dword ptr [eax + 0x38], 0
// 008d50b6  0f8526010000         jne 0x8d51e2
// 008d50bc  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008d50c2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d50c6  8b11                 mov edx, dword ptr [ecx]
// 008d50c8  57                   push edi
// 008d50c9  83ec10               sub esp, 0x10
// 008d50cc  8bc4                 mov eax, esp
// 008d50ce  8928                 mov dword ptr [eax], ebp
// 008d50d0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008d50d4  896804               mov dword ptr [eax + 4], ebp
// 008d50d7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008d50db  896808               mov dword ptr [eax + 8], ebp
// 008d50de  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008d50e2  89680c               mov dword ptr [eax + 0xc], ebp
// 008d50e5  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d50e8  53                   push ebx
// 008d50e9  ffd0                 call eax
// 008d50eb  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d50ee  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d50f4  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008d50fa  83f9ff               cmp ecx, -1
// 008d50fd  7506                 jne 0x8d5105
// 008d50ff  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 008d5105  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 008d510b  83faff               cmp edx, -1
// 008d510e  7506                 jne 0x8d5116
// 008d5110  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 008d5116  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d511a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d511e  89442424             mov dword ptr [esp + 0x24], eax
// 008d5122  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d5126  89442428             mov dword ptr [esp + 0x28], eax
// 008d512a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d512e  896c2420             mov dword ptr [esp + 0x20], ebp
// 008d5132  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d5136  83faff               cmp edx, -1
// 008d5139  741b                 je 0x8d5156
// 008d513b  83f9ff               cmp ecx, -1
// 008d513e  7416                 je 0x8d5156
// 008d5140  51                   push ecx
// 008d5141  52                   push edx
// 008d5142  8d4c2428             lea ecx, [esp + 0x28]
// 008d5146  51                   push ecx
// 008d5147  8bcb                 mov ecx, ebx
// 008d5149  e8aaf4f1ff           call 0x7f45f8
// 008d514e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d5152  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d5156  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008d5159  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008d515f  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 008d5165  81c12c010000         add ecx, 0x12c
// 008d516b  83faff               cmp edx, -1
// 008d516e  7505                 jne 0x8d5175
// 008d5170  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d5173  eb02                 jmp 0x8d5177
// 008d5175  8bca                 mov ecx, edx
// 008d5177  83f9ff               cmp ecx, -1
// 008d517a  741e                 je 0x8d519a
// 008d517c  51                   push ecx
// 008d517d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d5181  2bcd                 sub ecx, ebp
// 008d5183  6a01                 push 1
// 008d5185  83e902               sub ecx, 2
// 008d5188  51                   push ecx
// 008d5189  83c0fe               add eax, -2
// 008d518c  50                   push eax
// 008d518d  45                   inc ebp
// 008d518e  55                   push ebp
// 008d518f  8bcb                 mov ecx, ebx
// 008d5191  e800130500           call 0x926496
// 008d5196  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d519a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008d519d  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008d51a3  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 008d51a9  81c12c010000         add ecx, 0x12c
// 008d51af  83faff               cmp edx, -1
// 008d51b2  7505                 jne 0x8d51b9
// 008d51b4  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d51b7  eb02                 jmp 0x8d51bb
// 008d51b9  8bca                 mov ecx, edx
// 008d51bb  83f9ff               cmp ecx, -1
// 008d51be  741e                 je 0x8d51de
// 008d51c0  51                   push ecx
// 008d51c1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d51c5  2bc1                 sub eax, ecx
// 008d51c7  83e802               sub eax, 2
// 008d51ca  50                   push eax
// 008d51cb  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d51cf  6a01                 push 1
// 008d51d1  41                   inc ecx
// 008d51d2  51                   push ecx
// 008d51d3  83c0fe               add eax, -2
// 008d51d6  50                   push eax
// 008d51d7  8bcb                 mov ecx, ebx
// 008d51d9  e8b8120500           call 0x926496
// 008d51de  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008d51e2  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d51e5  83793801             cmp dword ptr [ecx + 0x38], 1
// 008d51e9  0f8590010000         jne 0x8d537f
// 008d51ef  8b17                 mov edx, dword ptr [edi]
// 008d51f1  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d51f4  8bcf                 mov ecx, edi
// 008d51f6  ffd0                 call eax
// 008d51f8  83f803               cmp eax, 3
// 008d51fb  0f877e010000         ja 0x8d537f
// 008d5201  ff24858c538d00       jmp dword ptr [eax*4 + 0x8d538c]
// 008d5208  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d520b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008d5211  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008d5217  0520010000           add eax, 0x120
// 008d521c  83f9ff               cmp ecx, -1
// 008d521f  7505                 jne 0x8d5226
// 008d5221  8b4004               mov eax, dword ptr [eax + 4]
// 008d5224  eb02                 jmp 0x8d5228
// 008d5226  8bc1                 mov eax, ecx
// 008d5228  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d522c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d5230  50                   push eax
// 008d5231  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d5235  2bd0                 sub edx, eax
// 008d5237  52                   push edx
// 008d5238  51                   push ecx
// 008d5239  50                   push eax
// 008d523a  53                   push ebx
// 008d523b  e830ecffff           call 0x8d3e70
// 008d5240  83c414               add esp, 0x14
// 008d5243  8bc5                 mov eax, ebp
// 008d5245  5f                   pop edi
// 008d5246  5e                   pop esi
// 008d5247  5d                   pop ebp
// 008d5248  5b                   pop ebx
// 008d5249  83c420               add esp, 0x20
// 008d524c  c21c00               ret 0x1c
// 008d524f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008d5252  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008d5258  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008d525e  0520010000           add eax, 0x120
// 008d5263  83f9ff               cmp ecx, -1
// 008d5266  750c                 jne 0x8d5274
// 008d5268  8b4004               mov eax, dword ptr [eax + 4]
// 008d526b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d526f  e9f4000000           jmp 0x8d5368
// 008d5274  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d5278  8bc1                 mov eax, ecx
// 008d527a  e9e9000000           jmp 0x8d5368
// 008d527f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d5282  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d5288  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008d528e  0538010000           add eax, 0x138
// 008d5293  83f9ff               cmp ecx, -1
// 008d5296  7505                 jne 0x8d529d
// 008d5298  8b4004               mov eax, dword ptr [eax + 4]
// 008d529b  eb02                 jmp 0x8d529f
// 008d529d  8bc1                 mov eax, ecx
// 008d529f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d52a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d52a7  50                   push eax
// 008d52a8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d52ac  2bc8                 sub ecx, eax
// 008d52ae  51                   push ecx
// 008d52af  4a                   dec edx
// 008d52b0  52                   push edx
// 008d52b1  50                   push eax
// 008d52b2  53                   push ebx
// 008d52b3  e8b8ebffff           call 0x8d3e70
// 008d52b8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d52bb  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d52c1  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008d52c7  052c010000           add eax, 0x12c
// 008d52cc  83c414               add esp, 0x14
// 008d52cf  83f9ff               cmp ecx, -1
// 008d52d2  7505                 jne 0x8d52d9
// 008d52d4  8b4004               mov eax, dword ptr [eax + 4]
// 008d52d7  eb02                 jmp 0x8d52db
// 008d52d9  8bc1                 mov eax, ecx
// 008d52db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d52df  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008d52e3  50                   push eax
// 008d52e4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d52e8  2bc8                 sub ecx, eax
// 008d52ea  51                   push ecx
// 008d52eb  83c2fe               add edx, -2
// 008d52ee  52                   push edx
// 008d52ef  50                   push eax
// 008d52f0  53                   push ebx
// 008d52f1  e87aebffff           call 0x8d3e70
// 008d52f6  83c414               add esp, 0x14
// 008d52f9  8bc5                 mov eax, ebp
// 008d52fb  5f                   pop edi
// 008d52fc  5e                   pop esi
// 008d52fd  5d                   pop ebp
// 008d52fe  5b                   pop ebx
// 008d52ff  83c420               add esp, 0x20
// 008d5302  c21c00               ret 0x1c
// 008d5305  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d5308  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d530e  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008d5314  0538010000           add eax, 0x138
// 008d5319  83f9ff               cmp ecx, -1
// 008d531c  7505                 jne 0x8d5323
// 008d531e  8b4004               mov eax, dword ptr [eax + 4]
// 008d5321  eb02                 jmp 0x8d5325
// 008d5323  8bc1                 mov eax, ecx
// 008d5325  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d5329  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d532d  50                   push eax
// 008d532e  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d5332  2bc8                 sub ecx, eax
// 008d5334  51                   push ecx
// 008d5335  50                   push eax
// 008d5336  4a                   dec edx
// 008d5337  52                   push edx
// 008d5338  53                   push ebx
// 008d5339  e802ebffff           call 0x8d3e40
// 008d533e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008d5341  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d5347  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008d534d  052c010000           add eax, 0x12c
// 008d5352  83c414               add esp, 0x14
// 008d5355  83f9ff               cmp ecx, -1
// 008d5358  7505                 jne 0x8d535f
// 008d535a  8b4004               mov eax, dword ptr [eax + 4]
// 008d535d  eb02                 jmp 0x8d5361
// 008d535f  8bc1                 mov eax, ecx
// 008d5361  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d5365  83c2fe               add edx, -2
// 008d5368  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d536c  50                   push eax
// 008d536d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d5371  2bc8                 sub ecx, eax
// 008d5373  51                   push ecx
// 008d5374  50                   push eax
// 008d5375  52                   push edx
// 008d5376  53                   push ebx
// 008d5377  e8c4eaffff           call 0x8d3e40
// 008d537c  83c414               add esp, 0x14
// 008d537f  5f                   pop edi
// 008d5380  5e                   pop esi
// 008d5381  8bc5                 mov eax, ebp
// 008d5383  5d                   pop ebp
// 008d5384  5b                   pop ebx
// 008d5385  83c420               add esp, 0x20
// 008d5388  c21c00               ret 0x1c
// 008d538b  90                   nop 
// 008d538c  08528d               or byte ptr [edx - 0x73], dl
// 008d538f  004f52               add byte ptr [edi + 0x52], cl
// 008d5392  8d00                 lea eax, [eax]
// 008d5394  7f52                 jg 0x8d53e8
// 008d5396  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?FillTabControl@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp
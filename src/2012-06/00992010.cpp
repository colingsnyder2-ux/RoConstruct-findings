// roc 2012-06 00992010  unit: CPatchedControlComboBox  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00992010
//
// 00992010  6aff                 push -1
// 00992012  6841c8ad00           push 0xadc841
// 00992017  64a100000000         mov eax, dword ptr fs:[0]
// 0099201d  50                   push eax
// 0099201e  83ec30               sub esp, 0x30
// 00992021  53                   push ebx
// 00992022  55                   push ebp
// 00992023  56                   push esi
// 00992024  57                   push edi
// 00992025  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0099202a  33c4                 xor eax, esp
// 0099202c  50                   push eax
// 0099202d  8d442444             lea eax, [esp + 0x44]
// 00992031  64a300000000         mov dword ptr fs:[0], eax
// 00992037  8bd9                 mov ebx, ecx
// 00992039  895c2418             mov dword ptr [esp + 0x18], ebx
// 0099203d  8d4c2414             lea ecx, [esp + 0x14]
// 00992041  ff158447b200         call dword ptr [0xb24784]
// 00992047  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0099204b  8b7508               mov esi, dword ptr [ebp + 8]
// 0099204e  8bcb                 mov ecx, ebx
// 00992050  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00992058  e843ddffff           call 0x98fda0
// 0099205d  8b10                 mov edx, dword ptr [eax]
// 0099205f  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 00992065  8d4c2414             lea ecx, [esp + 0x14]
// 00992069  51                   push ecx
// 0099206a  56                   push esi
// 0099206b  8bc8                 mov ecx, eax
// 0099206d  ffd2                 call edx
// 0099206f  8d451c               lea eax, [ebp + 0x1c]
// 00992072  50                   push eax
// 00992073  8d4c2428             lea ecx, [esp + 0x28]
// 00992077  51                   push ecx
// 00992078  ff15ec3ab200         call dword ptr [0xb23aec]
// 0099207e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00992081  52                   push edx
// 00992082  e8eb741000           call 0xa99572
// 00992087  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0099208a  8bcb                 mov ecx, ebx
// 0099208c  8bf8                 mov edi, eax
// 0099208e  83e601               and esi, 1
// 00992091  e85a29ffff           call 0x9849f0
// 00992096  6a05                 push 5
// 00992098  6a02                 push 2
// 0099209a  6a00                 push 0
// 0099209c  6a00                 push 0
// 0099209e  8bd8                 mov ebx, eax
// 009920a0  8b07                 mov eax, dword ptr [edi]
// 009920a2  8b13                 mov edx, dword ptr [ebx]
// 009920a4  6a01                 push 1
// 009920a6  6a00                 push 0
// 009920a8  8944246c             mov dword ptr [esp + 0x6c], eax
// 009920ac  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 009920b2  56                   push esi
// 009920b3  8bcb                 mov ecx, ebx
// 009920b5  ffd0                 call eax
// 009920b7  8b542454             mov edx, dword ptr [esp + 0x54]
// 009920bb  50                   push eax
// 009920bc  8b4238               mov eax, dword ptr [edx + 0x38]
// 009920bf  8bcf                 mov ecx, edi
// 009920c1  ffd0                 call eax
// 009920c3  89442420             mov dword ptr [esp + 0x20], eax
// 009920c7  6a05                 push 5
// 009920c9  85f6                 test esi, esi
// 009920cb  743b                 je 0x992108
// 009920cd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009920d1  8b13                 mov edx, dword ptr [ebx]
// 009920d3  6a02                 push 2
// 009920d5  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 009920db  6a00                 push 0
// 009920dd  6a00                 push 0
// 009920df  6a01                 push 1
// 009920e1  6a00                 push 0
// 009920e3  6a01                 push 1
// 009920e5  83ec10               sub esp, 0x10
// 009920e8  8bc4                 mov eax, esp
// 009920ea  8908                 mov dword ptr [eax], ecx
// 009920ec  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 009920f0  894804               mov dword ptr [eax + 4], ecx
// 009920f3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009920f7  894808               mov dword ptr [eax + 8], ecx
// 009920fa  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009920fe  89480c               mov dword ptr [eax + 0xc], ecx
// 00992101  57                   push edi
// 00992102  8bcb                 mov ecx, ebx
// 00992104  ffd2                 call edx
// 00992106  eb14                 jmp 0x99211c
// 00992108  8bcb                 mov ecx, ebx
// 0099210a  e88157ffff           call 0x987890
// 0099210f  50                   push eax
// 00992110  8d442428             lea eax, [esp + 0x28]
// 00992114  50                   push eax
// 00992115  8bcf                 mov ecx, edi
// 00992117  e8900dffff           call 0x982eac
// 0099211c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00992120  e8cbfeffff           call 0x991ff0
// 00992125  89442454             mov dword ptr [esp + 0x54], eax
// 00992129  83f8ff               cmp eax, -1
// 0099212c  0f84a0000000         je 0x9921d2
// 00992132  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00992136  8b11                 mov edx, dword ptr [ecx]
// 00992138  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0099213e  ffd0                 call eax
// 00992140  8bc8                 mov ecx, eax
// 00992142  e8e90c0000           call 0x992e30
// 00992147  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0099214a  034c2454             add ecx, dword ptr [esp + 0x54]
// 0099214e  6a00                 push 0
// 00992150  51                   push ecx
// 00992151  8bc8                 mov ecx, eax
// 00992153  e868bf0000           call 0x99e0c0
// 00992158  8be8                 mov ebp, eax
// 0099215a  85ed                 test ebp, ebp
// 0099215c  7474                 je 0x9921d2
// 0099215e  83ec08               sub esp, 8
// 00992161  8bc4                 mov eax, esp
// 00992163  8bcd                 mov ecx, ebp
// 00992165  8964245c             mov dword ptr [esp + 0x5c], esp
// 00992169  c70000000000         mov dword ptr [eax], 0
// 0099216f  c7400400000000       mov dword ptr [eax + 4], 0
// 00992176  e8a5580000           call 0x997a20
// 0099217b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0099217f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00992183  03d1                 add edx, ecx
// 00992185  2bd0                 sub edx, eax
// 00992187  8bc2                 mov eax, edx
// 00992189  99                   cdq 
// 0099218a  2bc2                 sub eax, edx
// 0099218c  d1f8                 sar eax, 1
// 0099218e  8944245c             mov dword ptr [esp + 0x5c], eax
// 00992192  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00992196  83c002               add eax, 2
// 00992199  f7de                 neg esi
// 0099219b  1bf6                 sbb esi, esi
// 0099219d  83e602               and esi, 2
// 009921a0  56                   push esi
// 009921a1  8bcd                 mov ecx, ebp
// 009921a3  89442424             mov dword ptr [esp + 0x24], eax
// 009921a7  e844c50000           call 0x99e6f0
// 009921ac  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009921b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 009921b4  50                   push eax
// 009921b5  51                   push ecx
// 009921b6  52                   push edx
// 009921b7  57                   push edi
// 009921b8  8bcd                 mov ecx, ebp
// 009921ba  e8e1ce0000           call 0x99f0a0
// 009921bf  8bcd                 mov ecx, ebp
// 009921c1  e89a940900           call 0xa2b660
// 009921c6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009921ca  8d540102             lea edx, [ecx + eax + 2]
// 009921ce  89542424             mov dword ptr [esp + 0x24], edx
// 009921d2  81c3a4000000         add ebx, 0xa4
// 009921d8  53                   push ebx
// 009921d9  57                   push edi
// 009921da  8d4c243c             lea ecx, [esp + 0x3c]
// 009921de  e84d330400           call 0x9d5530
// 009921e3  6a01                 push 1
// 009921e5  8bcf                 mov ecx, edi
// 009921e7  c644245001           mov byte ptr [esp + 0x50], 1
// 009921ec  e8b7731000           call 0xa995a8
// 009921f1  8344242403           add dword ptr [esp + 0x24], 3
// 009921f6  8b37                 mov esi, dword ptr [edi]
// 009921f8  6824080000           push 0x824
// 009921fd  8d442428             lea eax, [esp + 0x28]
// 00992201  50                   push eax
// 00992202  8d4c241c             lea ecx, [esp + 0x1c]
// 00992206  ff155846b200         call dword ptr [0xb24658]
// 0099220c  50                   push eax
// 0099220d  8d4c2420             lea ecx, [esp + 0x20]
// 00992211  ff159847b200         call dword ptr [0xb24798]
// 00992217  8b5670               mov edx, dword ptr [esi + 0x70]
// 0099221a  50                   push eax
// 0099221b  8bcf                 mov ecx, edi
// 0099221d  ffd2                 call edx
// 0099221f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00992223  8b07                 mov eax, dword ptr [edi]
// 00992225  8b5038               mov edx, dword ptr [eax + 0x38]
// 00992228  51                   push ecx
// 00992229  8bcf                 mov ecx, edi
// 0099222b  ffd2                 call edx
// 0099222d  8d4c2434             lea ecx, [esp + 0x34]
// 00992231  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00992236  e875330400           call 0x9d55b0
// 0099223b  8d4c2414             lea ecx, [esp + 0x14]
// 0099223f  ff15d047b200         call dword ptr [0xb247d0]
// 00992245  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00992249  64890d00000000       mov dword ptr fs:[0], ecx
// 00992250  59                   pop ecx
// 00992251  5f                   pop edi
// 00992252  5e                   pop esi
// 00992253  5d                   pop ebp
// 00992254  5b                   pop ebx
// 00992255  83c43c               add esp, 0x3c
// 00992258  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPControlComboBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp
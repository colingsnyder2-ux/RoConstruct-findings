// roc 2011-06 008da0d0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008da0d0
//
// 008da0d0  83ec20               sub esp, 0x20
// 008da0d3  53                   push ebx
// 008da0d4  55                   push ebp
// 008da0d5  56                   push esi
// 008da0d6  57                   push edi
// 008da0d7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008da0db  8bf1                 mov esi, ecx
// 008da0dd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008da0e1  8b16                 mov edx, dword ptr [esi]
// 008da0e3  8b5208               mov edx, dword ptr [edx + 8]
// 008da0e6  57                   push edi
// 008da0e7  83ec10               sub esp, 0x10
// 008da0ea  8bc4                 mov eax, esp
// 008da0ec  8908                 mov dword ptr [eax], ecx
// 008da0ee  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008da0f2  894804               mov dword ptr [eax + 4], ecx
// 008da0f5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008da0f9  894808               mov dword ptr [eax + 8], ecx
// 008da0fc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008da100  89480c               mov dword ptr [eax + 0xc], ecx
// 008da103  8b442448             mov eax, dword ptr [esp + 0x48]
// 008da107  50                   push eax
// 008da108  8bce                 mov ecx, esi
// 008da10a  ffd2                 call edx
// 008da10c  8b07                 mov eax, dword ptr [edi]
// 008da10e  8b5048               mov edx, dword ptr [eax + 0x48]
// 008da111  8bcf                 mov ecx, edi
// 008da113  33db                 xor ebx, ebx
// 008da115  33ed                 xor ebp, ebp
// 008da117  ffd2                 call edx
// 008da119  50                   push eax
// 008da11a  83ec10               sub esp, 0x10
// 008da11d  8bc4                 mov eax, esp
// 008da11f  8918                 mov dword ptr [eax], ebx
// 008da121  896804               mov dword ptr [eax + 4], ebp
// 008da124  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008da128  33c9                 xor ecx, ecx
// 008da12a  894808               mov dword ptr [eax + 8], ecx
// 008da12d  b901000000           mov ecx, 1
// 008da132  55                   push ebp
// 008da133  89480c               mov dword ptr [eax + 0xc], ecx
// 008da136  e865eeffff           call 0x8d8fa0
// 008da13b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008da13e  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008da144  8b5d00               mov ebx, dword ptr [ebp]
// 008da147  8b11                 mov edx, dword ptr [ecx]
// 008da149  83c418               add esp, 0x18
// 008da14c  57                   push edi
// 008da14d  83ec10               sub esp, 0x10
// 008da150  8bc4                 mov eax, esp
// 008da152  8918                 mov dword ptr [eax], ebx
// 008da154  8b5d04               mov ebx, dword ptr [ebp + 4]
// 008da157  895804               mov dword ptr [eax + 4], ebx
// 008da15a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 008da15d  895808               mov dword ptr [eax + 8], ebx
// 008da160  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 008da163  89580c               mov dword ptr [eax + 0xc], ebx
// 008da166  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008da16a  8b420c               mov eax, dword ptr [edx + 0xc]
// 008da16d  53                   push ebx
// 008da16e  ffd0                 call eax
// 008da170  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008da174  8b16                 mov edx, dword ptr [esi]
// 008da176  8b520c               mov edx, dword ptr [edx + 0xc]
// 008da179  57                   push edi
// 008da17a  83ec10               sub esp, 0x10
// 008da17d  8bc4                 mov eax, esp
// 008da17f  8908                 mov dword ptr [eax], ecx
// 008da181  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008da185  894804               mov dword ptr [eax + 4], ecx
// 008da188  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008da18c  894808               mov dword ptr [eax + 8], ecx
// 008da18f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008da193  89480c               mov dword ptr [eax + 0xc], ecx
// 008da196  8d442424             lea eax, [esp + 0x24]
// 008da19a  50                   push eax
// 008da19b  8bce                 mov ecx, esi
// 008da19d  ffd2                 call edx
// 008da19f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008da1a2  83783800             cmp dword ptr [eax + 0x38], 0
// 008da1a6  0f8526010000         jne 0x8da2d2
// 008da1ac  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008da1b2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008da1b6  8b11                 mov edx, dword ptr [ecx]
// 008da1b8  57                   push edi
// 008da1b9  83ec10               sub esp, 0x10
// 008da1bc  8bc4                 mov eax, esp
// 008da1be  8928                 mov dword ptr [eax], ebp
// 008da1c0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008da1c4  896804               mov dword ptr [eax + 4], ebp
// 008da1c7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008da1cb  896808               mov dword ptr [eax + 8], ebp
// 008da1ce  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008da1d2  89680c               mov dword ptr [eax + 0xc], ebp
// 008da1d5  8b4210               mov eax, dword ptr [edx + 0x10]
// 008da1d8  53                   push ebx
// 008da1d9  ffd0                 call eax
// 008da1db  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008da1de  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008da1e4  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008da1ea  83f9ff               cmp ecx, -1
// 008da1ed  7506                 jne 0x8da1f5
// 008da1ef  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 008da1f5  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 008da1fb  83faff               cmp edx, -1
// 008da1fe  7506                 jne 0x8da206
// 008da200  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 008da206  8b442414             mov eax, dword ptr [esp + 0x14]
// 008da20a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008da20e  89442424             mov dword ptr [esp + 0x24], eax
// 008da212  8b442418             mov eax, dword ptr [esp + 0x18]
// 008da216  89442428             mov dword ptr [esp + 0x28], eax
// 008da21a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da21e  896c2420             mov dword ptr [esp + 0x20], ebp
// 008da222  8944242c             mov dword ptr [esp + 0x2c], eax
// 008da226  83faff               cmp edx, -1
// 008da229  741b                 je 0x8da246
// 008da22b  83f9ff               cmp ecx, -1
// 008da22e  7416                 je 0x8da246
// 008da230  51                   push ecx
// 008da231  52                   push edx
// 008da232  8d4c2428             lea ecx, [esp + 0x28]
// 008da236  51                   push ecx
// 008da237  8bcb                 mov ecx, ebx
// 008da239  e8dc0bf3ff           call 0x80ae1a
// 008da23e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da242  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008da246  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008da249  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008da24f  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 008da255  81c12c010000         add ecx, 0x12c
// 008da25b  83faff               cmp edx, -1
// 008da25e  7505                 jne 0x8da265
// 008da260  8b4904               mov ecx, dword ptr [ecx + 4]
// 008da263  eb02                 jmp 0x8da267
// 008da265  8bca                 mov ecx, edx
// 008da267  83f9ff               cmp ecx, -1
// 008da26a  741e                 je 0x8da28a
// 008da26c  51                   push ecx
// 008da26d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da271  2bcd                 sub ecx, ebp
// 008da273  6a01                 push 1
// 008da275  83e902               sub ecx, 2
// 008da278  51                   push ecx
// 008da279  83c0fe               add eax, -2
// 008da27c  50                   push eax
// 008da27d  45                   inc ebp
// 008da27e  55                   push ebp
// 008da27f  8bcb                 mov ecx, ebx
// 008da281  e850230f00           call 0x9cc5d6
// 008da286  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da28a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008da28d  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008da293  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 008da299  81c12c010000         add ecx, 0x12c
// 008da29f  83faff               cmp edx, -1
// 008da2a2  7505                 jne 0x8da2a9
// 008da2a4  8b4904               mov ecx, dword ptr [ecx + 4]
// 008da2a7  eb02                 jmp 0x8da2ab
// 008da2a9  8bca                 mov ecx, edx
// 008da2ab  83f9ff               cmp ecx, -1
// 008da2ae  741e                 je 0x8da2ce
// 008da2b0  51                   push ecx
// 008da2b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008da2b5  2bc1                 sub eax, ecx
// 008da2b7  83e802               sub eax, 2
// 008da2ba  50                   push eax
// 008da2bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da2bf  6a01                 push 1
// 008da2c1  41                   inc ecx
// 008da2c2  51                   push ecx
// 008da2c3  83c0fe               add eax, -2
// 008da2c6  50                   push eax
// 008da2c7  8bcb                 mov ecx, ebx
// 008da2c9  e808230f00           call 0x9cc5d6
// 008da2ce  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008da2d2  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008da2d5  83793801             cmp dword ptr [ecx + 0x38], 1
// 008da2d9  0f8590010000         jne 0x8da46f
// 008da2df  8b17                 mov edx, dword ptr [edi]
// 008da2e1  8b4248               mov eax, dword ptr [edx + 0x48]
// 008da2e4  8bcf                 mov ecx, edi
// 008da2e6  ffd0                 call eax
// 008da2e8  83f803               cmp eax, 3
// 008da2eb  0f877e010000         ja 0x8da46f
// 008da2f1  ff24857ca48d00       jmp dword ptr [eax*4 + 0x8da47c]
// 008da2f8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008da2fb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008da301  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008da307  0520010000           add eax, 0x120
// 008da30c  83f9ff               cmp ecx, -1
// 008da30f  7505                 jne 0x8da316
// 008da311  8b4004               mov eax, dword ptr [eax + 4]
// 008da314  eb02                 jmp 0x8da318
// 008da316  8bc1                 mov eax, ecx
// 008da318  8b542418             mov edx, dword ptr [esp + 0x18]
// 008da31c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008da320  50                   push eax
// 008da321  8b442414             mov eax, dword ptr [esp + 0x14]
// 008da325  2bd0                 sub edx, eax
// 008da327  52                   push edx
// 008da328  51                   push ecx
// 008da329  50                   push eax
// 008da32a  53                   push ebx
// 008da32b  e830ecffff           call 0x8d8f60
// 008da330  83c414               add esp, 0x14
// 008da333  8bc5                 mov eax, ebp
// 008da335  5f                   pop edi
// 008da336  5e                   pop esi
// 008da337  5d                   pop ebp
// 008da338  5b                   pop ebx
// 008da339  83c420               add esp, 0x20
// 008da33c  c21c00               ret 0x1c
// 008da33f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008da342  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 008da348  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008da34e  0520010000           add eax, 0x120
// 008da353  83f9ff               cmp ecx, -1
// 008da356  750c                 jne 0x8da364
// 008da358  8b4004               mov eax, dword ptr [eax + 4]
// 008da35b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008da35f  e9f4000000           jmp 0x8da458
// 008da364  8b542410             mov edx, dword ptr [esp + 0x10]
// 008da368  8bc1                 mov eax, ecx
// 008da36a  e9e9000000           jmp 0x8da458
// 008da36f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008da372  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008da378  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008da37e  0538010000           add eax, 0x138
// 008da383  83f9ff               cmp ecx, -1
// 008da386  7505                 jne 0x8da38d
// 008da388  8b4004               mov eax, dword ptr [eax + 4]
// 008da38b  eb02                 jmp 0x8da38f
// 008da38d  8bc1                 mov eax, ecx
// 008da38f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008da393  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da397  50                   push eax
// 008da398  8b442414             mov eax, dword ptr [esp + 0x14]
// 008da39c  2bc8                 sub ecx, eax
// 008da39e  51                   push ecx
// 008da39f  4a                   dec edx
// 008da3a0  52                   push edx
// 008da3a1  50                   push eax
// 008da3a2  53                   push ebx
// 008da3a3  e8b8ebffff           call 0x8d8f60
// 008da3a8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008da3ab  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008da3b1  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008da3b7  052c010000           add eax, 0x12c
// 008da3bc  83c414               add esp, 0x14
// 008da3bf  83f9ff               cmp ecx, -1
// 008da3c2  7505                 jne 0x8da3c9
// 008da3c4  8b4004               mov eax, dword ptr [eax + 4]
// 008da3c7  eb02                 jmp 0x8da3cb
// 008da3c9  8bc1                 mov eax, ecx
// 008da3cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008da3cf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da3d3  50                   push eax
// 008da3d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 008da3d8  2bc8                 sub ecx, eax
// 008da3da  51                   push ecx
// 008da3db  83c2fe               add edx, -2
// 008da3de  52                   push edx
// 008da3df  50                   push eax
// 008da3e0  53                   push ebx
// 008da3e1  e87aebffff           call 0x8d8f60
// 008da3e6  83c414               add esp, 0x14
// 008da3e9  8bc5                 mov eax, ebp
// 008da3eb  5f                   pop edi
// 008da3ec  5e                   pop esi
// 008da3ed  5d                   pop ebp
// 008da3ee  5b                   pop ebx
// 008da3ef  83c420               add esp, 0x20
// 008da3f2  c21c00               ret 0x1c
// 008da3f5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008da3f8  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008da3fe  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008da404  0538010000           add eax, 0x138
// 008da409  83f9ff               cmp ecx, -1
// 008da40c  7505                 jne 0x8da413
// 008da40e  8b4004               mov eax, dword ptr [eax + 4]
// 008da411  eb02                 jmp 0x8da415
// 008da413  8bc1                 mov eax, ecx
// 008da415  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da419  8b542418             mov edx, dword ptr [esp + 0x18]
// 008da41d  50                   push eax
// 008da41e  8b442418             mov eax, dword ptr [esp + 0x18]
// 008da422  2bc8                 sub ecx, eax
// 008da424  51                   push ecx
// 008da425  50                   push eax
// 008da426  4a                   dec edx
// 008da427  52                   push edx
// 008da428  53                   push ebx
// 008da429  e802ebffff           call 0x8d8f30
// 008da42e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008da431  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008da437  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008da43d  052c010000           add eax, 0x12c
// 008da442  83c414               add esp, 0x14
// 008da445  83f9ff               cmp ecx, -1
// 008da448  7505                 jne 0x8da44f
// 008da44a  8b4004               mov eax, dword ptr [eax + 4]
// 008da44d  eb02                 jmp 0x8da451
// 008da44f  8bc1                 mov eax, ecx
// 008da451  8b542418             mov edx, dword ptr [esp + 0x18]
// 008da455  83c2fe               add edx, -2
// 008da458  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da45c  50                   push eax
// 008da45d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008da461  2bc8                 sub ecx, eax
// 008da463  51                   push ecx
// 008da464  50                   push eax
// 008da465  52                   push edx
// 008da466  53                   push ebx
// 008da467  e8c4eaffff           call 0x8d8f30
// 008da46c  83c414               add esp, 0x14
// 008da46f  5f                   pop edi
// 008da470  5e                   pop esi
// 008da471  8bc5                 mov eax, ebp
// 008da473  5d                   pop ebp
// 008da474  5b                   pop ebx
// 008da475  83c420               add esp, 0x20
// 008da478  c21c00               ret 0x1c
// 008da47b  90                   nop 
// 008da47c  f8                   clc 
// 008da47d  a28d003fa3           mov byte ptr [0xa33f008d], al
// 008da482  8d00                 lea eax, [eax]
// 008da484  6f                   outsd dx, dword ptr [esi]
// 008da485  a38d00f5a3           mov dword ptr [0xa3f5008d], eax
// 008da48a  8d00                 lea eax, [eax]
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

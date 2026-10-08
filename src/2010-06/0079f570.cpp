// from server: 100% by auto
// roc 2010-06 0079f570  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079f570
//
// 0079f570  53                   push ebx
// 0079f571  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0079f575  85f6                 test esi, esi
// 0079f577  0f84cc000000         je 0x79f649
// 0079f57d  57                   push edi
// 0079f57e  8b3da4a89e00         mov edi, dword ptr [0x9ea8a4]
// 0079f584  53                   push ebx
// 0079f585  683403a000           push 0xa00334
// 0079f58a  56                   push esi
// 0079f58b  ffd7                 call edi
// 0079f58d  83c40c               add esp, 0xc
// 0079f590  85c0                 test eax, eax
// 0079f592  7508                 jne 0x79f59c
// 0079f594  5f                   pop edi
// 0079f595  b800000080           mov eax, 0x80000000
// 0079f59a  5b                   pop ebx
// 0079f59b  c3                   ret 
// 0079f59c  53                   push ebx
// 0079f59d  68a403a000           push 0xa003a4
// 0079f5a2  56                   push esi
// 0079f5a3  ffd7                 call edi
// 0079f5a5  83c40c               add esp, 0xc
// 0079f5a8  85c0                 test eax, eax
// 0079f5aa  7508                 jne 0x79f5b4
// 0079f5ac  5f                   pop edi
// 0079f5ad  b805000080           mov eax, 0x80000005
// 0079f5b2  5b                   pop ebx
// 0079f5b3  c3                   ret 
// 0079f5b4  53                   push ebx
// 0079f5b5  684803a000           push 0xa00348
// 0079f5ba  56                   push esi
// 0079f5bb  ffd7                 call edi
// 0079f5bd  83c40c               add esp, 0xc
// 0079f5c0  85c0                 test eax, eax
// 0079f5c2  7508                 jne 0x79f5cc
// 0079f5c4  5f                   pop edi
// 0079f5c5  b801000080           mov eax, 0x80000001
// 0079f5ca  5b                   pop ebx
// 0079f5cb  c3                   ret 
// 0079f5cc  53                   push ebx
// 0079f5cd  685c03a000           push 0xa0035c
// 0079f5d2  56                   push esi
// 0079f5d3  ffd7                 call edi
// 0079f5d5  83c40c               add esp, 0xc
// 0079f5d8  85c0                 test eax, eax
// 0079f5da  7508                 jne 0x79f5e4
// 0079f5dc  5f                   pop edi
// 0079f5dd  b802000080           mov eax, 0x80000002
// 0079f5e2  5b                   pop ebx
// 0079f5e3  c3                   ret 
// 0079f5e4  53                   push ebx
// 0079f5e5  687c03a000           push 0xa0037c
// 0079f5ea  56                   push esi
// 0079f5eb  ffd7                 call edi
// 0079f5ed  83c40c               add esp, 0xc
// 0079f5f0  85c0                 test eax, eax
// 0079f5f2  7508                 jne 0x79f5fc
// 0079f5f4  5f                   pop edi
// 0079f5f5  b804000080           mov eax, 0x80000004
// 0079f5fa  5b                   pop ebx
// 0079f5fb  c3                   ret 
// 0079f5fc  53                   push ebx
// 0079f5fd  686c46a500           push 0xa5466c
// 0079f602  56                   push esi
// 0079f603  ffd7                 call edi
// 0079f605  83c40c               add esp, 0xc
// 0079f608  85c0                 test eax, eax
// 0079f60a  7508                 jne 0x79f614
// 0079f60c  5f                   pop edi
// 0079f60d  b860000080           mov eax, 0x80000060
// 0079f612  5b                   pop ebx
// 0079f613  c3                   ret 
// 0079f614  53                   push ebx
// 0079f615  685446a500           push 0xa54654
// 0079f61a  56                   push esi
// 0079f61b  ffd7                 call edi
// 0079f61d  83c40c               add esp, 0xc
// 0079f620  85c0                 test eax, eax
// 0079f622  7508                 jne 0x79f62c
// 0079f624  5f                   pop edi
// 0079f625  b850000080           mov eax, 0x80000050
// 0079f62a  5b                   pop ebx
// 0079f62b  c3                   ret 
// 0079f62c  53                   push ebx
// 0079f62d  683403a000           push 0xa00334
// 0079f632  56                   push esi
// 0079f633  ffd7                 call edi
// 0079f635  83c40c               add esp, 0xc
// 0079f638  f7d8                 neg eax
// 0079f63a  1bc0                 sbb eax, eax
// 0079f63c  2500000080           and eax, 0x80000000
// 0079f641  5f                   pop edi
// 0079f642  0500000080           add eax, 0x80000000
// 0079f647  5b                   pop ebx
// 0079f648  c3                   ret 
// 0079f649  33c0                 xor eax, eax
// 0079f64b  5b                   pop ebx
// 0079f64c  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp

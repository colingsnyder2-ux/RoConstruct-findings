// from server: 100% by auto
// roc 2007-08 0060f8f0  unit: RBX::Ball  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f8f0
//
// 0060f8f0  56                   push esi
// 0060f8f1  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0060f8f4  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060f8f7  8bc1                 mov eax, ecx
// 0060f8f9  99                   cdq 
// 0060f8fa  83e203               and edx, 3
// 0060f8fd  03c2                 add eax, edx
// 0060f8ff  c1f802               sar eax, 2
// 0060f902  394604               cmp dword ptr [esi + 4], eax
// 0060f905  7316                 jae 0x60f91d
// 0060f907  83f940               cmp ecx, 0x40
// 0060f90a  7e11                 jle 0x60f91d
// 0060f90c  8bc1                 mov eax, ecx
// 0060f90e  99                   cdq 
// 0060f90f  2bc2                 sub eax, edx
// 0060f911  d1f8                 sar eax, 1
// 0060f913  50                   push eax
// 0060f914  53                   push ebx
// 0060f915  e8f6320000           call 0x612c10
// 0060f91a  83c408               add esp, 8
// 0060f91d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0060f920  83f840               cmp eax, 0x40
// 0060f923  7635                 jbe 0x60f95a
// 0060f925  57                   push edi
// 0060f926  8bf8                 mov edi, eax
// 0060f928  d1ef                 shr edi, 1
// 0060f92a  8d4f01               lea ecx, [edi + 1]
// 0060f92d  83f9fd               cmp ecx, -3
// 0060f930  7718                 ja 0x60f94a
// 0060f932  8b5634               mov edx, dword ptr [esi + 0x34]
// 0060f935  57                   push edi
// 0060f936  50                   push eax
// 0060f937  52                   push edx
// 0060f938  53                   push ebx
// 0060f939  e8b2400000           call 0x6139f0
// 0060f93e  83c410               add esp, 0x10
// 0060f941  897e3c               mov dword ptr [esi + 0x3c], edi
// 0060f944  5f                   pop edi
// 0060f945  894634               mov dword ptr [esi + 0x34], eax
// 0060f948  5e                   pop esi
// 0060f949  c3                   ret 
// 0060f94a  53                   push ebx
// 0060f94b  e880400000           call 0x6139d0
// 0060f950  83c404               add esp, 4
// 0060f953  897e3c               mov dword ptr [esi + 0x3c], edi
// 0060f956  894634               mov dword ptr [esi + 0x34], eax
// 0060f959  5f                   pop edi
// 0060f95a  5e                   pop esi
// 0060f95b  c3                   ret 
// library lua-5.1.4/lgc.c (function _checkSizes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

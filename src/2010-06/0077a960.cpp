// from server: 100% by auto
// roc 2010-06 0077a960  unit: RBX::PartDropTool  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a960
//
// 0077a960  56                   push esi
// 0077a961  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0077a964  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077a967  8bc1                 mov eax, ecx
// 0077a969  99                   cdq 
// 0077a96a  83e203               and edx, 3
// 0077a96d  03c2                 add eax, edx
// 0077a96f  c1f802               sar eax, 2
// 0077a972  394604               cmp dword ptr [esi + 4], eax
// 0077a975  7316                 jae 0x77a98d
// 0077a977  83f940               cmp ecx, 0x40
// 0077a97a  7e11                 jle 0x77a98d
// 0077a97c  8bc1                 mov eax, ecx
// 0077a97e  99                   cdq 
// 0077a97f  2bc2                 sub eax, edx
// 0077a981  d1f8                 sar eax, 1
// 0077a983  50                   push eax
// 0077a984  53                   push ebx
// 0077a985  e8f6320000           call 0x77dc80
// 0077a98a  83c408               add esp, 8
// 0077a98d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0077a990  83f840               cmp eax, 0x40
// 0077a993  7635                 jbe 0x77a9ca
// 0077a995  57                   push edi
// 0077a996  8bf8                 mov edi, eax
// 0077a998  d1ef                 shr edi, 1
// 0077a99a  8d4f01               lea ecx, [edi + 1]
// 0077a99d  83f9fd               cmp ecx, -3
// 0077a9a0  7718                 ja 0x77a9ba
// 0077a9a2  8b5634               mov edx, dword ptr [esi + 0x34]
// 0077a9a5  57                   push edi
// 0077a9a6  50                   push eax
// 0077a9a7  52                   push edx
// 0077a9a8  53                   push ebx
// 0077a9a9  e852400000           call 0x77ea00
// 0077a9ae  83c410               add esp, 0x10
// 0077a9b1  897e3c               mov dword ptr [esi + 0x3c], edi
// 0077a9b4  5f                   pop edi
// 0077a9b5  894634               mov dword ptr [esi + 0x34], eax
// 0077a9b8  5e                   pop esi
// 0077a9b9  c3                   ret 
// 0077a9ba  53                   push ebx
// 0077a9bb  e820400000           call 0x77e9e0
// 0077a9c0  83c404               add esp, 4
// 0077a9c3  897e3c               mov dword ptr [esi + 0x3c], edi
// 0077a9c6  894634               mov dword ptr [esi + 0x34], eax
// 0077a9c9  5f                   pop edi
// 0077a9ca  5e                   pop esi
// 0077a9cb  c3                   ret 
// library lua-5.1.4/lgc.c (function _checkSizes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

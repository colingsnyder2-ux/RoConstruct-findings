// roc 2009-06 006e96c0  unit: RBX::PartDropTool  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e96c0
//
// 006e96c0  56                   push esi
// 006e96c1  8b7310               mov esi, dword ptr [ebx + 0x10]
// 006e96c4  8b4e08               mov ecx, dword ptr [esi + 8]
// 006e96c7  8bc1                 mov eax, ecx
// 006e96c9  99                   cdq 
// 006e96ca  83e203               and edx, 3
// 006e96cd  03c2                 add eax, edx
// 006e96cf  c1f802               sar eax, 2
// 006e96d2  394604               cmp dword ptr [esi + 4], eax
// 006e96d5  7316                 jae 0x6e96ed
// 006e96d7  83f940               cmp ecx, 0x40
// 006e96da  7e11                 jle 0x6e96ed
// 006e96dc  8bc1                 mov eax, ecx
// 006e96de  99                   cdq 
// 006e96df  2bc2                 sub eax, edx
// 006e96e1  d1f8                 sar eax, 1
// 006e96e3  50                   push eax
// 006e96e4  53                   push ebx
// 006e96e5  e8f6320000           call 0x6ec9e0
// 006e96ea  83c408               add esp, 8
// 006e96ed  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006e96f0  83f840               cmp eax, 0x40
// 006e96f3  7635                 jbe 0x6e972a
// 006e96f5  57                   push edi
// 006e96f6  8bf8                 mov edi, eax
// 006e96f8  d1ef                 shr edi, 1
// 006e96fa  8d4f01               lea ecx, [edi + 1]
// 006e96fd  83f9fd               cmp ecx, -3
// 006e9700  7718                 ja 0x6e971a
// 006e9702  8b5634               mov edx, dword ptr [esi + 0x34]
// 006e9705  57                   push edi
// 006e9706  50                   push eax
// 006e9707  52                   push edx
// 006e9708  53                   push ebx
// 006e9709  e852400000           call 0x6ed760
// 006e970e  83c410               add esp, 0x10
// 006e9711  897e3c               mov dword ptr [esi + 0x3c], edi
// 006e9714  5f                   pop edi
// 006e9715  894634               mov dword ptr [esi + 0x34], eax
// 006e9718  5e                   pop esi
// 006e9719  c3                   ret 
// 006e971a  53                   push ebx
// 006e971b  e820400000           call 0x6ed740
// 006e9720  83c404               add esp, 4
// 006e9723  897e3c               mov dword ptr [esi + 0x3c], edi
// 006e9726  894634               mov dword ptr [esi + 0x34], eax
// 006e9729  5f                   pop edi
// 006e972a  5e                   pop esi
// 006e972b  c3                   ret 
// library lua-5.1.4/lgc.c (function _checkSizes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

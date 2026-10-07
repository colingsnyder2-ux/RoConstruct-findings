// roc 2009-06 006e9fe0  unit: RBX::PartDropTool  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9fe0
//
// 006e9fe0  53                   push ebx
// 006e9fe1  55                   push ebp
// 006e9fe2  56                   push esi
// 006e9fe3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e9fe7  2b4620               sub eax, dword ptr [esi + 0x20]
// 006e9fea  57                   push edi
// 006e9feb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006e9fef  8b2f                 mov ebp, dword ptr [edi]
// 006e9ff1  8bd8                 mov ebx, eax
// 006e9ff3  8b4608               mov eax, dword ptr [esi + 8]
// 006e9ff6  8928                 mov dword ptr [eax], ebp
// 006e9ff8  8b6f04               mov ebp, dword ptr [edi + 4]
// 006e9ffb  896804               mov dword ptr [eax + 4], ebp
// 006e9ffe  8b7f08               mov edi, dword ptr [edi + 8]
// 006ea001  897808               mov dword ptr [eax + 8], edi
// 006ea004  8b3a                 mov edi, dword ptr [edx]
// 006ea006  8b4608               mov eax, dword ptr [esi + 8]
// 006ea009  897810               mov dword ptr [eax + 0x10], edi
// 006ea00c  8b7a04               mov edi, dword ptr [edx + 4]
// 006ea00f  83c010               add eax, 0x10
// 006ea012  897804               mov dword ptr [eax + 4], edi
// 006ea015  8b5208               mov edx, dword ptr [edx + 8]
// 006ea018  895008               mov dword ptr [eax + 8], edx
// 006ea01b  8b4608               mov eax, dword ptr [esi + 8]
// 006ea01e  8b11                 mov edx, dword ptr [ecx]
// 006ea020  83c020               add eax, 0x20
// 006ea023  8910                 mov dword ptr [eax], edx
// 006ea025  8b5104               mov edx, dword ptr [ecx + 4]
// 006ea028  895004               mov dword ptr [eax + 4], edx
// 006ea02b  8b4908               mov ecx, dword ptr [ecx + 8]
// 006ea02e  894808               mov dword ptr [eax + 8], ecx
// 006ea031  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006ea034  2b5608               sub edx, dword ptr [esi + 8]
// 006ea037  83fa30               cmp edx, 0x30
// 006ea03a  7f0b                 jg 0x6ea047
// 006ea03c  6a03                 push 3
// 006ea03e  56                   push esi
// 006ea03f  e87c8dfdff           call 0x6c2dc0
// 006ea044  83c408               add esp, 8
// 006ea047  83460830             add dword ptr [esi + 8], 0x30
// 006ea04b  8b4608               mov eax, dword ptr [esi + 8]
// 006ea04e  6a01                 push 1
// 006ea050  83c0d0               add eax, -0x30
// 006ea053  50                   push eax
// 006ea054  56                   push esi
// 006ea055  e83695fdff           call 0x6c3590
// 006ea05a  834608f0             add dword ptr [esi + 8], -0x10
// 006ea05e  8b4608               mov eax, dword ptr [esi + 8]
// 006ea061  8b7620               mov esi, dword ptr [esi + 0x20]
// 006ea064  8b08                 mov ecx, dword ptr [eax]
// 006ea066  03f3                 add esi, ebx
// 006ea068  890e                 mov dword ptr [esi], ecx
// 006ea06a  8b5004               mov edx, dword ptr [eax + 4]
// 006ea06d  83c40c               add esp, 0xc
// 006ea070  895604               mov dword ptr [esi + 4], edx
// 006ea073  8b4008               mov eax, dword ptr [eax + 8]
// 006ea076  5f                   pop edi
// 006ea077  894608               mov dword ptr [esi + 8], eax
// 006ea07a  5e                   pop esi
// 006ea07b  5d                   pop ebp
// 006ea07c  5b                   pop ebx
// 006ea07d  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTMres)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c

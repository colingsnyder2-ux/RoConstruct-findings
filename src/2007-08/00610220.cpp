// roc 2007-08 00610220  unit: RBX::Ball  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610220
//
// 00610220  53                   push ebx
// 00610221  55                   push ebp
// 00610222  56                   push esi
// 00610223  8b742410             mov esi, dword ptr [esp + 0x10]
// 00610227  2b4620               sub eax, dword ptr [esi + 0x20]
// 0061022a  57                   push edi
// 0061022b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0061022f  8b2f                 mov ebp, dword ptr [edi]
// 00610231  8bd8                 mov ebx, eax
// 00610233  8b4608               mov eax, dword ptr [esi + 8]
// 00610236  8928                 mov dword ptr [eax], ebp
// 00610238  8b6f04               mov ebp, dword ptr [edi + 4]
// 0061023b  896804               mov dword ptr [eax + 4], ebp
// 0061023e  8b7f08               mov edi, dword ptr [edi + 8]
// 00610241  897808               mov dword ptr [eax + 8], edi
// 00610244  8b3a                 mov edi, dword ptr [edx]
// 00610246  8b4608               mov eax, dword ptr [esi + 8]
// 00610249  897810               mov dword ptr [eax + 0x10], edi
// 0061024c  8b7a04               mov edi, dword ptr [edx + 4]
// 0061024f  83c010               add eax, 0x10
// 00610252  897804               mov dword ptr [eax + 4], edi
// 00610255  8b5208               mov edx, dword ptr [edx + 8]
// 00610258  895008               mov dword ptr [eax + 8], edx
// 0061025b  8b4608               mov eax, dword ptr [esi + 8]
// 0061025e  8b11                 mov edx, dword ptr [ecx]
// 00610260  83c020               add eax, 0x20
// 00610263  8910                 mov dword ptr [eax], edx
// 00610265  8b5104               mov edx, dword ptr [ecx + 4]
// 00610268  895004               mov dword ptr [eax + 4], edx
// 0061026b  8b4908               mov ecx, dword ptr [ecx + 8]
// 0061026e  894808               mov dword ptr [eax + 8], ecx
// 00610271  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00610274  2b5608               sub edx, dword ptr [esi + 8]
// 00610277  83fa30               cmp edx, 0x30
// 0061027a  7f0b                 jg 0x610287
// 0061027c  6a03                 push 3
// 0061027e  56                   push esi
// 0061027f  e88c58fbff           call 0x5c5b10
// 00610284  83c408               add esp, 8
// 00610287  83460830             add dword ptr [esi + 8], 0x30
// 0061028b  8b4608               mov eax, dword ptr [esi + 8]
// 0061028e  6a01                 push 1
// 00610290  83c0d0               add eax, -0x30
// 00610293  50                   push eax
// 00610294  56                   push esi
// 00610295  e83660fbff           call 0x5c62d0
// 0061029a  834608f0             add dword ptr [esi + 8], -0x10
// 0061029e  8b4608               mov eax, dword ptr [esi + 8]
// 006102a1  8b7620               mov esi, dword ptr [esi + 0x20]
// 006102a4  8b08                 mov ecx, dword ptr [eax]
// 006102a6  03f3                 add esi, ebx
// 006102a8  890e                 mov dword ptr [esi], ecx
// 006102aa  8b5004               mov edx, dword ptr [eax + 4]
// 006102ad  83c40c               add esp, 0xc
// 006102b0  895604               mov dword ptr [esi + 4], edx
// 006102b3  8b4008               mov eax, dword ptr [eax + 8]
// 006102b6  5f                   pop edi
// 006102b7  894608               mov dword ptr [esi + 8], eax
// 006102ba  5e                   pop esi
// 006102bb  5d                   pop ebp
// 006102bc  5b                   pop ebx
// 006102bd  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTMres)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c

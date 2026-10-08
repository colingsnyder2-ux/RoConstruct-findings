// from server: 100% by auto
// roc 2010-06 0077b280  unit: RBX::PartDropTool  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b280
//
// 0077b280  53                   push ebx
// 0077b281  55                   push ebp
// 0077b282  56                   push esi
// 0077b283  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077b287  2b4620               sub eax, dword ptr [esi + 0x20]
// 0077b28a  57                   push edi
// 0077b28b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077b28f  8b2f                 mov ebp, dword ptr [edi]
// 0077b291  8bd8                 mov ebx, eax
// 0077b293  8b4608               mov eax, dword ptr [esi + 8]
// 0077b296  8928                 mov dword ptr [eax], ebp
// 0077b298  8b6f04               mov ebp, dword ptr [edi + 4]
// 0077b29b  896804               mov dword ptr [eax + 4], ebp
// 0077b29e  8b7f08               mov edi, dword ptr [edi + 8]
// 0077b2a1  897808               mov dword ptr [eax + 8], edi
// 0077b2a4  8b3a                 mov edi, dword ptr [edx]
// 0077b2a6  8b4608               mov eax, dword ptr [esi + 8]
// 0077b2a9  897810               mov dword ptr [eax + 0x10], edi
// 0077b2ac  8b7a04               mov edi, dword ptr [edx + 4]
// 0077b2af  83c010               add eax, 0x10
// 0077b2b2  897804               mov dword ptr [eax + 4], edi
// 0077b2b5  8b5208               mov edx, dword ptr [edx + 8]
// 0077b2b8  895008               mov dword ptr [eax + 8], edx
// 0077b2bb  8b4608               mov eax, dword ptr [esi + 8]
// 0077b2be  8b11                 mov edx, dword ptr [ecx]
// 0077b2c0  83c020               add eax, 0x20
// 0077b2c3  8910                 mov dword ptr [eax], edx
// 0077b2c5  8b5104               mov edx, dword ptr [ecx + 4]
// 0077b2c8  895004               mov dword ptr [eax + 4], edx
// 0077b2cb  8b4908               mov ecx, dword ptr [ecx + 8]
// 0077b2ce  894808               mov dword ptr [eax + 8], ecx
// 0077b2d1  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0077b2d4  2b5608               sub edx, dword ptr [esi + 8]
// 0077b2d7  83fa30               cmp edx, 0x30
// 0077b2da  7f0b                 jg 0x77b2e7
// 0077b2dc  6a03                 push 3
// 0077b2de  56                   push esi
// 0077b2df  e8ac48fbff           call 0x72fb90
// 0077b2e4  83c408               add esp, 8
// 0077b2e7  83460830             add dword ptr [esi + 8], 0x30
// 0077b2eb  8b4608               mov eax, dword ptr [esi + 8]
// 0077b2ee  6a01                 push 1
// 0077b2f0  83c0d0               add eax, -0x30
// 0077b2f3  50                   push eax
// 0077b2f4  56                   push esi
// 0077b2f5  e86650fbff           call 0x730360
// 0077b2fa  834608f0             add dword ptr [esi + 8], -0x10
// 0077b2fe  8b4608               mov eax, dword ptr [esi + 8]
// 0077b301  8b7620               mov esi, dword ptr [esi + 0x20]
// 0077b304  8b08                 mov ecx, dword ptr [eax]
// 0077b306  03f3                 add esi, ebx
// 0077b308  890e                 mov dword ptr [esi], ecx
// 0077b30a  8b5004               mov edx, dword ptr [eax + 4]
// 0077b30d  83c40c               add esp, 0xc
// 0077b310  895604               mov dword ptr [esi + 4], edx
// 0077b313  8b4008               mov eax, dword ptr [eax + 8]
// 0077b316  5f                   pop edi
// 0077b317  894608               mov dword ptr [esi + 8], eax
// 0077b31a  5e                   pop esi
// 0077b31b  5d                   pop ebp
// 0077b31c  5b                   pop ebx
// 0077b31d  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTMres)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c

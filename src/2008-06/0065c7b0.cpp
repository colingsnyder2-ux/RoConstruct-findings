// from server: 100% by auto
// roc 2008-06 0065c7b0  unit: RBX::BallBallContact  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c7b0
//
// 0065c7b0  53                   push ebx
// 0065c7b1  55                   push ebp
// 0065c7b2  56                   push esi
// 0065c7b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065c7b7  2b4620               sub eax, dword ptr [esi + 0x20]
// 0065c7ba  57                   push edi
// 0065c7bb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0065c7bf  8b2f                 mov ebp, dword ptr [edi]
// 0065c7c1  8bd8                 mov ebx, eax
// 0065c7c3  8b4608               mov eax, dword ptr [esi + 8]
// 0065c7c6  8928                 mov dword ptr [eax], ebp
// 0065c7c8  8b6f04               mov ebp, dword ptr [edi + 4]
// 0065c7cb  896804               mov dword ptr [eax + 4], ebp
// 0065c7ce  8b7f08               mov edi, dword ptr [edi + 8]
// 0065c7d1  897808               mov dword ptr [eax + 8], edi
// 0065c7d4  8b3a                 mov edi, dword ptr [edx]
// 0065c7d6  8b4608               mov eax, dword ptr [esi + 8]
// 0065c7d9  897810               mov dword ptr [eax + 0x10], edi
// 0065c7dc  8b7a04               mov edi, dword ptr [edx + 4]
// 0065c7df  83c010               add eax, 0x10
// 0065c7e2  897804               mov dword ptr [eax + 4], edi
// 0065c7e5  8b5208               mov edx, dword ptr [edx + 8]
// 0065c7e8  895008               mov dword ptr [eax + 8], edx
// 0065c7eb  8b4608               mov eax, dword ptr [esi + 8]
// 0065c7ee  8b11                 mov edx, dword ptr [ecx]
// 0065c7f0  83c020               add eax, 0x20
// 0065c7f3  8910                 mov dword ptr [eax], edx
// 0065c7f5  8b5104               mov edx, dword ptr [ecx + 4]
// 0065c7f8  895004               mov dword ptr [eax + 4], edx
// 0065c7fb  8b4908               mov ecx, dword ptr [ecx + 8]
// 0065c7fe  894808               mov dword ptr [eax + 8], ecx
// 0065c801  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0065c804  2b5608               sub edx, dword ptr [esi + 8]
// 0065c807  83fa30               cmp edx, 0x30
// 0065c80a  7f0b                 jg 0x65c817
// 0065c80c  6a03                 push 3
// 0065c80e  56                   push esi
// 0065c80f  e83c53fcff           call 0x621b50
// 0065c814  83c408               add esp, 8
// 0065c817  83460830             add dword ptr [esi + 8], 0x30
// 0065c81b  8b4608               mov eax, dword ptr [esi + 8]
// 0065c81e  6a01                 push 1
// 0065c820  83c0d0               add eax, -0x30
// 0065c823  50                   push eax
// 0065c824  56                   push esi
// 0065c825  e8d65afcff           call 0x622300
// 0065c82a  834608f0             add dword ptr [esi + 8], -0x10
// 0065c82e  8b4608               mov eax, dword ptr [esi + 8]
// 0065c831  8b7620               mov esi, dword ptr [esi + 0x20]
// 0065c834  8b08                 mov ecx, dword ptr [eax]
// 0065c836  03f3                 add esi, ebx
// 0065c838  890e                 mov dword ptr [esi], ecx
// 0065c83a  8b5004               mov edx, dword ptr [eax + 4]
// 0065c83d  83c40c               add esp, 0xc
// 0065c840  895604               mov dword ptr [esi + 4], edx
// 0065c843  8b4008               mov eax, dword ptr [eax + 8]
// 0065c846  5f                   pop edi
// 0065c847  894608               mov dword ptr [esi + 8], eax
// 0065c84a  5e                   pop esi
// 0065c84b  5d                   pop ebp
// 0065c84c  5b                   pop ebx
// 0065c84d  c3                   ret 
// library lua-5.1.4/lvm.c (function _callTMres)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c

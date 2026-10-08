// from server: 100% by auto
// roc 2008-06 0065c390  unit: RBX::BallBallContact  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c390
//
// 0065c390  53                   push ebx
// 0065c391  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0065c395  56                   push esi
// 0065c396  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0065c399  8b4654               mov eax, dword ptr [esi + 0x54]
// 0065c39c  57                   push edi
// 0065c39d  8d3c80               lea edi, [eax + eax*4]
// 0065c3a0  03ff                 add edi, edi
// 0065c3a2  7505                 jne 0x65c3a9
// 0065c3a4  bffeffff7f           mov edi, 0x7ffffffe
// 0065c3a9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0065c3ac  2b4640               sub eax, dword ptr [esi + 0x40]
// 0065c3af  01464c               add dword ptr [esi + 0x4c], eax
// 0065c3b2  8bc3                 mov eax, ebx
// 0065c3b4  e8d7feffff           call 0x65c290
// 0065c3b9  2bf8                 sub edi, eax
// 0065c3bb  807e1500             cmp byte ptr [esi + 0x15], 0
// 0065c3bf  7436                 je 0x65c3f7
// 0065c3c1  85ff                 test edi, edi
// 0065c3c3  7fed                 jg 0x65c3b2
// 0065c3c5  807e1500             cmp byte ptr [esi + 0x15], 0
// 0065c3c9  742c                 je 0x65c3f7
// 0065c3cb  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0065c3ce  3d00040000           cmp eax, 0x400
// 0065c3d3  7310                 jae 0x65c3e5
// 0065c3d5  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0065c3d8  81c100040000         add ecx, 0x400
// 0065c3de  5f                   pop edi
// 0065c3df  894e40               mov dword ptr [esi + 0x40], ecx
// 0065c3e2  5e                   pop esi
// 0065c3e3  5b                   pop ebx
// 0065c3e4  c3                   ret 
// 0065c3e5  8b5644               mov edx, dword ptr [esi + 0x44]
// 0065c3e8  0500fcffff           add eax, 0xfffffc00
// 0065c3ed  5f                   pop edi
// 0065c3ee  89464c               mov dword ptr [esi + 0x4c], eax
// 0065c3f1  895640               mov dword ptr [esi + 0x40], edx
// 0065c3f4  5e                   pop esi
// 0065c3f5  5b                   pop ebx
// 0065c3f6  c3                   ret 
// 0065c3f7  b81f85eb51           mov eax, 0x51eb851f
// 0065c3fc  f76648               mul dword ptr [esi + 0x48]
// 0065c3ff  c1ea05               shr edx, 5
// 0065c402  0faf5650             imul edx, dword ptr [esi + 0x50]
// 0065c406  5f                   pop edi
// 0065c407  895640               mov dword ptr [esi + 0x40], edx
// 0065c40a  5e                   pop esi
// 0065c40b  5b                   pop ebx
// 0065c40c  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_step)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

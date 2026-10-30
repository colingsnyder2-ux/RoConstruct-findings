// from server: 100% by auto
// roc 2011-06 007d71a0  unit: RBX::EquationDisplay  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d71a0
//
// 007d71a0  53                   push ebx
// 007d71a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007d71a5  56                   push esi
// 007d71a6  8b7310               mov esi, dword ptr [ebx + 0x10]
// 007d71a9  8b4654               mov eax, dword ptr [esi + 0x54]
// 007d71ac  57                   push edi
// 007d71ad  8d3c80               lea edi, [eax + eax*4]
// 007d71b0  03ff                 add edi, edi
// 007d71b2  7505                 jne 0x7d71b9
// 007d71b4  bffeffff7f           mov edi, 0x7ffffffe
// 007d71b9  8b4644               mov eax, dword ptr [esi + 0x44]
// 007d71bc  2b4640               sub eax, dword ptr [esi + 0x40]
// 007d71bf  01464c               add dword ptr [esi + 0x4c], eax
// 007d71c2  8bc3                 mov eax, ebx
// 007d71c4  e8d7feffff           call 0x7d70a0
// 007d71c9  2bf8                 sub edi, eax
// 007d71cb  807e1500             cmp byte ptr [esi + 0x15], 0
// 007d71cf  7436                 je 0x7d7207
// 007d71d1  85ff                 test edi, edi
// 007d71d3  7fed                 jg 0x7d71c2
// 007d71d5  807e1500             cmp byte ptr [esi + 0x15], 0
// 007d71d9  742c                 je 0x7d7207
// 007d71db  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007d71de  3d00040000           cmp eax, 0x400
// 007d71e3  7310                 jae 0x7d71f5
// 007d71e5  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007d71e8  81c100040000         add ecx, 0x400
// 007d71ee  5f                   pop edi
// 007d71ef  894e40               mov dword ptr [esi + 0x40], ecx
// 007d71f2  5e                   pop esi
// 007d71f3  5b                   pop ebx
// 007d71f4  c3                   ret 
// 007d71f5  8b5644               mov edx, dword ptr [esi + 0x44]
// 007d71f8  0500fcffff           add eax, 0xfffffc00
// 007d71fd  5f                   pop edi
// 007d71fe  89464c               mov dword ptr [esi + 0x4c], eax
// 007d7201  895640               mov dword ptr [esi + 0x40], edx
// 007d7204  5e                   pop esi
// 007d7205  5b                   pop ebx
// 007d7206  c3                   ret 
// 007d7207  b81f85eb51           mov eax, 0x51eb851f
// 007d720c  f76648               mul dword ptr [esi + 0x48]
// 007d720f  c1ea05               shr edx, 5
// 007d7212  0faf5650             imul edx, dword ptr [esi + 0x50]
// 007d7216  5f                   pop edi
// 007d7217  895640               mov dword ptr [esi + 0x40], edx
// 007d721a  5e                   pop esi
// 007d721b  5b                   pop ebx
// 007d721c  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_step)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

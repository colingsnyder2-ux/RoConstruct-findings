// roc 2007-08 0060fe00  unit: RBX::Ball  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fe00
//
// 0060fe00  53                   push ebx
// 0060fe01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0060fe05  56                   push esi
// 0060fe06  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0060fe09  8b4654               mov eax, dword ptr [esi + 0x54]
// 0060fe0c  57                   push edi
// 0060fe0d  8d3c80               lea edi, [eax + eax*4]
// 0060fe10  03ff                 add edi, edi
// 0060fe12  7505                 jne 0x60fe19
// 0060fe14  bffeffff7f           mov edi, 0x7ffffffe
// 0060fe19  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060fe1c  2b4640               sub eax, dword ptr [esi + 0x40]
// 0060fe1f  01464c               add dword ptr [esi + 0x4c], eax
// 0060fe22  8bc3                 mov eax, ebx
// 0060fe24  e8d7feffff           call 0x60fd00
// 0060fe29  2bf8                 sub edi, eax
// 0060fe2b  807e1500             cmp byte ptr [esi + 0x15], 0
// 0060fe2f  7436                 je 0x60fe67
// 0060fe31  85ff                 test edi, edi
// 0060fe33  7fed                 jg 0x60fe22
// 0060fe35  807e1500             cmp byte ptr [esi + 0x15], 0
// 0060fe39  742c                 je 0x60fe67
// 0060fe3b  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0060fe3e  3d00040000           cmp eax, 0x400
// 0060fe43  7310                 jae 0x60fe55
// 0060fe45  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0060fe48  81c100040000         add ecx, 0x400
// 0060fe4e  5f                   pop edi
// 0060fe4f  894e40               mov dword ptr [esi + 0x40], ecx
// 0060fe52  5e                   pop esi
// 0060fe53  5b                   pop ebx
// 0060fe54  c3                   ret 
// 0060fe55  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060fe58  0500fcffff           add eax, 0xfffffc00
// 0060fe5d  5f                   pop edi
// 0060fe5e  89464c               mov dword ptr [esi + 0x4c], eax
// 0060fe61  895640               mov dword ptr [esi + 0x40], edx
// 0060fe64  5e                   pop esi
// 0060fe65  5b                   pop ebx
// 0060fe66  c3                   ret 
// 0060fe67  b81f85eb51           mov eax, 0x51eb851f
// 0060fe6c  f76648               mul dword ptr [esi + 0x48]
// 0060fe6f  c1ea05               shr edx, 5
// 0060fe72  0faf5650             imul edx, dword ptr [esi + 0x50]
// 0060fe76  5f                   pop edi
// 0060fe77  895640               mov dword ptr [esi + 0x40], edx
// 0060fe7a  5e                   pop esi
// 0060fe7b  5b                   pop ebx
// 0060fe7c  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_step)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

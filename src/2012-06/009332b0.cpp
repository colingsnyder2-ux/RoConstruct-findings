// roc 2012-06 009332b0  unit: RBX::BallCellContact  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009332b0
//
// 009332b0  53                   push ebx
// 009332b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009332b5  56                   push esi
// 009332b6  8b7310               mov esi, dword ptr [ebx + 0x10]
// 009332b9  8b4654               mov eax, dword ptr [esi + 0x54]
// 009332bc  57                   push edi
// 009332bd  8d3c80               lea edi, [eax + eax*4]
// 009332c0  03ff                 add edi, edi
// 009332c2  7505                 jne 0x9332c9
// 009332c4  bffeffff7f           mov edi, 0x7ffffffe
// 009332c9  8b4644               mov eax, dword ptr [esi + 0x44]
// 009332cc  2b4640               sub eax, dword ptr [esi + 0x40]
// 009332cf  01464c               add dword ptr [esi + 0x4c], eax
// 009332d2  8bc3                 mov eax, ebx
// 009332d4  e8d7feffff           call 0x9331b0
// 009332d9  2bf8                 sub edi, eax
// 009332db  807e1500             cmp byte ptr [esi + 0x15], 0
// 009332df  7436                 je 0x933317
// 009332e1  85ff                 test edi, edi
// 009332e3  7fed                 jg 0x9332d2
// 009332e5  807e1500             cmp byte ptr [esi + 0x15], 0
// 009332e9  742c                 je 0x933317
// 009332eb  8b464c               mov eax, dword ptr [esi + 0x4c]
// 009332ee  3d00040000           cmp eax, 0x400
// 009332f3  7310                 jae 0x933305
// 009332f5  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009332f8  81c100040000         add ecx, 0x400
// 009332fe  5f                   pop edi
// 009332ff  894e40               mov dword ptr [esi + 0x40], ecx
// 00933302  5e                   pop esi
// 00933303  5b                   pop ebx
// 00933304  c3                   ret 
// 00933305  8b5644               mov edx, dword ptr [esi + 0x44]
// 00933308  0500fcffff           add eax, 0xfffffc00
// 0093330d  5f                   pop edi
// 0093330e  89464c               mov dword ptr [esi + 0x4c], eax
// 00933311  895640               mov dword ptr [esi + 0x40], edx
// 00933314  5e                   pop esi
// 00933315  5b                   pop ebx
// 00933316  c3                   ret 
// 00933317  b81f85eb51           mov eax, 0x51eb851f
// 0093331c  f76648               mul dword ptr [esi + 0x48]
// 0093331f  c1ea05               shr edx, 5
// 00933322  0faf5650             imul edx, dword ptr [esi + 0x50]
// 00933326  5f                   pop edi
// 00933327  895640               mov dword ptr [esi + 0x40], edx
// 0093332a  5e                   pop esi
// 0093332b  5b                   pop ebx
// 0093332c  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_step)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

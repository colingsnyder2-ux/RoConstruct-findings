// roc 2009-06 006e9bc0  unit: RBX::PartDropTool  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9bc0
//
// 006e9bc0  53                   push ebx
// 006e9bc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006e9bc5  56                   push esi
// 006e9bc6  8b7310               mov esi, dword ptr [ebx + 0x10]
// 006e9bc9  8b4654               mov eax, dword ptr [esi + 0x54]
// 006e9bcc  57                   push edi
// 006e9bcd  8d3c80               lea edi, [eax + eax*4]
// 006e9bd0  03ff                 add edi, edi
// 006e9bd2  7505                 jne 0x6e9bd9
// 006e9bd4  bffeffff7f           mov edi, 0x7ffffffe
// 006e9bd9  8b4644               mov eax, dword ptr [esi + 0x44]
// 006e9bdc  2b4640               sub eax, dword ptr [esi + 0x40]
// 006e9bdf  01464c               add dword ptr [esi + 0x4c], eax
// 006e9be2  8bc3                 mov eax, ebx
// 006e9be4  e8d7feffff           call 0x6e9ac0
// 006e9be9  2bf8                 sub edi, eax
// 006e9beb  807e1500             cmp byte ptr [esi + 0x15], 0
// 006e9bef  7436                 je 0x6e9c27
// 006e9bf1  85ff                 test edi, edi
// 006e9bf3  7fed                 jg 0x6e9be2
// 006e9bf5  807e1500             cmp byte ptr [esi + 0x15], 0
// 006e9bf9  742c                 je 0x6e9c27
// 006e9bfb  8b464c               mov eax, dword ptr [esi + 0x4c]
// 006e9bfe  3d00040000           cmp eax, 0x400
// 006e9c03  7310                 jae 0x6e9c15
// 006e9c05  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006e9c08  81c100040000         add ecx, 0x400
// 006e9c0e  5f                   pop edi
// 006e9c0f  894e40               mov dword ptr [esi + 0x40], ecx
// 006e9c12  5e                   pop esi
// 006e9c13  5b                   pop ebx
// 006e9c14  c3                   ret 
// 006e9c15  8b5644               mov edx, dword ptr [esi + 0x44]
// 006e9c18  0500fcffff           add eax, 0xfffffc00
// 006e9c1d  5f                   pop edi
// 006e9c1e  89464c               mov dword ptr [esi + 0x4c], eax
// 006e9c21  895640               mov dword ptr [esi + 0x40], edx
// 006e9c24  5e                   pop esi
// 006e9c25  5b                   pop ebx
// 006e9c26  c3                   ret 
// 006e9c27  b81f85eb51           mov eax, 0x51eb851f
// 006e9c2c  f76648               mul dword ptr [esi + 0x48]
// 006e9c2f  c1ea05               shr edx, 5
// 006e9c32  0faf5650             imul edx, dword ptr [esi + 0x50]
// 006e9c36  5f                   pop edi
// 006e9c37  895640               mov dword ptr [esi + 0x40], edx
// 006e9c3a  5e                   pop esi
// 006e9c3b  5b                   pop ebx
// 006e9c3c  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_step)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c

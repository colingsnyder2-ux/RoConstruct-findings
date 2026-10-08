// roc 2007-03 00714870  unit: seg_00710000  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714870
//
// 00714870  53                   push ebx
// 00714871  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 00714874  55                   push ebp
// 00714875  56                   push esi
// 00714876  8b6f3c               mov ebp, dword ptr [edi + 0x3c]
// 00714879  2b6f74               sub ebp, dword ptr [edi + 0x74]
// 0071487c  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071487f  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00714882  8d940bfafeffff       lea edx, [ebx + ecx - 0x106]
// 00714889  2be8                 sub ebp, eax
// 0071488b  3bc2                 cmp eax, edx
// 0071488d  725f                 jb 0x7148ee
// 0071488f  8b4738               mov eax, dword ptr [edi + 0x38]
// 00714892  53                   push ebx
// 00714893  8d0c18               lea ecx, [eax + ebx]
// 00714896  51                   push ecx
// 00714897  50                   push eax
// 00714898  e845a9f0ff           call 0x61f1e2
// 0071489d  8b574c               mov edx, dword ptr [edi + 0x4c]
// 007148a0  8b4744               mov eax, dword ptr [edi + 0x44]
// 007148a3  295f70               sub dword ptr [edi + 0x70], ebx
// 007148a6  295f6c               sub dword ptr [edi + 0x6c], ebx
// 007148a9  83c40c               add esp, 0xc
// 007148ac  295f5c               sub dword ptr [edi + 0x5c], ebx
// 007148af  8d0c50               lea ecx, [eax + edx*2]
// 007148b2  0fb741fe             movzx eax, word ptr [ecx - 2]
// 007148b6  83e902               sub ecx, 2
// 007148b9  3bc3                 cmp eax, ebx
// 007148bb  7204                 jb 0x7148c1
// 007148bd  2bc3                 sub eax, ebx
// 007148bf  eb02                 jmp 0x7148c3
// 007148c1  33c0                 xor eax, eax
// 007148c3  83ea01               sub edx, 1
// 007148c6  668901               mov word ptr [ecx], ax
// 007148c9  75e7                 jne 0x7148b2
// 007148cb  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 007148ce  8bd3                 mov edx, ebx
// 007148d0  8d0c59               lea ecx, [ecx + ebx*2]
// 007148d3  0fb741fe             movzx eax, word ptr [ecx - 2]
// 007148d7  83e902               sub ecx, 2
// 007148da  3bc3                 cmp eax, ebx
// 007148dc  7204                 jb 0x7148e2
// 007148de  2bc3                 sub eax, ebx
// 007148e0  eb02                 jmp 0x7148e4
// 007148e2  33c0                 xor eax, eax
// 007148e4  83ea01               sub edx, 1
// 007148e7  668901               mov word ptr [ecx], ax
// 007148ea  75e7                 jne 0x7148d3
// 007148ec  03eb                 add ebp, ebx
// 007148ee  8b37                 mov esi, dword ptr [edi]
// 007148f0  837e0400             cmp dword ptr [esi + 4], 0
// 007148f4  7453                 je 0x714949
// 007148f6  8b5774               mov edx, dword ptr [edi + 0x74]
// 007148f9  03576c               add edx, dword ptr [edi + 0x6c]
// 007148fc  8bcd                 mov ecx, ebp
// 007148fe  035738               add edx, dword ptr [edi + 0x38]
// 00714901  52                   push edx
// 00714902  e8f9feffff           call 0x714800
// 00714907  014774               add dword ptr [edi + 0x74], eax
// 0071490a  8b5774               mov edx, dword ptr [edi + 0x74]
// 0071490d  83c404               add esp, 4
// 00714910  83fa03               cmp edx, 3
// 00714913  7220                 jb 0x714935
// 00714915  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00714918  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071491b  8d3408               lea esi, [eax + ecx]
// 0071491e  0fb606               movzx eax, byte ptr [esi]
// 00714921  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00714924  894748               mov dword ptr [edi + 0x48], eax
// 00714927  d3e0                 shl eax, cl
// 00714929  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0071492d  33c1                 xor eax, ecx
// 0071492f  234754               and eax, dword ptr [edi + 0x54]
// 00714932  894748               mov dword ptr [edi + 0x48], eax
// 00714935  81fa06010000         cmp edx, 0x106
// 0071493b  730c                 jae 0x714949
// 0071493d  8b17                 mov edx, dword ptr [edi]
// 0071493f  837a0400             cmp dword ptr [edx + 4], 0
// 00714943  0f852dffffff         jne 0x714876
// 00714949  5e                   pop esi
// 0071494a  5d                   pop ebp
// 0071494b  5b                   pop ebx
// 0071494c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _fill_window)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

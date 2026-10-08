// from server: 100% by auto
// roc 2008-06 0079fdc0  unit: CXTPDialogBar  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fdc0
//
// 0079fdc0  53                   push ebx
// 0079fdc1  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 0079fdc4  55                   push ebp
// 0079fdc5  56                   push esi
// 0079fdc6  8b6f3c               mov ebp, dword ptr [edi + 0x3c]
// 0079fdc9  2b6f74               sub ebp, dword ptr [edi + 0x74]
// 0079fdcc  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0079fdcf  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0079fdd2  8d940bfafeffff       lea edx, [ebx + ecx - 0x106]
// 0079fdd9  2be8                 sub ebp, eax
// 0079fddb  3bc2                 cmp eax, edx
// 0079fddd  725f                 jb 0x79fe3e
// 0079fddf  8b4738               mov eax, dword ptr [edi + 0x38]
// 0079fde2  53                   push ebx
// 0079fde3  8d0c18               lea ecx, [eax + ebx]
// 0079fde6  51                   push ecx
// 0079fde7  50                   push eax
// 0079fde8  e8f319f0ff           call 0x6a17e0
// 0079fded  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0079fdf0  8b4744               mov eax, dword ptr [edi + 0x44]
// 0079fdf3  295f70               sub dword ptr [edi + 0x70], ebx
// 0079fdf6  295f6c               sub dword ptr [edi + 0x6c], ebx
// 0079fdf9  83c40c               add esp, 0xc
// 0079fdfc  295f5c               sub dword ptr [edi + 0x5c], ebx
// 0079fdff  8d0c50               lea ecx, [eax + edx*2]
// 0079fe02  0fb741fe             movzx eax, word ptr [ecx - 2]
// 0079fe06  83e902               sub ecx, 2
// 0079fe09  3bc3                 cmp eax, ebx
// 0079fe0b  7204                 jb 0x79fe11
// 0079fe0d  2bc3                 sub eax, ebx
// 0079fe0f  eb02                 jmp 0x79fe13
// 0079fe11  33c0                 xor eax, eax
// 0079fe13  83ea01               sub edx, 1
// 0079fe16  668901               mov word ptr [ecx], ax
// 0079fe19  75e7                 jne 0x79fe02
// 0079fe1b  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0079fe1e  8bd3                 mov edx, ebx
// 0079fe20  8d0c59               lea ecx, [ecx + ebx*2]
// 0079fe23  0fb741fe             movzx eax, word ptr [ecx - 2]
// 0079fe27  83e902               sub ecx, 2
// 0079fe2a  3bc3                 cmp eax, ebx
// 0079fe2c  7204                 jb 0x79fe32
// 0079fe2e  2bc3                 sub eax, ebx
// 0079fe30  eb02                 jmp 0x79fe34
// 0079fe32  33c0                 xor eax, eax
// 0079fe34  83ea01               sub edx, 1
// 0079fe37  668901               mov word ptr [ecx], ax
// 0079fe3a  75e7                 jne 0x79fe23
// 0079fe3c  03eb                 add ebp, ebx
// 0079fe3e  8b37                 mov esi, dword ptr [edi]
// 0079fe40  837e0400             cmp dword ptr [esi + 4], 0
// 0079fe44  7453                 je 0x79fe99
// 0079fe46  8b5774               mov edx, dword ptr [edi + 0x74]
// 0079fe49  03576c               add edx, dword ptr [edi + 0x6c]
// 0079fe4c  8bcd                 mov ecx, ebp
// 0079fe4e  035738               add edx, dword ptr [edi + 0x38]
// 0079fe51  52                   push edx
// 0079fe52  e8f9fcffff           call 0x79fb50
// 0079fe57  014774               add dword ptr [edi + 0x74], eax
// 0079fe5a  8b5774               mov edx, dword ptr [edi + 0x74]
// 0079fe5d  83c404               add esp, 4
// 0079fe60  83fa03               cmp edx, 3
// 0079fe63  7220                 jb 0x79fe85
// 0079fe65  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0079fe68  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0079fe6b  8d3408               lea esi, [eax + ecx]
// 0079fe6e  0fb606               movzx eax, byte ptr [esi]
// 0079fe71  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0079fe74  894748               mov dword ptr [edi + 0x48], eax
// 0079fe77  d3e0                 shl eax, cl
// 0079fe79  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0079fe7d  33c1                 xor eax, ecx
// 0079fe7f  234754               and eax, dword ptr [edi + 0x54]
// 0079fe82  894748               mov dword ptr [edi + 0x48], eax
// 0079fe85  81fa06010000         cmp edx, 0x106
// 0079fe8b  730c                 jae 0x79fe99
// 0079fe8d  8b17                 mov edx, dword ptr [edi]
// 0079fe8f  837a0400             cmp dword ptr [edx + 4], 0
// 0079fe93  0f852dffffff         jne 0x79fdc6
// 0079fe99  5e                   pop esi
// 0079fe9a  5d                   pop ebp
// 0079fe9b  5b                   pop ebx
// 0079fe9c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _fill_window)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c

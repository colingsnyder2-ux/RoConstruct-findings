// roc 2007-03 00725be0  unit: seg_00720000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725be0
//
// 00725be0  8b442404             mov eax, dword ptr [esp + 4]
// 00725be4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00725bea  83f90d               cmp ecx, 0xd
// 00725bed  7e69                 jle 0x725c58
// 00725bef  53                   push ebx
// 00725bf0  56                   push esi
// 00725bf1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00725bf5  8bd6                 mov edx, esi
// 00725bf7  d3e2                 shl edx, cl
// 00725bf9  8b4808               mov ecx, dword ptr [eax + 8]
// 00725bfc  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725c03  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00725c0a  8b5014               mov edx, dword ptr [eax + 0x14]
// 00725c0d  881c11               mov byte ptr [ecx + edx], bl
// 00725c10  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00725c17  83401401             add dword ptr [eax + 0x14], 1
// 00725c1b  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00725c1e  8b5008               mov edx, dword ptr [eax + 8]
// 00725c21  881c11               mov byte ptr [ecx + edx], bl
// 00725c24  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00725c2a  83401401             add dword ptr [eax + 0x14], 1
// 00725c2e  b110                 mov cl, 0x10
// 00725c30  2aca                 sub cl, dl
// 00725c32  66d3ee               shr si, cl
// 00725c35  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00725c39  83c2f3               add edx, -0xd
// 00725c3c  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00725c42  8b542410             mov edx, dword ptr [esp + 0x10]
// 00725c46  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00725c4d  5e                   pop esi
// 00725c4e  5b                   pop ebx
// 00725c4f  6a01                 push 1
// 00725c51  e83afbffff           call 0x725790
// 00725c56  59                   pop ecx
// 00725c57  c3                   ret 
// 00725c58  8b542410             mov edx, dword ptr [esp + 0x10]
// 00725c5c  d3e2                 shl edx, cl
// 00725c5e  83c103               add ecx, 3
// 00725c61  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00725c67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00725c6b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00725c72  8b542408             mov edx, dword ptr [esp + 8]
// 00725c76  6a01                 push 1
// 00725c78  e813fbffff           call 0x725790
// 00725c7d  59                   pop ecx
// 00725c7e  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

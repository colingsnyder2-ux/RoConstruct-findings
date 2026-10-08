// roc 2009-12 0061bc80  unit: seg_00610000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061bc80
//
// 0061bc80  8b442404             mov eax, dword ptr [esp + 4]
// 0061bc84  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061bc8a  83f90d               cmp ecx, 0xd
// 0061bc8d  7e67                 jle 0x61bcf6
// 0061bc8f  53                   push ebx
// 0061bc90  56                   push esi
// 0061bc91  8b742418             mov esi, dword ptr [esp + 0x18]
// 0061bc95  8bd6                 mov edx, esi
// 0061bc97  d3e2                 shl edx, cl
// 0061bc99  8b4808               mov ecx, dword ptr [eax + 8]
// 0061bc9c  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061bca3  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061bcaa  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061bcad  881c11               mov byte ptr [ecx + edx], bl
// 0061bcb0  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061bcb7  ff4014               inc dword ptr [eax + 0x14]
// 0061bcba  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061bcbd  8b5008               mov edx, dword ptr [eax + 8]
// 0061bcc0  881c11               mov byte ptr [ecx + edx], bl
// 0061bcc3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061bcc9  ff4014               inc dword ptr [eax + 0x14]
// 0061bccc  b110                 mov cl, 0x10
// 0061bcce  2aca                 sub cl, dl
// 0061bcd0  66d3ee               shr si, cl
// 0061bcd3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061bcd7  83c2f3               add edx, -0xd
// 0061bcda  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061bce0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061bce4  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061bceb  5e                   pop esi
// 0061bcec  5b                   pop ebx
// 0061bced  6a01                 push 1
// 0061bcef  e83cfbffff           call 0x61b830
// 0061bcf4  59                   pop ecx
// 0061bcf5  c3                   ret 
// 0061bcf6  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061bcfa  d3e2                 shl edx, cl
// 0061bcfc  83c103               add ecx, 3
// 0061bcff  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061bd05  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061bd09  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061bd10  8b542408             mov edx, dword ptr [esp + 8]
// 0061bd14  6a01                 push 1
// 0061bd16  e815fbffff           call 0x61b830
// 0061bd1b  59                   pop ecx
// 0061bd1c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

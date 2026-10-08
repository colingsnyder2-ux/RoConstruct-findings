// from server: 100% by auto
// roc 2011-06 005742d0  unit: seg_00570000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005742d0
//
// 005742d0  8b442404             mov eax, dword ptr [esp + 4]
// 005742d4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 005742da  83f90d               cmp ecx, 0xd
// 005742dd  7e67                 jle 0x574346
// 005742df  53                   push ebx
// 005742e0  56                   push esi
// 005742e1  8b742418             mov esi, dword ptr [esp + 0x18]
// 005742e5  8bd6                 mov edx, esi
// 005742e7  d3e2                 shl edx, cl
// 005742e9  8b4808               mov ecx, dword ptr [eax + 8]
// 005742ec  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005742f3  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005742fa  8b5014               mov edx, dword ptr [eax + 0x14]
// 005742fd  881c11               mov byte ptr [ecx + edx], bl
// 00574300  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00574307  ff4014               inc dword ptr [eax + 0x14]
// 0057430a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057430d  8b5008               mov edx, dword ptr [eax + 8]
// 00574310  881c11               mov byte ptr [ecx + edx], bl
// 00574313  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00574319  ff4014               inc dword ptr [eax + 0x14]
// 0057431c  b110                 mov cl, 0x10
// 0057431e  2aca                 sub cl, dl
// 00574320  66d3ee               shr si, cl
// 00574323  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00574327  83c2f3               add edx, -0xd
// 0057432a  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00574330  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574334  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057433b  5e                   pop esi
// 0057433c  5b                   pop ebx
// 0057433d  6a01                 push 1
// 0057433f  e83cfbffff           call 0x573e80
// 00574344  59                   pop ecx
// 00574345  c3                   ret 
// 00574346  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057434a  d3e2                 shl edx, cl
// 0057434c  83c103               add ecx, 3
// 0057434f  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00574355  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00574359  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00574360  8b542408             mov edx, dword ptr [esp + 8]
// 00574364  6a01                 push 1
// 00574366  e815fbffff           call 0x573e80
// 0057436b  59                   pop ecx
// 0057436c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

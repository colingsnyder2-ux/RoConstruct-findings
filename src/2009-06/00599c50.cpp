// roc 2009-06 00599c50  unit: seg_00590000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599c50
//
// 00599c50  8b442404             mov eax, dword ptr [esp + 4]
// 00599c54  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00599c5a  83f90d               cmp ecx, 0xd
// 00599c5d  7e67                 jle 0x599cc6
// 00599c5f  53                   push ebx
// 00599c60  56                   push esi
// 00599c61  8b742418             mov esi, dword ptr [esp + 0x18]
// 00599c65  8bd6                 mov edx, esi
// 00599c67  d3e2                 shl edx, cl
// 00599c69  8b4808               mov ecx, dword ptr [eax + 8]
// 00599c6c  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599c73  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00599c7a  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599c7d  881c11               mov byte ptr [ecx + edx], bl
// 00599c80  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00599c87  ff4014               inc dword ptr [eax + 0x14]
// 00599c8a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00599c8d  8b5008               mov edx, dword ptr [eax + 8]
// 00599c90  881c11               mov byte ptr [ecx + edx], bl
// 00599c93  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00599c99  ff4014               inc dword ptr [eax + 0x14]
// 00599c9c  b110                 mov cl, 0x10
// 00599c9e  2aca                 sub cl, dl
// 00599ca0  66d3ee               shr si, cl
// 00599ca3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00599ca7  83c2f3               add edx, -0xd
// 00599caa  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00599cb0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00599cb4  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00599cbb  5e                   pop esi
// 00599cbc  5b                   pop ebx
// 00599cbd  6a01                 push 1
// 00599cbf  e83cfbffff           call 0x599800
// 00599cc4  59                   pop ecx
// 00599cc5  c3                   ret 
// 00599cc6  8b542410             mov edx, dword ptr [esp + 0x10]
// 00599cca  d3e2                 shl edx, cl
// 00599ccc  83c103               add ecx, 3
// 00599ccf  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00599cd5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00599cd9  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00599ce0  8b542408             mov edx, dword ptr [esp + 8]
// 00599ce4  6a01                 push 1
// 00599ce6  e815fbffff           call 0x599800
// 00599ceb  59                   pop ecx
// 00599cec  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

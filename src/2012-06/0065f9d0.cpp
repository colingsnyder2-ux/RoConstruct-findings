// from server: 100% by auto
// roc 2012-06 0065f9d0  unit: seg_00650000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f9d0
//
// 0065f9d0  8b442404             mov eax, dword ptr [esp + 4]
// 0065f9d4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0065f9da  83f90d               cmp ecx, 0xd
// 0065f9dd  7e67                 jle 0x65fa46
// 0065f9df  53                   push ebx
// 0065f9e0  56                   push esi
// 0065f9e1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065f9e5  8bd6                 mov edx, esi
// 0065f9e7  d3e2                 shl edx, cl
// 0065f9e9  8b4808               mov ecx, dword ptr [eax + 8]
// 0065f9ec  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065f9f3  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0065f9fa  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f9fd  881c11               mov byte ptr [ecx + edx], bl
// 0065fa00  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0065fa07  ff4014               inc dword ptr [eax + 0x14]
// 0065fa0a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065fa0d  8b5008               mov edx, dword ptr [eax + 8]
// 0065fa10  881c11               mov byte ptr [ecx + edx], bl
// 0065fa13  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0065fa19  ff4014               inc dword ptr [eax + 0x14]
// 0065fa1c  b110                 mov cl, 0x10
// 0065fa1e  2aca                 sub cl, dl
// 0065fa20  66d3ee               shr si, cl
// 0065fa23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065fa27  83c2f3               add edx, -0xd
// 0065fa2a  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0065fa30  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065fa34  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0065fa3b  5e                   pop esi
// 0065fa3c  5b                   pop ebx
// 0065fa3d  6a01                 push 1
// 0065fa3f  e83cfbffff           call 0x65f580
// 0065fa44  59                   pop ecx
// 0065fa45  c3                   ret 
// 0065fa46  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065fa4a  d3e2                 shl edx, cl
// 0065fa4c  83c103               add ecx, 3
// 0065fa4f  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0065fa55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065fa59  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0065fa60  8b542408             mov edx, dword ptr [esp + 8]
// 0065fa64  6a01                 push 1
// 0065fa66  e815fbffff           call 0x65f580
// 0065fa6b  59                   pop ecx
// 0065fa6c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

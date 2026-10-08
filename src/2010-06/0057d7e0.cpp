// from server: 100% by auto
// roc 2010-06 0057d7e0  unit: seg_00570000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d7e0
//
// 0057d7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0057d7e4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d7ea  83f90d               cmp ecx, 0xd
// 0057d7ed  7e67                 jle 0x57d856
// 0057d7ef  53                   push ebx
// 0057d7f0  56                   push esi
// 0057d7f1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057d7f5  8bd6                 mov edx, esi
// 0057d7f7  d3e2                 shl edx, cl
// 0057d7f9  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d7fc  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057d803  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057d80a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d80d  881c11               mov byte ptr [ecx + edx], bl
// 0057d810  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057d817  ff4014               inc dword ptr [eax + 0x14]
// 0057d81a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d81d  8b5008               mov edx, dword ptr [eax + 8]
// 0057d820  881c11               mov byte ptr [ecx + edx], bl
// 0057d823  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057d829  ff4014               inc dword ptr [eax + 0x14]
// 0057d82c  b110                 mov cl, 0x10
// 0057d82e  2aca                 sub cl, dl
// 0057d830  66d3ee               shr si, cl
// 0057d833  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057d837  83c2f3               add edx, -0xd
// 0057d83a  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057d840  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057d844  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057d84b  5e                   pop esi
// 0057d84c  5b                   pop ebx
// 0057d84d  6a01                 push 1
// 0057d84f  e83cfbffff           call 0x57d390
// 0057d854  59                   pop ecx
// 0057d855  c3                   ret 
// 0057d856  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057d85a  d3e2                 shl edx, cl
// 0057d85c  83c103               add ecx, 3
// 0057d85f  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057d865  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057d869  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057d870  8b542408             mov edx, dword ptr [esp + 8]
// 0057d874  6a01                 push 1
// 0057d876  e815fbffff           call 0x57d390
// 0057d87b  59                   pop ecx
// 0057d87c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

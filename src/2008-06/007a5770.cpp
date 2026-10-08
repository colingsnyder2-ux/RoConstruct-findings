// from server: 100% by auto
// roc 2008-06 007a5770  unit: CXTIconHandle  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5770
//
// 007a5770  8b442404             mov eax, dword ptr [esp + 4]
// 007a5774  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a577a  83f90d               cmp ecx, 0xd
// 007a577d  7e67                 jle 0x7a57e6
// 007a577f  53                   push ebx
// 007a5780  56                   push esi
// 007a5781  8b742418             mov esi, dword ptr [esp + 0x18]
// 007a5785  8bd6                 mov edx, esi
// 007a5787  d3e2                 shl edx, cl
// 007a5789  8b4808               mov ecx, dword ptr [eax + 8]
// 007a578c  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a5793  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a579a  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a579d  881c11               mov byte ptr [ecx + edx], bl
// 007a57a0  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a57a7  ff4014               inc dword ptr [eax + 0x14]
// 007a57aa  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a57ad  8b5008               mov edx, dword ptr [eax + 8]
// 007a57b0  881c11               mov byte ptr [ecx + edx], bl
// 007a57b3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a57b9  ff4014               inc dword ptr [eax + 0x14]
// 007a57bc  b110                 mov cl, 0x10
// 007a57be  2aca                 sub cl, dl
// 007a57c0  66d3ee               shr si, cl
// 007a57c3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a57c7  83c2f3               add edx, -0xd
// 007a57ca  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a57d0  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a57d4  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a57db  5e                   pop esi
// 007a57dc  5b                   pop ebx
// 007a57dd  6a01                 push 1
// 007a57df  e83cfbffff           call 0x7a5320
// 007a57e4  59                   pop ecx
// 007a57e5  c3                   ret 
// 007a57e6  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a57ea  d3e2                 shl edx, cl
// 007a57ec  83c103               add ecx, 3
// 007a57ef  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a57f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a57f9  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a5800  8b542408             mov edx, dword ptr [esp + 8]
// 007a5804  6a01                 push 1
// 007a5806  e815fbffff           call 0x7a5320
// 007a580b  59                   pop ecx
// 007a580c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

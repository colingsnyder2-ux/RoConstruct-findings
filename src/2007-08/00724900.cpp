// roc 2007-08 00724900  unit: CXTIconHandle  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724900
//
// 00724900  8b442404             mov eax, dword ptr [esp + 4]
// 00724904  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0072490a  83f90d               cmp ecx, 0xd
// 0072490d  7e69                 jle 0x724978
// 0072490f  53                   push ebx
// 00724910  56                   push esi
// 00724911  8b742418             mov esi, dword ptr [esp + 0x18]
// 00724915  8bd6                 mov edx, esi
// 00724917  d3e2                 shl edx, cl
// 00724919  8b4808               mov ecx, dword ptr [eax + 8]
// 0072491c  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724923  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0072492a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0072492d  881c11               mov byte ptr [ecx + edx], bl
// 00724930  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724937  83401401             add dword ptr [eax + 0x14], 1
// 0072493b  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0072493e  8b5008               mov edx, dword ptr [eax + 8]
// 00724941  881c11               mov byte ptr [ecx + edx], bl
// 00724944  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0072494a  83401401             add dword ptr [eax + 0x14], 1
// 0072494e  b110                 mov cl, 0x10
// 00724950  2aca                 sub cl, dl
// 00724952  66d3ee               shr si, cl
// 00724955  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00724959  83c2f3               add edx, -0xd
// 0072495c  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00724962  8b542410             mov edx, dword ptr [esp + 0x10]
// 00724966  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0072496d  5e                   pop esi
// 0072496e  5b                   pop ebx
// 0072496f  6a01                 push 1
// 00724971  e83afbffff           call 0x7244b0
// 00724976  59                   pop ecx
// 00724977  c3                   ret 
// 00724978  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072497c  d3e2                 shl edx, cl
// 0072497e  83c103               add ecx, 3
// 00724981  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724987  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072498b  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724992  8b542408             mov edx, dword ptr [esp + 8]
// 00724996  6a01                 push 1
// 00724998  e813fbffff           call 0x7244b0
// 0072499d  59                   pop ecx
// 0072499e  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_stored_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

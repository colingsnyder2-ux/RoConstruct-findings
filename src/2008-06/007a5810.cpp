// roc 2008-06 007a5810  unit: CXTIconHandle  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5810
//
// 007a5810  8b442404             mov eax, dword ptr [esp + 4]
// 007a5814  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a581a  ba02000000           mov edx, 2
// 007a581f  d3e2                 shl edx, cl
// 007a5821  53                   push ebx
// 007a5822  56                   push esi
// 007a5823  57                   push edi
// 007a5824  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a582b  83f90d               cmp ecx, 0xd
// 007a582e  be01000000           mov esi, 1
// 007a5833  7e4a                 jle 0x7a587f
// 007a5835  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a583c  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a583f  8b4808               mov ecx, dword ptr [eax + 8]
// 007a5842  881c11               mov byte ptr [ecx + edx], bl
// 007a5845  017014               add dword ptr [eax + 0x14], esi
// 007a5848  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a584f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a5852  8b5008               mov edx, dword ptr [eax + 8]
// 007a5855  881c11               mov byte ptr [ecx + edx], bl
// 007a5858  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a585e  017014               add dword ptr [eax + 0x14], esi
// 007a5861  b110                 mov cl, 0x10
// 007a5863  2aca                 sub cl, dl
// 007a5865  bf02000000           mov edi, 2
// 007a586a  66d3ef               shr di, cl
// 007a586d  83c2f3               add edx, -0xd
// 007a5870  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a5876  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 007a587d  eb09                 jmp 0x7a5888
// 007a587f  83c103               add ecx, 3
// 007a5882  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a5888  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a588e  33d2                 xor edx, edx
// 007a5890  d3e2                 shl edx, cl
// 007a5892  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a5899  83f909               cmp ecx, 9
// 007a589c  7e47                 jle 0x7a58e5
// 007a589e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a58a5  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a58a8  8b4808               mov ecx, dword ptr [eax + 8]
// 007a58ab  881c11               mov byte ptr [ecx + edx], bl
// 007a58ae  017014               add dword ptr [eax + 0x14], esi
// 007a58b1  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a58b8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a58bb  8b5008               mov edx, dword ptr [eax + 8]
// 007a58be  881c11               mov byte ptr [ecx + edx], bl
// 007a58c1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a58c7  017014               add dword ptr [eax + 0x14], esi
// 007a58ca  b110                 mov cl, 0x10
// 007a58cc  2aca                 sub cl, dl
// 007a58ce  33ff                 xor edi, edi
// 007a58d0  66d3ef               shr di, cl
// 007a58d3  83c2f7               add edx, -9
// 007a58d6  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a58dc  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 007a58e3  eb09                 jmp 0x7a58ee
// 007a58e5  83c107               add ecx, 7
// 007a58e8  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a58ee  e84df9ffff           call 0x7a5240
// 007a58f3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a58f9  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 007a58ff  2bd1                 sub edx, ecx
// 007a5901  83c20b               add edx, 0xb
// 007a5904  83fa09               cmp edx, 9
// 007a5907  0f8de2000000         jge 0x7a59ef
// 007a590d  ba02000000           mov edx, 2
// 007a5912  d3e2                 shl edx, cl
// 007a5914  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a591b  83f90d               cmp ecx, 0xd
// 007a591e  7e4a                 jle 0x7a596a
// 007a5920  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a5927  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a592a  8b4808               mov ecx, dword ptr [eax + 8]
// 007a592d  881c11               mov byte ptr [ecx + edx], bl
// 007a5930  017014               add dword ptr [eax + 0x14], esi
// 007a5933  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a593a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a593d  8b5008               mov edx, dword ptr [eax + 8]
// 007a5940  881c11               mov byte ptr [ecx + edx], bl
// 007a5943  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a5949  017014               add dword ptr [eax + 0x14], esi
// 007a594c  b110                 mov cl, 0x10
// 007a594e  2aca                 sub cl, dl
// 007a5950  bf02000000           mov edi, 2
// 007a5955  66d3ef               shr di, cl
// 007a5958  83c2f3               add edx, -0xd
// 007a595b  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a5961  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 007a5968  eb09                 jmp 0x7a5973
// 007a596a  83c103               add ecx, 3
// 007a596d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a5973  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007a5979  33d2                 xor edx, edx
// 007a597b  d3e2                 shl edx, cl
// 007a597d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007a5984  83f909               cmp ecx, 9
// 007a5987  7e58                 jle 0x7a59e1
// 007a5989  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007a5990  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a5993  8b4808               mov ecx, dword ptr [eax + 8]
// 007a5996  881c11               mov byte ptr [ecx + edx], bl
// 007a5999  017014               add dword ptr [eax + 0x14], esi
// 007a599c  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007a59a3  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007a59a6  8b5008               mov edx, dword ptr [eax + 8]
// 007a59a9  881c11               mov byte ptr [ecx + edx], bl
// 007a59ac  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007a59b2  017014               add dword ptr [eax + 0x14], esi
// 007a59b5  b110                 mov cl, 0x10
// 007a59b7  2aca                 sub cl, dl
// 007a59b9  33f6                 xor esi, esi
// 007a59bb  66d3ee               shr si, cl
// 007a59be  83c2f7               add edx, -9
// 007a59c1  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 007a59c7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 007a59ce  e86df8ffff           call 0x7a5240
// 007a59d3  5f                   pop edi
// 007a59d4  5e                   pop esi
// 007a59d5  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 007a59df  5b                   pop ebx
// 007a59e0  c3                   ret 
// 007a59e1  83c107               add ecx, 7
// 007a59e4  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 007a59ea  e851f8ffff           call 0x7a5240
// 007a59ef  5f                   pop edi
// 007a59f0  5e                   pop esi
// 007a59f1  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 007a59fb  5b                   pop ebx
// 007a59fc  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c

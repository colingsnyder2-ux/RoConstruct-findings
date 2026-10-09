// roc 2007-03 004e8840  unit: seg_004e0000  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8840
//
// 004e8840  8b442408             mov eax, dword ptr [esp + 8]
// 004e8844  83e803               sub eax, 3
// 004e8847  53                   push ebx
// 004e8848  55                   push ebp
// 004e8849  56                   push esi
// 004e884a  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e884e  8b5e04               mov ebx, dword ptr [esi + 4]
// 004e8851  57                   push edi
// 004e8852  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e8856  0f840e010000         je 0x4e896a
// 004e885c  83e802               sub eax, 2
// 004e885f  0f8481000000         je 0x4e88e6
// 004e8865  83e801               sub eax, 1
// 004e8868  0f856e010000         jne 0x4e89dc
// 004e886e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e8872  83c3fe               add ebx, -2
// 004e8875  6a01                 push 1
// 004e8877  8d045b               lea eax, [ebx + ebx*2]
// 004e887a  50                   push eax
// 004e887b  8bcf                 mov ecx, edi
// 004e887d  e89e27f9ff           call 0x47b020
// 004e8882  33c9                 xor ecx, ecx
// 004e8884  85db                 test ebx, ebx
// 004e8886  0f8c50010000         jl 0x4e89dc
// 004e888c  b80c000000           mov eax, 0xc
// 004e8891  8b16                 mov edx, dword ptr [esi]
// 004e8893  8b148a               mov edx, dword ptr [edx + ecx*4]
// 004e8896  8b2f                 mov ebp, dword ptr [edi]
// 004e8898  895428f4             mov dword ptr [eax + ebp - 0xc], edx
// 004e889c  8b16                 mov edx, dword ptr [esi]
// 004e889e  8b548a04             mov edx, dword ptr [edx + ecx*4 + 4]
// 004e88a2  8b2f                 mov ebp, dword ptr [edi]
// 004e88a4  895428f8             mov dword ptr [eax + ebp - 8], edx
// 004e88a8  8b16                 mov edx, dword ptr [esi]
// 004e88aa  8b548a08             mov edx, dword ptr [edx + ecx*4 + 8]
// 004e88ae  8b2f                 mov ebp, dword ptr [edi]
// 004e88b0  895428fc             mov dword ptr [eax + ebp - 4], edx
// 004e88b4  8b16                 mov edx, dword ptr [esi]
// 004e88b6  8b548a08             mov edx, dword ptr [edx + ecx*4 + 8]
// 004e88ba  8b2f                 mov ebp, dword ptr [edi]
// 004e88bc  891428               mov dword ptr [eax + ebp], edx
// 004e88bf  8b16                 mov edx, dword ptr [esi]
// 004e88c1  8b548a04             mov edx, dword ptr [edx + ecx*4 + 4]
// 004e88c5  8b2f                 mov ebp, dword ptr [edi]
// 004e88c7  89542804             mov dword ptr [eax + ebp + 4], edx
// 004e88cb  8b16                 mov edx, dword ptr [esi]
// 004e88cd  8b548a0c             mov edx, dword ptr [edx + ecx*4 + 0xc]
// 004e88d1  8b2f                 mov ebp, dword ptr [edi]
// 004e88d3  89542808             mov dword ptr [eax + ebp + 8], edx
// 004e88d7  83c102               add ecx, 2
// 004e88da  83c018               add eax, 0x18
// 004e88dd  3bcb                 cmp ecx, ebx
// 004e88df  7eb0                 jle 0x4e8891
// 004e88e1  5f                   pop edi
// 004e88e2  5e                   pop esi
// 004e88e3  5d                   pop ebp
// 004e88e4  5b                   pop ebx
// 004e88e5  c3                   ret 
// 004e88e6  db442414             fild dword ptr [esp + 0x14]
// 004e88ea  6a01                 push 1
// 004e88ec  dc0d18e57900         fmul qword ptr [0x79e518]
// 004e88f2  e809691300           call 0x61f200
// 004e88f7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e88fb  50                   push eax
// 004e88fc  8bcf                 mov ecx, edi
// 004e88fe  e81d27f9ff           call 0x47b020
// 004e8903  8d53fc               lea edx, [ebx - 4]
// 004e8906  33c9                 xor ecx, ecx
// 004e8908  85d2                 test edx, edx
// 004e890a  0f8ccc000000         jl 0x4e89dc
// 004e8910  b80c000000           mov eax, 0xc
// 004e8915  8b1e                 mov ebx, dword ptr [esi]
// 004e8917  8b1c8b               mov ebx, dword ptr [ebx + ecx*4]
// 004e891a  8b2f                 mov ebp, dword ptr [edi]
// 004e891c  895c28f4             mov dword ptr [eax + ebp - 0xc], ebx
// 004e8920  8b1e                 mov ebx, dword ptr [esi]
// 004e8922  8b5c8b04             mov ebx, dword ptr [ebx + ecx*4 + 4]
// 004e8926  8b2f                 mov ebp, dword ptr [edi]
// 004e8928  895c28f8             mov dword ptr [eax + ebp - 8], ebx
// 004e892c  8b1e                 mov ebx, dword ptr [esi]
// 004e892e  8b5c8b0c             mov ebx, dword ptr [ebx + ecx*4 + 0xc]
// 004e8932  8b2f                 mov ebp, dword ptr [edi]
// 004e8934  895c28fc             mov dword ptr [eax + ebp - 4], ebx
// 004e8938  8b1e                 mov ebx, dword ptr [esi]
// 004e893a  8b5c8b04             mov ebx, dword ptr [ebx + ecx*4 + 4]
// 004e893e  8b2f                 mov ebp, dword ptr [edi]
// 004e8940  891c28               mov dword ptr [eax + ebp], ebx
// 004e8943  8b1e                 mov ebx, dword ptr [esi]
// 004e8945  8b5c8b08             mov ebx, dword ptr [ebx + ecx*4 + 8]
// 004e8949  8b2f                 mov ebp, dword ptr [edi]
// 004e894b  895c2804             mov dword ptr [eax + ebp + 4], ebx
// 004e894f  8b1e                 mov ebx, dword ptr [esi]
// 004e8951  8b5c8b0c             mov ebx, dword ptr [ebx + ecx*4 + 0xc]
// 004e8955  8b2f                 mov ebp, dword ptr [edi]
// 004e8957  895c2808             mov dword ptr [eax + ebp + 8], ebx
// 004e895b  83c104               add ecx, 4
// 004e895e  83c018               add eax, 0x18
// 004e8961  3bca                 cmp ecx, edx
// 004e8963  7eb0                 jle 0x4e8915
// 004e8965  5f                   pop edi
// 004e8966  5e                   pop esi
// 004e8967  5d                   pop ebp
// 004e8968  5b                   pop ebx
// 004e8969  c3                   ret 
// 004e896a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e896e  83c3fe               add ebx, -2
// 004e8971  6a01                 push 1
// 004e8973  8d045b               lea eax, [ebx + ebx*2]
// 004e8976  50                   push eax
// 004e8977  8bcf                 mov ecx, edi
// 004e8979  e8a226f9ff           call 0x47b020
// 004e897e  32d2                 xor dl, dl
// 004e8980  33c0                 xor eax, eax
// 004e8982  85db                 test ebx, ebx
// 004e8984  7c56                 jl 0x4e89dc
// 004e8986  33c9                 xor ecx, ecx
// 004e8988  8b2f                 mov ebp, dword ptr [edi]
// 004e898a  84d2                 test dl, dl
// 004e898c  8b16                 mov edx, dword ptr [esi]
// 004e898e  7422                 je 0x4e89b2
// 004e8990  8b548204             mov edx, dword ptr [edx + eax*4 + 4]
// 004e8994  891429               mov dword ptr [ecx + ebp], edx
// 004e8997  8b16                 mov edx, dword ptr [esi]
// 004e8999  8b1482               mov edx, dword ptr [edx + eax*4]
// 004e899c  8b2f                 mov ebp, dword ptr [edi]
// 004e899e  89542904             mov dword ptr [ecx + ebp + 4], edx
// 004e89a2  8b16                 mov edx, dword ptr [esi]
// 004e89a4  8b548208             mov edx, dword ptr [edx + eax*4 + 8]
// 004e89a8  8b2f                 mov ebp, dword ptr [edi]
// 004e89aa  89542908             mov dword ptr [ecx + ebp + 8], edx
// 004e89ae  32d2                 xor dl, dl
// 004e89b0  eb20                 jmp 0x4e89d2
// 004e89b2  8b1482               mov edx, dword ptr [edx + eax*4]
// 004e89b5  891429               mov dword ptr [ecx + ebp], edx
// 004e89b8  8b16                 mov edx, dword ptr [esi]
// 004e89ba  8b548204             mov edx, dword ptr [edx + eax*4 + 4]
// 004e89be  8b2f                 mov ebp, dword ptr [edi]
// 004e89c0  89542904             mov dword ptr [ecx + ebp + 4], edx
// 004e89c4  8b16                 mov edx, dword ptr [esi]
// 004e89c6  8b548208             mov edx, dword ptr [edx + eax*4 + 8]
// 004e89ca  8b2f                 mov ebp, dword ptr [edi]
// 004e89cc  89542908             mov dword ptr [ecx + ebp + 8], edx
// 004e89d0  b201                 mov dl, 1
// 004e89d2  83c001               add eax, 1
// 004e89d5  83c10c               add ecx, 0xc
// 004e89d8  3bc3                 cmp eax, ebx
// 004e89da  7eac                 jle 0x4e8988
// 004e89dc  5f                   pop edi
// 004e89dd  5e                   pop esi
// 004e89de  5d                   pop ebp
// 004e89df  5b                   pop ebx
// 004e89e0  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Mesh.cpp (function ??$toIndexedTriList@H@MeshAlg@G3D@@SAXABV?$Array@H@1@W4Primitive@01@AAV21@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Mesh.cpp

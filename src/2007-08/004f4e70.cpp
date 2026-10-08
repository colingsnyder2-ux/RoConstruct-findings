// roc 2007-08 004f4e70  unit: boost::bad_lexical_cast  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4e70
//
// 004f4e70  8b442408             mov eax, dword ptr [esp + 8]
// 004f4e74  83e803               sub eax, 3
// 004f4e77  53                   push ebx
// 004f4e78  55                   push ebp
// 004f4e79  56                   push esi
// 004f4e7a  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f4e7e  8b5e04               mov ebx, dword ptr [esi + 4]
// 004f4e81  57                   push edi
// 004f4e82  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f4e86  0f840e010000         je 0x4f4f9a
// 004f4e8c  83e802               sub eax, 2
// 004f4e8f  0f8481000000         je 0x4f4f16
// 004f4e95  83e801               sub eax, 1
// 004f4e98  0f856e010000         jne 0x4f500c
// 004f4e9e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f4ea2  83c3fe               add ebx, -2
// 004f4ea5  6a01                 push 1
// 004f4ea7  8d045b               lea eax, [ebx + ebx*2]
// 004f4eaa  50                   push eax
// 004f4eab  8bcf                 mov ecx, edi
// 004f4ead  e8ee7bf8ff           call 0x47caa0
// 004f4eb2  33c9                 xor ecx, ecx
// 004f4eb4  85db                 test ebx, ebx
// 004f4eb6  0f8c50010000         jl 0x4f500c
// 004f4ebc  b80c000000           mov eax, 0xc
// 004f4ec1  8b16                 mov edx, dword ptr [esi]
// 004f4ec3  8b148a               mov edx, dword ptr [edx + ecx*4]
// 004f4ec6  8b2f                 mov ebp, dword ptr [edi]
// 004f4ec8  895428f4             mov dword ptr [eax + ebp - 0xc], edx
// 004f4ecc  8b16                 mov edx, dword ptr [esi]
// 004f4ece  8b548a04             mov edx, dword ptr [edx + ecx*4 + 4]
// 004f4ed2  8b2f                 mov ebp, dword ptr [edi]
// 004f4ed4  895428f8             mov dword ptr [eax + ebp - 8], edx
// 004f4ed8  8b16                 mov edx, dword ptr [esi]
// 004f4eda  8b548a08             mov edx, dword ptr [edx + ecx*4 + 8]
// 004f4ede  8b2f                 mov ebp, dword ptr [edi]
// 004f4ee0  895428fc             mov dword ptr [eax + ebp - 4], edx
// 004f4ee4  8b16                 mov edx, dword ptr [esi]
// 004f4ee6  8b548a08             mov edx, dword ptr [edx + ecx*4 + 8]
// 004f4eea  8b2f                 mov ebp, dword ptr [edi]
// 004f4eec  891428               mov dword ptr [eax + ebp], edx
// 004f4eef  8b16                 mov edx, dword ptr [esi]
// 004f4ef1  8b548a04             mov edx, dword ptr [edx + ecx*4 + 4]
// 004f4ef5  8b2f                 mov ebp, dword ptr [edi]
// 004f4ef7  89542804             mov dword ptr [eax + ebp + 4], edx
// 004f4efb  8b16                 mov edx, dword ptr [esi]
// 004f4efd  8b548a0c             mov edx, dword ptr [edx + ecx*4 + 0xc]
// 004f4f01  8b2f                 mov ebp, dword ptr [edi]
// 004f4f03  89542808             mov dword ptr [eax + ebp + 8], edx
// 004f4f07  83c102               add ecx, 2
// 004f4f0a  83c018               add eax, 0x18
// 004f4f0d  3bcb                 cmp ecx, ebx
// 004f4f0f  7eb0                 jle 0x4f4ec1
// 004f4f11  5f                   pop edi
// 004f4f12  5e                   pop esi
// 004f4f13  5d                   pop ebp
// 004f4f14  5b                   pop ebx
// 004f4f15  c3                   ret 
// 004f4f16  db442414             fild dword ptr [esp + 0x14]
// 004f4f1a  6a01                 push 1
// 004f4f1c  dc0d48f77900         fmul qword ptr [0x79f748]
// 004f4f22  e839be1300           call 0x630d60
// 004f4f27  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f4f2b  50                   push eax
// 004f4f2c  8bcf                 mov ecx, edi
// 004f4f2e  e86d7bf8ff           call 0x47caa0
// 004f4f33  8d53fc               lea edx, [ebx - 4]
// 004f4f36  33c9                 xor ecx, ecx
// 004f4f38  85d2                 test edx, edx
// 004f4f3a  0f8ccc000000         jl 0x4f500c
// 004f4f40  b80c000000           mov eax, 0xc
// 004f4f45  8b1e                 mov ebx, dword ptr [esi]
// 004f4f47  8b1c8b               mov ebx, dword ptr [ebx + ecx*4]
// 004f4f4a  8b2f                 mov ebp, dword ptr [edi]
// 004f4f4c  895c28f4             mov dword ptr [eax + ebp - 0xc], ebx
// 004f4f50  8b1e                 mov ebx, dword ptr [esi]
// 004f4f52  8b5c8b04             mov ebx, dword ptr [ebx + ecx*4 + 4]
// 004f4f56  8b2f                 mov ebp, dword ptr [edi]
// 004f4f58  895c28f8             mov dword ptr [eax + ebp - 8], ebx
// 004f4f5c  8b1e                 mov ebx, dword ptr [esi]
// 004f4f5e  8b5c8b0c             mov ebx, dword ptr [ebx + ecx*4 + 0xc]
// 004f4f62  8b2f                 mov ebp, dword ptr [edi]
// 004f4f64  895c28fc             mov dword ptr [eax + ebp - 4], ebx
// 004f4f68  8b1e                 mov ebx, dword ptr [esi]
// 004f4f6a  8b5c8b04             mov ebx, dword ptr [ebx + ecx*4 + 4]
// 004f4f6e  8b2f                 mov ebp, dword ptr [edi]
// 004f4f70  891c28               mov dword ptr [eax + ebp], ebx
// 004f4f73  8b1e                 mov ebx, dword ptr [esi]
// 004f4f75  8b5c8b08             mov ebx, dword ptr [ebx + ecx*4 + 8]
// 004f4f79  8b2f                 mov ebp, dword ptr [edi]
// 004f4f7b  895c2804             mov dword ptr [eax + ebp + 4], ebx
// 004f4f7f  8b1e                 mov ebx, dword ptr [esi]
// 004f4f81  8b5c8b0c             mov ebx, dword ptr [ebx + ecx*4 + 0xc]
// 004f4f85  8b2f                 mov ebp, dword ptr [edi]
// 004f4f87  895c2808             mov dword ptr [eax + ebp + 8], ebx
// 004f4f8b  83c104               add ecx, 4
// 004f4f8e  83c018               add eax, 0x18
// 004f4f91  3bca                 cmp ecx, edx
// 004f4f93  7eb0                 jle 0x4f4f45
// 004f4f95  5f                   pop edi
// 004f4f96  5e                   pop esi
// 004f4f97  5d                   pop ebp
// 004f4f98  5b                   pop ebx
// 004f4f99  c3                   ret 
// 004f4f9a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f4f9e  83c3fe               add ebx, -2
// 004f4fa1  6a01                 push 1
// 004f4fa3  8d045b               lea eax, [ebx + ebx*2]
// 004f4fa6  50                   push eax
// 004f4fa7  8bcf                 mov ecx, edi
// 004f4fa9  e8f27af8ff           call 0x47caa0
// 004f4fae  32d2                 xor dl, dl
// 004f4fb0  33c0                 xor eax, eax
// 004f4fb2  85db                 test ebx, ebx
// 004f4fb4  7c56                 jl 0x4f500c
// 004f4fb6  33c9                 xor ecx, ecx
// 004f4fb8  8b2f                 mov ebp, dword ptr [edi]
// 004f4fba  84d2                 test dl, dl
// 004f4fbc  8b16                 mov edx, dword ptr [esi]
// 004f4fbe  7422                 je 0x4f4fe2
// 004f4fc0  8b548204             mov edx, dword ptr [edx + eax*4 + 4]
// 004f4fc4  891429               mov dword ptr [ecx + ebp], edx
// 004f4fc7  8b16                 mov edx, dword ptr [esi]
// 004f4fc9  8b1482               mov edx, dword ptr [edx + eax*4]
// 004f4fcc  8b2f                 mov ebp, dword ptr [edi]
// 004f4fce  89542904             mov dword ptr [ecx + ebp + 4], edx
// 004f4fd2  8b16                 mov edx, dword ptr [esi]
// 004f4fd4  8b548208             mov edx, dword ptr [edx + eax*4 + 8]
// 004f4fd8  8b2f                 mov ebp, dword ptr [edi]
// 004f4fda  89542908             mov dword ptr [ecx + ebp + 8], edx
// 004f4fde  32d2                 xor dl, dl
// 004f4fe0  eb20                 jmp 0x4f5002
// 004f4fe2  8b1482               mov edx, dword ptr [edx + eax*4]
// 004f4fe5  891429               mov dword ptr [ecx + ebp], edx
// 004f4fe8  8b16                 mov edx, dword ptr [esi]
// 004f4fea  8b548204             mov edx, dword ptr [edx + eax*4 + 4]
// 004f4fee  8b2f                 mov ebp, dword ptr [edi]
// 004f4ff0  89542904             mov dword ptr [ecx + ebp + 4], edx
// 004f4ff4  8b16                 mov edx, dword ptr [esi]
// 004f4ff6  8b548208             mov edx, dword ptr [edx + eax*4 + 8]
// 004f4ffa  8b2f                 mov ebp, dword ptr [edi]
// 004f4ffc  89542908             mov dword ptr [ecx + ebp + 8], edx
// 004f5000  b201                 mov dl, 1
// 004f5002  83c001               add eax, 1
// 004f5005  83c10c               add ecx, 0xc
// 004f5008  3bc3                 cmp eax, ebx
// 004f500a  7eac                 jle 0x4f4fb8
// 004f500c  5f                   pop edi
// 004f500d  5e                   pop esi
// 004f500e  5d                   pop ebp
// 004f500f  5b                   pop ebx
// 004f5010  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Mesh.cpp (function ??$toIndexedTriList@H@MeshAlg@G3D@@SAXABV?$Array@H@1@W4Primitive@01@AAV21@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Mesh.cpp

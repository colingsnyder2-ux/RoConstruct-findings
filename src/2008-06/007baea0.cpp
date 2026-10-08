// from server: 100% by auto
// roc 2008-06 007baea0  unit: G3D::H::PAV?$Array::?$Set  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007baea0
//
// 007baea0  53                   push ebx
// 007baea1  56                   push esi
// 007baea2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007baea6  57                   push edi
// 007baea7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007baeab  6a01                 push 1
// 007baead  56                   push esi
// 007baeae  8bcf                 mov ecx, edi
// 007baeb0  e86b51ccff           call 0x480020
// 007baeb5  33c0                 xor eax, eax
// 007baeb7  39442420             cmp dword ptr [esp + 0x20], eax
// 007baebb  7519                 jne 0x7baed6
// 007baebd  85f6                 test esi, esi
// 007baebf  7e3c                 jle 0x7baefd
// 007baec1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007baec5  8b1f                 mov ebx, dword ptr [edi]
// 007baec7  8d1408               lea edx, [eax + ecx]
// 007baeca  891483               mov dword ptr [ebx + eax*4], edx
// 007baecd  40                   inc eax
// 007baece  3bc6                 cmp eax, esi
// 007baed0  7cf3                 jl 0x7baec5
// 007baed2  5f                   pop edi
// 007baed3  5e                   pop esi
// 007baed4  5b                   pop ebx
// 007baed5  c3                   ret 
// 007baed6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007baeda  33d2                 xor edx, edx
// 007baedc  85f6                 test esi, esi
// 007baede  7e1d                 jle 0x7baefd
// 007baee0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007baee4  55                   push ebp
// 007baee5  8b2f                 mov ebp, dword ptr [edi]
// 007baee7  894c9500             mov dword ptr [ebp + edx*4], ecx
// 007baeeb  40                   inc eax
// 007baeec  41                   inc ecx
// 007baeed  3bc3                 cmp eax, ebx
// 007baeef  7506                 jne 0x7baef7
// 007baef1  33c0                 xor eax, eax
// 007baef3  034c2424             add ecx, dword ptr [esp + 0x24]
// 007baef7  42                   inc edx
// 007baef8  3bd6                 cmp edx, esi
// 007baefa  7ce9                 jl 0x7baee5
// 007baefc  5d                   pop ebp
// 007baefd  5f                   pop edi
// 007baefe  5e                   pop esi
// 007baeff  5b                   pop ebx
// 007baf00  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?createIndexArray@MeshAlg@G3D@@SAXHAAV?$Array@H@2@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp

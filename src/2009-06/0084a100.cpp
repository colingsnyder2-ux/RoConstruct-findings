// roc 2009-06 0084a100  unit: RBX::RbxG3D::MegaTextureProxy  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084a100
//
// 0084a100  56                   push esi
// 0084a101  57                   push edi
// 0084a102  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084a106  8b4704               mov eax, dword ptr [edi + 4]
// 0084a109  6a01                 push 1
// 0084a10b  50                   push eax
// 0084a10c  8bf1                 mov esi, ecx
// 0084a10e  e8adffc5ff           call 0x4aa0c0
// 0084a113  33c0                 xor eax, eax
// 0084a115  394604               cmp dword ptr [esi + 4], eax
// 0084a118  7e16                 jle 0x84a130
// 0084a11a  8d9b00000000         lea ebx, [ebx]
// 0084a120  8b0f                 mov ecx, dword ptr [edi]
// 0084a122  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0084a125  8b16                 mov edx, dword ptr [esi]
// 0084a127  890c82               mov dword ptr [edx + eax*4], ecx
// 0084a12a  40                   inc eax
// 0084a12b  3b4604               cmp eax, dword ptr [esi + 4]
// 0084a12e  7cf0                 jl 0x84a120
// 0084a130  5f                   pop edi
// 0084a131  8bc6                 mov eax, esi
// 0084a133  5e                   pop esi
// 0084a134  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp

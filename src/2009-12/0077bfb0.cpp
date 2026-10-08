// roc 2009-12 0077bfb0  unit: RBX::BallBallContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077bfb0
//
// 0077bfb0  56                   push esi
// 0077bfb1  8bf1                 mov esi, ecx
// 0077bfb3  8b4604               mov eax, dword ptr [esi + 4]
// 0077bfb6  3b4608               cmp eax, dword ptr [esi + 8]
// 0077bfb9  8b0e                 mov ecx, dword ptr [esi]
// 0077bfbb  7d16                 jge 0x77bfd3
// 0077bfbd  8d0481               lea eax, [ecx + eax*4]
// 0077bfc0  85c0                 test eax, eax
// 0077bfc2  7408                 je 0x77bfcc
// 0077bfc4  8b542408             mov edx, dword ptr [esp + 8]
// 0077bfc8  8b0a                 mov ecx, dword ptr [edx]
// 0077bfca  8908                 mov dword ptr [eax], ecx
// 0077bfcc  ff4604               inc dword ptr [esi + 4]
// 0077bfcf  5e                   pop esi
// 0077bfd0  c20400               ret 4
// 0077bfd3  57                   push edi
// 0077bfd4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077bfd8  3bf9                 cmp edi, ecx
// 0077bfda  721e                 jb 0x77bffa
// 0077bfdc  8d1481               lea edx, [ecx + eax*4]
// 0077bfdf  3bfa                 cmp edi, edx
// 0077bfe1  7317                 jae 0x77bffa
// 0077bfe3  8b07                 mov eax, dword ptr [edi]
// 0077bfe5  8d4c240c             lea ecx, [esp + 0xc]
// 0077bfe9  51                   push ecx
// 0077bfea  8bce                 mov ecx, esi
// 0077bfec  89442410             mov dword ptr [esp + 0x10], eax
// 0077bff0  e8bbffffff           call 0x77bfb0
// 0077bff5  5f                   pop edi
// 0077bff6  5e                   pop esi
// 0077bff7  c20400               ret 4
// 0077bffa  6a00                 push 0
// 0077bffc  40                   inc eax
// 0077bffd  50                   push eax
// 0077bffe  8bce                 mov ecx, esi
// 0077c000  e8bbfaffff           call 0x77bac0
// 0077c005  8b0f                 mov ecx, dword ptr [edi]
// 0077c007  8b5604               mov edx, dword ptr [esi + 4]
// 0077c00a  8b06                 mov eax, dword ptr [esi]
// 0077c00c  5f                   pop edi
// 0077c00d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0077c011  5e                   pop esi
// 0077c012  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

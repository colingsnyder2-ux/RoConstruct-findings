// roc 2009-12 007bf580  unit: RBX::FilterStairs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bf580
//
// 007bf580  56                   push esi
// 007bf581  8bf1                 mov esi, ecx
// 007bf583  8b4604               mov eax, dword ptr [esi + 4]
// 007bf586  3b4608               cmp eax, dword ptr [esi + 8]
// 007bf589  8b0e                 mov ecx, dword ptr [esi]
// 007bf58b  7d16                 jge 0x7bf5a3
// 007bf58d  8d0481               lea eax, [ecx + eax*4]
// 007bf590  85c0                 test eax, eax
// 007bf592  7408                 je 0x7bf59c
// 007bf594  8b542408             mov edx, dword ptr [esp + 8]
// 007bf598  8b0a                 mov ecx, dword ptr [edx]
// 007bf59a  8908                 mov dword ptr [eax], ecx
// 007bf59c  ff4604               inc dword ptr [esi + 4]
// 007bf59f  5e                   pop esi
// 007bf5a0  c20400               ret 4
// 007bf5a3  57                   push edi
// 007bf5a4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007bf5a8  3bf9                 cmp edi, ecx
// 007bf5aa  721e                 jb 0x7bf5ca
// 007bf5ac  8d1481               lea edx, [ecx + eax*4]
// 007bf5af  3bfa                 cmp edi, edx
// 007bf5b1  7317                 jae 0x7bf5ca
// 007bf5b3  8b07                 mov eax, dword ptr [edi]
// 007bf5b5  8d4c240c             lea ecx, [esp + 0xc]
// 007bf5b9  51                   push ecx
// 007bf5ba  8bce                 mov ecx, esi
// 007bf5bc  89442410             mov dword ptr [esp + 0x10], eax
// 007bf5c0  e8bbffffff           call 0x7bf580
// 007bf5c5  5f                   pop edi
// 007bf5c6  5e                   pop esi
// 007bf5c7  c20400               ret 4
// 007bf5ca  6a00                 push 0
// 007bf5cc  40                   inc eax
// 007bf5cd  50                   push eax
// 007bf5ce  8bce                 mov ecx, esi
// 007bf5d0  e86bfbffff           call 0x7bf140
// 007bf5d5  8b0f                 mov ecx, dword ptr [edi]
// 007bf5d7  8b5604               mov edx, dword ptr [esi + 4]
// 007bf5da  8b06                 mov eax, dword ptr [esi]
// 007bf5dc  5f                   pop edi
// 007bf5dd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007bf5e1  5e                   pop esi
// 007bf5e2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

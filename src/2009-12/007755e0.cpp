// roc 2009-12 007755e0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007755e0
//
// 007755e0  56                   push esi
// 007755e1  8bf1                 mov esi, ecx
// 007755e3  8b4604               mov eax, dword ptr [esi + 4]
// 007755e6  3b4608               cmp eax, dword ptr [esi + 8]
// 007755e9  8b0e                 mov ecx, dword ptr [esi]
// 007755eb  7d16                 jge 0x775603
// 007755ed  8d0481               lea eax, [ecx + eax*4]
// 007755f0  85c0                 test eax, eax
// 007755f2  7408                 je 0x7755fc
// 007755f4  8b542408             mov edx, dword ptr [esp + 8]
// 007755f8  8b0a                 mov ecx, dword ptr [edx]
// 007755fa  8908                 mov dword ptr [eax], ecx
// 007755fc  ff4604               inc dword ptr [esi + 4]
// 007755ff  5e                   pop esi
// 00775600  c20400               ret 4
// 00775603  57                   push edi
// 00775604  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00775608  3bf9                 cmp edi, ecx
// 0077560a  721e                 jb 0x77562a
// 0077560c  8d1481               lea edx, [ecx + eax*4]
// 0077560f  3bfa                 cmp edi, edx
// 00775611  7317                 jae 0x77562a
// 00775613  8b07                 mov eax, dword ptr [edi]
// 00775615  8d4c240c             lea ecx, [esp + 0xc]
// 00775619  51                   push ecx
// 0077561a  8bce                 mov ecx, esi
// 0077561c  89442410             mov dword ptr [esp + 0x10], eax
// 00775620  e8bbffffff           call 0x7755e0
// 00775625  5f                   pop edi
// 00775626  5e                   pop esi
// 00775627  c20400               ret 4
// 0077562a  6a00                 push 0
// 0077562c  40                   inc eax
// 0077562d  50                   push eax
// 0077562e  8bce                 mov ecx, esi
// 00775630  e8cbf6ffff           call 0x774d00
// 00775635  8b0f                 mov ecx, dword ptr [edi]
// 00775637  8b5604               mov edx, dword ptr [esi + 4]
// 0077563a  8b06                 mov eax, dword ptr [esi]
// 0077563c  5f                   pop edi
// 0077563d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00775641  5e                   pop esi
// 00775642  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

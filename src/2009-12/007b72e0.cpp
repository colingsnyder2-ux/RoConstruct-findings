// roc 2009-12 007b72e0  unit: RBX::SleepStage  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b72e0
//
// 007b72e0  56                   push esi
// 007b72e1  8bf1                 mov esi, ecx
// 007b72e3  8b4604               mov eax, dword ptr [esi + 4]
// 007b72e6  3b4608               cmp eax, dword ptr [esi + 8]
// 007b72e9  8b0e                 mov ecx, dword ptr [esi]
// 007b72eb  7d16                 jge 0x7b7303
// 007b72ed  8d0481               lea eax, [ecx + eax*4]
// 007b72f0  85c0                 test eax, eax
// 007b72f2  7408                 je 0x7b72fc
// 007b72f4  8b542408             mov edx, dword ptr [esp + 8]
// 007b72f8  8b0a                 mov ecx, dword ptr [edx]
// 007b72fa  8908                 mov dword ptr [eax], ecx
// 007b72fc  ff4604               inc dword ptr [esi + 4]
// 007b72ff  5e                   pop esi
// 007b7300  c20400               ret 4
// 007b7303  57                   push edi
// 007b7304  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b7308  3bf9                 cmp edi, ecx
// 007b730a  721e                 jb 0x7b732a
// 007b730c  8d1481               lea edx, [ecx + eax*4]
// 007b730f  3bfa                 cmp edi, edx
// 007b7311  7317                 jae 0x7b732a
// 007b7313  8b07                 mov eax, dword ptr [edi]
// 007b7315  8d4c240c             lea ecx, [esp + 0xc]
// 007b7319  51                   push ecx
// 007b731a  8bce                 mov ecx, esi
// 007b731c  89442410             mov dword ptr [esp + 0x10], eax
// 007b7320  e8bbffffff           call 0x7b72e0
// 007b7325  5f                   pop edi
// 007b7326  5e                   pop esi
// 007b7327  c20400               ret 4
// 007b732a  6a00                 push 0
// 007b732c  40                   inc eax
// 007b732d  50                   push eax
// 007b732e  8bce                 mov ecx, esi
// 007b7330  e85bfeffff           call 0x7b7190
// 007b7335  8b0f                 mov ecx, dword ptr [edi]
// 007b7337  8b5604               mov edx, dword ptr [esi + 4]
// 007b733a  8b06                 mov eax, dword ptr [esi]
// 007b733c  5f                   pop edi
// 007b733d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007b7341  5e                   pop esi
// 007b7342  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

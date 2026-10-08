// roc 2009-12 00775650  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00775650
//
// 00775650  56                   push esi
// 00775651  8bf1                 mov esi, ecx
// 00775653  8b4604               mov eax, dword ptr [esi + 4]
// 00775656  3b4608               cmp eax, dword ptr [esi + 8]
// 00775659  8b0e                 mov ecx, dword ptr [esi]
// 0077565b  7d16                 jge 0x775673
// 0077565d  8d0481               lea eax, [ecx + eax*4]
// 00775660  85c0                 test eax, eax
// 00775662  7408                 je 0x77566c
// 00775664  8b542408             mov edx, dword ptr [esp + 8]
// 00775668  8b0a                 mov ecx, dword ptr [edx]
// 0077566a  8908                 mov dword ptr [eax], ecx
// 0077566c  ff4604               inc dword ptr [esi + 4]
// 0077566f  5e                   pop esi
// 00775670  c20400               ret 4
// 00775673  57                   push edi
// 00775674  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00775678  3bf9                 cmp edi, ecx
// 0077567a  721e                 jb 0x77569a
// 0077567c  8d1481               lea edx, [ecx + eax*4]
// 0077567f  3bfa                 cmp edi, edx
// 00775681  7317                 jae 0x77569a
// 00775683  8b07                 mov eax, dword ptr [edi]
// 00775685  8d4c240c             lea ecx, [esp + 0xc]
// 00775689  51                   push ecx
// 0077568a  8bce                 mov ecx, esi
// 0077568c  89442410             mov dword ptr [esp + 0x10], eax
// 00775690  e8bbffffff           call 0x775650
// 00775695  5f                   pop edi
// 00775696  5e                   pop esi
// 00775697  c20400               ret 4
// 0077569a  6a00                 push 0
// 0077569c  40                   inc eax
// 0077569d  50                   push eax
// 0077569e  8bce                 mov ecx, esi
// 007756a0  e85bf7ffff           call 0x774e00
// 007756a5  8b0f                 mov ecx, dword ptr [edi]
// 007756a7  8b5604               mov edx, dword ptr [esi + 4]
// 007756aa  8b06                 mov eax, dword ptr [esi]
// 007756ac  5f                   pop edi
// 007756ad  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007756b1  5e                   pop esi
// 007756b2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

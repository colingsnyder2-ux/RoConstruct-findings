// from server: 100% by auto
// roc 2008-06 0066d3c0  unit: RBX::GroupDragTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066d3c0
//
// 0066d3c0  56                   push esi
// 0066d3c1  8bf1                 mov esi, ecx
// 0066d3c3  8b4604               mov eax, dword ptr [esi + 4]
// 0066d3c6  3b4608               cmp eax, dword ptr [esi + 8]
// 0066d3c9  8b0e                 mov ecx, dword ptr [esi]
// 0066d3cb  7d16                 jge 0x66d3e3
// 0066d3cd  8d0481               lea eax, [ecx + eax*4]
// 0066d3d0  85c0                 test eax, eax
// 0066d3d2  7408                 je 0x66d3dc
// 0066d3d4  8b542408             mov edx, dword ptr [esp + 8]
// 0066d3d8  8b0a                 mov ecx, dword ptr [edx]
// 0066d3da  8908                 mov dword ptr [eax], ecx
// 0066d3dc  ff4604               inc dword ptr [esi + 4]
// 0066d3df  5e                   pop esi
// 0066d3e0  c20400               ret 4
// 0066d3e3  57                   push edi
// 0066d3e4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066d3e8  3bf9                 cmp edi, ecx
// 0066d3ea  721e                 jb 0x66d40a
// 0066d3ec  8d1481               lea edx, [ecx + eax*4]
// 0066d3ef  3bfa                 cmp edi, edx
// 0066d3f1  7317                 jae 0x66d40a
// 0066d3f3  8b07                 mov eax, dword ptr [edi]
// 0066d3f5  8d4c240c             lea ecx, [esp + 0xc]
// 0066d3f9  51                   push ecx
// 0066d3fa  8bce                 mov ecx, esi
// 0066d3fc  89442410             mov dword ptr [esp + 0x10], eax
// 0066d400  e8bbffffff           call 0x66d3c0
// 0066d405  5f                   pop edi
// 0066d406  5e                   pop esi
// 0066d407  c20400               ret 4
// 0066d40a  6a00                 push 0
// 0066d40c  40                   inc eax
// 0066d40d  50                   push eax
// 0066d40e  8bce                 mov ecx, esi
// 0066d410  e8bbfbffff           call 0x66cfd0
// 0066d415  8b0f                 mov ecx, dword ptr [edi]
// 0066d417  8b5604               mov edx, dword ptr [esi + 4]
// 0066d41a  8b06                 mov eax, dword ptr [esi]
// 0066d41c  5f                   pop edi
// 0066d41d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0066d421  5e                   pop esi
// 0066d422  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

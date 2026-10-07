// roc 2010-06 00544a40  unit: RBX::RbxG3D::RenderScene  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00544a40
//
// 00544a40  56                   push esi
// 00544a41  8bf1                 mov esi, ecx
// 00544a43  8b4604               mov eax, dword ptr [esi + 4]
// 00544a46  3b4608               cmp eax, dword ptr [esi + 8]
// 00544a49  8b0e                 mov ecx, dword ptr [esi]
// 00544a4b  7d16                 jge 0x544a63
// 00544a4d  8d0481               lea eax, [ecx + eax*4]
// 00544a50  85c0                 test eax, eax
// 00544a52  7408                 je 0x544a5c
// 00544a54  8b542408             mov edx, dword ptr [esp + 8]
// 00544a58  8b0a                 mov ecx, dword ptr [edx]
// 00544a5a  8908                 mov dword ptr [eax], ecx
// 00544a5c  ff4604               inc dword ptr [esi + 4]
// 00544a5f  5e                   pop esi
// 00544a60  c20400               ret 4
// 00544a63  57                   push edi
// 00544a64  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00544a68  3bf9                 cmp edi, ecx
// 00544a6a  721e                 jb 0x544a8a
// 00544a6c  8d1481               lea edx, [ecx + eax*4]
// 00544a6f  3bfa                 cmp edi, edx
// 00544a71  7317                 jae 0x544a8a
// 00544a73  8b07                 mov eax, dword ptr [edi]
// 00544a75  8d4c240c             lea ecx, [esp + 0xc]
// 00544a79  51                   push ecx
// 00544a7a  8bce                 mov ecx, esi
// 00544a7c  89442410             mov dword ptr [esp + 0x10], eax
// 00544a80  e8bbffffff           call 0x544a40
// 00544a85  5f                   pop edi
// 00544a86  5e                   pop esi
// 00544a87  c20400               ret 4
// 00544a8a  6a00                 push 0
// 00544a8c  40                   inc eax
// 00544a8d  50                   push eax
// 00544a8e  8bce                 mov ecx, esi
// 00544a90  e83bf9ffff           call 0x5443d0
// 00544a95  8b0f                 mov ecx, dword ptr [edi]
// 00544a97  8b5604               mov edx, dword ptr [esi + 4]
// 00544a9a  8b06                 mov eax, dword ptr [esi]
// 00544a9c  5f                   pop edi
// 00544a9d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00544aa1  5e                   pop esi
// 00544aa2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

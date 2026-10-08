// from server: 100% by auto
// roc 2009-06 006a7e40  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7e40
//
// 006a7e40  56                   push esi
// 006a7e41  8bf1                 mov esi, ecx
// 006a7e43  8b4604               mov eax, dword ptr [esi + 4]
// 006a7e46  3b4608               cmp eax, dword ptr [esi + 8]
// 006a7e49  8b0e                 mov ecx, dword ptr [esi]
// 006a7e4b  7d16                 jge 0x6a7e63
// 006a7e4d  8d0481               lea eax, [ecx + eax*4]
// 006a7e50  85c0                 test eax, eax
// 006a7e52  7408                 je 0x6a7e5c
// 006a7e54  8b542408             mov edx, dword ptr [esp + 8]
// 006a7e58  8b0a                 mov ecx, dword ptr [edx]
// 006a7e5a  8908                 mov dword ptr [eax], ecx
// 006a7e5c  ff4604               inc dword ptr [esi + 4]
// 006a7e5f  5e                   pop esi
// 006a7e60  c20400               ret 4
// 006a7e63  57                   push edi
// 006a7e64  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a7e68  3bf9                 cmp edi, ecx
// 006a7e6a  721e                 jb 0x6a7e8a
// 006a7e6c  8d1481               lea edx, [ecx + eax*4]
// 006a7e6f  3bfa                 cmp edi, edx
// 006a7e71  7317                 jae 0x6a7e8a
// 006a7e73  8b07                 mov eax, dword ptr [edi]
// 006a7e75  8d4c240c             lea ecx, [esp + 0xc]
// 006a7e79  51                   push ecx
// 006a7e7a  8bce                 mov ecx, esi
// 006a7e7c  89442410             mov dword ptr [esp + 0x10], eax
// 006a7e80  e8bbffffff           call 0x6a7e40
// 006a7e85  5f                   pop edi
// 006a7e86  5e                   pop esi
// 006a7e87  c20400               ret 4
// 006a7e8a  6a00                 push 0
// 006a7e8c  40                   inc eax
// 006a7e8d  50                   push eax
// 006a7e8e  8bce                 mov ecx, esi
// 006a7e90  e87bfbffff           call 0x6a7a10
// 006a7e95  8b0f                 mov ecx, dword ptr [edi]
// 006a7e97  8b5604               mov edx, dword ptr [esi + 4]
// 006a7e9a  8b06                 mov eax, dword ptr [esi]
// 006a7e9c  5f                   pop edi
// 006a7e9d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006a7ea1  5e                   pop esi
// 006a7ea2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

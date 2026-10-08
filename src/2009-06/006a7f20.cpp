// from server: 100% by auto
// roc 2009-06 006a7f20  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7f20
//
// 006a7f20  56                   push esi
// 006a7f21  8bf1                 mov esi, ecx
// 006a7f23  8b4604               mov eax, dword ptr [esi + 4]
// 006a7f26  3b4608               cmp eax, dword ptr [esi + 8]
// 006a7f29  8b0e                 mov ecx, dword ptr [esi]
// 006a7f2b  7d16                 jge 0x6a7f43
// 006a7f2d  8d0481               lea eax, [ecx + eax*4]
// 006a7f30  85c0                 test eax, eax
// 006a7f32  7408                 je 0x6a7f3c
// 006a7f34  8b542408             mov edx, dword ptr [esp + 8]
// 006a7f38  8b0a                 mov ecx, dword ptr [edx]
// 006a7f3a  8908                 mov dword ptr [eax], ecx
// 006a7f3c  ff4604               inc dword ptr [esi + 4]
// 006a7f3f  5e                   pop esi
// 006a7f40  c20400               ret 4
// 006a7f43  57                   push edi
// 006a7f44  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a7f48  3bf9                 cmp edi, ecx
// 006a7f4a  721e                 jb 0x6a7f6a
// 006a7f4c  8d1481               lea edx, [ecx + eax*4]
// 006a7f4f  3bfa                 cmp edi, edx
// 006a7f51  7317                 jae 0x6a7f6a
// 006a7f53  8b07                 mov eax, dword ptr [edi]
// 006a7f55  8d4c240c             lea ecx, [esp + 0xc]
// 006a7f59  51                   push ecx
// 006a7f5a  8bce                 mov ecx, esi
// 006a7f5c  89442410             mov dword ptr [esp + 0x10], eax
// 006a7f60  e8bbffffff           call 0x6a7f20
// 006a7f65  5f                   pop edi
// 006a7f66  5e                   pop esi
// 006a7f67  c20400               ret 4
// 006a7f6a  6a00                 push 0
// 006a7f6c  40                   inc eax
// 006a7f6d  50                   push eax
// 006a7f6e  8bce                 mov ecx, esi
// 006a7f70  e89bfcffff           call 0x6a7c10
// 006a7f75  8b0f                 mov ecx, dword ptr [edi]
// 006a7f77  8b5604               mov edx, dword ptr [esi + 4]
// 006a7f7a  8b06                 mov eax, dword ptr [esi]
// 006a7f7c  5f                   pop edi
// 006a7f7d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006a7f81  5e                   pop esi
// 006a7f82  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

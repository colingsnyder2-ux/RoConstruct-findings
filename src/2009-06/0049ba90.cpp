// roc 2009-06 0049ba90  unit: G3D::Texture  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ba90
//
// 0049ba90  56                   push esi
// 0049ba91  8bf1                 mov esi, ecx
// 0049ba93  8b4604               mov eax, dword ptr [esi + 4]
// 0049ba96  3b4608               cmp eax, dword ptr [esi + 8]
// 0049ba99  8b0e                 mov ecx, dword ptr [esi]
// 0049ba9b  7d16                 jge 0x49bab3
// 0049ba9d  8d0481               lea eax, [ecx + eax*4]
// 0049baa0  85c0                 test eax, eax
// 0049baa2  7408                 je 0x49baac
// 0049baa4  8b542408             mov edx, dword ptr [esp + 8]
// 0049baa8  8b0a                 mov ecx, dword ptr [edx]
// 0049baaa  8908                 mov dword ptr [eax], ecx
// 0049baac  ff4604               inc dword ptr [esi + 4]
// 0049baaf  5e                   pop esi
// 0049bab0  c20400               ret 4
// 0049bab3  57                   push edi
// 0049bab4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049bab8  3bf9                 cmp edi, ecx
// 0049baba  721e                 jb 0x49bada
// 0049babc  8d1481               lea edx, [ecx + eax*4]
// 0049babf  3bfa                 cmp edi, edx
// 0049bac1  7317                 jae 0x49bada
// 0049bac3  8b07                 mov eax, dword ptr [edi]
// 0049bac5  8d4c240c             lea ecx, [esp + 0xc]
// 0049bac9  51                   push ecx
// 0049baca  8bce                 mov ecx, esi
// 0049bacc  89442410             mov dword ptr [esp + 0x10], eax
// 0049bad0  e8bbffffff           call 0x49ba90
// 0049bad5  5f                   pop edi
// 0049bad6  5e                   pop esi
// 0049bad7  c20400               ret 4
// 0049bada  6a00                 push 0
// 0049badc  40                   inc eax
// 0049badd  50                   push eax
// 0049bade  8bce                 mov ecx, esi
// 0049bae0  e80bf9ffff           call 0x49b3f0
// 0049bae5  8b0f                 mov ecx, dword ptr [edi]
// 0049bae7  8b5604               mov edx, dword ptr [esi + 4]
// 0049baea  8b06                 mov eax, dword ptr [esi]
// 0049baec  5f                   pop edi
// 0049baed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0049baf1  5e                   pop esi
// 0049baf2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

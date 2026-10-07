// roc 2009-06 0067eb90  unit: RBX::Mechanism  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067eb90
//
// 0067eb90  56                   push esi
// 0067eb91  8bf1                 mov esi, ecx
// 0067eb93  8b4604               mov eax, dword ptr [esi + 4]
// 0067eb96  3b4608               cmp eax, dword ptr [esi + 8]
// 0067eb99  8b0e                 mov ecx, dword ptr [esi]
// 0067eb9b  7d16                 jge 0x67ebb3
// 0067eb9d  8d0481               lea eax, [ecx + eax*4]
// 0067eba0  85c0                 test eax, eax
// 0067eba2  7408                 je 0x67ebac
// 0067eba4  8b542408             mov edx, dword ptr [esp + 8]
// 0067eba8  8b0a                 mov ecx, dword ptr [edx]
// 0067ebaa  8908                 mov dword ptr [eax], ecx
// 0067ebac  ff4604               inc dword ptr [esi + 4]
// 0067ebaf  5e                   pop esi
// 0067ebb0  c20400               ret 4
// 0067ebb3  57                   push edi
// 0067ebb4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067ebb8  3bf9                 cmp edi, ecx
// 0067ebba  721e                 jb 0x67ebda
// 0067ebbc  8d1481               lea edx, [ecx + eax*4]
// 0067ebbf  3bfa                 cmp edi, edx
// 0067ebc1  7317                 jae 0x67ebda
// 0067ebc3  8b07                 mov eax, dword ptr [edi]
// 0067ebc5  8d4c240c             lea ecx, [esp + 0xc]
// 0067ebc9  51                   push ecx
// 0067ebca  8bce                 mov ecx, esi
// 0067ebcc  89442410             mov dword ptr [esp + 0x10], eax
// 0067ebd0  e8bbffffff           call 0x67eb90
// 0067ebd5  5f                   pop edi
// 0067ebd6  5e                   pop esi
// 0067ebd7  c20400               ret 4
// 0067ebda  6a00                 push 0
// 0067ebdc  40                   inc eax
// 0067ebdd  50                   push eax
// 0067ebde  8bce                 mov ecx, esi
// 0067ebe0  e81bfeffff           call 0x67ea00
// 0067ebe5  8b0f                 mov ecx, dword ptr [edi]
// 0067ebe7  8b5604               mov edx, dword ptr [esi + 4]
// 0067ebea  8b06                 mov eax, dword ptr [esi]
// 0067ebec  5f                   pop edi
// 0067ebed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0067ebf1  5e                   pop esi
// 0067ebf2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

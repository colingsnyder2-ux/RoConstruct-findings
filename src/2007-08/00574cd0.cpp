// from server: 100% by auto
// roc 2007-08 00574cd0  unit: RBX::PartInstance  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574cd0
//
// 00574cd0  56                   push esi
// 00574cd1  8bf1                 mov esi, ecx
// 00574cd3  8b4604               mov eax, dword ptr [esi + 4]
// 00574cd6  3b4608               cmp eax, dword ptr [esi + 8]
// 00574cd9  8b0e                 mov ecx, dword ptr [esi]
// 00574cdb  7d17                 jge 0x574cf4
// 00574cdd  8d0481               lea eax, [ecx + eax*4]
// 00574ce0  85c0                 test eax, eax
// 00574ce2  7408                 je 0x574cec
// 00574ce4  8b542408             mov edx, dword ptr [esp + 8]
// 00574ce8  8b0a                 mov ecx, dword ptr [edx]
// 00574cea  8908                 mov dword ptr [eax], ecx
// 00574cec  83460401             add dword ptr [esi + 4], 1
// 00574cf0  5e                   pop esi
// 00574cf1  c20400               ret 4
// 00574cf4  57                   push edi
// 00574cf5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574cf9  3bf9                 cmp edi, ecx
// 00574cfb  721e                 jb 0x574d1b
// 00574cfd  8d1481               lea edx, [ecx + eax*4]
// 00574d00  3bfa                 cmp edi, edx
// 00574d02  7317                 jae 0x574d1b
// 00574d04  8b07                 mov eax, dword ptr [edi]
// 00574d06  8d4c240c             lea ecx, [esp + 0xc]
// 00574d0a  51                   push ecx
// 00574d0b  8bce                 mov ecx, esi
// 00574d0d  89442410             mov dword ptr [esp + 0x10], eax
// 00574d11  e8baffffff           call 0x574cd0
// 00574d16  5f                   pop edi
// 00574d17  5e                   pop esi
// 00574d18  c20400               ret 4
// 00574d1b  6a00                 push 0
// 00574d1d  83c001               add eax, 1
// 00574d20  50                   push eax
// 00574d21  8bce                 mov ecx, esi
// 00574d23  e848f6ffff           call 0x574370
// 00574d28  8b0f                 mov ecx, dword ptr [edi]
// 00574d2a  8b5604               mov edx, dword ptr [esi + 4]
// 00574d2d  8b06                 mov eax, dword ptr [esi]
// 00574d2f  5f                   pop edi
// 00574d30  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00574d34  5e                   pop esi
// 00574d35  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

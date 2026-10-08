// from server: 100% by auto
// roc 2008-06 006079f0  unit: RBX::BallBlockContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006079f0
//
// 006079f0  56                   push esi
// 006079f1  8bf1                 mov esi, ecx
// 006079f3  8b4604               mov eax, dword ptr [esi + 4]
// 006079f6  3b4608               cmp eax, dword ptr [esi + 8]
// 006079f9  8b0e                 mov ecx, dword ptr [esi]
// 006079fb  7d16                 jge 0x607a13
// 006079fd  8d0481               lea eax, [ecx + eax*4]
// 00607a00  85c0                 test eax, eax
// 00607a02  7408                 je 0x607a0c
// 00607a04  8b542408             mov edx, dword ptr [esp + 8]
// 00607a08  8b0a                 mov ecx, dword ptr [edx]
// 00607a0a  8908                 mov dword ptr [eax], ecx
// 00607a0c  ff4604               inc dword ptr [esi + 4]
// 00607a0f  5e                   pop esi
// 00607a10  c20400               ret 4
// 00607a13  57                   push edi
// 00607a14  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00607a18  3bf9                 cmp edi, ecx
// 00607a1a  721e                 jb 0x607a3a
// 00607a1c  8d1481               lea edx, [ecx + eax*4]
// 00607a1f  3bfa                 cmp edi, edx
// 00607a21  7317                 jae 0x607a3a
// 00607a23  8b07                 mov eax, dword ptr [edi]
// 00607a25  8d4c240c             lea ecx, [esp + 0xc]
// 00607a29  51                   push ecx
// 00607a2a  8bce                 mov ecx, esi
// 00607a2c  89442410             mov dword ptr [esp + 0x10], eax
// 00607a30  e8bbffffff           call 0x6079f0
// 00607a35  5f                   pop edi
// 00607a36  5e                   pop esi
// 00607a37  c20400               ret 4
// 00607a3a  6a00                 push 0
// 00607a3c  40                   inc eax
// 00607a3d  50                   push eax
// 00607a3e  8bce                 mov ecx, esi
// 00607a40  e8abfeffff           call 0x6078f0
// 00607a45  8b0f                 mov ecx, dword ptr [edi]
// 00607a47  8b5604               mov edx, dword ptr [esi + 4]
// 00607a4a  8b06                 mov eax, dword ptr [esi]
// 00607a4c  5f                   pop edi
// 00607a4d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00607a51  5e                   pop esi
// 00607a52  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

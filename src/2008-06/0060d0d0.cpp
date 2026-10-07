// roc 2008-06 0060d0d0  unit: RBX::BallBlockContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d0d0
//
// 0060d0d0  56                   push esi
// 0060d0d1  8bf1                 mov esi, ecx
// 0060d0d3  8b4604               mov eax, dword ptr [esi + 4]
// 0060d0d6  3b4608               cmp eax, dword ptr [esi + 8]
// 0060d0d9  8b0e                 mov ecx, dword ptr [esi]
// 0060d0db  7d16                 jge 0x60d0f3
// 0060d0dd  8d0481               lea eax, [ecx + eax*4]
// 0060d0e0  85c0                 test eax, eax
// 0060d0e2  7408                 je 0x60d0ec
// 0060d0e4  8b542408             mov edx, dword ptr [esp + 8]
// 0060d0e8  8b0a                 mov ecx, dword ptr [edx]
// 0060d0ea  8908                 mov dword ptr [eax], ecx
// 0060d0ec  ff4604               inc dword ptr [esi + 4]
// 0060d0ef  5e                   pop esi
// 0060d0f0  c20400               ret 4
// 0060d0f3  57                   push edi
// 0060d0f4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060d0f8  3bf9                 cmp edi, ecx
// 0060d0fa  721e                 jb 0x60d11a
// 0060d0fc  8d1481               lea edx, [ecx + eax*4]
// 0060d0ff  3bfa                 cmp edi, edx
// 0060d101  7317                 jae 0x60d11a
// 0060d103  8b07                 mov eax, dword ptr [edi]
// 0060d105  8d4c240c             lea ecx, [esp + 0xc]
// 0060d109  51                   push ecx
// 0060d10a  8bce                 mov ecx, esi
// 0060d10c  89442410             mov dword ptr [esp + 0x10], eax
// 0060d110  e8bbffffff           call 0x60d0d0
// 0060d115  5f                   pop edi
// 0060d116  5e                   pop esi
// 0060d117  c20400               ret 4
// 0060d11a  6a00                 push 0
// 0060d11c  40                   inc eax
// 0060d11d  50                   push eax
// 0060d11e  8bce                 mov ecx, esi
// 0060d120  e8abfeffff           call 0x60cfd0
// 0060d125  8b0f                 mov ecx, dword ptr [edi]
// 0060d127  8b5604               mov edx, dword ptr [esi + 4]
// 0060d12a  8b06                 mov eax, dword ptr [esi]
// 0060d12c  5f                   pop edi
// 0060d12d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0060d131  5e                   pop esi
// 0060d132  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

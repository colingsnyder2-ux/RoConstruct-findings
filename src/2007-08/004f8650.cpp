// roc 2007-08 004f8650  unit: G3D::Sphere  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8650
//
// 004f8650  56                   push esi
// 004f8651  8bf1                 mov esi, ecx
// 004f8653  8b4604               mov eax, dword ptr [esi + 4]
// 004f8656  3b4608               cmp eax, dword ptr [esi + 8]
// 004f8659  8b0e                 mov ecx, dword ptr [esi]
// 004f865b  7d17                 jge 0x4f8674
// 004f865d  8d0481               lea eax, [ecx + eax*4]
// 004f8660  85c0                 test eax, eax
// 004f8662  7408                 je 0x4f866c
// 004f8664  8b542408             mov edx, dword ptr [esp + 8]
// 004f8668  8b0a                 mov ecx, dword ptr [edx]
// 004f866a  8908                 mov dword ptr [eax], ecx
// 004f866c  83460401             add dword ptr [esi + 4], 1
// 004f8670  5e                   pop esi
// 004f8671  c20400               ret 4
// 004f8674  57                   push edi
// 004f8675  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f8679  3bf9                 cmp edi, ecx
// 004f867b  721e                 jb 0x4f869b
// 004f867d  8d1481               lea edx, [ecx + eax*4]
// 004f8680  3bfa                 cmp edi, edx
// 004f8682  7317                 jae 0x4f869b
// 004f8684  8b07                 mov eax, dword ptr [edi]
// 004f8686  8d4c240c             lea ecx, [esp + 0xc]
// 004f868a  51                   push ecx
// 004f868b  8bce                 mov ecx, esi
// 004f868d  89442410             mov dword ptr [esp + 0x10], eax
// 004f8691  e8baffffff           call 0x4f8650
// 004f8696  5f                   pop edi
// 004f8697  5e                   pop esi
// 004f8698  c20400               ret 4
// 004f869b  6a00                 push 0
// 004f869d  83c001               add eax, 1
// 004f86a0  50                   push eax
// 004f86a1  8bce                 mov ecx, esi
// 004f86a3  e888f8ffff           call 0x4f7f30
// 004f86a8  8b0f                 mov ecx, dword ptr [edi]
// 004f86aa  8b5604               mov edx, dword ptr [esi + 4]
// 004f86ad  8b06                 mov eax, dword ptr [esi]
// 004f86af  5f                   pop edi
// 004f86b0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004f86b4  5e                   pop esi
// 004f86b5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

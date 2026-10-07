// roc 2007-08 004f48b0  unit: boost::bad_lexical_cast  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f48b0
//
// 004f48b0  56                   push esi
// 004f48b1  8bf1                 mov esi, ecx
// 004f48b3  8b4604               mov eax, dword ptr [esi + 4]
// 004f48b6  3b4608               cmp eax, dword ptr [esi + 8]
// 004f48b9  8b0e                 mov ecx, dword ptr [esi]
// 004f48bb  7d17                 jge 0x4f48d4
// 004f48bd  8d0481               lea eax, [ecx + eax*4]
// 004f48c0  85c0                 test eax, eax
// 004f48c2  7408                 je 0x4f48cc
// 004f48c4  8b542408             mov edx, dword ptr [esp + 8]
// 004f48c8  8b0a                 mov ecx, dword ptr [edx]
// 004f48ca  8908                 mov dword ptr [eax], ecx
// 004f48cc  83460401             add dword ptr [esi + 4], 1
// 004f48d0  5e                   pop esi
// 004f48d1  c20400               ret 4
// 004f48d4  57                   push edi
// 004f48d5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f48d9  3bf9                 cmp edi, ecx
// 004f48db  721e                 jb 0x4f48fb
// 004f48dd  8d1481               lea edx, [ecx + eax*4]
// 004f48e0  3bfa                 cmp edi, edx
// 004f48e2  7317                 jae 0x4f48fb
// 004f48e4  8b07                 mov eax, dword ptr [edi]
// 004f48e6  8d4c240c             lea ecx, [esp + 0xc]
// 004f48ea  51                   push ecx
// 004f48eb  8bce                 mov ecx, esi
// 004f48ed  89442410             mov dword ptr [esp + 0x10], eax
// 004f48f1  e8baffffff           call 0x4f48b0
// 004f48f6  5f                   pop edi
// 004f48f7  5e                   pop esi
// 004f48f8  c20400               ret 4
// 004f48fb  6a00                 push 0
// 004f48fd  83c001               add eax, 1
// 004f4900  50                   push eax
// 004f4901  8bce                 mov ecx, esi
// 004f4903  e89881f8ff           call 0x47caa0
// 004f4908  8b0f                 mov ecx, dword ptr [edi]
// 004f490a  8b5604               mov edx, dword ptr [esi + 4]
// 004f490d  8b06                 mov eax, dword ptr [esi]
// 004f490f  5f                   pop edi
// 004f4910  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004f4914  5e                   pop esi
// 004f4915  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

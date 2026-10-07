// roc 2009-06 0069d8d0  unit: RBX::VGeometryService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069d8d0
//
// 0069d8d0  56                   push esi
// 0069d8d1  8bf1                 mov esi, ecx
// 0069d8d3  8b4604               mov eax, dword ptr [esi + 4]
// 0069d8d6  3b4608               cmp eax, dword ptr [esi + 8]
// 0069d8d9  8b0e                 mov ecx, dword ptr [esi]
// 0069d8db  7d16                 jge 0x69d8f3
// 0069d8dd  8d0481               lea eax, [ecx + eax*4]
// 0069d8e0  85c0                 test eax, eax
// 0069d8e2  7408                 je 0x69d8ec
// 0069d8e4  8b542408             mov edx, dword ptr [esp + 8]
// 0069d8e8  8b0a                 mov ecx, dword ptr [edx]
// 0069d8ea  8908                 mov dword ptr [eax], ecx
// 0069d8ec  ff4604               inc dword ptr [esi + 4]
// 0069d8ef  5e                   pop esi
// 0069d8f0  c20400               ret 4
// 0069d8f3  57                   push edi
// 0069d8f4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069d8f8  3bf9                 cmp edi, ecx
// 0069d8fa  721e                 jb 0x69d91a
// 0069d8fc  8d1481               lea edx, [ecx + eax*4]
// 0069d8ff  3bfa                 cmp edi, edx
// 0069d901  7317                 jae 0x69d91a
// 0069d903  8b07                 mov eax, dword ptr [edi]
// 0069d905  8d4c240c             lea ecx, [esp + 0xc]
// 0069d909  51                   push ecx
// 0069d90a  8bce                 mov ecx, esi
// 0069d90c  89442410             mov dword ptr [esp + 0x10], eax
// 0069d910  e8bbffffff           call 0x69d8d0
// 0069d915  5f                   pop edi
// 0069d916  5e                   pop esi
// 0069d917  c20400               ret 4
// 0069d91a  6a00                 push 0
// 0069d91c  40                   inc eax
// 0069d91d  50                   push eax
// 0069d91e  8bce                 mov ecx, esi
// 0069d920  e8abfeffff           call 0x69d7d0
// 0069d925  8b0f                 mov ecx, dword ptr [edi]
// 0069d927  8b5604               mov edx, dword ptr [esi + 4]
// 0069d92a  8b06                 mov eax, dword ptr [esi]
// 0069d92c  5f                   pop edi
// 0069d92d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0069d931  5e                   pop esi
// 0069d932  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

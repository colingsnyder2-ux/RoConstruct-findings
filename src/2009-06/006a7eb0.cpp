// roc 2009-06 006a7eb0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7eb0
//
// 006a7eb0  56                   push esi
// 006a7eb1  8bf1                 mov esi, ecx
// 006a7eb3  8b4604               mov eax, dword ptr [esi + 4]
// 006a7eb6  3b4608               cmp eax, dword ptr [esi + 8]
// 006a7eb9  8b0e                 mov ecx, dword ptr [esi]
// 006a7ebb  7d16                 jge 0x6a7ed3
// 006a7ebd  8d0481               lea eax, [ecx + eax*4]
// 006a7ec0  85c0                 test eax, eax
// 006a7ec2  7408                 je 0x6a7ecc
// 006a7ec4  8b542408             mov edx, dword ptr [esp + 8]
// 006a7ec8  8b0a                 mov ecx, dword ptr [edx]
// 006a7eca  8908                 mov dword ptr [eax], ecx
// 006a7ecc  ff4604               inc dword ptr [esi + 4]
// 006a7ecf  5e                   pop esi
// 006a7ed0  c20400               ret 4
// 006a7ed3  57                   push edi
// 006a7ed4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a7ed8  3bf9                 cmp edi, ecx
// 006a7eda  721e                 jb 0x6a7efa
// 006a7edc  8d1481               lea edx, [ecx + eax*4]
// 006a7edf  3bfa                 cmp edi, edx
// 006a7ee1  7317                 jae 0x6a7efa
// 006a7ee3  8b07                 mov eax, dword ptr [edi]
// 006a7ee5  8d4c240c             lea ecx, [esp + 0xc]
// 006a7ee9  51                   push ecx
// 006a7eea  8bce                 mov ecx, esi
// 006a7eec  89442410             mov dword ptr [esp + 0x10], eax
// 006a7ef0  e8bbffffff           call 0x6a7eb0
// 006a7ef5  5f                   pop edi
// 006a7ef6  5e                   pop esi
// 006a7ef7  c20400               ret 4
// 006a7efa  6a00                 push 0
// 006a7efc  40                   inc eax
// 006a7efd  50                   push eax
// 006a7efe  8bce                 mov ecx, esi
// 006a7f00  e80bfcffff           call 0x6a7b10
// 006a7f05  8b0f                 mov ecx, dword ptr [edi]
// 006a7f07  8b5604               mov edx, dword ptr [esi + 4]
// 006a7f0a  8b06                 mov eax, dword ptr [esi]
// 006a7f0c  5f                   pop edi
// 006a7f0d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006a7f11  5e                   pop esi
// 006a7f12  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

// roc 2012-06 008e2eb0  unit: RBX::VehicleSeat  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2eb0
//
// 008e2eb0  56                   push esi
// 008e2eb1  8bf1                 mov esi, ecx
// 008e2eb3  8b4604               mov eax, dword ptr [esi + 4]
// 008e2eb6  3b4608               cmp eax, dword ptr [esi + 8]
// 008e2eb9  8b0e                 mov ecx, dword ptr [esi]
// 008e2ebb  7d16                 jge 0x8e2ed3
// 008e2ebd  8d0481               lea eax, [ecx + eax*4]
// 008e2ec0  85c0                 test eax, eax
// 008e2ec2  7408                 je 0x8e2ecc
// 008e2ec4  8b542408             mov edx, dword ptr [esp + 8]
// 008e2ec8  8b0a                 mov ecx, dword ptr [edx]
// 008e2eca  8908                 mov dword ptr [eax], ecx
// 008e2ecc  ff4604               inc dword ptr [esi + 4]
// 008e2ecf  5e                   pop esi
// 008e2ed0  c20400               ret 4
// 008e2ed3  57                   push edi
// 008e2ed4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e2ed8  3bf9                 cmp edi, ecx
// 008e2eda  721e                 jb 0x8e2efa
// 008e2edc  8d1481               lea edx, [ecx + eax*4]
// 008e2edf  3bfa                 cmp edi, edx
// 008e2ee1  7317                 jae 0x8e2efa
// 008e2ee3  8b07                 mov eax, dword ptr [edi]
// 008e2ee5  8d4c240c             lea ecx, [esp + 0xc]
// 008e2ee9  51                   push ecx
// 008e2eea  8bce                 mov ecx, esi
// 008e2eec  89442410             mov dword ptr [esp + 0x10], eax
// 008e2ef0  e8bbffffff           call 0x8e2eb0
// 008e2ef5  5f                   pop edi
// 008e2ef6  5e                   pop esi
// 008e2ef7  c20400               ret 4
// 008e2efa  6a00                 push 0
// 008e2efc  40                   inc eax
// 008e2efd  50                   push eax
// 008e2efe  8bce                 mov ecx, esi
// 008e2f00  e81b58f8ff           call 0x868720
// 008e2f05  8b0f                 mov ecx, dword ptr [edi]
// 008e2f07  8b5604               mov edx, dword ptr [esi + 4]
// 008e2f0a  8b06                 mov eax, dword ptr [esi]
// 008e2f0c  5f                   pop edi
// 008e2f0d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 008e2f11  5e                   pop esi
// 008e2f12  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

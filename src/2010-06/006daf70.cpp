// roc 2010-06 006daf70  unit: RBX::VehicleSeat  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006daf70
//
// 006daf70  56                   push esi
// 006daf71  8bf1                 mov esi, ecx
// 006daf73  8b4604               mov eax, dword ptr [esi + 4]
// 006daf76  3b4608               cmp eax, dword ptr [esi + 8]
// 006daf79  8b0e                 mov ecx, dword ptr [esi]
// 006daf7b  7d16                 jge 0x6daf93
// 006daf7d  8d0481               lea eax, [ecx + eax*4]
// 006daf80  85c0                 test eax, eax
// 006daf82  7408                 je 0x6daf8c
// 006daf84  8b542408             mov edx, dword ptr [esp + 8]
// 006daf88  8b0a                 mov ecx, dword ptr [edx]
// 006daf8a  8908                 mov dword ptr [eax], ecx
// 006daf8c  ff4604               inc dword ptr [esi + 4]
// 006daf8f  5e                   pop esi
// 006daf90  c20400               ret 4
// 006daf93  57                   push edi
// 006daf94  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006daf98  3bf9                 cmp edi, ecx
// 006daf9a  721e                 jb 0x6dafba
// 006daf9c  8d1481               lea edx, [ecx + eax*4]
// 006daf9f  3bfa                 cmp edi, edx
// 006dafa1  7317                 jae 0x6dafba
// 006dafa3  8b07                 mov eax, dword ptr [edi]
// 006dafa5  8d4c240c             lea ecx, [esp + 0xc]
// 006dafa9  51                   push ecx
// 006dafaa  8bce                 mov ecx, esi
// 006dafac  89442410             mov dword ptr [esp + 0x10], eax
// 006dafb0  e8bbffffff           call 0x6daf70
// 006dafb5  5f                   pop edi
// 006dafb6  5e                   pop esi
// 006dafb7  c20400               ret 4
// 006dafba  6a00                 push 0
// 006dafbc  40                   inc eax
// 006dafbd  50                   push eax
// 006dafbe  8bce                 mov ecx, esi
// 006dafc0  e88bf9ffff           call 0x6da950
// 006dafc5  8b0f                 mov ecx, dword ptr [edi]
// 006dafc7  8b5604               mov edx, dword ptr [esi + 4]
// 006dafca  8b06                 mov eax, dword ptr [esi]
// 006dafcc  5f                   pop edi
// 006dafcd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006dafd1  5e                   pop esi
// 006dafd2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

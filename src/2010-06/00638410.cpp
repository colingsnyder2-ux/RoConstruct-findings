// from server: 100% by auto
// roc 2010-06 00638410  unit: RBX::P8PartInstance::?$GetSetImpl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638410
//
// 00638410  56                   push esi
// 00638411  8bf1                 mov esi, ecx
// 00638413  8b4604               mov eax, dword ptr [esi + 4]
// 00638416  3b4608               cmp eax, dword ptr [esi + 8]
// 00638419  8b0e                 mov ecx, dword ptr [esi]
// 0063841b  7d16                 jge 0x638433
// 0063841d  8d0481               lea eax, [ecx + eax*4]
// 00638420  85c0                 test eax, eax
// 00638422  7408                 je 0x63842c
// 00638424  8b542408             mov edx, dword ptr [esp + 8]
// 00638428  8b0a                 mov ecx, dword ptr [edx]
// 0063842a  8908                 mov dword ptr [eax], ecx
// 0063842c  ff4604               inc dword ptr [esi + 4]
// 0063842f  5e                   pop esi
// 00638430  c20400               ret 4
// 00638433  57                   push edi
// 00638434  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00638438  3bf9                 cmp edi, ecx
// 0063843a  721e                 jb 0x63845a
// 0063843c  8d1481               lea edx, [ecx + eax*4]
// 0063843f  3bfa                 cmp edi, edx
// 00638441  7317                 jae 0x63845a
// 00638443  8b07                 mov eax, dword ptr [edi]
// 00638445  8d4c240c             lea ecx, [esp + 0xc]
// 00638449  51                   push ecx
// 0063844a  8bce                 mov ecx, esi
// 0063844c  89442410             mov dword ptr [esp + 0x10], eax
// 00638450  e8bbffffff           call 0x638410
// 00638455  5f                   pop edi
// 00638456  5e                   pop esi
// 00638457  c20400               ret 4
// 0063845a  6a00                 push 0
// 0063845c  40                   inc eax
// 0063845d  50                   push eax
// 0063845e  8bce                 mov ecx, esi
// 00638460  e86b9dfcff           call 0x6021d0
// 00638465  8b0f                 mov ecx, dword ptr [edi]
// 00638467  8b5604               mov edx, dword ptr [esi + 4]
// 0063846a  8b06                 mov eax, dword ptr [esi]
// 0063846c  5f                   pop edi
// 0063846d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00638471  5e                   pop esi
// 00638472  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

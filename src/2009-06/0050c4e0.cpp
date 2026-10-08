// from server: 100% by auto
// roc 2009-06 0050c4e0  unit: RBX::Network::RoundRobinPhysicsSender  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050c4e0
//
// 0050c4e0  56                   push esi
// 0050c4e1  8bf1                 mov esi, ecx
// 0050c4e3  8b4604               mov eax, dword ptr [esi + 4]
// 0050c4e6  3b4608               cmp eax, dword ptr [esi + 8]
// 0050c4e9  8b0e                 mov ecx, dword ptr [esi]
// 0050c4eb  7d16                 jge 0x50c503
// 0050c4ed  8d0481               lea eax, [ecx + eax*4]
// 0050c4f0  85c0                 test eax, eax
// 0050c4f2  7408                 je 0x50c4fc
// 0050c4f4  8b542408             mov edx, dword ptr [esp + 8]
// 0050c4f8  8b0a                 mov ecx, dword ptr [edx]
// 0050c4fa  8908                 mov dword ptr [eax], ecx
// 0050c4fc  ff4604               inc dword ptr [esi + 4]
// 0050c4ff  5e                   pop esi
// 0050c500  c20400               ret 4
// 0050c503  57                   push edi
// 0050c504  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050c508  3bf9                 cmp edi, ecx
// 0050c50a  721e                 jb 0x50c52a
// 0050c50c  8d1481               lea edx, [ecx + eax*4]
// 0050c50f  3bfa                 cmp edi, edx
// 0050c511  7317                 jae 0x50c52a
// 0050c513  8b07                 mov eax, dword ptr [edi]
// 0050c515  8d4c240c             lea ecx, [esp + 0xc]
// 0050c519  51                   push ecx
// 0050c51a  8bce                 mov ecx, esi
// 0050c51c  89442410             mov dword ptr [esp + 0x10], eax
// 0050c520  e8bbffffff           call 0x50c4e0
// 0050c525  5f                   pop edi
// 0050c526  5e                   pop esi
// 0050c527  c20400               ret 4
// 0050c52a  6a00                 push 0
// 0050c52c  40                   inc eax
// 0050c52d  50                   push eax
// 0050c52e  8bce                 mov ecx, esi
// 0050c530  e87b78fdff           call 0x4e3db0
// 0050c535  8b0f                 mov ecx, dword ptr [edi]
// 0050c537  8b5604               mov edx, dword ptr [esi + 4]
// 0050c53a  8b06                 mov eax, dword ptr [esi]
// 0050c53c  5f                   pop edi
// 0050c53d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0050c541  5e                   pop esi
// 0050c542  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

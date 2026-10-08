// from server: 100% by auto
// roc 2010-06 0078c940  unit: RBX::SpatialFilter  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c940
//
// 0078c940  56                   push esi
// 0078c941  8bf1                 mov esi, ecx
// 0078c943  8b4604               mov eax, dword ptr [esi + 4]
// 0078c946  3b4608               cmp eax, dword ptr [esi + 8]
// 0078c949  8b0e                 mov ecx, dword ptr [esi]
// 0078c94b  7d16                 jge 0x78c963
// 0078c94d  8d0481               lea eax, [ecx + eax*4]
// 0078c950  85c0                 test eax, eax
// 0078c952  7408                 je 0x78c95c
// 0078c954  8b542408             mov edx, dword ptr [esp + 8]
// 0078c958  8b0a                 mov ecx, dword ptr [edx]
// 0078c95a  8908                 mov dword ptr [eax], ecx
// 0078c95c  ff4604               inc dword ptr [esi + 4]
// 0078c95f  5e                   pop esi
// 0078c960  c20400               ret 4
// 0078c963  57                   push edi
// 0078c964  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0078c968  3bf9                 cmp edi, ecx
// 0078c96a  721e                 jb 0x78c98a
// 0078c96c  8d1481               lea edx, [ecx + eax*4]
// 0078c96f  3bfa                 cmp edi, edx
// 0078c971  7317                 jae 0x78c98a
// 0078c973  8b07                 mov eax, dword ptr [edi]
// 0078c975  8d4c240c             lea ecx, [esp + 0xc]
// 0078c979  51                   push ecx
// 0078c97a  8bce                 mov ecx, esi
// 0078c97c  89442410             mov dword ptr [esp + 0x10], eax
// 0078c980  e8bbffffff           call 0x78c940
// 0078c985  5f                   pop edi
// 0078c986  5e                   pop esi
// 0078c987  c20400               ret 4
// 0078c98a  6a00                 push 0
// 0078c98c  40                   inc eax
// 0078c98d  50                   push eax
// 0078c98e  8bce                 mov ecx, esi
// 0078c990  e8cbfcffff           call 0x78c660
// 0078c995  8b0f                 mov ecx, dword ptr [edi]
// 0078c997  8b5604               mov edx, dword ptr [esi + 4]
// 0078c99a  8b06                 mov eax, dword ptr [esi]
// 0078c99c  5f                   pop edi
// 0078c99d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0078c9a1  5e                   pop esi
// 0078c9a2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

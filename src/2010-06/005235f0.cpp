// from server: 100% by auto
// roc 2010-06 005235f0  unit: RBX::MeshGen  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005235f0
//
// 005235f0  56                   push esi
// 005235f1  8bf1                 mov esi, ecx
// 005235f3  8b4604               mov eax, dword ptr [esi + 4]
// 005235f6  3b4608               cmp eax, dword ptr [esi + 8]
// 005235f9  8b0e                 mov ecx, dword ptr [esi]
// 005235fb  7d16                 jge 0x523613
// 005235fd  8d0481               lea eax, [ecx + eax*4]
// 00523600  85c0                 test eax, eax
// 00523602  7408                 je 0x52360c
// 00523604  8b542408             mov edx, dword ptr [esp + 8]
// 00523608  8b0a                 mov ecx, dword ptr [edx]
// 0052360a  8908                 mov dword ptr [eax], ecx
// 0052360c  ff4604               inc dword ptr [esi + 4]
// 0052360f  5e                   pop esi
// 00523610  c20400               ret 4
// 00523613  57                   push edi
// 00523614  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00523618  3bf9                 cmp edi, ecx
// 0052361a  721e                 jb 0x52363a
// 0052361c  8d1481               lea edx, [ecx + eax*4]
// 0052361f  3bfa                 cmp edi, edx
// 00523621  7317                 jae 0x52363a
// 00523623  8b07                 mov eax, dword ptr [edi]
// 00523625  8d4c240c             lea ecx, [esp + 0xc]
// 00523629  51                   push ecx
// 0052362a  8bce                 mov ecx, esi
// 0052362c  89442410             mov dword ptr [esp + 0x10], eax
// 00523630  e8bbffffff           call 0x5235f0
// 00523635  5f                   pop edi
// 00523636  5e                   pop esi
// 00523637  c20400               ret 4
// 0052363a  6a00                 push 0
// 0052363c  40                   inc eax
// 0052363d  50                   push eax
// 0052363e  8bce                 mov ecx, esi
// 00523640  e8db55f6ff           call 0x488c20
// 00523645  8b0f                 mov ecx, dword ptr [edi]
// 00523647  8b5604               mov edx, dword ptr [esi + 4]
// 0052364a  8b06                 mov eax, dword ptr [esi]
// 0052364c  5f                   pop edi
// 0052364d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00523651  5e                   pop esi
// 00523652  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

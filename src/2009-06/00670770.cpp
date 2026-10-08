// from server: 100% by auto
// roc 2009-06 00670770  unit: RBX::Primitive  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00670770
//
// 00670770  56                   push esi
// 00670771  8bf1                 mov esi, ecx
// 00670773  8b4604               mov eax, dword ptr [esi + 4]
// 00670776  3b4608               cmp eax, dword ptr [esi + 8]
// 00670779  8b0e                 mov ecx, dword ptr [esi]
// 0067077b  7d16                 jge 0x670793
// 0067077d  8d0481               lea eax, [ecx + eax*4]
// 00670780  85c0                 test eax, eax
// 00670782  7408                 je 0x67078c
// 00670784  8b542408             mov edx, dword ptr [esp + 8]
// 00670788  8b0a                 mov ecx, dword ptr [edx]
// 0067078a  8908                 mov dword ptr [eax], ecx
// 0067078c  ff4604               inc dword ptr [esi + 4]
// 0067078f  5e                   pop esi
// 00670790  c20400               ret 4
// 00670793  57                   push edi
// 00670794  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00670798  3bf9                 cmp edi, ecx
// 0067079a  721e                 jb 0x6707ba
// 0067079c  8d1481               lea edx, [ecx + eax*4]
// 0067079f  3bfa                 cmp edi, edx
// 006707a1  7317                 jae 0x6707ba
// 006707a3  8b07                 mov eax, dword ptr [edi]
// 006707a5  8d4c240c             lea ecx, [esp + 0xc]
// 006707a9  51                   push ecx
// 006707aa  8bce                 mov ecx, esi
// 006707ac  89442410             mov dword ptr [esp + 0x10], eax
// 006707b0  e8bbffffff           call 0x670770
// 006707b5  5f                   pop edi
// 006707b6  5e                   pop esi
// 006707b7  c20400               ret 4
// 006707ba  6a00                 push 0
// 006707bc  40                   inc eax
// 006707bd  50                   push eax
// 006707be  8bce                 mov ecx, esi
// 006707c0  e8abfeffff           call 0x670670
// 006707c5  8b0f                 mov ecx, dword ptr [edi]
// 006707c7  8b5604               mov edx, dword ptr [esi + 4]
// 006707ca  8b06                 mov eax, dword ptr [esi]
// 006707cc  5f                   pop edi
// 006707cd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006707d1  5e                   pop esi
// 006707d2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

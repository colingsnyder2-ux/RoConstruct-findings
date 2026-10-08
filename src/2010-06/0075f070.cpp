// from server: 100% by auto
// roc 2010-06 0075f070  unit: RBX::SleepStage  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075f070
//
// 0075f070  56                   push esi
// 0075f071  8bf1                 mov esi, ecx
// 0075f073  8b4604               mov eax, dword ptr [esi + 4]
// 0075f076  3b4608               cmp eax, dword ptr [esi + 8]
// 0075f079  8b0e                 mov ecx, dword ptr [esi]
// 0075f07b  7d16                 jge 0x75f093
// 0075f07d  8d0481               lea eax, [ecx + eax*4]
// 0075f080  85c0                 test eax, eax
// 0075f082  7408                 je 0x75f08c
// 0075f084  8b542408             mov edx, dword ptr [esp + 8]
// 0075f088  8b0a                 mov ecx, dword ptr [edx]
// 0075f08a  8908                 mov dword ptr [eax], ecx
// 0075f08c  ff4604               inc dword ptr [esi + 4]
// 0075f08f  5e                   pop esi
// 0075f090  c20400               ret 4
// 0075f093  57                   push edi
// 0075f094  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075f098  3bf9                 cmp edi, ecx
// 0075f09a  721e                 jb 0x75f0ba
// 0075f09c  8d1481               lea edx, [ecx + eax*4]
// 0075f09f  3bfa                 cmp edi, edx
// 0075f0a1  7317                 jae 0x75f0ba
// 0075f0a3  8b07                 mov eax, dword ptr [edi]
// 0075f0a5  8d4c240c             lea ecx, [esp + 0xc]
// 0075f0a9  51                   push ecx
// 0075f0aa  8bce                 mov ecx, esi
// 0075f0ac  89442410             mov dword ptr [esp + 0x10], eax
// 0075f0b0  e8bbffffff           call 0x75f070
// 0075f0b5  5f                   pop edi
// 0075f0b6  5e                   pop esi
// 0075f0b7  c20400               ret 4
// 0075f0ba  6a00                 push 0
// 0075f0bc  40                   inc eax
// 0075f0bd  50                   push eax
// 0075f0be  8bce                 mov ecx, esi
// 0075f0c0  e85bfeffff           call 0x75ef20
// 0075f0c5  8b0f                 mov ecx, dword ptr [edi]
// 0075f0c7  8b5604               mov edx, dword ptr [esi + 4]
// 0075f0ca  8b06                 mov eax, dword ptr [esi]
// 0075f0cc  5f                   pop edi
// 0075f0cd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0075f0d1  5e                   pop esi
// 0075f0d2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

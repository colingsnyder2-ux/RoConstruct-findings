// from server: 100% by auto
// roc 2007-08 00603820  unit: RBX::JointStage  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00603820
//
// 00603820  56                   push esi
// 00603821  8bf1                 mov esi, ecx
// 00603823  8b4604               mov eax, dword ptr [esi + 4]
// 00603826  3b4608               cmp eax, dword ptr [esi + 8]
// 00603829  8b0e                 mov ecx, dword ptr [esi]
// 0060382b  7d17                 jge 0x603844
// 0060382d  8d0481               lea eax, [ecx + eax*4]
// 00603830  85c0                 test eax, eax
// 00603832  7408                 je 0x60383c
// 00603834  8b542408             mov edx, dword ptr [esp + 8]
// 00603838  8b0a                 mov ecx, dword ptr [edx]
// 0060383a  8908                 mov dword ptr [eax], ecx
// 0060383c  83460401             add dword ptr [esi + 4], 1
// 00603840  5e                   pop esi
// 00603841  c20400               ret 4
// 00603844  57                   push edi
// 00603845  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00603849  3bf9                 cmp edi, ecx
// 0060384b  721e                 jb 0x60386b
// 0060384d  8d1481               lea edx, [ecx + eax*4]
// 00603850  3bfa                 cmp edi, edx
// 00603852  7317                 jae 0x60386b
// 00603854  8b07                 mov eax, dword ptr [edi]
// 00603856  8d4c240c             lea ecx, [esp + 0xc]
// 0060385a  51                   push ecx
// 0060385b  8bce                 mov ecx, esi
// 0060385d  89442410             mov dword ptr [esp + 0x10], eax
// 00603861  e8baffffff           call 0x603820
// 00603866  5f                   pop edi
// 00603867  5e                   pop esi
// 00603868  c20400               ret 4
// 0060386b  6a00                 push 0
// 0060386d  83c001               add eax, 1
// 00603870  50                   push eax
// 00603871  8bce                 mov ecx, esi
// 00603873  e8a8feffff           call 0x603720
// 00603878  8b0f                 mov ecx, dword ptr [edi]
// 0060387a  8b5604               mov edx, dword ptr [esi + 4]
// 0060387d  8b06                 mov eax, dword ptr [esi]
// 0060387f  5f                   pop edi
// 00603880  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00603884  5e                   pop esi
// 00603885  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

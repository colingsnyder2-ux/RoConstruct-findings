// from server: 100% by auto
// roc 2009-06 006cec70  unit: RBX::Clump  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cec70
//
// 006cec70  56                   push esi
// 006cec71  8bf1                 mov esi, ecx
// 006cec73  8b4604               mov eax, dword ptr [esi + 4]
// 006cec76  3b4608               cmp eax, dword ptr [esi + 8]
// 006cec79  8b0e                 mov ecx, dword ptr [esi]
// 006cec7b  7d16                 jge 0x6cec93
// 006cec7d  8d0481               lea eax, [ecx + eax*4]
// 006cec80  85c0                 test eax, eax
// 006cec82  7408                 je 0x6cec8c
// 006cec84  8b542408             mov edx, dword ptr [esp + 8]
// 006cec88  8b0a                 mov ecx, dword ptr [edx]
// 006cec8a  8908                 mov dword ptr [eax], ecx
// 006cec8c  ff4604               inc dword ptr [esi + 4]
// 006cec8f  5e                   pop esi
// 006cec90  c20400               ret 4
// 006cec93  57                   push edi
// 006cec94  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006cec98  3bf9                 cmp edi, ecx
// 006cec9a  721e                 jb 0x6cecba
// 006cec9c  8d1481               lea edx, [ecx + eax*4]
// 006cec9f  3bfa                 cmp edi, edx
// 006ceca1  7317                 jae 0x6cecba
// 006ceca3  8b07                 mov eax, dword ptr [edi]
// 006ceca5  8d4c240c             lea ecx, [esp + 0xc]
// 006ceca9  51                   push ecx
// 006cecaa  8bce                 mov ecx, esi
// 006cecac  89442410             mov dword ptr [esp + 0x10], eax
// 006cecb0  e8bbffffff           call 0x6cec70
// 006cecb5  5f                   pop edi
// 006cecb6  5e                   pop esi
// 006cecb7  c20400               ret 4
// 006cecba  6a00                 push 0
// 006cecbc  40                   inc eax
// 006cecbd  50                   push eax
// 006cecbe  8bce                 mov ecx, esi
// 006cecc0  e8ab73faff           call 0x676070
// 006cecc5  8b0f                 mov ecx, dword ptr [edi]
// 006cecc7  8b5604               mov edx, dword ptr [esi + 4]
// 006cecca  8b06                 mov eax, dword ptr [esi]
// 006ceccc  5f                   pop edi
// 006ceccd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006cecd1  5e                   pop esi
// 006cecd2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

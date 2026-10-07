// roc 2008-06 005fab50  unit: UString_sink::?$stream_buffer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fab50
//
// 005fab50  56                   push esi
// 005fab51  8bf1                 mov esi, ecx
// 005fab53  8b4604               mov eax, dword ptr [esi + 4]
// 005fab56  3b4608               cmp eax, dword ptr [esi + 8]
// 005fab59  8b0e                 mov ecx, dword ptr [esi]
// 005fab5b  7d16                 jge 0x5fab73
// 005fab5d  8d0481               lea eax, [ecx + eax*4]
// 005fab60  85c0                 test eax, eax
// 005fab62  7408                 je 0x5fab6c
// 005fab64  8b542408             mov edx, dword ptr [esp + 8]
// 005fab68  8b0a                 mov ecx, dword ptr [edx]
// 005fab6a  8908                 mov dword ptr [eax], ecx
// 005fab6c  ff4604               inc dword ptr [esi + 4]
// 005fab6f  5e                   pop esi
// 005fab70  c20400               ret 4
// 005fab73  57                   push edi
// 005fab74  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fab78  3bf9                 cmp edi, ecx
// 005fab7a  721e                 jb 0x5fab9a
// 005fab7c  8d1481               lea edx, [ecx + eax*4]
// 005fab7f  3bfa                 cmp edi, edx
// 005fab81  7317                 jae 0x5fab9a
// 005fab83  8b07                 mov eax, dword ptr [edi]
// 005fab85  8d4c240c             lea ecx, [esp + 0xc]
// 005fab89  51                   push ecx
// 005fab8a  8bce                 mov ecx, esi
// 005fab8c  89442410             mov dword ptr [esp + 0x10], eax
// 005fab90  e8bbffffff           call 0x5fab50
// 005fab95  5f                   pop edi
// 005fab96  5e                   pop esi
// 005fab97  c20400               ret 4
// 005fab9a  6a00                 push 0
// 005fab9c  40                   inc eax
// 005fab9d  50                   push eax
// 005fab9e  8bce                 mov ecx, esi
// 005faba0  e8cbfaffff           call 0x5fa670
// 005faba5  8b0f                 mov ecx, dword ptr [edi]
// 005faba7  8b5604               mov edx, dword ptr [esi + 4]
// 005fabaa  8b06                 mov eax, dword ptr [esi]
// 005fabac  5f                   pop edi
// 005fabad  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005fabb1  5e                   pop esi
// 005fabb2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

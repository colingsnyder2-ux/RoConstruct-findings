// roc 2010-06 00767450  unit: RBX::FilterStairs  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00767450
//
// 00767450  56                   push esi
// 00767451  8bf1                 mov esi, ecx
// 00767453  8b4604               mov eax, dword ptr [esi + 4]
// 00767456  3b4608               cmp eax, dword ptr [esi + 8]
// 00767459  8b0e                 mov ecx, dword ptr [esi]
// 0076745b  7d16                 jge 0x767473
// 0076745d  8d0481               lea eax, [ecx + eax*4]
// 00767460  85c0                 test eax, eax
// 00767462  7408                 je 0x76746c
// 00767464  8b542408             mov edx, dword ptr [esp + 8]
// 00767468  8b0a                 mov ecx, dword ptr [edx]
// 0076746a  8908                 mov dword ptr [eax], ecx
// 0076746c  ff4604               inc dword ptr [esi + 4]
// 0076746f  5e                   pop esi
// 00767470  c20400               ret 4
// 00767473  57                   push edi
// 00767474  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00767478  3bf9                 cmp edi, ecx
// 0076747a  721e                 jb 0x76749a
// 0076747c  8d1481               lea edx, [ecx + eax*4]
// 0076747f  3bfa                 cmp edi, edx
// 00767481  7317                 jae 0x76749a
// 00767483  8b07                 mov eax, dword ptr [edi]
// 00767485  8d4c240c             lea ecx, [esp + 0xc]
// 00767489  51                   push ecx
// 0076748a  8bce                 mov ecx, esi
// 0076748c  89442410             mov dword ptr [esp + 0x10], eax
// 00767490  e8bbffffff           call 0x767450
// 00767495  5f                   pop edi
// 00767496  5e                   pop esi
// 00767497  c20400               ret 4
// 0076749a  6a00                 push 0
// 0076749c  40                   inc eax
// 0076749d  50                   push eax
// 0076749e  8bce                 mov ecx, esi
// 007674a0  e84bfbffff           call 0x766ff0
// 007674a5  8b0f                 mov ecx, dword ptr [edi]
// 007674a7  8b5604               mov edx, dword ptr [esi + 4]
// 007674aa  8b06                 mov eax, dword ptr [esi]
// 007674ac  5f                   pop edi
// 007674ad  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007674b1  5e                   pop esi
// 007674b2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

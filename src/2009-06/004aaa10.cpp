// from server: 100% by auto
// roc 2009-06 004aaa10  unit: G3D::Win32Window  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aaa10
//
// 004aaa10  56                   push esi
// 004aaa11  8bf1                 mov esi, ecx
// 004aaa13  8b4604               mov eax, dword ptr [esi + 4]
// 004aaa16  3b4608               cmp eax, dword ptr [esi + 8]
// 004aaa19  8b0e                 mov ecx, dword ptr [esi]
// 004aaa1b  7d16                 jge 0x4aaa33
// 004aaa1d  8d0481               lea eax, [ecx + eax*4]
// 004aaa20  85c0                 test eax, eax
// 004aaa22  7408                 je 0x4aaa2c
// 004aaa24  8b542408             mov edx, dword ptr [esp + 8]
// 004aaa28  8b0a                 mov ecx, dword ptr [edx]
// 004aaa2a  8908                 mov dword ptr [eax], ecx
// 004aaa2c  ff4604               inc dword ptr [esi + 4]
// 004aaa2f  5e                   pop esi
// 004aaa30  c20400               ret 4
// 004aaa33  57                   push edi
// 004aaa34  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004aaa38  3bf9                 cmp edi, ecx
// 004aaa3a  721e                 jb 0x4aaa5a
// 004aaa3c  8d1481               lea edx, [ecx + eax*4]
// 004aaa3f  3bfa                 cmp edi, edx
// 004aaa41  7317                 jae 0x4aaa5a
// 004aaa43  8b07                 mov eax, dword ptr [edi]
// 004aaa45  8d4c240c             lea ecx, [esp + 0xc]
// 004aaa49  51                   push ecx
// 004aaa4a  8bce                 mov ecx, esi
// 004aaa4c  89442410             mov dword ptr [esp + 0x10], eax
// 004aaa50  e8bbffffff           call 0x4aaa10
// 004aaa55  5f                   pop edi
// 004aaa56  5e                   pop esi
// 004aaa57  c20400               ret 4
// 004aaa5a  6a00                 push 0
// 004aaa5c  40                   inc eax
// 004aaa5d  50                   push eax
// 004aaa5e  8bce                 mov ecx, esi
// 004aaa60  e86bfaffff           call 0x4aa4d0
// 004aaa65  8b0f                 mov ecx, dword ptr [edi]
// 004aaa67  8b5604               mov edx, dword ptr [esi + 4]
// 004aaa6a  8b06                 mov eax, dword ptr [esi]
// 004aaa6c  5f                   pop edi
// 004aaa6d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004aaa71  5e                   pop esi
// 004aaa72  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

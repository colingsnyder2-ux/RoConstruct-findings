// from server: 100% by auto
// roc 2009-06 0065cf10  unit: RBX::P8PartInstance::?$GetSetImpl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065cf10
//
// 0065cf10  56                   push esi
// 0065cf11  8bf1                 mov esi, ecx
// 0065cf13  8b4604               mov eax, dword ptr [esi + 4]
// 0065cf16  3b4608               cmp eax, dword ptr [esi + 8]
// 0065cf19  8b0e                 mov ecx, dword ptr [esi]
// 0065cf1b  7d16                 jge 0x65cf33
// 0065cf1d  8d0481               lea eax, [ecx + eax*4]
// 0065cf20  85c0                 test eax, eax
// 0065cf22  7408                 je 0x65cf2c
// 0065cf24  8b542408             mov edx, dword ptr [esp + 8]
// 0065cf28  8b0a                 mov ecx, dword ptr [edx]
// 0065cf2a  8908                 mov dword ptr [eax], ecx
// 0065cf2c  ff4604               inc dword ptr [esi + 4]
// 0065cf2f  5e                   pop esi
// 0065cf30  c20400               ret 4
// 0065cf33  57                   push edi
// 0065cf34  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065cf38  3bf9                 cmp edi, ecx
// 0065cf3a  721e                 jb 0x65cf5a
// 0065cf3c  8d1481               lea edx, [ecx + eax*4]
// 0065cf3f  3bfa                 cmp edi, edx
// 0065cf41  7317                 jae 0x65cf5a
// 0065cf43  8b07                 mov eax, dword ptr [edi]
// 0065cf45  8d4c240c             lea ecx, [esp + 0xc]
// 0065cf49  51                   push ecx
// 0065cf4a  8bce                 mov ecx, esi
// 0065cf4c  89442410             mov dword ptr [esp + 0x10], eax
// 0065cf50  e8bbffffff           call 0x65cf10
// 0065cf55  5f                   pop edi
// 0065cf56  5e                   pop esi
// 0065cf57  c20400               ret 4
// 0065cf5a  6a00                 push 0
// 0065cf5c  40                   inc eax
// 0065cf5d  50                   push eax
// 0065cf5e  8bce                 mov ecx, esi
// 0065cf60  e81beafcff           call 0x62b980
// 0065cf65  8b0f                 mov ecx, dword ptr [edi]
// 0065cf67  8b5604               mov edx, dword ptr [esi + 4]
// 0065cf6a  8b06                 mov eax, dword ptr [esi]
// 0065cf6c  5f                   pop edi
// 0065cf6d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0065cf71  5e                   pop esi
// 0065cf72  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

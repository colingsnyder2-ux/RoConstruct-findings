// from server: 100% by auto
// roc 2007-08 0062c2f0  unit: RBX::GroupDragTool  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062c2f0
//
// 0062c2f0  56                   push esi
// 0062c2f1  8bf1                 mov esi, ecx
// 0062c2f3  8b4604               mov eax, dword ptr [esi + 4]
// 0062c2f6  3b4608               cmp eax, dword ptr [esi + 8]
// 0062c2f9  8b0e                 mov ecx, dword ptr [esi]
// 0062c2fb  7d17                 jge 0x62c314
// 0062c2fd  8d0481               lea eax, [ecx + eax*4]
// 0062c300  85c0                 test eax, eax
// 0062c302  7408                 je 0x62c30c
// 0062c304  8b542408             mov edx, dword ptr [esp + 8]
// 0062c308  8b0a                 mov ecx, dword ptr [edx]
// 0062c30a  8908                 mov dword ptr [eax], ecx
// 0062c30c  83460401             add dword ptr [esi + 4], 1
// 0062c310  5e                   pop esi
// 0062c311  c20400               ret 4
// 0062c314  57                   push edi
// 0062c315  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062c319  3bf9                 cmp edi, ecx
// 0062c31b  721e                 jb 0x62c33b
// 0062c31d  8d1481               lea edx, [ecx + eax*4]
// 0062c320  3bfa                 cmp edi, edx
// 0062c322  7317                 jae 0x62c33b
// 0062c324  8b07                 mov eax, dword ptr [edi]
// 0062c326  8d4c240c             lea ecx, [esp + 0xc]
// 0062c32a  51                   push ecx
// 0062c32b  8bce                 mov ecx, esi
// 0062c32d  89442410             mov dword ptr [esp + 0x10], eax
// 0062c331  e8baffffff           call 0x62c2f0
// 0062c336  5f                   pop edi
// 0062c337  5e                   pop esi
// 0062c338  c20400               ret 4
// 0062c33b  6a00                 push 0
// 0062c33d  83c001               add eax, 1
// 0062c340  50                   push eax
// 0062c341  8bce                 mov ecx, esi
// 0062c343  e8c8fbffff           call 0x62bf10
// 0062c348  8b0f                 mov ecx, dword ptr [edi]
// 0062c34a  8b5604               mov edx, dword ptr [esi + 4]
// 0062c34d  8b06                 mov eax, dword ptr [esi]
// 0062c34f  5f                   pop edi
// 0062c350  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0062c354  5e                   pop esi
// 0062c355  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp

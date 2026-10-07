// roc 2009-06 004aa890  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aa890
//
// 004aa890  53                   push ebx
// 004aa891  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004aa895  56                   push esi
// 004aa896  8bf1                 mov esi, ecx
// 004aa898  8b06                 mov eax, dword ptr [esi]
// 004aa89a  57                   push edi
// 004aa89b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004aa89f  3bf8                 cmp edi, eax
// 004aa8a1  720a                 jb 0x4aa8ad
// 004aa8a3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004aa8a6  8d1488               lea edx, [eax + ecx*4]
// 004aa8a9  3bfa                 cmp edi, edx
// 004aa8ab  7268                 jb 0x4aa915
// 004aa8ad  3bd8                 cmp ebx, eax
// 004aa8af  720a                 jb 0x4aa8bb
// 004aa8b1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004aa8b4  8d1488               lea edx, [eax + ecx*4]
// 004aa8b7  3bda                 cmp ebx, edx
// 004aa8b9  725a                 jb 0x4aa915
// 004aa8bb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004aa8be  8d5101               lea edx, [ecx + 1]
// 004aa8c1  3b5608               cmp edx, dword ptr [esi + 8]
// 004aa8c4  7d26                 jge 0x4aa8ec
// 004aa8c6  8d0488               lea eax, [eax + ecx*4]
// 004aa8c9  85c0                 test eax, eax
// 004aa8cb  7404                 je 0x4aa8d1
// 004aa8cd  8b0f                 mov ecx, dword ptr [edi]
// 004aa8cf  8908                 mov dword ptr [eax], ecx
// 004aa8d1  8b5604               mov edx, dword ptr [esi + 4]
// 004aa8d4  8b06                 mov eax, dword ptr [esi]
// 004aa8d6  8d449004             lea eax, [eax + edx*4 + 4]
// 004aa8da  85c0                 test eax, eax
// 004aa8dc  7404                 je 0x4aa8e2
// 004aa8de  8b0b                 mov ecx, dword ptr [ebx]
// 004aa8e0  8908                 mov dword ptr [eax], ecx
// 004aa8e2  83460402             add dword ptr [esi + 4], 2
// 004aa8e6  5f                   pop edi
// 004aa8e7  5e                   pop esi
// 004aa8e8  5b                   pop ebx
// 004aa8e9  c20800               ret 8
// 004aa8ec  83c102               add ecx, 2
// 004aa8ef  6a00                 push 0
// 004aa8f1  51                   push ecx
// 004aa8f2  8bce                 mov ecx, esi
// 004aa8f4  e8c7f7ffff           call 0x4aa0c0
// 004aa8f9  8b5604               mov edx, dword ptr [esi + 4]
// 004aa8fc  8b06                 mov eax, dword ptr [esi]
// 004aa8fe  8b0f                 mov ecx, dword ptr [edi]
// 004aa900  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 004aa904  8b5604               mov edx, dword ptr [esi + 4]
// 004aa907  8b06                 mov eax, dword ptr [esi]
// 004aa909  8b0b                 mov ecx, dword ptr [ebx]
// 004aa90b  5f                   pop edi
// 004aa90c  5e                   pop esi
// 004aa90d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004aa911  5b                   pop ebx
// 004aa912  c20800               ret 8
// 004aa915  8b17                 mov edx, dword ptr [edi]
// 004aa917  8b03                 mov eax, dword ptr [ebx]
// 004aa919  8d4c2410             lea ecx, [esp + 0x10]
// 004aa91d  89542414             mov dword ptr [esp + 0x14], edx
// 004aa921  51                   push ecx
// 004aa922  8d542418             lea edx, [esp + 0x18]
// 004aa926  52                   push edx
// 004aa927  8bce                 mov ecx, esi
// 004aa929  89442418             mov dword ptr [esp + 0x18], eax
// 004aa92d  e85effffff           call 0x4aa890
// 004aa932  5f                   pop edi
// 004aa933  5e                   pop esi
// 004aa934  5b                   pop ebx
// 004aa935  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@H@G3D@@QAEXABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

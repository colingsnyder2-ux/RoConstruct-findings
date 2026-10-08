// roc 2009-12 004d6a40  unit: G3D::Win32Window  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6a40
//
// 004d6a40  53                   push ebx
// 004d6a41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d6a45  56                   push esi
// 004d6a46  8bf1                 mov esi, ecx
// 004d6a48  8b06                 mov eax, dword ptr [esi]
// 004d6a4a  57                   push edi
// 004d6a4b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d6a4f  3bf8                 cmp edi, eax
// 004d6a51  720a                 jb 0x4d6a5d
// 004d6a53  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d6a56  8d1488               lea edx, [eax + ecx*4]
// 004d6a59  3bfa                 cmp edi, edx
// 004d6a5b  7268                 jb 0x4d6ac5
// 004d6a5d  3bd8                 cmp ebx, eax
// 004d6a5f  720a                 jb 0x4d6a6b
// 004d6a61  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d6a64  8d1488               lea edx, [eax + ecx*4]
// 004d6a67  3bda                 cmp ebx, edx
// 004d6a69  725a                 jb 0x4d6ac5
// 004d6a6b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d6a6e  8d5101               lea edx, [ecx + 1]
// 004d6a71  3b5608               cmp edx, dword ptr [esi + 8]
// 004d6a74  7d26                 jge 0x4d6a9c
// 004d6a76  8d0488               lea eax, [eax + ecx*4]
// 004d6a79  85c0                 test eax, eax
// 004d6a7b  7404                 je 0x4d6a81
// 004d6a7d  d907                 fld dword ptr [edi]
// 004d6a7f  d918                 fstp dword ptr [eax]
// 004d6a81  8b4604               mov eax, dword ptr [esi + 4]
// 004d6a84  8b0e                 mov ecx, dword ptr [esi]
// 004d6a86  8d448104             lea eax, [ecx + eax*4 + 4]
// 004d6a8a  85c0                 test eax, eax
// 004d6a8c  7404                 je 0x4d6a92
// 004d6a8e  d903                 fld dword ptr [ebx]
// 004d6a90  d918                 fstp dword ptr [eax]
// 004d6a92  83460402             add dword ptr [esi + 4], 2
// 004d6a96  5f                   pop edi
// 004d6a97  5e                   pop esi
// 004d6a98  5b                   pop ebx
// 004d6a99  c20800               ret 8
// 004d6a9c  83c102               add ecx, 2
// 004d6a9f  6a00                 push 0
// 004d6aa1  51                   push ecx
// 004d6aa2  8bce                 mov ecx, esi
// 004d6aa4  e897feffff           call 0x4d6940
// 004d6aa9  d907                 fld dword ptr [edi]
// 004d6aab  8b5604               mov edx, dword ptr [esi + 4]
// 004d6aae  8b06                 mov eax, dword ptr [esi]
// 004d6ab0  d95c90f8             fstp dword ptr [eax + edx*4 - 8]
// 004d6ab4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d6ab7  8b16                 mov edx, dword ptr [esi]
// 004d6ab9  d903                 fld dword ptr [ebx]
// 004d6abb  5f                   pop edi
// 004d6abc  d95c8afc             fstp dword ptr [edx + ecx*4 - 4]
// 004d6ac0  5e                   pop esi
// 004d6ac1  5b                   pop ebx
// 004d6ac2  c20800               ret 8
// 004d6ac5  f30f1007             movss xmm0, dword ptr [edi]
// 004d6ac9  8d442410             lea eax, [esp + 0x10]
// 004d6acd  50                   push eax
// 004d6ace  8d4c2418             lea ecx, [esp + 0x18]
// 004d6ad2  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004d6ad8  f30f1003             movss xmm0, dword ptr [ebx]
// 004d6adc  51                   push ecx
// 004d6add  8bce                 mov ecx, esi
// 004d6adf  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004d6ae5  e856ffffff           call 0x4d6a40
// 004d6aea  5f                   pop edi
// 004d6aeb  5e                   pop esi
// 004d6aec  5b                   pop ebx
// 004d6aed  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@M@G3D@@QAEXABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

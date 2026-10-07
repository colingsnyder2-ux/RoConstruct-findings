// roc 2010-06 00489520  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00489520
//
// 00489520  53                   push ebx
// 00489521  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00489525  56                   push esi
// 00489526  8bf1                 mov esi, ecx
// 00489528  8b06                 mov eax, dword ptr [esi]
// 0048952a  57                   push edi
// 0048952b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0048952f  3bf8                 cmp edi, eax
// 00489531  720a                 jb 0x48953d
// 00489533  8b4e04               mov ecx, dword ptr [esi + 4]
// 00489536  8d1488               lea edx, [eax + ecx*4]
// 00489539  3bfa                 cmp edi, edx
// 0048953b  7268                 jb 0x4895a5
// 0048953d  3bd8                 cmp ebx, eax
// 0048953f  720a                 jb 0x48954b
// 00489541  8b4e04               mov ecx, dword ptr [esi + 4]
// 00489544  8d1488               lea edx, [eax + ecx*4]
// 00489547  3bda                 cmp ebx, edx
// 00489549  725a                 jb 0x4895a5
// 0048954b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048954e  8d5101               lea edx, [ecx + 1]
// 00489551  3b5608               cmp edx, dword ptr [esi + 8]
// 00489554  7d26                 jge 0x48957c
// 00489556  8d0488               lea eax, [eax + ecx*4]
// 00489559  85c0                 test eax, eax
// 0048955b  7404                 je 0x489561
// 0048955d  8b0f                 mov ecx, dword ptr [edi]
// 0048955f  8908                 mov dword ptr [eax], ecx
// 00489561  8b5604               mov edx, dword ptr [esi + 4]
// 00489564  8b06                 mov eax, dword ptr [esi]
// 00489566  8d449004             lea eax, [eax + edx*4 + 4]
// 0048956a  85c0                 test eax, eax
// 0048956c  7404                 je 0x489572
// 0048956e  8b0b                 mov ecx, dword ptr [ebx]
// 00489570  8908                 mov dword ptr [eax], ecx
// 00489572  83460402             add dword ptr [esi + 4], 2
// 00489576  5f                   pop edi
// 00489577  5e                   pop esi
// 00489578  5b                   pop ebx
// 00489579  c20800               ret 8
// 0048957c  83c102               add ecx, 2
// 0048957f  6a00                 push 0
// 00489581  51                   push ecx
// 00489582  8bce                 mov ecx, esi
// 00489584  e897f6ffff           call 0x488c20
// 00489589  8b5604               mov edx, dword ptr [esi + 4]
// 0048958c  8b06                 mov eax, dword ptr [esi]
// 0048958e  8b0f                 mov ecx, dword ptr [edi]
// 00489590  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 00489594  8b5604               mov edx, dword ptr [esi + 4]
// 00489597  8b06                 mov eax, dword ptr [esi]
// 00489599  8b0b                 mov ecx, dword ptr [ebx]
// 0048959b  5f                   pop edi
// 0048959c  5e                   pop esi
// 0048959d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004895a1  5b                   pop ebx
// 004895a2  c20800               ret 8
// 004895a5  8b17                 mov edx, dword ptr [edi]
// 004895a7  8b03                 mov eax, dword ptr [ebx]
// 004895a9  8d4c2410             lea ecx, [esp + 0x10]
// 004895ad  89542414             mov dword ptr [esp + 0x14], edx
// 004895b1  51                   push ecx
// 004895b2  8d542418             lea edx, [esp + 0x18]
// 004895b6  52                   push edx
// 004895b7  8bce                 mov ecx, esi
// 004895b9  89442418             mov dword ptr [esp + 0x18], eax
// 004895bd  e85effffff           call 0x489520
// 004895c2  5f                   pop edi
// 004895c3  5e                   pop esi
// 004895c4  5b                   pop ebx
// 004895c5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@H@G3D@@QAEXABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

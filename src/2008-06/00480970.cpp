// roc 2008-06 00480970  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480970
//
// 00480970  53                   push ebx
// 00480971  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00480975  56                   push esi
// 00480976  8bf1                 mov esi, ecx
// 00480978  8b06                 mov eax, dword ptr [esi]
// 0048097a  57                   push edi
// 0048097b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0048097f  3bf8                 cmp edi, eax
// 00480981  720a                 jb 0x48098d
// 00480983  8b4e04               mov ecx, dword ptr [esi + 4]
// 00480986  8d1488               lea edx, [eax + ecx*4]
// 00480989  3bfa                 cmp edi, edx
// 0048098b  7268                 jb 0x4809f5
// 0048098d  3bd8                 cmp ebx, eax
// 0048098f  720a                 jb 0x48099b
// 00480991  8b4e04               mov ecx, dword ptr [esi + 4]
// 00480994  8d1488               lea edx, [eax + ecx*4]
// 00480997  3bda                 cmp ebx, edx
// 00480999  725a                 jb 0x4809f5
// 0048099b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048099e  8d5101               lea edx, [ecx + 1]
// 004809a1  3b5608               cmp edx, dword ptr [esi + 8]
// 004809a4  7d26                 jge 0x4809cc
// 004809a6  8d0488               lea eax, [eax + ecx*4]
// 004809a9  85c0                 test eax, eax
// 004809ab  7404                 je 0x4809b1
// 004809ad  8b0f                 mov ecx, dword ptr [edi]
// 004809af  8908                 mov dword ptr [eax], ecx
// 004809b1  8b5604               mov edx, dword ptr [esi + 4]
// 004809b4  8b06                 mov eax, dword ptr [esi]
// 004809b6  8d449004             lea eax, [eax + edx*4 + 4]
// 004809ba  85c0                 test eax, eax
// 004809bc  7404                 je 0x4809c2
// 004809be  8b0b                 mov ecx, dword ptr [ebx]
// 004809c0  8908                 mov dword ptr [eax], ecx
// 004809c2  83460402             add dword ptr [esi + 4], 2
// 004809c6  5f                   pop edi
// 004809c7  5e                   pop esi
// 004809c8  5b                   pop ebx
// 004809c9  c20800               ret 8
// 004809cc  83c102               add ecx, 2
// 004809cf  6a00                 push 0
// 004809d1  51                   push ecx
// 004809d2  8bce                 mov ecx, esi
// 004809d4  e847f6ffff           call 0x480020
// 004809d9  8b5604               mov edx, dword ptr [esi + 4]
// 004809dc  8b06                 mov eax, dword ptr [esi]
// 004809de  8b0f                 mov ecx, dword ptr [edi]
// 004809e0  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 004809e4  8b5604               mov edx, dword ptr [esi + 4]
// 004809e7  8b06                 mov eax, dword ptr [esi]
// 004809e9  8b0b                 mov ecx, dword ptr [ebx]
// 004809eb  5f                   pop edi
// 004809ec  5e                   pop esi
// 004809ed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004809f1  5b                   pop ebx
// 004809f2  c20800               ret 8
// 004809f5  8b17                 mov edx, dword ptr [edi]
// 004809f7  8b03                 mov eax, dword ptr [ebx]
// 004809f9  8d4c2410             lea ecx, [esp + 0x10]
// 004809fd  89542414             mov dword ptr [esp + 0x14], edx
// 00480a01  51                   push ecx
// 00480a02  8d542418             lea edx, [esp + 0x18]
// 00480a06  52                   push edx
// 00480a07  8bce                 mov ecx, esi
// 00480a09  89442418             mov dword ptr [esp + 0x18], eax
// 00480a0d  e85effffff           call 0x480970
// 00480a12  5f                   pop edi
// 00480a13  5e                   pop esi
// 00480a14  5b                   pop ebx
// 00480a15  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@H@G3D@@QAEXABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

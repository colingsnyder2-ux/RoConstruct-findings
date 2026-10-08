// roc 2009-12 004d7360  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7360
//
// 004d7360  53                   push ebx
// 004d7361  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004d7365  56                   push esi
// 004d7366  8bf1                 mov esi, ecx
// 004d7368  8b06                 mov eax, dword ptr [esi]
// 004d736a  57                   push edi
// 004d736b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d736f  3bf8                 cmp edi, eax
// 004d7371  720a                 jb 0x4d737d
// 004d7373  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d7376  8d1488               lea edx, [eax + ecx*4]
// 004d7379  3bfa                 cmp edi, edx
// 004d737b  7268                 jb 0x4d73e5
// 004d737d  3bd8                 cmp ebx, eax
// 004d737f  720a                 jb 0x4d738b
// 004d7381  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d7384  8d1488               lea edx, [eax + ecx*4]
// 004d7387  3bda                 cmp ebx, edx
// 004d7389  725a                 jb 0x4d73e5
// 004d738b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d738e  8d5101               lea edx, [ecx + 1]
// 004d7391  3b5608               cmp edx, dword ptr [esi + 8]
// 004d7394  7d26                 jge 0x4d73bc
// 004d7396  8d0488               lea eax, [eax + ecx*4]
// 004d7399  85c0                 test eax, eax
// 004d739b  7404                 je 0x4d73a1
// 004d739d  8b0f                 mov ecx, dword ptr [edi]
// 004d739f  8908                 mov dword ptr [eax], ecx
// 004d73a1  8b5604               mov edx, dword ptr [esi + 4]
// 004d73a4  8b06                 mov eax, dword ptr [esi]
// 004d73a6  8d449004             lea eax, [eax + edx*4 + 4]
// 004d73aa  85c0                 test eax, eax
// 004d73ac  7404                 je 0x4d73b2
// 004d73ae  8b0b                 mov ecx, dword ptr [ebx]
// 004d73b0  8908                 mov dword ptr [eax], ecx
// 004d73b2  83460402             add dword ptr [esi + 4], 2
// 004d73b6  5f                   pop edi
// 004d73b7  5e                   pop esi
// 004d73b8  5b                   pop ebx
// 004d73b9  c20800               ret 8
// 004d73bc  83c102               add ecx, 2
// 004d73bf  6a00                 push 0
// 004d73c1  51                   push ecx
// 004d73c2  8bce                 mov ecx, esi
// 004d73c4  e817f8ffff           call 0x4d6be0
// 004d73c9  8b5604               mov edx, dword ptr [esi + 4]
// 004d73cc  8b06                 mov eax, dword ptr [esi]
// 004d73ce  8b0f                 mov ecx, dword ptr [edi]
// 004d73d0  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 004d73d4  8b5604               mov edx, dword ptr [esi + 4]
// 004d73d7  8b06                 mov eax, dword ptr [esi]
// 004d73d9  8b0b                 mov ecx, dword ptr [ebx]
// 004d73db  5f                   pop edi
// 004d73dc  5e                   pop esi
// 004d73dd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004d73e1  5b                   pop ebx
// 004d73e2  c20800               ret 8
// 004d73e5  8b17                 mov edx, dword ptr [edi]
// 004d73e7  8b03                 mov eax, dword ptr [ebx]
// 004d73e9  8d4c2410             lea ecx, [esp + 0x10]
// 004d73ed  89542414             mov dword ptr [esp + 0x14], edx
// 004d73f1  51                   push ecx
// 004d73f2  8d542418             lea edx, [esp + 0x18]
// 004d73f6  52                   push edx
// 004d73f7  8bce                 mov ecx, esi
// 004d73f9  89442418             mov dword ptr [esp + 0x18], eax
// 004d73fd  e85effffff           call 0x4d7360
// 004d7402  5f                   pop edi
// 004d7403  5e                   pop esi
// 004d7404  5b                   pop ebx
// 004d7405  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@H@G3D@@QAEXABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

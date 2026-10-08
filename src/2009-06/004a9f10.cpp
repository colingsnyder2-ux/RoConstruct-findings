// from server: 100% by auto
// roc 2009-06 004a9f10  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9f10
//
// 004a9f10  53                   push ebx
// 004a9f11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a9f15  56                   push esi
// 004a9f16  8bf1                 mov esi, ecx
// 004a9f18  8b06                 mov eax, dword ptr [esi]
// 004a9f1a  57                   push edi
// 004a9f1b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a9f1f  3bf8                 cmp edi, eax
// 004a9f21  720a                 jb 0x4a9f2d
// 004a9f23  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a9f26  8d1488               lea edx, [eax + ecx*4]
// 004a9f29  3bfa                 cmp edi, edx
// 004a9f2b  7268                 jb 0x4a9f95
// 004a9f2d  3bd8                 cmp ebx, eax
// 004a9f2f  720a                 jb 0x4a9f3b
// 004a9f31  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a9f34  8d1488               lea edx, [eax + ecx*4]
// 004a9f37  3bda                 cmp ebx, edx
// 004a9f39  725a                 jb 0x4a9f95
// 004a9f3b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a9f3e  8d5101               lea edx, [ecx + 1]
// 004a9f41  3b5608               cmp edx, dword ptr [esi + 8]
// 004a9f44  7d26                 jge 0x4a9f6c
// 004a9f46  8d0488               lea eax, [eax + ecx*4]
// 004a9f49  85c0                 test eax, eax
// 004a9f4b  7404                 je 0x4a9f51
// 004a9f4d  d907                 fld dword ptr [edi]
// 004a9f4f  d918                 fstp dword ptr [eax]
// 004a9f51  8b4604               mov eax, dword ptr [esi + 4]
// 004a9f54  8b0e                 mov ecx, dword ptr [esi]
// 004a9f56  8d448104             lea eax, [ecx + eax*4 + 4]
// 004a9f5a  85c0                 test eax, eax
// 004a9f5c  7404                 je 0x4a9f62
// 004a9f5e  d903                 fld dword ptr [ebx]
// 004a9f60  d918                 fstp dword ptr [eax]
// 004a9f62  83460402             add dword ptr [esi + 4], 2
// 004a9f66  5f                   pop edi
// 004a9f67  5e                   pop esi
// 004a9f68  5b                   pop ebx
// 004a9f69  c20800               ret 8
// 004a9f6c  83c102               add ecx, 2
// 004a9f6f  6a00                 push 0
// 004a9f71  51                   push ecx
// 004a9f72  8bce                 mov ecx, esi
// 004a9f74  e897feffff           call 0x4a9e10
// 004a9f79  d907                 fld dword ptr [edi]
// 004a9f7b  8b5604               mov edx, dword ptr [esi + 4]
// 004a9f7e  8b06                 mov eax, dword ptr [esi]
// 004a9f80  d95c90f8             fstp dword ptr [eax + edx*4 - 8]
// 004a9f84  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a9f87  8b16                 mov edx, dword ptr [esi]
// 004a9f89  d903                 fld dword ptr [ebx]
// 004a9f8b  5f                   pop edi
// 004a9f8c  d95c8afc             fstp dword ptr [edx + ecx*4 - 4]
// 004a9f90  5e                   pop esi
// 004a9f91  5b                   pop ebx
// 004a9f92  c20800               ret 8
// 004a9f95  d907                 fld dword ptr [edi]
// 004a9f97  8d442410             lea eax, [esp + 0x10]
// 004a9f9b  d95c2414             fstp dword ptr [esp + 0x14]
// 004a9f9f  50                   push eax
// 004a9fa0  d903                 fld dword ptr [ebx]
// 004a9fa2  8d4c2418             lea ecx, [esp + 0x18]
// 004a9fa6  51                   push ecx
// 004a9fa7  d95c2418             fstp dword ptr [esp + 0x18]
// 004a9fab  8bce                 mov ecx, esi
// 004a9fad  e85effffff           call 0x4a9f10
// 004a9fb2  5f                   pop edi
// 004a9fb3  5e                   pop esi
// 004a9fb4  5b                   pop ebx
// 004a9fb5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@M@G3D@@QAEXABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

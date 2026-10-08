// from server: 100% by auto
// roc 2008-06 0047fe70  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047fe70
//
// 0047fe70  53                   push ebx
// 0047fe71  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047fe75  56                   push esi
// 0047fe76  8bf1                 mov esi, ecx
// 0047fe78  8b06                 mov eax, dword ptr [esi]
// 0047fe7a  57                   push edi
// 0047fe7b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047fe7f  3bf8                 cmp edi, eax
// 0047fe81  720a                 jb 0x47fe8d
// 0047fe83  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047fe86  8d1488               lea edx, [eax + ecx*4]
// 0047fe89  3bfa                 cmp edi, edx
// 0047fe8b  7268                 jb 0x47fef5
// 0047fe8d  3bd8                 cmp ebx, eax
// 0047fe8f  720a                 jb 0x47fe9b
// 0047fe91  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047fe94  8d1488               lea edx, [eax + ecx*4]
// 0047fe97  3bda                 cmp ebx, edx
// 0047fe99  725a                 jb 0x47fef5
// 0047fe9b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047fe9e  8d5101               lea edx, [ecx + 1]
// 0047fea1  3b5608               cmp edx, dword ptr [esi + 8]
// 0047fea4  7d26                 jge 0x47fecc
// 0047fea6  8d0488               lea eax, [eax + ecx*4]
// 0047fea9  85c0                 test eax, eax
// 0047feab  7404                 je 0x47feb1
// 0047fead  d907                 fld dword ptr [edi]
// 0047feaf  d918                 fstp dword ptr [eax]
// 0047feb1  8b4604               mov eax, dword ptr [esi + 4]
// 0047feb4  8b0e                 mov ecx, dword ptr [esi]
// 0047feb6  8d448104             lea eax, [ecx + eax*4 + 4]
// 0047feba  85c0                 test eax, eax
// 0047febc  7404                 je 0x47fec2
// 0047febe  d903                 fld dword ptr [ebx]
// 0047fec0  d918                 fstp dword ptr [eax]
// 0047fec2  83460402             add dword ptr [esi + 4], 2
// 0047fec6  5f                   pop edi
// 0047fec7  5e                   pop esi
// 0047fec8  5b                   pop ebx
// 0047fec9  c20800               ret 8
// 0047fecc  83c102               add ecx, 2
// 0047fecf  6a00                 push 0
// 0047fed1  51                   push ecx
// 0047fed2  8bce                 mov ecx, esi
// 0047fed4  e897feffff           call 0x47fd70
// 0047fed9  d907                 fld dword ptr [edi]
// 0047fedb  8b5604               mov edx, dword ptr [esi + 4]
// 0047fede  8b06                 mov eax, dword ptr [esi]
// 0047fee0  d95c90f8             fstp dword ptr [eax + edx*4 - 8]
// 0047fee4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047fee7  8b16                 mov edx, dword ptr [esi]
// 0047fee9  d903                 fld dword ptr [ebx]
// 0047feeb  5f                   pop edi
// 0047feec  d95c8afc             fstp dword ptr [edx + ecx*4 - 4]
// 0047fef0  5e                   pop esi
// 0047fef1  5b                   pop ebx
// 0047fef2  c20800               ret 8
// 0047fef5  d907                 fld dword ptr [edi]
// 0047fef7  8d442410             lea eax, [esp + 0x10]
// 0047fefb  d95c2414             fstp dword ptr [esp + 0x14]
// 0047feff  50                   push eax
// 0047ff00  d903                 fld dword ptr [ebx]
// 0047ff02  8d4c2418             lea ecx, [esp + 0x18]
// 0047ff06  51                   push ecx
// 0047ff07  d95c2418             fstp dword ptr [esp + 0x18]
// 0047ff0b  8bce                 mov ecx, esi
// 0047ff0d  e85effffff           call 0x47fe70
// 0047ff12  5f                   pop edi
// 0047ff13  5e                   pop esi
// 0047ff14  5b                   pop ebx
// 0047ff15  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@M@G3D@@QAEXABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

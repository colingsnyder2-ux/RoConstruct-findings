// roc 2007-08 0047c8e0  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c8e0
//
// 0047c8e0  53                   push ebx
// 0047c8e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047c8e5  56                   push esi
// 0047c8e6  8bf1                 mov esi, ecx
// 0047c8e8  8b06                 mov eax, dword ptr [esi]
// 0047c8ea  57                   push edi
// 0047c8eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047c8ef  3bf8                 cmp edi, eax
// 0047c8f1  720a                 jb 0x47c8fd
// 0047c8f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047c8f6  8d1488               lea edx, [eax + ecx*4]
// 0047c8f9  3bfa                 cmp edi, edx
// 0047c8fb  7268                 jb 0x47c965
// 0047c8fd  3bd8                 cmp ebx, eax
// 0047c8ff  720a                 jb 0x47c90b
// 0047c901  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047c904  8d1488               lea edx, [eax + ecx*4]
// 0047c907  3bda                 cmp ebx, edx
// 0047c909  725a                 jb 0x47c965
// 0047c90b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047c90e  8d5101               lea edx, [ecx + 1]
// 0047c911  3b5608               cmp edx, dword ptr [esi + 8]
// 0047c914  7d26                 jge 0x47c93c
// 0047c916  8d0488               lea eax, [eax + ecx*4]
// 0047c919  85c0                 test eax, eax
// 0047c91b  7404                 je 0x47c921
// 0047c91d  d907                 fld dword ptr [edi]
// 0047c91f  d918                 fstp dword ptr [eax]
// 0047c921  8b4604               mov eax, dword ptr [esi + 4]
// 0047c924  8b0e                 mov ecx, dword ptr [esi]
// 0047c926  8d448104             lea eax, [ecx + eax*4 + 4]
// 0047c92a  85c0                 test eax, eax
// 0047c92c  7404                 je 0x47c932
// 0047c92e  d903                 fld dword ptr [ebx]
// 0047c930  d918                 fstp dword ptr [eax]
// 0047c932  83460402             add dword ptr [esi + 4], 2
// 0047c936  5f                   pop edi
// 0047c937  5e                   pop esi
// 0047c938  5b                   pop ebx
// 0047c939  c20800               ret 8
// 0047c93c  83c102               add ecx, 2
// 0047c93f  6a00                 push 0
// 0047c941  51                   push ecx
// 0047c942  8bce                 mov ecx, esi
// 0047c944  e887feffff           call 0x47c7d0
// 0047c949  d907                 fld dword ptr [edi]
// 0047c94b  8b5604               mov edx, dword ptr [esi + 4]
// 0047c94e  8b06                 mov eax, dword ptr [esi]
// 0047c950  d95c90f8             fstp dword ptr [eax + edx*4 - 8]
// 0047c954  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047c957  8b16                 mov edx, dword ptr [esi]
// 0047c959  d903                 fld dword ptr [ebx]
// 0047c95b  5f                   pop edi
// 0047c95c  d95c8afc             fstp dword ptr [edx + ecx*4 - 4]
// 0047c960  5e                   pop esi
// 0047c961  5b                   pop ebx
// 0047c962  c20800               ret 8
// 0047c965  d907                 fld dword ptr [edi]
// 0047c967  8d442410             lea eax, [esp + 0x10]
// 0047c96b  d95c2414             fstp dword ptr [esp + 0x14]
// 0047c96f  50                   push eax
// 0047c970  d903                 fld dword ptr [ebx]
// 0047c972  8d4c2418             lea ecx, [esp + 0x18]
// 0047c976  51                   push ecx
// 0047c977  d95c2418             fstp dword ptr [esp + 0x18]
// 0047c97b  8bce                 mov ecx, esi
// 0047c97d  e85effffff           call 0x47c8e0
// 0047c982  5f                   pop edi
// 0047c983  5e                   pop esi
// 0047c984  5b                   pop ebx
// 0047c985  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@M@G3D@@QAEXABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

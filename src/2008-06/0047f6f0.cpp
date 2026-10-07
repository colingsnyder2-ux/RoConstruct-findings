// roc 2008-06 0047f6f0  unit: G3D::Win32Window  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f6f0
//
// 0047f6f0  51                   push ecx
// 0047f6f1  53                   push ebx
// 0047f6f2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047f6f6  55                   push ebp
// 0047f6f7  56                   push esi
// 0047f6f8  57                   push edi
// 0047f6f9  8bf1                 mov esi, ecx
// 0047f6fb  8b4608               mov eax, dword ptr [esi + 8]
// 0047f6fe  8d3c9d00000000       lea edi, [ebx*4]
// 0047f705  6a10                 push 0x10
// 0047f707  57                   push edi
// 0047f708  89442418             mov dword ptr [esp + 0x18], eax
// 0047f70c  e86f8e0800           call 0x508580
// 0047f711  57                   push edi
// 0047f712  6a00                 push 0
// 0047f714  50                   push eax
// 0047f715  894608               mov dword ptr [esi + 8], eax
// 0047f718  e813930800           call 0x508a30
// 0047f71d  33ed                 xor ebp, ebp
// 0047f71f  83c414               add esp, 0x14
// 0047f722  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0047f725  7e2f                 jle 0x47f756
// 0047f727  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047f72b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0047f72e  85c9                 test ecx, ecx
// 0047f730  741e                 je 0x47f750
// 0047f732  8b01                 mov eax, dword ptr [ecx]
// 0047f734  33d2                 xor edx, edx
// 0047f736  f7f3                 div ebx
// 0047f738  8b4608               mov eax, dword ptr [esi + 8]
// 0047f73b  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0047f73e  8b0490               mov eax, dword ptr [eax + edx*4]
// 0047f741  89410c               mov dword ptr [ecx + 0xc], eax
// 0047f744  8b4608               mov eax, dword ptr [esi + 8]
// 0047f747  890c90               mov dword ptr [eax + edx*4], ecx
// 0047f74a  8bcf                 mov ecx, edi
// 0047f74c  85ff                 test edi, edi
// 0047f74e  75e2                 jne 0x47f732
// 0047f750  45                   inc ebp
// 0047f751  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0047f754  7cd1                 jl 0x47f727
// 0047f756  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047f75a  51                   push ecx
// 0047f75b  e8c0850800           call 0x507d20
// 0047f760  83c404               add esp, 4
// 0047f763  5f                   pop edi
// 0047f764  895e0c               mov dword ptr [esi + 0xc], ebx
// 0047f767  5e                   pop esi
// 0047f768  5d                   pop ebp
// 0047f769  5b                   pop ebx
// 0047f76a  59                   pop ecx
// 0047f76b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?resize@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp

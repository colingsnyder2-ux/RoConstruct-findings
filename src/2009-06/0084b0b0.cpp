// roc 2009-06 0084b0b0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b0b0
//
// 0084b0b0  51                   push ecx
// 0084b0b1  53                   push ebx
// 0084b0b2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0084b0b6  55                   push ebp
// 0084b0b7  56                   push esi
// 0084b0b8  57                   push edi
// 0084b0b9  8bf1                 mov esi, ecx
// 0084b0bb  8b4608               mov eax, dword ptr [esi + 8]
// 0084b0be  8d3c9d00000000       lea edi, [ebx*4]
// 0084b0c5  6a10                 push 0x10
// 0084b0c7  57                   push edi
// 0084b0c8  89442418             mov dword ptr [esp + 0x18], eax
// 0084b0cc  e89f00d2ff           call 0x56b170
// 0084b0d1  57                   push edi
// 0084b0d2  6a00                 push 0
// 0084b0d4  50                   push eax
// 0084b0d5  894608               mov dword ptr [esi + 8], eax
// 0084b0d8  e8b30dd2ff           call 0x56be90
// 0084b0dd  33ed                 xor ebp, ebp
// 0084b0df  83c414               add esp, 0x14
// 0084b0e2  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0084b0e5  7e2f                 jle 0x84b116
// 0084b0e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084b0eb  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0084b0ee  85c9                 test ecx, ecx
// 0084b0f0  741e                 je 0x84b110
// 0084b0f2  8b01                 mov eax, dword ptr [ecx]
// 0084b0f4  33d2                 xor edx, edx
// 0084b0f6  f7f3                 div ebx
// 0084b0f8  8b4608               mov eax, dword ptr [esi + 8]
// 0084b0fb  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0084b0fe  8b0490               mov eax, dword ptr [eax + edx*4]
// 0084b101  89410c               mov dword ptr [ecx + 0xc], eax
// 0084b104  8b4608               mov eax, dword ptr [esi + 8]
// 0084b107  890c90               mov dword ptr [eax + edx*4], ecx
// 0084b10a  8bcf                 mov ecx, edi
// 0084b10c  85ff                 test edi, edi
// 0084b10e  75e2                 jne 0x84b0f2
// 0084b110  45                   inc ebp
// 0084b111  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0084b114  7cd1                 jl 0x84b0e7
// 0084b116  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084b11a  51                   push ecx
// 0084b11b  e87001d2ff           call 0x56b290
// 0084b120  83c404               add esp, 4
// 0084b123  5f                   pop edi
// 0084b124  895e0c               mov dword ptr [esi + 0xc], ebx
// 0084b127  5e                   pop esi
// 0084b128  5d                   pop ebp
// 0084b129  5b                   pop ebx
// 0084b12a  59                   pop ecx
// 0084b12b  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?resize@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp

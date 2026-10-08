// roc 2009-12 005e1780  unit: RBX::RbxG3D::RenderScene  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e1780
//
// 005e1780  53                   push ebx
// 005e1781  55                   push ebp
// 005e1782  8bd9                 mov ebx, ecx
// 005e1784  33ed                 xor ebp, ebp
// 005e1786  396b04               cmp dword ptr [ebx + 4], ebp
// 005e1789  7e5e                 jle 0x5e17e9
// 005e178b  56                   push esi
// 005e178c  57                   push edi
// 005e178d  8d4900               lea ecx, [ecx]
// 005e1790  8b03                 mov eax, dword ptr [ebx]
// 005e1792  8d3ca8               lea edi, [eax + ebp*4]
// 005e1795  8b07                 mov eax, dword ptr [edi]
// 005e1797  85c0                 test eax, eax
// 005e1799  7446                 je 0x5e17e1
// 005e179b  83c004               add eax, 4
// 005e179e  50                   push eax
// 005e179f  ff1508b29800         call dword ptr [0x98b208]
// 005e17a5  85c0                 test eax, eax
// 005e17a7  7532                 jne 0x5e17db
// 005e17a9  8b0f                 mov ecx, dword ptr [edi]
// 005e17ab  8b7108               mov esi, dword ptr [ecx + 8]
// 005e17ae  85f6                 test esi, esi
// 005e17b0  741b                 je 0x5e17cd
// 005e17b2  8b0e                 mov ecx, dword ptr [esi]
// 005e17b4  8b11                 mov edx, dword ptr [ecx]
// 005e17b6  8b4204               mov eax, dword ptr [edx + 4]
// 005e17b9  ffd0                 call eax
// 005e17bb  8bc6                 mov eax, esi
// 005e17bd  8b7604               mov esi, dword ptr [esi + 4]
// 005e17c0  50                   push eax
// 005e17c1  e894202100           call 0x7f385a
// 005e17c6  83c404               add esp, 4
// 005e17c9  85f6                 test esi, esi
// 005e17cb  75e5                 jne 0x5e17b2
// 005e17cd  8b0f                 mov ecx, dword ptr [edi]
// 005e17cf  85c9                 test ecx, ecx
// 005e17d1  7408                 je 0x5e17db
// 005e17d3  8b11                 mov edx, dword ptr [ecx]
// 005e17d5  8b02                 mov eax, dword ptr [edx]
// 005e17d7  6a01                 push 1
// 005e17d9  ffd0                 call eax
// 005e17db  c70700000000         mov dword ptr [edi], 0
// 005e17e1  45                   inc ebp
// 005e17e2  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 005e17e5  7ca9                 jl 0x5e1790
// 005e17e7  5f                   pop edi
// 005e17e8  5e                   pop esi
// 005e17e9  8b0b                 mov ecx, dword ptr [ebx]
// 005e17eb  51                   push ecx
// 005e17ec  e8ef8b0000           call 0x5ea3e0
// 005e17f1  83c404               add esp, 4
// 005e17f4  5d                   pop ebp
// 005e17f5  c70300000000         mov dword ptr [ebx], 0
// 005e17fb  c7430400000000       mov dword ptr [ebx + 4], 0
// 005e1802  c7430800000000       mov dword ptr [ebx + 8], 0
// 005e1809  5b                   pop ebx
// 005e180a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??1?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp

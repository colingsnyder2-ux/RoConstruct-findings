// roc 2007-08 004f4d30  unit: boost::bad_lexical_cast  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4d30
//
// 004f4d30  53                   push ebx
// 004f4d31  55                   push ebp
// 004f4d32  8bd9                 mov ebx, ecx
// 004f4d34  33ed                 xor ebp, ebp
// 004f4d36  396b04               cmp dword ptr [ebx + 4], ebp
// 004f4d39  7e60                 jle 0x4f4d9b
// 004f4d3b  56                   push esi
// 004f4d3c  57                   push edi
// 004f4d3d  8d4900               lea ecx, [ecx]
// 004f4d40  8b03                 mov eax, dword ptr [ebx]
// 004f4d42  8d3ca8               lea edi, [eax + ebp*4]
// 004f4d45  8b07                 mov eax, dword ptr [edi]
// 004f4d47  85c0                 test eax, eax
// 004f4d49  7446                 je 0x4f4d91
// 004f4d4b  83c004               add eax, 4
// 004f4d4e  50                   push eax
// 004f4d4f  ff15e8d27700         call dword ptr [0x77d2e8]
// 004f4d55  85c0                 test eax, eax
// 004f4d57  7532                 jne 0x4f4d8b
// 004f4d59  8b0f                 mov ecx, dword ptr [edi]
// 004f4d5b  8b7108               mov esi, dword ptr [ecx + 8]
// 004f4d5e  85f6                 test esi, esi
// 004f4d60  741b                 je 0x4f4d7d
// 004f4d62  8b0e                 mov ecx, dword ptr [esi]
// 004f4d64  8b11                 mov edx, dword ptr [ecx]
// 004f4d66  8b4204               mov eax, dword ptr [edx + 4]
// 004f4d69  ffd0                 call eax
// 004f4d6b  8bc6                 mov eax, esi
// 004f4d6d  8b7604               mov esi, dword ptr [esi + 4]
// 004f4d70  50                   push eax
// 004f4d71  e8ecae1300           call 0x62fc62
// 004f4d76  83c404               add esp, 4
// 004f4d79  85f6                 test esi, esi
// 004f4d7b  75e5                 jne 0x4f4d62
// 004f4d7d  8b0f                 mov ecx, dword ptr [edi]
// 004f4d7f  85c9                 test ecx, ecx
// 004f4d81  7408                 je 0x4f4d8b
// 004f4d83  8b11                 mov edx, dword ptr [ecx]
// 004f4d85  8b02                 mov eax, dword ptr [edx]
// 004f4d87  6a01                 push 1
// 004f4d89  ffd0                 call eax
// 004f4d8b  c70700000000         mov dword ptr [edi], 0
// 004f4d91  83c501               add ebp, 1
// 004f4d94  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 004f4d97  7ca7                 jl 0x4f4d40
// 004f4d99  5f                   pop edi
// 004f4d9a  5e                   pop esi
// 004f4d9b  8b0b                 mov ecx, dword ptr [ebx]
// 004f4d9d  51                   push ecx
// 004f4d9e  e86daa0000           call 0x4ff810
// 004f4da3  83c404               add esp, 4
// 004f4da6  5d                   pop ebp
// 004f4da7  c70300000000         mov dword ptr [ebx], 0
// 004f4dad  c7430400000000       mov dword ptr [ebx + 4], 0
// 004f4db4  c7430800000000       mov dword ptr [ebx + 8], 0
// 004f4dbb  5b                   pop ebx
// 004f4dbc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??1?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp

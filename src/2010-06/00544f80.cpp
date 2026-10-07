// roc 2010-06 00544f80  unit: RBX::RbxG3D::RenderScene  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00544f80
//
// 00544f80  53                   push ebx
// 00544f81  55                   push ebp
// 00544f82  8bd9                 mov ebx, ecx
// 00544f84  33ed                 xor ebp, ebp
// 00544f86  396b04               cmp dword ptr [ebx + 4], ebp
// 00544f89  7e5e                 jle 0x544fe9
// 00544f8b  56                   push esi
// 00544f8c  57                   push edi
// 00544f8d  8d4900               lea ecx, [ecx]
// 00544f90  8b03                 mov eax, dword ptr [ebx]
// 00544f92  8d3ca8               lea edi, [eax + ebp*4]
// 00544f95  8b07                 mov eax, dword ptr [edi]
// 00544f97  85c0                 test eax, eax
// 00544f99  7446                 je 0x544fe1
// 00544f9b  83c004               add eax, 4
// 00544f9e  50                   push eax
// 00544f9f  ff157ca39e00         call dword ptr [0x9ea37c]
// 00544fa5  85c0                 test eax, eax
// 00544fa7  7532                 jne 0x544fdb
// 00544fa9  8b0f                 mov ecx, dword ptr [edi]
// 00544fab  8b7108               mov esi, dword ptr [ecx + 8]
// 00544fae  85f6                 test esi, esi
// 00544fb0  741b                 je 0x544fcd
// 00544fb2  8b0e                 mov ecx, dword ptr [esi]
// 00544fb4  8b11                 mov edx, dword ptr [ecx]
// 00544fb6  8b4204               mov eax, dword ptr [edx + 4]
// 00544fb9  ffd0                 call eax
// 00544fbb  8bc6                 mov eax, esi
// 00544fbd  8b7604               mov esi, dword ptr [esi + 4]
// 00544fc0  50                   push eax
// 00544fc1  e8d4292600           call 0x7a799a
// 00544fc6  83c404               add esp, 4
// 00544fc9  85f6                 test esi, esi
// 00544fcb  75e5                 jne 0x544fb2
// 00544fcd  8b0f                 mov ecx, dword ptr [edi]
// 00544fcf  85c9                 test ecx, ecx
// 00544fd1  7408                 je 0x544fdb
// 00544fd3  8b11                 mov edx, dword ptr [ecx]
// 00544fd5  8b02                 mov eax, dword ptr [edx]
// 00544fd7  6a01                 push 1
// 00544fd9  ffd0                 call eax
// 00544fdb  c70700000000         mov dword ptr [edi], 0
// 00544fe1  45                   inc ebp
// 00544fe2  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 00544fe5  7ca9                 jl 0x544f90
// 00544fe7  5f                   pop edi
// 00544fe8  5e                   pop esi
// 00544fe9  8b0b                 mov ecx, dword ptr [ebx]
// 00544feb  51                   push ecx
// 00544fec  e8cf890000           call 0x54d9c0
// 00544ff1  83c404               add esp, 4
// 00544ff4  5d                   pop ebp
// 00544ff5  c70300000000         mov dword ptr [ebx], 0
// 00544ffb  c7430400000000       mov dword ptr [ebx + 4], 0
// 00545002  c7430800000000       mov dword ptr [ebx + 8], 0
// 00545009  5b                   pop ebx
// 0054500a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??1?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp

// from server: 100% by auto
// roc 2010-06 00488d20  unit: G3D::Win32Window  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488d20
//
// 00488d20  53                   push ebx
// 00488d21  57                   push edi
// 00488d22  8bf9                 mov edi, ecx
// 00488d24  33db                 xor ebx, ebx
// 00488d26  395f0c               cmp dword ptr [edi + 0xc], ebx
// 00488d29  7e2e                 jle 0x488d59
// 00488d2b  56                   push esi
// 00488d2c  8d642400             lea esp, [esp]
// 00488d30  8b4708               mov eax, dword ptr [edi + 8]
// 00488d33  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00488d36  85c0                 test eax, eax
// 00488d38  7418                 je 0x488d52
// 00488d3a  8d9b00000000         lea ebx, [ebx]
// 00488d40  8b700c               mov esi, dword ptr [eax + 0xc]
// 00488d43  50                   push eax
// 00488d44  e8671e0800           call 0x50abb0
// 00488d49  83c404               add esp, 4
// 00488d4c  8bc6                 mov eax, esi
// 00488d4e  85f6                 test esi, esi
// 00488d50  75ee                 jne 0x488d40
// 00488d52  43                   inc ebx
// 00488d53  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 00488d56  7cd8                 jl 0x488d30
// 00488d58  5e                   pop esi
// 00488d59  8b4f08               mov ecx, dword ptr [edi + 8]
// 00488d5c  51                   push ecx
// 00488d5d  e85e4c0c00           call 0x54d9c0
// 00488d62  83c404               add esp, 4
// 00488d65  c7470800000000       mov dword ptr [edi + 8], 0
// 00488d6c  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00488d73  c7470400000000       mov dword ptr [edi + 4], 0
// 00488d7a  5f                   pop edi
// 00488d7b  5b                   pop ebx
// 00488d7c  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?freeMemory@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp

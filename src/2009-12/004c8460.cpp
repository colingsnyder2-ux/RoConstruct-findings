// roc 2009-12 004c8460  unit: G3D::Texture  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c8460
//
// 004c8460  64a100000000         mov eax, dword ptr fs:[0]
// 004c8466  6aff                 push -1
// 004c8468  68012b9300           push 0x932b01
// 004c846d  50                   push eax
// 004c846e  64892500000000       mov dword ptr fs:[0], esp
// 004c8475  83ec08               sub esp, 8
// 004c8478  55                   push ebp
// 004c8479  56                   push esi
// 004c847a  57                   push edi
// 004c847b  8bf9                 mov edi, ecx
// 004c847d  8b4708               mov eax, dword ptr [edi + 8]
// 004c8480  8b2f                 mov ebp, dword ptr [edi]
// 004c8482  8d0440               lea eax, [eax + eax*2]
// 004c8485  03c0                 add eax, eax
// 004c8487  03c0                 add eax, eax
// 004c8489  6a10                 push 0x10
// 004c848b  50                   push eax
// 004c848c  e82f1e1200           call 0x5ea2c0
// 004c8491  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c8494  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004c8498  83c408               add esp, 8
// 004c849b  3bd1                 cmp edx, ecx
// 004c849d  8907                 mov dword ptr [edi], eax
// 004c849f  7d02                 jge 0x4c84a3
// 004c84a1  8bca                 mov ecx, edx
// 004c84a3  8d0c49               lea ecx, [ecx + ecx*2]
// 004c84a6  8bf0                 mov esi, eax
// 004c84a8  8d3c88               lea edi, [eax + ecx*4]
// 004c84ab  53                   push ebx
// 004c84ac  8bdd                 mov ebx, ebp
// 004c84ae  89742410             mov dword ptr [esp + 0x10], esi
// 004c84b2  3bf7                 cmp esi, edi
// 004c84b4  733c                 jae 0x4c84f2
// 004c84b6  eb08                 jmp 0x4c84c0
// 004c84b8  8da42400000000       lea esp, [esp]
// 004c84bf  90                   nop 
// 004c84c0  89742414             mov dword ptr [esp + 0x14], esi
// 004c84c4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004c84cc  85f6                 test esi, esi
// 004c84ce  740c                 je 0x4c84dc
// 004c84d0  53                   push ebx
// 004c84d1  8bce                 mov ecx, esi
// 004c84d3  e828ffffff           call 0x4c8400
// 004c84d8  8b542428             mov edx, dword ptr [esp + 0x28]
// 004c84dc  83c60c               add esi, 0xc
// 004c84df  83c30c               add ebx, 0xc
// 004c84e2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004c84ea  89742410             mov dword ptr [esp + 0x10], esi
// 004c84ee  3bf7                 cmp esi, edi
// 004c84f0  72ce                 jb 0x4c84c0
// 004c84f2  8d1452               lea edx, [edx + edx*2]
// 004c84f5  8d7c9500             lea edi, [ebp + edx*4]
// 004c84f9  8bf5                 mov esi, ebp
// 004c84fb  5b                   pop ebx
// 004c84fc  3bef                 cmp ebp, edi
// 004c84fe  731c                 jae 0x4c851c
// 004c8500  8b06                 mov eax, dword ptr [esi]
// 004c8502  50                   push eax
// 004c8503  e8d81e1200           call 0x5ea3e0
// 004c8508  33c0                 xor eax, eax
// 004c850a  8906                 mov dword ptr [esi], eax
// 004c850c  894604               mov dword ptr [esi + 4], eax
// 004c850f  894608               mov dword ptr [esi + 8], eax
// 004c8512  83c60c               add esi, 0xc
// 004c8515  83c404               add esp, 4
// 004c8518  3bf7                 cmp esi, edi
// 004c851a  72e4                 jb 0x4c8500
// 004c851c  55                   push ebp
// 004c851d  e8be1e1200           call 0x5ea3e0
// 004c8522  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c8526  83c404               add esp, 4
// 004c8529  5f                   pop edi
// 004c852a  5e                   pop esi
// 004c852b  5d                   pop ebp
// 004c852c  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8533  83c414               add esp, 0x14
// 004c8536  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?realloc@?$Array@V?$Array@H@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp

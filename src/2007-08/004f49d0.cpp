// roc 2007-08 004f49d0  unit: boost::bad_lexical_cast  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f49d0
//
// 004f49d0  83ec18               sub esp, 0x18
// 004f49d3  53                   push ebx
// 004f49d4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004f49d8  56                   push esi
// 004f49d9  8bf1                 mov esi, ecx
// 004f49db  8b06                 mov eax, dword ptr [esi]
// 004f49dd  57                   push edi
// 004f49de  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004f49e2  3bf8                 cmp edi, eax
// 004f49e4  7211                 jb 0x4f49f7
// 004f49e6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f49e9  8d0c49               lea ecx, [ecx + ecx*2]
// 004f49ec  8d1488               lea edx, [eax + ecx*4]
// 004f49ef  3bfa                 cmp edi, edx
// 004f49f1  0f82ba000000         jb 0x4f4ab1
// 004f49f7  3bd8                 cmp ebx, eax
// 004f49f9  7211                 jb 0x4f4a0c
// 004f49fb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f49fe  8d0c49               lea ecx, [ecx + ecx*2]
// 004f4a01  8d1488               lea edx, [eax + ecx*4]
// 004f4a04  3bda                 cmp ebx, edx
// 004f4a06  0f82a5000000         jb 0x4f4ab1
// 004f4a0c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4a0f  8d5101               lea edx, [ecx + 1]
// 004f4a12  3b5608               cmp edx, dword ptr [esi + 8]
// 004f4a15  7d49                 jge 0x4f4a60
// 004f4a17  8d0c49               lea ecx, [ecx + ecx*2]
// 004f4a1a  8d0488               lea eax, [eax + ecx*4]
// 004f4a1d  85c0                 test eax, eax
// 004f4a1f  7410                 je 0x4f4a31
// 004f4a21  d907                 fld dword ptr [edi]
// 004f4a23  d918                 fstp dword ptr [eax]
// 004f4a25  d94704               fld dword ptr [edi + 4]
// 004f4a28  d95804               fstp dword ptr [eax + 4]
// 004f4a2b  d94708               fld dword ptr [edi + 8]
// 004f4a2e  d95808               fstp dword ptr [eax + 8]
// 004f4a31  8b4604               mov eax, dword ptr [esi + 4]
// 004f4a34  83c001               add eax, 1
// 004f4a37  8d1440               lea edx, [eax + eax*2]
// 004f4a3a  8b06                 mov eax, dword ptr [esi]
// 004f4a3c  8d0490               lea eax, [eax + edx*4]
// 004f4a3f  85c0                 test eax, eax
// 004f4a41  7410                 je 0x4f4a53
// 004f4a43  d903                 fld dword ptr [ebx]
// 004f4a45  d918                 fstp dword ptr [eax]
// 004f4a47  d94304               fld dword ptr [ebx + 4]
// 004f4a4a  d95804               fstp dword ptr [eax + 4]
// 004f4a4d  d94308               fld dword ptr [ebx + 8]
// 004f4a50  d95808               fstp dword ptr [eax + 8]
// 004f4a53  83460402             add dword ptr [esi + 4], 2
// 004f4a57  5f                   pop edi
// 004f4a58  5e                   pop esi
// 004f4a59  5b                   pop ebx
// 004f4a5a  83c418               add esp, 0x18
// 004f4a5d  c20800               ret 8
// 004f4a60  83c102               add ecx, 2
// 004f4a63  6a00                 push 0
// 004f4a65  51                   push ecx
// 004f4a66  8bce                 mov ecx, esi
// 004f4a68  e883f6ffff           call 0x4f40f0
// 004f4a6d  d907                 fld dword ptr [edi]
// 004f4a6f  8b4604               mov eax, dword ptr [esi + 4]
// 004f4a72  8b16                 mov edx, dword ptr [esi]
// 004f4a74  83e802               sub eax, 2
// 004f4a77  8d0c40               lea ecx, [eax + eax*2]
// 004f4a7a  d91c8a               fstp dword ptr [edx + ecx*4]
// 004f4a7d  8d048a               lea eax, [edx + ecx*4]
// 004f4a80  d94704               fld dword ptr [edi + 4]
// 004f4a83  d95804               fstp dword ptr [eax + 4]
// 004f4a86  d94708               fld dword ptr [edi + 8]
// 004f4a89  5f                   pop edi
// 004f4a8a  d95808               fstp dword ptr [eax + 8]
// 004f4a8d  8b4604               mov eax, dword ptr [esi + 4]
// 004f4a90  8b0e                 mov ecx, dword ptr [esi]
// 004f4a92  d903                 fld dword ptr [ebx]
// 004f4a94  8d0440               lea eax, [eax + eax*2]
// 004f4a97  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004f4a9b  d918                 fstp dword ptr [eax]
// 004f4a9d  5e                   pop esi
// 004f4a9e  d94304               fld dword ptr [ebx + 4]
// 004f4aa1  d95804               fstp dword ptr [eax + 4]
// 004f4aa4  d94308               fld dword ptr [ebx + 8]
// 004f4aa7  5b                   pop ebx
// 004f4aa8  d95808               fstp dword ptr [eax + 8]
// 004f4aab  83c418               add esp, 0x18
// 004f4aae  c20800               ret 8
// 004f4ab1  d907                 fld dword ptr [edi]
// 004f4ab3  8d54240c             lea edx, [esp + 0xc]
// 004f4ab7  d95c2418             fstp dword ptr [esp + 0x18]
// 004f4abb  52                   push edx
// 004f4abc  d94704               fld dword ptr [edi + 4]
// 004f4abf  8d44241c             lea eax, [esp + 0x1c]
// 004f4ac3  d95c2420             fstp dword ptr [esp + 0x20]
// 004f4ac7  50                   push eax
// 004f4ac8  d94708               fld dword ptr [edi + 8]
// 004f4acb  8bce                 mov ecx, esi
// 004f4acd  d95c2428             fstp dword ptr [esp + 0x28]
// 004f4ad1  d903                 fld dword ptr [ebx]
// 004f4ad3  d95c2414             fstp dword ptr [esp + 0x14]
// 004f4ad7  d94304               fld dword ptr [ebx + 4]
// 004f4ada  d95c2418             fstp dword ptr [esp + 0x18]
// 004f4ade  d94308               fld dword ptr [ebx + 8]
// 004f4ae1  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f4ae5  e8e6feffff           call 0x4f49d0
// 004f4aea  5f                   pop edi
// 004f4aeb  5e                   pop esi
// 004f4aec  5b                   pop ebx
// 004f4aed  83c418               add esp, 0x18
// 004f4af0  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp

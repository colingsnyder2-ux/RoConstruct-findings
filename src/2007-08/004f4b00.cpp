// roc 2007-08 004f4b00  unit: boost::bad_lexical_cast  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4b00
//
// 004f4b00  83ec24               sub esp, 0x24
// 004f4b03  53                   push ebx
// 004f4b04  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004f4b08  55                   push ebp
// 004f4b09  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 004f4b0d  56                   push esi
// 004f4b0e  8bf1                 mov esi, ecx
// 004f4b10  8b06                 mov eax, dword ptr [esi]
// 004f4b12  57                   push edi
// 004f4b13  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004f4b17  3bf8                 cmp edi, eax
// 004f4b19  7211                 jb 0x4f4b2c
// 004f4b1b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4b1e  8d0c49               lea ecx, [ecx + ecx*2]
// 004f4b21  8d1488               lea edx, [eax + ecx*4]
// 004f4b24  3bfa                 cmp edi, edx
// 004f4b26  0f8214010000         jb 0x4f4c40
// 004f4b2c  3bd8                 cmp ebx, eax
// 004f4b2e  7211                 jb 0x4f4b41
// 004f4b30  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4b33  8d0c49               lea ecx, [ecx + ecx*2]
// 004f4b36  8d1488               lea edx, [eax + ecx*4]
// 004f4b39  3bda                 cmp ebx, edx
// 004f4b3b  0f82ff000000         jb 0x4f4c40
// 004f4b41  3be8                 cmp ebp, eax
// 004f4b43  7211                 jb 0x4f4b56
// 004f4b45  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4b48  8d0c49               lea ecx, [ecx + ecx*2]
// 004f4b4b  8d1488               lea edx, [eax + ecx*4]
// 004f4b4e  3bea                 cmp ebp, edx
// 004f4b50  0f82ea000000         jb 0x4f4c40
// 004f4b56  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4b59  8d5102               lea edx, [ecx + 2]
// 004f4b5c  3b5608               cmp edx, dword ptr [esi + 8]
// 004f4b5f  7d6d                 jge 0x4f4bce
// 004f4b61  8d0c49               lea ecx, [ecx + ecx*2]
// 004f4b64  8d0488               lea eax, [eax + ecx*4]
// 004f4b67  85c0                 test eax, eax
// 004f4b69  7410                 je 0x4f4b7b
// 004f4b6b  d907                 fld dword ptr [edi]
// 004f4b6d  d918                 fstp dword ptr [eax]
// 004f4b6f  d94704               fld dword ptr [edi + 4]
// 004f4b72  d95804               fstp dword ptr [eax + 4]
// 004f4b75  d94708               fld dword ptr [edi + 8]
// 004f4b78  d95808               fstp dword ptr [eax + 8]
// 004f4b7b  8b4604               mov eax, dword ptr [esi + 4]
// 004f4b7e  83c001               add eax, 1
// 004f4b81  8d1440               lea edx, [eax + eax*2]
// 004f4b84  8b06                 mov eax, dword ptr [esi]
// 004f4b86  8d0490               lea eax, [eax + edx*4]
// 004f4b89  85c0                 test eax, eax
// 004f4b8b  7410                 je 0x4f4b9d
// 004f4b8d  d903                 fld dword ptr [ebx]
// 004f4b8f  d918                 fstp dword ptr [eax]
// 004f4b91  d94304               fld dword ptr [ebx + 4]
// 004f4b94  d95804               fstp dword ptr [eax + 4]
// 004f4b97  d94308               fld dword ptr [ebx + 8]
// 004f4b9a  d95808               fstp dword ptr [eax + 8]
// 004f4b9d  8b4604               mov eax, dword ptr [esi + 4]
// 004f4ba0  8b16                 mov edx, dword ptr [esi]
// 004f4ba2  83c002               add eax, 2
// 004f4ba5  8d0c40               lea ecx, [eax + eax*2]
// 004f4ba8  8d048a               lea eax, [edx + ecx*4]
// 004f4bab  85c0                 test eax, eax
// 004f4bad  7411                 je 0x4f4bc0
// 004f4baf  d94500               fld dword ptr [ebp]
// 004f4bb2  d918                 fstp dword ptr [eax]
// 004f4bb4  d94504               fld dword ptr [ebp + 4]
// 004f4bb7  d95804               fstp dword ptr [eax + 4]
// 004f4bba  d94508               fld dword ptr [ebp + 8]
// 004f4bbd  d95808               fstp dword ptr [eax + 8]
// 004f4bc0  83460403             add dword ptr [esi + 4], 3
// 004f4bc4  5f                   pop edi
// 004f4bc5  5e                   pop esi
// 004f4bc6  5d                   pop ebp
// 004f4bc7  5b                   pop ebx
// 004f4bc8  83c424               add esp, 0x24
// 004f4bcb  c20c00               ret 0xc
// 004f4bce  83c103               add ecx, 3
// 004f4bd1  6a00                 push 0
// 004f4bd3  51                   push ecx
// 004f4bd4  8bce                 mov ecx, esi
// 004f4bd6  e815f5ffff           call 0x4f40f0
// 004f4bdb  d907                 fld dword ptr [edi]
// 004f4bdd  8b4604               mov eax, dword ptr [esi + 4]
// 004f4be0  8b0e                 mov ecx, dword ptr [esi]
// 004f4be2  83e803               sub eax, 3
// 004f4be5  8d0440               lea eax, [eax + eax*2]
// 004f4be8  d91c81               fstp dword ptr [ecx + eax*4]
// 004f4beb  8d0481               lea eax, [ecx + eax*4]
// 004f4bee  d94704               fld dword ptr [edi + 4]
// 004f4bf1  d95804               fstp dword ptr [eax + 4]
// 004f4bf4  d94708               fld dword ptr [edi + 8]
// 004f4bf7  5f                   pop edi
// 004f4bf8  d95808               fstp dword ptr [eax + 8]
// 004f4bfb  8b4604               mov eax, dword ptr [esi + 4]
// 004f4bfe  d903                 fld dword ptr [ebx]
// 004f4c00  83e802               sub eax, 2
// 004f4c03  8d1440               lea edx, [eax + eax*2]
// 004f4c06  8b06                 mov eax, dword ptr [esi]
// 004f4c08  d91c90               fstp dword ptr [eax + edx*4]
// 004f4c0b  d94304               fld dword ptr [ebx + 4]
// 004f4c0e  8d0490               lea eax, [eax + edx*4]
// 004f4c11  d95804               fstp dword ptr [eax + 4]
// 004f4c14  d94308               fld dword ptr [ebx + 8]
// 004f4c17  d95808               fstp dword ptr [eax + 8]
// 004f4c1a  8b4604               mov eax, dword ptr [esi + 4]
// 004f4c1d  8b16                 mov edx, dword ptr [esi]
// 004f4c1f  d94500               fld dword ptr [ebp]
// 004f4c22  8d0c40               lea ecx, [eax + eax*2]
// 004f4c25  8d448af4             lea eax, [edx + ecx*4 - 0xc]
// 004f4c29  d918                 fstp dword ptr [eax]
// 004f4c2b  5e                   pop esi
// 004f4c2c  d94504               fld dword ptr [ebp + 4]
// 004f4c2f  d95804               fstp dword ptr [eax + 4]
// 004f4c32  d94508               fld dword ptr [ebp + 8]
// 004f4c35  5d                   pop ebp
// 004f4c36  d95808               fstp dword ptr [eax + 8]
// 004f4c39  5b                   pop ebx
// 004f4c3a  83c424               add esp, 0x24
// 004f4c3d  c20c00               ret 0xc
// 004f4c40  d907                 fld dword ptr [edi]
// 004f4c42  8d442410             lea eax, [esp + 0x10]
// 004f4c46  d95c2428             fstp dword ptr [esp + 0x28]
// 004f4c4a  50                   push eax
// 004f4c4b  d94704               fld dword ptr [edi + 4]
// 004f4c4e  8d4c2420             lea ecx, [esp + 0x20]
// 004f4c52  d95c2430             fstp dword ptr [esp + 0x30]
// 004f4c56  51                   push ecx
// 004f4c57  d94708               fld dword ptr [edi + 8]
// 004f4c5a  8d542430             lea edx, [esp + 0x30]
// 004f4c5e  d95c2438             fstp dword ptr [esp + 0x38]
// 004f4c62  52                   push edx
// 004f4c63  d903                 fld dword ptr [ebx]
// 004f4c65  8bce                 mov ecx, esi
// 004f4c67  d95c2428             fstp dword ptr [esp + 0x28]
// 004f4c6b  d94304               fld dword ptr [ebx + 4]
// 004f4c6e  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f4c72  d94308               fld dword ptr [ebx + 8]
// 004f4c75  d95c2430             fstp dword ptr [esp + 0x30]
// 004f4c79  d94500               fld dword ptr [ebp]
// 004f4c7c  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f4c80  d94504               fld dword ptr [ebp + 4]
// 004f4c83  d95c2420             fstp dword ptr [esp + 0x20]
// 004f4c87  d94508               fld dword ptr [ebp + 8]
// 004f4c8a  d95c2424             fstp dword ptr [esp + 0x24]
// 004f4c8e  e86dfeffff           call 0x4f4b00
// 004f4c93  5f                   pop edi
// 004f4c94  5e                   pop esi
// 004f4c95  5d                   pop ebp
// 004f4c96  5b                   pop ebx
// 004f4c97  83c424               add esp, 0x24
// 004f4c9a  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\MeshBuilder.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshBuilder.cpp

// roc 2009-06 0084afc0  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084afc0
//
// 0084afc0  d9442404             fld dword ptr [esp + 4]
// 0084afc4  83ec08               sub esp, 8
// 0084afc7  d8a118000600         fsub dword ptr [ecx + 0x60018]
// 0084afcd  d9442410             fld dword ptr [esp + 0x10]
// 0084afd1  d8a11c000600         fsub dword ptr [ecx + 0x6001c]
// 0084afd7  d9442414             fld dword ptr [esp + 0x14]
// 0084afdb  d8a120000600         fsub dword ptr [ecx + 0x60020]
// 0084afe1  d98124000600         fld dword ptr [ecx + 0x60024]
// 0084afe7  decb                 fmulp st(3)
// 0084afe9  d98128000600         fld dword ptr [ecx + 0x60028]
// 0084afef  deca                 fmulp st(2)
// 0084aff1  d9c9                 fxch st(1)
// 0084aff3  d95c2410             fstp dword ptr [esp + 0x10]
// 0084aff7  d8892c000600         fmul dword ptr [ecx + 0x6002c]
// 0084affd  d95c2414             fstp dword ptr [esp + 0x14]
// 0084b001  d80d44a48c00         fmul dword ptr [0x8ca444]
// 0084b007  dd1c24               fstp qword ptr [esp]
// 0084b00a  e871f2ecff           call 0x71a280
// 0084b00f  83c408               add esp, 8
// 0084b012  e8a9eeecff           call 0x719ec0
// 0084b017  85c0                 test eax, eax
// 0084b019  7f04                 jg 0x84b01f
// 0084b01b  33c0                 xor eax, eax
// 0084b01d  eb0a                 jmp 0x84b029
// 0084b01f  83f81f               cmp eax, 0x1f
// 0084b022  7c05                 jl 0x84b029
// 0084b024  b81f000000           mov eax, 0x1f
// 0084b029  d9442408             fld dword ptr [esp + 8]
// 0084b02d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084b031  d80d44a48c00         fmul dword ptr [0x8ca444]
// 0084b037  83ec08               sub esp, 8
// 0084b03a  8901                 mov dword ptr [ecx], eax
// 0084b03c  dd1c24               fstp qword ptr [esp]
// 0084b03f  e83cf2ecff           call 0x71a280
// 0084b044  83c408               add esp, 8
// 0084b047  e874eeecff           call 0x719ec0
// 0084b04c  85c0                 test eax, eax
// 0084b04e  7f04                 jg 0x84b054
// 0084b050  33c0                 xor eax, eax
// 0084b052  eb0a                 jmp 0x84b05e
// 0084b054  83f81f               cmp eax, 0x1f
// 0084b057  7c05                 jl 0x84b05e
// 0084b059  b81f000000           mov eax, 0x1f
// 0084b05e  d944240c             fld dword ptr [esp + 0xc]
// 0084b062  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084b066  d80d44a48c00         fmul dword ptr [0x8ca444]
// 0084b06c  83ec08               sub esp, 8
// 0084b06f  8902                 mov dword ptr [edx], eax
// 0084b071  dd1c24               fstp qword ptr [esp]
// 0084b074  e807f2ecff           call 0x71a280
// 0084b079  83c408               add esp, 8
// 0084b07c  e83feeecff           call 0x719ec0
// 0084b081  85c0                 test eax, eax
// 0084b083  7f0b                 jg 0x84b090
// 0084b085  33c0                 xor eax, eax
// 0084b087  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084b08b  8901                 mov dword ptr [ecx], eax
// 0084b08d  c21800               ret 0x18
// 0084b090  83f81f               cmp eax, 0x1f
// 0084b093  7cf2                 jl 0x84b087
// 0084b095  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084b099  b81f000000           mov eax, 0x1f
// 0084b09e  8902                 mov dword ptr [edx], eax
// 0084b0a0  c21800               ret 0x18
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgWeld.cpp (function ?toGridCoords@Welder@_internal@G3D@@QBEXVVector3@3@AAH11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgWeld.cpp

// roc 2008-06 005cc480  unit: RBX::VCamera::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc480
//
// 005cc480  83ec10               sub esp, 0x10
// 005cc483  8bd1                 mov edx, ecx
// 005cc485  d982c8010000         fld dword ptr [edx + 0x1c8]
// 005cc48b  83ec08               sub esp, 8
// 005cc48e  d8a298010000         fsub dword ptr [edx + 0x198]
// 005cc494  d954240c             fst dword ptr [esp + 0xc]
// 005cc498  d982cc010000         fld dword ptr [edx + 0x1cc]
// 005cc49e  d8a29c010000         fsub dword ptr [edx + 0x19c]
// 005cc4a4  d9542410             fst dword ptr [esp + 0x10]
// 005cc4a8  d982d0010000         fld dword ptr [edx + 0x1d0]
// 005cc4ae  d8a2a0010000         fsub dword ptr [edx + 0x1a0]
// 005cc4b4  d9542414             fst dword ptr [esp + 0x14]
// 005cc4b8  dcc8                 fmul st(0), st(0)
// 005cc4ba  d9c2                 fld st(2)
// 005cc4bc  decb                 fmulp st(3)
// 005cc4be  dec2                 faddp st(2)
// 005cc4c0  dcc8                 fmul st(0), st(0)
// 005cc4c2  dec1                 faddp st(1)
// 005cc4c4  d9fa                 fsqrt 
// 005cc4c6  d9542408             fst dword ptr [esp + 8]
// 005cc4ca  d944241c             fld dword ptr [esp + 0x1c]
// 005cc4ce  d95c2404             fstp dword ptr [esp + 4]
// 005cc4d2  d91c24               fstp dword ptr [esp]
// 005cc4d5  e866fdffff           call 0x5cc240
// 005cc4da  d9442408             fld dword ptr [esp + 8]
// 005cc4de  83c408               add esp, 8
// 005cc4e1  d9c0                 fld st(0)
// 005cc4e3  ddea                 fucomp st(2)
// 005cc4e5  dfe0                 fnstsw ax
// 005cc4e7  f6c444               test ah, 0x44
// 005cc4ea  7a0c                 jp 0x5cc4f8
// 005cc4ec  ddd9                 fstp st(1)
// 005cc4ee  32c0                 xor al, al
// 005cc4f0  ddd8                 fstp st(0)
// 005cc4f2  83c410               add esp, 0x10
// 005cc4f5  c20400               ret 4
// 005cc4f8  def9                 fdivp st(1)
// 005cc4fa  8bca                 mov ecx, edx
// 005cc4fc  d82594748200         fsub dword ptr [0x827494]
// 005cc502  d9442404             fld dword ptr [esp + 4]
// 005cc506  d8c9                 fmul st(1)
// 005cc508  d9c1                 fld st(1)
// 005cc50a  d84c2408             fmul dword ptr [esp + 8]
// 005cc50e  d944240c             fld dword ptr [esp + 0xc]
// 005cc512  decb                 fmulp st(3)
// 005cc514  d98298010000         fld dword ptr [edx + 0x198]
// 005cc51a  dee2                 fsubrp st(2)
// 005cc51c  d9c9                 fxch st(1)
// 005cc51e  d99a98010000         fstp dword ptr [edx + 0x198]
// 005cc524  d8aa9c010000         fsubr dword ptr [edx + 0x19c]
// 005cc52a  d99a9c010000         fstp dword ptr [edx + 0x19c]
// 005cc530  d8aaa0010000         fsubr dword ptr [edx + 0x1a0]
// 005cc536  d99aa0010000         fstp dword ptr [edx + 0x1a0]
// 005cc53c  e80ffaffff           call 0x5cbf50
// 005cc541  85c0                 test eax, eax
// 005cc543  7409                 je 0x5cc54e
// 005cc545  8b10                 mov edx, dword ptr [eax]
// 005cc547  8bc8                 mov ecx, eax
// 005cc549  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cc54c  ffd0                 call eax
// 005cc54e  b001                 mov al, 1
// 005cc550  83c410               add esp, 0x10
// 005cc553  c20400               ret 4
// library rbxgs/roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp (function ?nonCharacterZoom@Camera@RBX@@AAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp

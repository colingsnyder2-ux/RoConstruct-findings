// from server: 100% by auto
// roc 2010-06 004981b0  unit: G3D::GWindow  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004981b0
//
// 004981b0  6aff                 push -1
// 004981b2  68146d9800           push 0x986d14
// 004981b7  64a100000000         mov eax, dword ptr fs:[0]
// 004981bd  50                   push eax
// 004981be  64892500000000       mov dword ptr fs:[0], esp
// 004981c5  51                   push ecx
// 004981c6  56                   push esi
// 004981c7  8bf1                 mov esi, ecx
// 004981c9  89742404             mov dword ptr [esp + 4], esi
// 004981cd  c706ac72a100         mov dword ptr [esi], 0xa172ac
// 004981d3  a1d839c000           mov eax, dword ptr [0xc039d8]
// 004981d8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004981e0  85c0                 test eax, eax
// 004981e2  744e                 je 0x498232
// 004981e4  833dec3cc00000       cmp dword ptr [0xc03cec], 0
// 004981eb  743d                 je 0x49822a
// 004981ed  8d460c               lea eax, [esi + 0xc]
// 004981f0  50                   push eax
// 004981f1  b9ec3cc000           mov ecx, 0xc03cec
// 004981f6  e8a514ffff           call 0x4896a0
// 004981fb  a1f03cc000           mov eax, dword ptr [0xc03cf0]
// 00498200  83f814               cmp eax, 0x14
// 00498203  7e2d                 jle 0x498232
// 00498205  8b0dec3cc000         mov ecx, dword ptr [0xc03cec]
// 0049820b  8d5481e8             lea edx, [ecx + eax*4 - 0x18]
// 0049820f  52                   push edx
// 00498210  83c0fb               add eax, -5
// 00498213  50                   push eax
// 00498214  ff15d839c000         call dword ptr [0xc039d8]
// 0049821a  6a01                 push 1
// 0049821c  6a14                 push 0x14
// 0049821e  b9ec3cc000           mov ecx, 0xc03cec
// 00498223  e8780fffff           call 0x4891a0
// 00498228  eb08                 jmp 0x498232
// 0049822a  8d4e0c               lea ecx, [esi + 0xc]
// 0049822d  51                   push ecx
// 0049822e  6a01                 push 1
// 00498230  ffd0                 call eax
// 00498232  8d4e10               lea ecx, [esi + 0x10]
// 00498235  c644241000           mov byte ptr [esp + 0x10], 0
// 0049823a  ff1500a49e00         call dword ptr [0x9ea400]
// 00498240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00498244  c7065032a100         mov dword ptr [esi], 0xa13250
// 0049824a  5e                   pop esi
// 0049824b  64890d00000000       mov dword ptr fs:[0], ecx
// 00498252  83c410               add esp, 0x10
// 00498255  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??1Milestone@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp

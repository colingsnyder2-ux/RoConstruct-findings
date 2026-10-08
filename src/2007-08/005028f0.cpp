// from server: 100% by auto
// roc 2007-08 005028f0  unit: G3D::Log  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005028f0
//
// 005028f0  6874098c00           push 0x8c0974
// 005028f5  ff1548ed7700         call dword ptr [0x77ed48]
// 005028fb  a18c098c00           mov eax, dword ptr [0x8c098c]
// 00502900  8b0d88098c00         mov ecx, dword ptr [0x8c0988]
// 00502906  50                   push eax
// 00502907  51                   push ecx
// 00502908  ff155ced7700         call dword ptr [0x77ed5c]
// 0050290e  8b1570098c00         mov edx, dword ptr [0x8c0970]
// 00502914  52                   push edx
// 00502915  ff1560ed7700         call dword ptr [0x77ed60]
// 0050291b  a184098c00           mov eax, dword ptr [0x8c0984]
// 00502920  85c0                 test eax, eax
// 00502922  7d1f                 jge 0x502943
// 00502924  56                   push esi
// 00502925  33f6                 xor esi, esi
// 00502927  85c0                 test eax, eax
// 00502929  7d17                 jge 0x502942
// 0050292b  57                   push edi
// 0050292c  8b3d4ced7700         mov edi, dword ptr [0x77ed4c]
// 00502932  6a00                 push 0
// 00502934  ffd7                 call edi
// 00502936  83ee01               sub esi, 1
// 00502939  3b3584098c00         cmp esi, dword ptr [0x8c0984]
// 0050293f  7ff1                 jg 0x502932
// 00502941  5f                   pop edi
// 00502942  5e                   pop esi
// 00502943  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?_restoreInputGrab_@_internal@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp

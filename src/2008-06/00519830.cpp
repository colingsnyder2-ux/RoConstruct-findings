// from server: 100% by auto
// roc 2008-06 00519830  unit: G3D::_internal::DialogTemplate  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519830
//
// 00519830  83ec0c               sub esp, 0xc
// 00519833  53                   push ebx
// 00519834  d97c2406             fnstcw word ptr [esp + 6]
// 00519838  0fb7442406           movzx eax, word ptr [esp + 6]
// 0051983d  56                   push esi
// 0051983e  8bf1                 mov esi, ecx
// 00519840  0d000c0000           or eax, 0xc00
// 00519845  8944240c             mov dword ptr [esp + 0xc], eax
// 00519849  db4634               fild dword ptr [esi + 0x34]
// 0051984c  57                   push edi
// 0051984d  68c8878200           push 0x8287c8
// 00519852  bf64000000           mov edi, 0x64
// 00519857  dc0d308d8200         fmul qword ptr [0x828d30]
// 0051985d  56                   push esi
// 0051985e  d96c2418             fldcw word ptr [esp + 0x18]
// 00519862  33db                 xor ebx, ebx
// 00519864  df7c2418             fistp qword ptr [esp + 0x18]
// 00519868  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051986c  2bf8                 sub edi, eax
// 0051986e  d96c2416             fldcw word ptr [esp + 0x16]
// 00519872  ff156c238000         call dword ptr [0x80236c]
// 00519878  83c408               add esp, 8
// 0051987b  84c0                 test al, al
// 0051987d  7508                 jne 0x519887
// 0051987f  81ff0084d717         cmp edi, 0x17d78400
// 00519885  7322                 jae 0x5198a9
// 00519887  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0051988a  57                   push edi
// 0051988b  51                   push ecx
// 0051988c  e81ff3feff           call 0x508bb0
// 00519891  8bd8                 mov ebx, eax
// 00519893  83c408               add esp, 8
// 00519896  85db                 test ebx, ebx
// 00519898  740f                 je 0x5198a9
// 0051989a  897e38               mov dword ptr [esi + 0x38], edi
// 0051989d  5f                   pop edi
// 0051989e  895e30               mov dword ptr [esi + 0x30], ebx
// 005198a1  5e                   pop esi
// 005198a2  5b                   pop ebx
// 005198a3  83c40c               add esp, 0xc
// 005198a6  c20800               ret 8
// 005198a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005198ad  85c0                 test eax, eax
// 005198af  76ec                 jbe 0x51989d
// 005198b1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005198b5  50                   push eax
// 005198b6  8bce                 mov ecx, esi
// 005198b8  895634               mov dword ptr [esi + 0x34], edx
// 005198bb  e8f0fdffff           call 0x5196b0
// 005198c0  5f                   pop edi
// 005198c1  5e                   pop esi
// 005198c2  5b                   pop ebx
// 005198c3  83c40c               add esp, 0xc
// 005198c6  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?reallocBuffer@BinaryOutput@G3D@@AAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp

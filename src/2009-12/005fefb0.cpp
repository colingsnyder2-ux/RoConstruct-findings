// roc 2009-12 005fefb0  unit: G3D::_internal::DialogTemplate  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fefb0
//
// 005fefb0  83ec0c               sub esp, 0xc
// 005fefb3  53                   push ebx
// 005fefb4  d97c2406             fnstcw word ptr [esp + 6]
// 005fefb8  0fb7442406           movzx eax, word ptr [esp + 6]
// 005fefbd  56                   push esi
// 005fefbe  8bf1                 mov esi, ecx
// 005fefc0  0d000c0000           or eax, 0xc00
// 005fefc5  8944240c             mov dword ptr [esp + 0xc], eax
// 005fefc9  db4634               fild dword ptr [esi + 0x34]
// 005fefcc  57                   push edi
// 005fefcd  6874269c00           push 0x9c2674
// 005fefd2  bf64000000           mov edi, 0x64
// 005fefd7  dc0db8309c00         fmul qword ptr [0x9c30b8]
// 005fefdd  56                   push esi
// 005fefde  d96c2418             fldcw word ptr [esp + 0x18]
// 005fefe2  33db                 xor ebx, ebx
// 005fefe4  df7c2418             fistp qword ptr [esp + 0x18]
// 005fefe8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fefec  2bf8                 sub edi, eax
// 005fefee  d96c2416             fldcw word ptr [esp + 0x16]
// 005feff2  ff15acb69800         call dword ptr [0x98b6ac]
// 005feff8  83c408               add esp, 8
// 005feffb  84c0                 test al, al
// 005feffd  7508                 jne 0x5ff007
// 005fefff  81ff0084d717         cmp edi, 0x17d78400
// 005ff005  7322                 jae 0x5ff029
// 005ff007  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ff00a  57                   push edi
// 005ff00b  51                   push ecx
// 005ff00c  e87fd1f5ff           call 0x55c190
// 005ff011  8bd8                 mov ebx, eax
// 005ff013  83c408               add esp, 8
// 005ff016  85db                 test ebx, ebx
// 005ff018  740f                 je 0x5ff029
// 005ff01a  897e38               mov dword ptr [esi + 0x38], edi
// 005ff01d  5f                   pop edi
// 005ff01e  895e30               mov dword ptr [esi + 0x30], ebx
// 005ff021  5e                   pop esi
// 005ff022  5b                   pop ebx
// 005ff023  83c40c               add esp, 0xc
// 005ff026  c20800               ret 8
// 005ff029  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ff02d  85c0                 test eax, eax
// 005ff02f  76ec                 jbe 0x5ff01d
// 005ff031  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ff035  50                   push eax
// 005ff036  8bce                 mov ecx, esi
// 005ff038  895634               mov dword ptr [esi + 0x34], edx
// 005ff03b  e8f0fdffff           call 0x5fee30
// 005ff040  5f                   pop edi
// 005ff041  5e                   pop esi
// 005ff042  5b                   pop ebx
// 005ff043  83c40c               add esp, 0xc
// 005ff046  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?reallocBuffer@BinaryOutput@G3D@@AAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp

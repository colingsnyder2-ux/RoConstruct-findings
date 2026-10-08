// from server: 100% by auto
// roc 2010-06 00560920  unit: G3D::_internal::DialogTemplate  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560920
//
// 00560920  83ec0c               sub esp, 0xc
// 00560923  53                   push ebx
// 00560924  d97c2406             fnstcw word ptr [esp + 6]
// 00560928  0fb7442406           movzx eax, word ptr [esp + 6]
// 0056092d  56                   push esi
// 0056092e  8bf1                 mov esi, ecx
// 00560930  0d000c0000           or eax, 0xc00
// 00560935  8944240c             mov dword ptr [esp + 0xc], eax
// 00560939  db4634               fild dword ptr [esi + 0x34]
// 0056093c  57                   push edi
// 0056093d  688808a200           push 0xa20888
// 00560942  bf64000000           mov edi, 0x64
// 00560947  dc0d100ea200         fmul qword ptr [0xa20e10]
// 0056094d  56                   push esi
// 0056094e  d96c2418             fldcw word ptr [esp + 0x18]
// 00560952  33db                 xor ebx, ebx
// 00560954  df7c2418             fistp qword ptr [esp + 0x18]
// 00560958  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056095c  2bf8                 sub edi, eax
// 0056095e  d96c2416             fldcw word ptr [esp + 0x16]
// 00560962  ff1558a49e00         call dword ptr [0x9ea458]
// 00560968  83c408               add esp, 8
// 0056096b  84c0                 test al, al
// 0056096d  7508                 jne 0x560977
// 0056096f  81ff0084d717         cmp edi, 0x17d78400
// 00560975  7322                 jae 0x560999
// 00560977  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0056097a  57                   push edi
// 0056097b  51                   push ecx
// 0056097c  e80fcffeff           call 0x54d890
// 00560981  8bd8                 mov ebx, eax
// 00560983  83c408               add esp, 8
// 00560986  85db                 test ebx, ebx
// 00560988  740f                 je 0x560999
// 0056098a  897e38               mov dword ptr [esi + 0x38], edi
// 0056098d  5f                   pop edi
// 0056098e  895e30               mov dword ptr [esi + 0x30], ebx
// 00560991  5e                   pop esi
// 00560992  5b                   pop ebx
// 00560993  83c40c               add esp, 0xc
// 00560996  c20800               ret 8
// 00560999  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056099d  85c0                 test eax, eax
// 0056099f  76ec                 jbe 0x56098d
// 005609a1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005609a5  50                   push eax
// 005609a6  8bce                 mov ecx, esi
// 005609a8  895634               mov dword ptr [esi + 0x34], edx
// 005609ab  e8f0fdffff           call 0x5607a0
// 005609b0  5f                   pop edi
// 005609b1  5e                   pop esi
// 005609b2  5b                   pop ebx
// 005609b3  83c40c               add esp, 0xc
// 005609b6  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?reallocBuffer@BinaryOutput@G3D@@AAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp

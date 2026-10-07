// roc 2009-06 0057d1d0  unit: G3D::_internal::DialogTemplate  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d1d0
//
// 0057d1d0  83ec0c               sub esp, 0xc
// 0057d1d3  53                   push ebx
// 0057d1d4  d97c2406             fnstcw word ptr [esp + 6]
// 0057d1d8  0fb7442406           movzx eax, word ptr [esp + 6]
// 0057d1dd  56                   push esi
// 0057d1de  8bf1                 mov esi, ecx
// 0057d1e0  0d000c0000           or eax, 0xc00
// 0057d1e5  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d1e9  db4634               fild dword ptr [esi + 0x34]
// 0057d1ec  57                   push edi
// 0057d1ed  689cb78c00           push 0x8cb79c
// 0057d1f2  bf64000000           mov edi, 0x64
// 0057d1f7  dc0d10c28c00         fmul qword ptr [0x8cc210]
// 0057d1fd  56                   push esi
// 0057d1fe  d96c2418             fldcw word ptr [esp + 0x18]
// 0057d202  33db                 xor ebx, ebx
// 0057d204  df7c2418             fistp qword ptr [esp + 0x18]
// 0057d208  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057d20c  2bf8                 sub edi, eax
// 0057d20e  d96c2416             fldcw word ptr [esp + 0x16]
// 0057d212  ff1574e48900         call dword ptr [0x89e474]
// 0057d218  83c408               add esp, 8
// 0057d21b  84c0                 test al, al
// 0057d21d  7508                 jne 0x57d227
// 0057d21f  81ff0084d717         cmp edi, 0x17d78400
// 0057d225  7322                 jae 0x57d249
// 0057d227  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057d22a  57                   push edi
// 0057d22b  51                   push ecx
// 0057d22c  e85ffbf7ff           call 0x4fcd90
// 0057d231  8bd8                 mov ebx, eax
// 0057d233  83c408               add esp, 8
// 0057d236  85db                 test ebx, ebx
// 0057d238  740f                 je 0x57d249
// 0057d23a  897e38               mov dword ptr [esi + 0x38], edi
// 0057d23d  5f                   pop edi
// 0057d23e  895e30               mov dword ptr [esi + 0x30], ebx
// 0057d241  5e                   pop esi
// 0057d242  5b                   pop ebx
// 0057d243  83c40c               add esp, 0xc
// 0057d246  c20800               ret 8
// 0057d249  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057d24d  85c0                 test eax, eax
// 0057d24f  76ec                 jbe 0x57d23d
// 0057d251  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057d255  50                   push eax
// 0057d256  8bce                 mov ecx, esi
// 0057d258  895634               mov dword ptr [esi + 0x34], edx
// 0057d25b  e8f0fdffff           call 0x57d050
// 0057d260  5f                   pop edi
// 0057d261  5e                   pop esi
// 0057d262  5b                   pop ebx
// 0057d263  83c40c               add esp, 0xc
// 0057d266  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?reallocBuffer@BinaryOutput@G3D@@AAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp

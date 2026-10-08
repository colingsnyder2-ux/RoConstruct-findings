// from server: 100% by auto
// roc 2007-08 006488c0  unit: CXTPCommandBar  size: 883 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006488c0
//
// 006488c0  83c8ff               or eax, 0xffffffff
// 006488c3  83ec28               sub esp, 0x28
// 006488c6  39442430             cmp dword ptr [esp + 0x30], eax
// 006488ca  740d                 je 0x6488d9
// 006488cc  39442434             cmp dword ptr [esp + 0x34], eax
// 006488d0  c7042401000000       mov dword ptr [esp], 1
// 006488d7  7507                 jne 0x6488e0
// 006488d9  c7042400000000       mov dword ptr [esp], 0
// 006488e0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006488e4  8d442410             lea eax, [esp + 0x10]
// 006488e8  50                   push eax
// 006488e9  6a18                 push 0x18
// 006488eb  51                   push ecx
// 006488ec  ff15ccd07700         call dword ptr [0x77d0cc]
// 006488f2  85c0                 test eax, eax
// 006488f4  7508                 jne 0x6488fe
// 006488f6  33c0                 xor eax, eax
// 006488f8  83c428               add esp, 0x28
// 006488fb  c21000               ret 0x10
// 006488fe  66837c242220         cmp word ptr [esp + 0x22], 0x20
// 00648904  75f0                 jne 0x6488f6
// 00648906  66837c242001         cmp word ptr [esp + 0x20], 1
// 0064890c  75e8                 jne 0x6488f6
// 0064890e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00648912  85c0                 test eax, eax
// 00648914  74e0                 je 0x6488f6
// 00648916  837c241800           cmp dword ptr [esp + 0x18], 0
// 0064891b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0064891f  8954240c             mov dword ptr [esp + 0xc], edx
// 00648923  c744240800000000     mov dword ptr [esp + 8], 0
// 0064892b  0f8ef7020000         jle 0x648c28
// 00648931  dd0568047a00         fld qword ptr [0x7a0468]
// 00648937  53                   push ebx
// 00648938  dd0560047a00         fld qword ptr [0x7a0460]
// 0064893e  55                   push ebp
// 0064893f  dd05906b7c00         fld qword ptr [0x7c6b90]
// 00648945  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00648949  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0064894f  56                   push esi
// 00648950  8d7002               lea esi, [eax + 2]
// 00648953  8b442420             mov eax, dword ptr [esp + 0x20]
// 00648957  57                   push edi
// 00648958  89742414             mov dword ptr [esp + 0x14], esi
// 0064895c  33db                 xor ebx, ebx
// 0064895e  85c0                 test eax, eax
// 00648960  0f8e95020000         jle 0x648bfb
// 00648966  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064896b  0f840f010000         je 0x648a80
// 00648971  0fb646ff             movzx eax, byte ptr [esi - 1]
// 00648975  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 00648979  0fb616               movzx edx, byte ptr [esi]
// 0064897c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00648980  db44243c             fild dword ptr [esp + 0x3c]
// 00648984  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00648988  d8cc                 fmul st(4)
// 0064898a  db44243c             fild dword ptr [esp + 0x3c]
// 0064898e  8954243c             mov dword ptr [esp + 0x3c], edx
// 00648992  8b542444             mov edx, dword ptr [esp + 0x44]
// 00648996  8bc2                 mov eax, edx
// 00648998  d8cc                 fmul st(4)
// 0064899a  c1e810               shr eax, 0x10
// 0064899d  0fb6c8               movzx ecx, al
// 006489a0  dec1                 faddp st(1)
// 006489a2  db44243c             fild dword ptr [esp + 0x3c]
// 006489a6  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006489aa  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006489ae  8bc1                 mov eax, ecx
// 006489b0  d8cb                 fmul st(3)
// 006489b2  c1e810               shr eax, 0x10
// 006489b5  0fb6c0               movzx eax, al
// 006489b8  dec1                 faddp st(1)
// 006489ba  d8f1                 fdiv st(1)
// 006489bc  d9e8                 fld1 
// 006489be  d8e1                 fsub st(1)
// 006489c0  db44243c             fild dword ptr [esp + 0x3c]
// 006489c4  8944243c             mov dword ptr [esp + 0x3c], eax
// 006489c8  d8c9                 fmul st(1)
// 006489ca  db44243c             fild dword ptr [esp + 0x3c]
// 006489ce  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006489d2  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006489d7  d8cb                 fmul st(3)
// 006489d9  0d000c0000           or eax, 0xc00
// 006489de  89442448             mov dword ptr [esp + 0x48], eax
// 006489e2  dec1                 faddp st(1)
// 006489e4  d96c2448             fldcw word ptr [esp + 0x48]
// 006489e8  db5c2448             fistp dword ptr [esp + 0x48]
// 006489ec  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 006489f1  8846fe               mov byte ptr [esi - 2], al
// 006489f4  0fb6c6               movzx eax, dh
// 006489f7  d96c243c             fldcw word ptr [esp + 0x3c]
// 006489fb  8944243c             mov dword ptr [esp + 0x3c], eax
// 006489ff  0fb6c5               movzx eax, ch
// 00648a02  0fb6c9               movzx ecx, cl
// 00648a05  db44243c             fild dword ptr [esp + 0x3c]
// 00648a09  8944243c             mov dword ptr [esp + 0x3c], eax
// 00648a0d  0fb6d2               movzx edx, dl
// 00648a10  d8c9                 fmul st(1)
// 00648a12  db44243c             fild dword ptr [esp + 0x3c]
// 00648a16  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00648a1a  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00648a1f  d8cb                 fmul st(3)
// 00648a21  0d000c0000           or eax, 0xc00
// 00648a26  89442448             mov dword ptr [esp + 0x48], eax
// 00648a2a  dec1                 faddp st(1)
// 00648a2c  d96c2448             fldcw word ptr [esp + 0x48]
// 00648a30  db5c2448             fistp dword ptr [esp + 0x48]
// 00648a34  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 00648a39  8846ff               mov byte ptr [esi - 1], al
// 00648a3c  d96c243c             fldcw word ptr [esp + 0x3c]
// 00648a40  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00648a44  db44243c             fild dword ptr [esp + 0x3c]
// 00648a48  8954243c             mov dword ptr [esp + 0x3c], edx
// 00648a4c  deca                 fmulp st(2)
// 00648a4e  db44243c             fild dword ptr [esp + 0x3c]
// 00648a52  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00648a56  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00648a5b  dec9                 fmulp st(1)
// 00648a5d  0d000c0000           or eax, 0xc00
// 00648a62  89442448             mov dword ptr [esp + 0x48], eax
// 00648a66  dec1                 faddp st(1)
// 00648a68  d96c2448             fldcw word ptr [esp + 0x48]
// 00648a6c  db5c2448             fistp dword ptr [esp + 0x48]
// 00648a70  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 00648a75  8806                 mov byte ptr [esi], al
// 00648a77  d96c243c             fldcw word ptr [esp + 0x3c]
// 00648a7b  e969010000           jmp 0x648be9
// 00648a80  83fdff               cmp ebp, -1
// 00648a83  0f849c000000         je 0x648b25
// 00648a89  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 00648a8d  0fb656fe             movzx edx, byte ptr [esi - 2]
// 00648a91  69c94b020000         imul ecx, ecx, 0x24b
// 00648a97  0fb606               movzx eax, byte ptr [esi]
// 00648a9a  6bd272               imul edx, edx, 0x72
// 00648a9d  69c02b010000         imul eax, eax, 0x12b
// 00648aa3  03ca                 add ecx, edx
// 00648aa5  03c8                 add ecx, eax
// 00648aa7  b8d34d6210           mov eax, 0x10624dd3
// 00648aac  f7e9                 imul ecx
// 00648aae  c1fa06               sar edx, 6
// 00648ab1  8bca                 mov ecx, edx
// 00648ab3  c1e91f               shr ecx, 0x1f
// 00648ab6  03ca                 add ecx, edx
// 00648ab8  bfff000000           mov edi, 0xff
// 00648abd  2bf9                 sub edi, ecx
// 00648abf  0faffd               imul edi, ebp
// 00648ac2  b881808080           mov eax, 0x80808081
// 00648ac7  f7ef                 imul edi
// 00648ac9  03d7                 add edx, edi
// 00648acb  c1fa07               sar edx, 7
// 00648ace  8bc2                 mov eax, edx
// 00648ad0  c1e81f               shr eax, 0x1f
// 00648ad3  03c2                 add eax, edx
// 00648ad5  03c8                 add ecx, eax
// 00648ad7  81f9ff000000         cmp ecx, 0xff
// 00648add  7c05                 jl 0x648ae4
// 00648adf  b9ff000000           mov ecx, 0xff
// 00648ae4  884efe               mov byte ptr [esi - 2], cl
// 00648ae7  884eff               mov byte ptr [esi - 1], cl
// 00648aea  880e                 mov byte ptr [esi], cl
// 00648aec  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00648af0  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00648af4  db44243c             fild dword ptr [esp + 0x3c]
// 00648af8  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00648afc  dc35c8568b00         fdiv qword ptr [0x8b56c8]
// 00648b02  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00648b07  0d000c0000           or eax, 0xc00
// 00648b0c  89442448             mov dword ptr [esp + 0x48], eax
// 00648b10  d96c2448             fldcw word ptr [esp + 0x48]
// 00648b14  db5c2448             fistp dword ptr [esp + 0x48]
// 00648b18  8a542448             mov dl, byte ptr [esp + 0x48]
// 00648b1c  d96c243c             fldcw word ptr [esp + 0x3c]
// 00648b20  e9c1000000           jmp 0x648be6
// 00648b25  0fb646ff             movzx eax, byte ptr [esi - 1]
// 00648b29  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 00648b2d  0fb616               movzx edx, byte ptr [esi]
// 00648b30  8944243c             mov dword ptr [esp + 0x3c], eax
// 00648b34  db44243c             fild dword ptr [esp + 0x3c]
// 00648b38  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00648b3c  decc                 fmulp st(4)
// 00648b3e  db44243c             fild dword ptr [esp + 0x3c]
// 00648b42  8954243c             mov dword ptr [esp + 0x3c], edx
// 00648b46  decb                 fmulp st(3)
// 00648b48  d9cb                 fxch st(3)
// 00648b4a  dec2                 faddp st(2)
// 00648b4c  db44243c             fild dword ptr [esp + 0x3c]
// 00648b50  dec9                 fmulp st(1)
// 00648b52  dec1                 faddp st(1)
// 00648b54  def1                 fdivrp st(1)
// 00648b56  dd05d0568b00         fld qword ptr [0x8b56d0]
// 00648b5c  e83d86feff           call 0x63119e
// 00648b61  dd05a8d37800         fld qword ptr [0x78d3a8]
// 00648b67  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00648b6b  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00648b6f  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00648b74  dcc9                 fmul st(1), st(0)
// 00648b76  d9c9                 fxch st(1)
// 00648b78  0d000c0000           or eax, 0xc00
// 00648b7d  89442448             mov dword ptr [esp + 0x48], eax
// 00648b81  d96c2448             fldcw word ptr [esp + 0x48]
// 00648b85  db5c2448             fistp dword ptr [esp + 0x48]
// 00648b89  8a442448             mov al, byte ptr [esp + 0x48]
// 00648b8d  8846fe               mov byte ptr [esi - 2], al
// 00648b90  8846ff               mov byte ptr [esi - 1], al
// 00648b93  d96c243c             fldcw word ptr [esp + 0x3c]
// 00648b97  0fb6c0               movzx eax, al
// 00648b9a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00648b9e  8806                 mov byte ptr [esi], al
// 00648ba0  db44243c             fild dword ptr [esp + 0x3c]
// 00648ba4  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00648ba8  dc35c8568b00         fdiv qword ptr [0x8b56c8]
// 00648bae  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00648bb3  0d000c0000           or eax, 0xc00
// 00648bb8  89442448             mov dword ptr [esp + 0x48], eax
// 00648bbc  d96c2448             fldcw word ptr [esp + 0x48]
// 00648bc0  db5c2448             fistp dword ptr [esp + 0x48]
// 00648bc4  8a542448             mov dl, byte ptr [esp + 0x48]
// 00648bc8  d96c243c             fldcw word ptr [esp + 0x3c]
// 00648bcc  dd05906b7c00         fld qword ptr [0x7c6b90]
// 00648bd2  dd0560047a00         fld qword ptr [0x7a0460]
// 00648bd8  dd0568047a00         fld qword ptr [0x7a0468]
// 00648bde  d9cb                 fxch st(3)
// 00648be0  d9c9                 fxch st(1)
// 00648be2  d9ca                 fxch st(2)
// 00648be4  d9c9                 fxch st(1)
// 00648be6  885601               mov byte ptr [esi + 1], dl
// 00648be9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00648bed  83c301               add ebx, 1
// 00648bf0  83c604               add esi, 4
// 00648bf3  3bd8                 cmp ebx, eax
// 00648bf5  0f8c6bfdffff         jl 0x648966
// 00648bfb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00648bff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00648c03  0374241c             add esi, dword ptr [esp + 0x1c]
// 00648c07  83c101               add ecx, 1
// 00648c0a  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00648c0e  89742414             mov dword ptr [esp + 0x14], esi
// 00648c12  894c2418             mov dword ptr [esp + 0x18], ecx
// 00648c16  0f8c40fdffff         jl 0x64895c
// 00648c1c  ddd8                 fstp st(0)
// 00648c1e  5f                   pop edi
// 00648c1f  ddda                 fstp st(2)
// 00648c21  5e                   pop esi
// 00648c22  ddd8                 fstp st(0)
// 00648c24  5d                   pop ebp
// 00648c25  ddd8                 fstp st(0)
// 00648c27  5b                   pop ebx
// 00648c28  b801000000           mov eax, 1
// 00648c2d  83c428               add esp, 0x28
// 00648c30  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?DoDisableBitmap@CXTPImageManager@@AAEHPAUHBITMAP__@@KKH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp

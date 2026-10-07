// roc 2008-06 006b9bb0  unit: CXTPPropertyGridItemConstraint  size: 889 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9bb0
//
// 006b9bb0  83c8ff               or eax, 0xffffffff
// 006b9bb3  83ec28               sub esp, 0x28
// 006b9bb6  39442430             cmp dword ptr [esp + 0x30], eax
// 006b9bba  740d                 je 0x6b9bc9
// 006b9bbc  c7042401000000       mov dword ptr [esp], 1
// 006b9bc3  39442434             cmp dword ptr [esp + 0x34], eax
// 006b9bc7  7507                 jne 0x6b9bd0
// 006b9bc9  c7042400000000       mov dword ptr [esp], 0
// 006b9bd0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b9bd4  8d442410             lea eax, [esp + 0x10]
// 006b9bd8  50                   push eax
// 006b9bd9  6a18                 push 0x18
// 006b9bdb  51                   push ecx
// 006b9bdc  ff1554218000         call dword ptr [0x802154]
// 006b9be2  85c0                 test eax, eax
// 006b9be4  7508                 jne 0x6b9bee
// 006b9be6  33c0                 xor eax, eax
// 006b9be8  83c428               add esp, 0x28
// 006b9beb  c21000               ret 0x10
// 006b9bee  66837c242220         cmp word ptr [esp + 0x22], 0x20
// 006b9bf4  75f0                 jne 0x6b9be6
// 006b9bf6  66837c242001         cmp word ptr [esp + 0x20], 1
// 006b9bfc  75e8                 jne 0x6b9be6
// 006b9bfe  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b9c02  85c0                 test eax, eax
// 006b9c04  74e0                 je 0x6b9be6
// 006b9c06  837c241800           cmp dword ptr [esp + 0x18], 0
// 006b9c0b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006b9c0f  8954240c             mov dword ptr [esp + 0xc], edx
// 006b9c13  c744240800000000     mov dword ptr [esp + 8], 0
// 006b9c1b  0f8efd020000         jle 0x6b9f1e
// 006b9c21  dd05d8808200         fld qword ptr [0x8280d8]
// 006b9c27  53                   push ebx
// 006b9c28  dd05d0808200         fld qword ptr [0x8280d0]
// 006b9c2e  55                   push ebp
// 006b9c2f  dd0558208500         fld qword ptr [0x852058]
// 006b9c35  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 006b9c39  dd05d8358100         fld qword ptr [0x8135d8]
// 006b9c3f  56                   push esi
// 006b9c40  8d7002               lea esi, [eax + 2]
// 006b9c43  8b442420             mov eax, dword ptr [esp + 0x20]
// 006b9c47  57                   push edi
// 006b9c48  89742414             mov dword ptr [esp + 0x14], esi
// 006b9c4c  33db                 xor ebx, ebx
// 006b9c4e  85c0                 test eax, eax
// 006b9c50  0f8e9d020000         jle 0x6b9ef3
// 006b9c56  837c241000           cmp dword ptr [esp + 0x10], 0
// 006b9c5b  0f8419010000         je 0x6b9d7a
// 006b9c61  0fb646ff             movzx eax, byte ptr [esi - 1]
// 006b9c65  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 006b9c69  0fb616               movzx edx, byte ptr [esi]
// 006b9c6c  8944243c             mov dword ptr [esp + 0x3c], eax
// 006b9c70  db44243c             fild dword ptr [esp + 0x3c]
// 006b9c74  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006b9c78  d8cc                 fmul st(4)
// 006b9c7a  db44243c             fild dword ptr [esp + 0x3c]
// 006b9c7e  8954243c             mov dword ptr [esp + 0x3c], edx
// 006b9c82  8b542444             mov edx, dword ptr [esp + 0x44]
// 006b9c86  8bc2                 mov eax, edx
// 006b9c88  d8cc                 fmul st(4)
// 006b9c8a  c1e810               shr eax, 0x10
// 006b9c8d  0fb6c8               movzx ecx, al
// 006b9c90  dec1                 faddp st(1)
// 006b9c92  db44243c             fild dword ptr [esp + 0x3c]
// 006b9c96  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006b9c9a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006b9c9e  8bc1                 mov eax, ecx
// 006b9ca0  d8cb                 fmul st(3)
// 006b9ca2  c1e810               shr eax, 0x10
// 006b9ca5  0fb6c0               movzx eax, al
// 006b9ca8  dec1                 faddp st(1)
// 006b9caa  d8f1                 fdiv st(1)
// 006b9cac  d9e8                 fld1 
// 006b9cae  d8e1                 fsub st(1)
// 006b9cb0  db44243c             fild dword ptr [esp + 0x3c]
// 006b9cb4  8944243c             mov dword ptr [esp + 0x3c], eax
// 006b9cb8  d8c9                 fmul st(1)
// 006b9cba  db44243c             fild dword ptr [esp + 0x3c]
// 006b9cbe  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006b9cc2  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006b9cc7  d8cb                 fmul st(3)
// 006b9cc9  0d000c0000           or eax, 0xc00
// 006b9cce  89442448             mov dword ptr [esp + 0x48], eax
// 006b9cd2  dec1                 faddp st(1)
// 006b9cd4  d96c2448             fldcw word ptr [esp + 0x48]
// 006b9cd8  db5c2448             fistp dword ptr [esp + 0x48]
// 006b9cdc  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 006b9ce1  8846fe               mov byte ptr [esi - 2], al
// 006b9ce4  8bc2                 mov eax, edx
// 006b9ce6  d96c243c             fldcw word ptr [esp + 0x3c]
// 006b9cea  c1e808               shr eax, 8
// 006b9ced  0fb6c0               movzx eax, al
// 006b9cf0  8944243c             mov dword ptr [esp + 0x3c], eax
// 006b9cf4  8bc1                 mov eax, ecx
// 006b9cf6  c1e808               shr eax, 8
// 006b9cf9  db44243c             fild dword ptr [esp + 0x3c]
// 006b9cfd  0fb6c0               movzx eax, al
// 006b9d00  8944243c             mov dword ptr [esp + 0x3c], eax
// 006b9d04  0fb6c9               movzx ecx, cl
// 006b9d07  d8c9                 fmul st(1)
// 006b9d09  db44243c             fild dword ptr [esp + 0x3c]
// 006b9d0d  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006b9d11  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006b9d16  d8cb                 fmul st(3)
// 006b9d18  0d000c0000           or eax, 0xc00
// 006b9d1d  89442448             mov dword ptr [esp + 0x48], eax
// 006b9d21  dec1                 faddp st(1)
// 006b9d23  0fb6d2               movzx edx, dl
// 006b9d26  d96c2448             fldcw word ptr [esp + 0x48]
// 006b9d2a  db5c2448             fistp dword ptr [esp + 0x48]
// 006b9d2e  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 006b9d33  8846ff               mov byte ptr [esi - 1], al
// 006b9d36  d96c243c             fldcw word ptr [esp + 0x3c]
// 006b9d3a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006b9d3e  db44243c             fild dword ptr [esp + 0x3c]
// 006b9d42  8954243c             mov dword ptr [esp + 0x3c], edx
// 006b9d46  deca                 fmulp st(2)
// 006b9d48  db44243c             fild dword ptr [esp + 0x3c]
// 006b9d4c  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006b9d50  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006b9d55  dec9                 fmulp st(1)
// 006b9d57  0d000c0000           or eax, 0xc00
// 006b9d5c  89442448             mov dword ptr [esp + 0x48], eax
// 006b9d60  dec1                 faddp st(1)
// 006b9d62  d96c2448             fldcw word ptr [esp + 0x48]
// 006b9d66  db5c2448             fistp dword ptr [esp + 0x48]
// 006b9d6a  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 006b9d6f  8806                 mov byte ptr [esi], al
// 006b9d71  d96c243c             fldcw word ptr [esp + 0x3c]
// 006b9d75  e969010000           jmp 0x6b9ee3
// 006b9d7a  83fdff               cmp ebp, -1
// 006b9d7d  0f849c000000         je 0x6b9e1f
// 006b9d83  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 006b9d87  0fb656fe             movzx edx, byte ptr [esi - 2]
// 006b9d8b  69c94b020000         imul ecx, ecx, 0x24b
// 006b9d91  0fb606               movzx eax, byte ptr [esi]
// 006b9d94  6bd272               imul edx, edx, 0x72
// 006b9d97  69c02b010000         imul eax, eax, 0x12b
// 006b9d9d  03ca                 add ecx, edx
// 006b9d9f  03c8                 add ecx, eax
// 006b9da1  b8d34d6210           mov eax, 0x10624dd3
// 006b9da6  f7e9                 imul ecx
// 006b9da8  c1fa06               sar edx, 6
// 006b9dab  8bca                 mov ecx, edx
// 006b9dad  c1e91f               shr ecx, 0x1f
// 006b9db0  03ca                 add ecx, edx
// 006b9db2  bfff000000           mov edi, 0xff
// 006b9db7  2bf9                 sub edi, ecx
// 006b9db9  0faffd               imul edi, ebp
// 006b9dbc  b881808080           mov eax, 0x80808081
// 006b9dc1  f7ef                 imul edi
// 006b9dc3  03d7                 add edx, edi
// 006b9dc5  c1fa07               sar edx, 7
// 006b9dc8  8bc2                 mov eax, edx
// 006b9dca  c1e81f               shr eax, 0x1f
// 006b9dcd  03c2                 add eax, edx
// 006b9dcf  03c8                 add ecx, eax
// 006b9dd1  81f9ff000000         cmp ecx, 0xff
// 006b9dd7  7c05                 jl 0x6b9dde
// 006b9dd9  b9ff000000           mov ecx, 0xff
// 006b9dde  884efe               mov byte ptr [esi - 2], cl
// 006b9de1  884eff               mov byte ptr [esi - 1], cl
// 006b9de4  880e                 mov byte ptr [esi], cl
// 006b9de6  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 006b9dea  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006b9dee  db44243c             fild dword ptr [esp + 0x3c]
// 006b9df2  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006b9df6  dc35e8619600         fdiv qword ptr [0x9661e8]
// 006b9dfc  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006b9e01  0d000c0000           or eax, 0xc00
// 006b9e06  89442448             mov dword ptr [esp + 0x48], eax
// 006b9e0a  d96c2448             fldcw word ptr [esp + 0x48]
// 006b9e0e  db5c2448             fistp dword ptr [esp + 0x48]
// 006b9e12  8a542448             mov dl, byte ptr [esp + 0x48]
// 006b9e16  d96c243c             fldcw word ptr [esp + 0x3c]
// 006b9e1a  e9c1000000           jmp 0x6b9ee0
// 006b9e1f  0fb646ff             movzx eax, byte ptr [esi - 1]
// 006b9e23  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 006b9e27  0fb616               movzx edx, byte ptr [esi]
// 006b9e2a  8944243c             mov dword ptr [esp + 0x3c], eax
// 006b9e2e  db44243c             fild dword ptr [esp + 0x3c]
// 006b9e32  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006b9e36  decc                 fmulp st(4)
// 006b9e38  db44243c             fild dword ptr [esp + 0x3c]
// 006b9e3c  8954243c             mov dword ptr [esp + 0x3c], edx
// 006b9e40  decb                 fmulp st(3)
// 006b9e42  d9cb                 fxch st(3)
// 006b9e44  dec2                 faddp st(2)
// 006b9e46  db44243c             fild dword ptr [esp + 0x3c]
// 006b9e4a  dec9                 fmulp st(1)
// 006b9e4c  dec1                 faddp st(1)
// 006b9e4e  def1                 fdivrp st(1)
// 006b9e50  dd05f0619600         fld qword ptr [0x9661f0]
// 006b9e56  e8c57dfeff           call 0x6a1c20
// 006b9e5b  dd05d8358100         fld qword ptr [0x8135d8]
// 006b9e61  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006b9e65  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006b9e6a  dcc9                 fmul st(1), st(0)
// 006b9e6c  0d000c0000           or eax, 0xc00
// 006b9e71  d9c9                 fxch st(1)
// 006b9e73  89442448             mov dword ptr [esp + 0x48], eax
// 006b9e77  d96c2448             fldcw word ptr [esp + 0x48]
// 006b9e7b  db5c2448             fistp dword ptr [esp + 0x48]
// 006b9e7f  8a442448             mov al, byte ptr [esp + 0x48]
// 006b9e83  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 006b9e87  8846fe               mov byte ptr [esi - 2], al
// 006b9e8a  d96c243c             fldcw word ptr [esp + 0x3c]
// 006b9e8e  8846ff               mov byte ptr [esi - 1], al
// 006b9e91  0fb6c0               movzx eax, al
// 006b9e94  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006b9e98  8806                 mov byte ptr [esi], al
// 006b9e9a  db44243c             fild dword ptr [esp + 0x3c]
// 006b9e9e  d97c243c             fnstcw word ptr [esp + 0x3c]
// 006b9ea2  dc35e8619600         fdiv qword ptr [0x9661e8]
// 006b9ea8  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 006b9ead  0d000c0000           or eax, 0xc00
// 006b9eb2  89442448             mov dword ptr [esp + 0x48], eax
// 006b9eb6  d96c2448             fldcw word ptr [esp + 0x48]
// 006b9eba  db5c2448             fistp dword ptr [esp + 0x48]
// 006b9ebe  8a542448             mov dl, byte ptr [esp + 0x48]
// 006b9ec2  d96c243c             fldcw word ptr [esp + 0x3c]
// 006b9ec6  dd0558208500         fld qword ptr [0x852058]
// 006b9ecc  dd05d0808200         fld qword ptr [0x8280d0]
// 006b9ed2  dd05d8808200         fld qword ptr [0x8280d8]
// 006b9ed8  d9cb                 fxch st(3)
// 006b9eda  d9c9                 fxch st(1)
// 006b9edc  d9ca                 fxch st(2)
// 006b9ede  d9c9                 fxch st(1)
// 006b9ee0  885601               mov byte ptr [esi + 1], dl
// 006b9ee3  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b9ee7  43                   inc ebx
// 006b9ee8  83c604               add esi, 4
// 006b9eeb  3bd8                 cmp ebx, eax
// 006b9eed  0f8c63fdffff         jl 0x6b9c56
// 006b9ef3  8b742414             mov esi, dword ptr [esp + 0x14]
// 006b9ef7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b9efb  0374241c             add esi, dword ptr [esp + 0x1c]
// 006b9eff  41                   inc ecx
// 006b9f00  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 006b9f04  89742414             mov dword ptr [esp + 0x14], esi
// 006b9f08  894c2418             mov dword ptr [esp + 0x18], ecx
// 006b9f0c  0f8c3afdffff         jl 0x6b9c4c
// 006b9f12  ddd8                 fstp st(0)
// 006b9f14  5f                   pop edi
// 006b9f15  ddda                 fstp st(2)
// 006b9f17  5e                   pop esi
// 006b9f18  ddd8                 fstp st(0)
// 006b9f1a  5d                   pop ebp
// 006b9f1b  ddd8                 fstp st(0)
// 006b9f1d  5b                   pop ebx
// 006b9f1e  b801000000           mov eax, 1
// 006b9f23  83c428               add esp, 0x28
// 006b9f26  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?DoDisableBitmap@CXTPImageManager@@AAEHPAUHBITMAP__@@KKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp

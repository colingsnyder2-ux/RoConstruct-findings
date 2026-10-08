// from server: 100% by auto
// roc 2012-06 00997b50  unit: CXTPPropertyGridItemConstraint  size: 889 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997b50
//
// 00997b50  83c8ff               or eax, 0xffffffff
// 00997b53  83ec28               sub esp, 0x28
// 00997b56  39442430             cmp dword ptr [esp + 0x30], eax
// 00997b5a  740d                 je 0x997b69
// 00997b5c  c7042401000000       mov dword ptr [esp], 1
// 00997b63  39442434             cmp dword ptr [esp + 0x34], eax
// 00997b67  7507                 jne 0x997b70
// 00997b69  c7042400000000       mov dword ptr [esp], 0
// 00997b70  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00997b74  8d442410             lea eax, [esp + 0x10]
// 00997b78  50                   push eax
// 00997b79  6a18                 push 0x18
// 00997b7b  51                   push ecx
// 00997b7c  ff155021b200         call dword ptr [0xb22150]
// 00997b82  85c0                 test eax, eax
// 00997b84  7508                 jne 0x997b8e
// 00997b86  33c0                 xor eax, eax
// 00997b88  83c428               add esp, 0x28
// 00997b8b  c21000               ret 0x10
// 00997b8e  66837c242220         cmp word ptr [esp + 0x22], 0x20
// 00997b94  75f0                 jne 0x997b86
// 00997b96  66837c242001         cmp word ptr [esp + 0x20], 1
// 00997b9c  75e8                 jne 0x997b86
// 00997b9e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00997ba2  85c0                 test eax, eax
// 00997ba4  74e0                 je 0x997b86
// 00997ba6  837c241800           cmp dword ptr [esp + 0x18], 0
// 00997bab  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00997baf  8954240c             mov dword ptr [esp + 0xc], edx
// 00997bb3  c744240800000000     mov dword ptr [esp + 8], 0
// 00997bbb  0f8efd020000         jle 0x997ebe
// 00997bc1  dd05f035b800         fld qword ptr [0xb835f0]
// 00997bc7  53                   push ebx
// 00997bc8  dd05e835b800         fld qword ptr [0xb835e8]
// 00997bce  55                   push ebp
// 00997bcf  dd05b8e6c000         fld qword ptr [0xc0e6b8]
// 00997bd5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00997bd9  dd05383bb500         fld qword ptr [0xb53b38]
// 00997bdf  56                   push esi
// 00997be0  8d7002               lea esi, [eax + 2]
// 00997be3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00997be7  57                   push edi
// 00997be8  89742414             mov dword ptr [esp + 0x14], esi
// 00997bec  33db                 xor ebx, ebx
// 00997bee  85c0                 test eax, eax
// 00997bf0  0f8e9d020000         jle 0x997e93
// 00997bf6  837c241000           cmp dword ptr [esp + 0x10], 0
// 00997bfb  0f8419010000         je 0x997d1a
// 00997c01  0fb646ff             movzx eax, byte ptr [esi - 1]
// 00997c05  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 00997c09  0fb616               movzx edx, byte ptr [esi]
// 00997c0c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00997c10  db44243c             fild dword ptr [esp + 0x3c]
// 00997c14  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00997c18  d8cc                 fmul st(4)
// 00997c1a  db44243c             fild dword ptr [esp + 0x3c]
// 00997c1e  8954243c             mov dword ptr [esp + 0x3c], edx
// 00997c22  8b542444             mov edx, dword ptr [esp + 0x44]
// 00997c26  8bc2                 mov eax, edx
// 00997c28  d8cc                 fmul st(4)
// 00997c2a  c1e810               shr eax, 0x10
// 00997c2d  0fb6c8               movzx ecx, al
// 00997c30  dec1                 faddp st(1)
// 00997c32  db44243c             fild dword ptr [esp + 0x3c]
// 00997c36  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00997c3a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00997c3e  8bc1                 mov eax, ecx
// 00997c40  d8cb                 fmul st(3)
// 00997c42  c1e810               shr eax, 0x10
// 00997c45  0fb6c0               movzx eax, al
// 00997c48  dec1                 faddp st(1)
// 00997c4a  d8f1                 fdiv st(1)
// 00997c4c  d9e8                 fld1 
// 00997c4e  d8e1                 fsub st(1)
// 00997c50  db44243c             fild dword ptr [esp + 0x3c]
// 00997c54  8944243c             mov dword ptr [esp + 0x3c], eax
// 00997c58  d8c9                 fmul st(1)
// 00997c5a  db44243c             fild dword ptr [esp + 0x3c]
// 00997c5e  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00997c62  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00997c67  d8cb                 fmul st(3)
// 00997c69  0d000c0000           or eax, 0xc00
// 00997c6e  89442448             mov dword ptr [esp + 0x48], eax
// 00997c72  dec1                 faddp st(1)
// 00997c74  d96c2448             fldcw word ptr [esp + 0x48]
// 00997c78  db5c2448             fistp dword ptr [esp + 0x48]
// 00997c7c  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 00997c81  8846fe               mov byte ptr [esi - 2], al
// 00997c84  8bc2                 mov eax, edx
// 00997c86  d96c243c             fldcw word ptr [esp + 0x3c]
// 00997c8a  c1e808               shr eax, 8
// 00997c8d  0fb6c0               movzx eax, al
// 00997c90  8944243c             mov dword ptr [esp + 0x3c], eax
// 00997c94  8bc1                 mov eax, ecx
// 00997c96  c1e808               shr eax, 8
// 00997c99  db44243c             fild dword ptr [esp + 0x3c]
// 00997c9d  0fb6c0               movzx eax, al
// 00997ca0  8944243c             mov dword ptr [esp + 0x3c], eax
// 00997ca4  0fb6c9               movzx ecx, cl
// 00997ca7  d8c9                 fmul st(1)
// 00997ca9  db44243c             fild dword ptr [esp + 0x3c]
// 00997cad  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00997cb1  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00997cb6  d8cb                 fmul st(3)
// 00997cb8  0d000c0000           or eax, 0xc00
// 00997cbd  89442448             mov dword ptr [esp + 0x48], eax
// 00997cc1  dec1                 faddp st(1)
// 00997cc3  0fb6d2               movzx edx, dl
// 00997cc6  d96c2448             fldcw word ptr [esp + 0x48]
// 00997cca  db5c2448             fistp dword ptr [esp + 0x48]
// 00997cce  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 00997cd3  8846ff               mov byte ptr [esi - 1], al
// 00997cd6  d96c243c             fldcw word ptr [esp + 0x3c]
// 00997cda  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00997cde  db44243c             fild dword ptr [esp + 0x3c]
// 00997ce2  8954243c             mov dword ptr [esp + 0x3c], edx
// 00997ce6  deca                 fmulp st(2)
// 00997ce8  db44243c             fild dword ptr [esp + 0x3c]
// 00997cec  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00997cf0  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00997cf5  dec9                 fmulp st(1)
// 00997cf7  0d000c0000           or eax, 0xc00
// 00997cfc  89442448             mov dword ptr [esp + 0x48], eax
// 00997d00  dec1                 faddp st(1)
// 00997d02  d96c2448             fldcw word ptr [esp + 0x48]
// 00997d06  db5c2448             fistp dword ptr [esp + 0x48]
// 00997d0a  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 00997d0f  8806                 mov byte ptr [esi], al
// 00997d11  d96c243c             fldcw word ptr [esp + 0x3c]
// 00997d15  e969010000           jmp 0x997e83
// 00997d1a  83fdff               cmp ebp, -1
// 00997d1d  0f849c000000         je 0x997dbf
// 00997d23  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 00997d27  0fb656fe             movzx edx, byte ptr [esi - 2]
// 00997d2b  69c94b020000         imul ecx, ecx, 0x24b
// 00997d31  0fb606               movzx eax, byte ptr [esi]
// 00997d34  6bd272               imul edx, edx, 0x72
// 00997d37  69c02b010000         imul eax, eax, 0x12b
// 00997d3d  03ca                 add ecx, edx
// 00997d3f  03c8                 add ecx, eax
// 00997d41  b8d34d6210           mov eax, 0x10624dd3
// 00997d46  f7e9                 imul ecx
// 00997d48  c1fa06               sar edx, 6
// 00997d4b  8bca                 mov ecx, edx
// 00997d4d  c1e91f               shr ecx, 0x1f
// 00997d50  03ca                 add ecx, edx
// 00997d52  bfff000000           mov edi, 0xff
// 00997d57  2bf9                 sub edi, ecx
// 00997d59  0faffd               imul edi, ebp
// 00997d5c  b881808080           mov eax, 0x80808081
// 00997d61  f7ef                 imul edi
// 00997d63  03d7                 add edx, edi
// 00997d65  c1fa07               sar edx, 7
// 00997d68  8bc2                 mov eax, edx
// 00997d6a  c1e81f               shr eax, 0x1f
// 00997d6d  03c2                 add eax, edx
// 00997d6f  03c8                 add ecx, eax
// 00997d71  81f9ff000000         cmp ecx, 0xff
// 00997d77  7c05                 jl 0x997d7e
// 00997d79  b9ff000000           mov ecx, 0xff
// 00997d7e  884efe               mov byte ptr [esi - 2], cl
// 00997d81  884eff               mov byte ptr [esi - 1], cl
// 00997d84  880e                 mov byte ptr [esi], cl
// 00997d86  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00997d8a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00997d8e  db44243c             fild dword ptr [esp + 0x3c]
// 00997d92  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00997d96  dc35e02be000         fdiv qword ptr [0xe02be0]
// 00997d9c  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00997da1  0d000c0000           or eax, 0xc00
// 00997da6  89442448             mov dword ptr [esp + 0x48], eax
// 00997daa  d96c2448             fldcw word ptr [esp + 0x48]
// 00997dae  db5c2448             fistp dword ptr [esp + 0x48]
// 00997db2  8a542448             mov dl, byte ptr [esp + 0x48]
// 00997db6  d96c243c             fldcw word ptr [esp + 0x3c]
// 00997dba  e9c1000000           jmp 0x997e80
// 00997dbf  0fb646ff             movzx eax, byte ptr [esi - 1]
// 00997dc3  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 00997dc7  0fb616               movzx edx, byte ptr [esi]
// 00997dca  8944243c             mov dword ptr [esp + 0x3c], eax
// 00997dce  db44243c             fild dword ptr [esp + 0x3c]
// 00997dd2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00997dd6  decc                 fmulp st(4)
// 00997dd8  db44243c             fild dword ptr [esp + 0x3c]
// 00997ddc  8954243c             mov dword ptr [esp + 0x3c], edx
// 00997de0  decb                 fmulp st(3)
// 00997de2  d9cb                 fxch st(3)
// 00997de4  dec2                 faddp st(2)
// 00997de6  db44243c             fild dword ptr [esp + 0x3c]
// 00997dea  dec9                 fmulp st(1)
// 00997dec  dec1                 faddp st(1)
// 00997dee  def1                 fdivrp st(1)
// 00997df0  dd05e82be000         fld qword ptr [0xe02be8]
// 00997df6  e835bdfeff           call 0x983b30
// 00997dfb  dd05383bb500         fld qword ptr [0xb53b38]
// 00997e01  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00997e05  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00997e0a  dcc9                 fmul st(1), st(0)
// 00997e0c  0d000c0000           or eax, 0xc00
// 00997e11  d9c9                 fxch st(1)
// 00997e13  89442448             mov dword ptr [esp + 0x48], eax
// 00997e17  d96c2448             fldcw word ptr [esp + 0x48]
// 00997e1b  db5c2448             fistp dword ptr [esp + 0x48]
// 00997e1f  8a442448             mov al, byte ptr [esp + 0x48]
// 00997e23  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00997e27  8846fe               mov byte ptr [esi - 2], al
// 00997e2a  d96c243c             fldcw word ptr [esp + 0x3c]
// 00997e2e  8846ff               mov byte ptr [esi - 1], al
// 00997e31  0fb6c0               movzx eax, al
// 00997e34  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00997e38  8806                 mov byte ptr [esi], al
// 00997e3a  db44243c             fild dword ptr [esp + 0x3c]
// 00997e3e  d97c243c             fnstcw word ptr [esp + 0x3c]
// 00997e42  dc35e02be000         fdiv qword ptr [0xe02be0]
// 00997e48  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 00997e4d  0d000c0000           or eax, 0xc00
// 00997e52  89442448             mov dword ptr [esp + 0x48], eax
// 00997e56  d96c2448             fldcw word ptr [esp + 0x48]
// 00997e5a  db5c2448             fistp dword ptr [esp + 0x48]
// 00997e5e  8a542448             mov dl, byte ptr [esp + 0x48]
// 00997e62  d96c243c             fldcw word ptr [esp + 0x3c]
// 00997e66  dd05b8e6c000         fld qword ptr [0xc0e6b8]
// 00997e6c  dd05e835b800         fld qword ptr [0xb835e8]
// 00997e72  dd05f035b800         fld qword ptr [0xb835f0]
// 00997e78  d9cb                 fxch st(3)
// 00997e7a  d9c9                 fxch st(1)
// 00997e7c  d9ca                 fxch st(2)
// 00997e7e  d9c9                 fxch st(1)
// 00997e80  885601               mov byte ptr [esi + 1], dl
// 00997e83  8b442424             mov eax, dword ptr [esp + 0x24]
// 00997e87  43                   inc ebx
// 00997e88  83c604               add esi, 4
// 00997e8b  3bd8                 cmp ebx, eax
// 00997e8d  0f8c63fdffff         jl 0x997bf6
// 00997e93  8b742414             mov esi, dword ptr [esp + 0x14]
// 00997e97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00997e9b  0374241c             add esi, dword ptr [esp + 0x1c]
// 00997e9f  41                   inc ecx
// 00997ea0  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00997ea4  89742414             mov dword ptr [esp + 0x14], esi
// 00997ea8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00997eac  0f8c3afdffff         jl 0x997bec
// 00997eb2  ddd8                 fstp st(0)
// 00997eb4  5f                   pop edi
// 00997eb5  ddda                 fstp st(2)
// 00997eb7  5e                   pop esi
// 00997eb8  ddd8                 fstp st(0)
// 00997eba  5d                   pop ebp
// 00997ebb  ddd8                 fstp st(0)
// 00997ebd  5b                   pop ebx
// 00997ebe  b801000000           mov eax, 1
// 00997ec3  83c428               add esp, 0x28
// 00997ec6  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?DoDisableBitmap@CXTPImageManager@@AAEHPAUHBITMAP__@@KKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

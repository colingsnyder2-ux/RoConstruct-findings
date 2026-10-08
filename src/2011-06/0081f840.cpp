// from server: 100% by auto
// roc 2011-06 0081f840  unit: CXTPCommandBar  size: 889 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f840
//
// 0081f840  83c8ff               or eax, 0xffffffff
// 0081f843  83ec28               sub esp, 0x28
// 0081f846  39442430             cmp dword ptr [esp + 0x30], eax
// 0081f84a  740d                 je 0x81f859
// 0081f84c  c7042401000000       mov dword ptr [esp], 1
// 0081f853  39442434             cmp dword ptr [esp + 0x34], eax
// 0081f857  7507                 jne 0x81f860
// 0081f859  c7042400000000       mov dword ptr [esp], 0
// 0081f860  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081f864  8d442410             lea eax, [esp + 0x10]
// 0081f868  50                   push eax
// 0081f869  6a18                 push 0x18
// 0081f86b  51                   push ecx
// 0081f86c  ff157c01a400         call dword ptr [0xa4017c]
// 0081f872  85c0                 test eax, eax
// 0081f874  7508                 jne 0x81f87e
// 0081f876  33c0                 xor eax, eax
// 0081f878  83c428               add esp, 0x28
// 0081f87b  c21000               ret 0x10
// 0081f87e  66837c242220         cmp word ptr [esp + 0x22], 0x20
// 0081f884  75f0                 jne 0x81f876
// 0081f886  66837c242001         cmp word ptr [esp + 0x20], 1
// 0081f88c  75e8                 jne 0x81f876
// 0081f88e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081f892  85c0                 test eax, eax
// 0081f894  74e0                 je 0x81f876
// 0081f896  837c241800           cmp dword ptr [esp + 0x18], 0
// 0081f89b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0081f89f  8954240c             mov dword ptr [esp + 0xc], edx
// 0081f8a3  c744240800000000     mov dword ptr [esp + 8], 0
// 0081f8ab  0f8efd020000         jle 0x81fbae
// 0081f8b1  dd0540f8a700         fld qword ptr [0xa7f840]
// 0081f8b7  53                   push ebx
// 0081f8b8  dd0538f8a700         fld qword ptr [0xa7f838]
// 0081f8be  55                   push ebp
// 0081f8bf  dd05d02fac00         fld qword ptr [0xac2fd0]
// 0081f8c5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0081f8c9  dd052891a600         fld qword ptr [0xa69128]
// 0081f8cf  56                   push esi
// 0081f8d0  8d7002               lea esi, [eax + 2]
// 0081f8d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081f8d7  57                   push edi
// 0081f8d8  89742414             mov dword ptr [esp + 0x14], esi
// 0081f8dc  33db                 xor ebx, ebx
// 0081f8de  85c0                 test eax, eax
// 0081f8e0  0f8e9d020000         jle 0x81fb83
// 0081f8e6  837c241000           cmp dword ptr [esp + 0x10], 0
// 0081f8eb  0f8419010000         je 0x81fa0a
// 0081f8f1  0fb646ff             movzx eax, byte ptr [esi - 1]
// 0081f8f5  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 0081f8f9  0fb616               movzx edx, byte ptr [esi]
// 0081f8fc  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081f900  db44243c             fild dword ptr [esp + 0x3c]
// 0081f904  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081f908  d8cc                 fmul st(4)
// 0081f90a  db44243c             fild dword ptr [esp + 0x3c]
// 0081f90e  8954243c             mov dword ptr [esp + 0x3c], edx
// 0081f912  8b542444             mov edx, dword ptr [esp + 0x44]
// 0081f916  8bc2                 mov eax, edx
// 0081f918  d8cc                 fmul st(4)
// 0081f91a  c1e810               shr eax, 0x10
// 0081f91d  0fb6c8               movzx ecx, al
// 0081f920  dec1                 faddp st(1)
// 0081f922  db44243c             fild dword ptr [esp + 0x3c]
// 0081f926  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081f92a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0081f92e  8bc1                 mov eax, ecx
// 0081f930  d8cb                 fmul st(3)
// 0081f932  c1e810               shr eax, 0x10
// 0081f935  0fb6c0               movzx eax, al
// 0081f938  dec1                 faddp st(1)
// 0081f93a  d8f1                 fdiv st(1)
// 0081f93c  d9e8                 fld1 
// 0081f93e  d8e1                 fsub st(1)
// 0081f940  db44243c             fild dword ptr [esp + 0x3c]
// 0081f944  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081f948  d8c9                 fmul st(1)
// 0081f94a  db44243c             fild dword ptr [esp + 0x3c]
// 0081f94e  d97c243c             fnstcw word ptr [esp + 0x3c]
// 0081f952  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 0081f957  d8cb                 fmul st(3)
// 0081f959  0d000c0000           or eax, 0xc00
// 0081f95e  89442448             mov dword ptr [esp + 0x48], eax
// 0081f962  dec1                 faddp st(1)
// 0081f964  d96c2448             fldcw word ptr [esp + 0x48]
// 0081f968  db5c2448             fistp dword ptr [esp + 0x48]
// 0081f96c  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 0081f971  8846fe               mov byte ptr [esi - 2], al
// 0081f974  8bc2                 mov eax, edx
// 0081f976  d96c243c             fldcw word ptr [esp + 0x3c]
// 0081f97a  c1e808               shr eax, 8
// 0081f97d  0fb6c0               movzx eax, al
// 0081f980  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081f984  8bc1                 mov eax, ecx
// 0081f986  c1e808               shr eax, 8
// 0081f989  db44243c             fild dword ptr [esp + 0x3c]
// 0081f98d  0fb6c0               movzx eax, al
// 0081f990  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081f994  0fb6c9               movzx ecx, cl
// 0081f997  d8c9                 fmul st(1)
// 0081f999  db44243c             fild dword ptr [esp + 0x3c]
// 0081f99d  d97c243c             fnstcw word ptr [esp + 0x3c]
// 0081f9a1  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 0081f9a6  d8cb                 fmul st(3)
// 0081f9a8  0d000c0000           or eax, 0xc00
// 0081f9ad  89442448             mov dword ptr [esp + 0x48], eax
// 0081f9b1  dec1                 faddp st(1)
// 0081f9b3  0fb6d2               movzx edx, dl
// 0081f9b6  d96c2448             fldcw word ptr [esp + 0x48]
// 0081f9ba  db5c2448             fistp dword ptr [esp + 0x48]
// 0081f9be  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 0081f9c3  8846ff               mov byte ptr [esi - 1], al
// 0081f9c6  d96c243c             fldcw word ptr [esp + 0x3c]
// 0081f9ca  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081f9ce  db44243c             fild dword ptr [esp + 0x3c]
// 0081f9d2  8954243c             mov dword ptr [esp + 0x3c], edx
// 0081f9d6  deca                 fmulp st(2)
// 0081f9d8  db44243c             fild dword ptr [esp + 0x3c]
// 0081f9dc  d97c243c             fnstcw word ptr [esp + 0x3c]
// 0081f9e0  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 0081f9e5  dec9                 fmulp st(1)
// 0081f9e7  0d000c0000           or eax, 0xc00
// 0081f9ec  89442448             mov dword ptr [esp + 0x48], eax
// 0081f9f0  dec1                 faddp st(1)
// 0081f9f2  d96c2448             fldcw word ptr [esp + 0x48]
// 0081f9f6  db5c2448             fistp dword ptr [esp + 0x48]
// 0081f9fa  0fb6442448           movzx eax, byte ptr [esp + 0x48]
// 0081f9ff  8806                 mov byte ptr [esi], al
// 0081fa01  d96c243c             fldcw word ptr [esp + 0x3c]
// 0081fa05  e969010000           jmp 0x81fb73
// 0081fa0a  83fdff               cmp ebp, -1
// 0081fa0d  0f849c000000         je 0x81faaf
// 0081fa13  0fb64eff             movzx ecx, byte ptr [esi - 1]
// 0081fa17  0fb656fe             movzx edx, byte ptr [esi - 2]
// 0081fa1b  69c94b020000         imul ecx, ecx, 0x24b
// 0081fa21  0fb606               movzx eax, byte ptr [esi]
// 0081fa24  6bd272               imul edx, edx, 0x72
// 0081fa27  69c02b010000         imul eax, eax, 0x12b
// 0081fa2d  03ca                 add ecx, edx
// 0081fa2f  03c8                 add ecx, eax
// 0081fa31  b8d34d6210           mov eax, 0x10624dd3
// 0081fa36  f7e9                 imul ecx
// 0081fa38  c1fa06               sar edx, 6
// 0081fa3b  8bca                 mov ecx, edx
// 0081fa3d  c1e91f               shr ecx, 0x1f
// 0081fa40  03ca                 add ecx, edx
// 0081fa42  bfff000000           mov edi, 0xff
// 0081fa47  2bf9                 sub edi, ecx
// 0081fa49  0faffd               imul edi, ebp
// 0081fa4c  b881808080           mov eax, 0x80808081
// 0081fa51  f7ef                 imul edi
// 0081fa53  03d7                 add edx, edi
// 0081fa55  c1fa07               sar edx, 7
// 0081fa58  8bc2                 mov eax, edx
// 0081fa5a  c1e81f               shr eax, 0x1f
// 0081fa5d  03c2                 add eax, edx
// 0081fa5f  03c8                 add ecx, eax
// 0081fa61  81f9ff000000         cmp ecx, 0xff
// 0081fa67  7c05                 jl 0x81fa6e
// 0081fa69  b9ff000000           mov ecx, 0xff
// 0081fa6e  884efe               mov byte ptr [esi - 2], cl
// 0081fa71  884eff               mov byte ptr [esi - 1], cl
// 0081fa74  880e                 mov byte ptr [esi], cl
// 0081fa76  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0081fa7a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081fa7e  db44243c             fild dword ptr [esp + 0x3c]
// 0081fa82  d97c243c             fnstcw word ptr [esp + 0x3c]
// 0081fa86  dc35085cc900         fdiv qword ptr [0xc95c08]
// 0081fa8c  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 0081fa91  0d000c0000           or eax, 0xc00
// 0081fa96  89442448             mov dword ptr [esp + 0x48], eax
// 0081fa9a  d96c2448             fldcw word ptr [esp + 0x48]
// 0081fa9e  db5c2448             fistp dword ptr [esp + 0x48]
// 0081faa2  8a542448             mov dl, byte ptr [esp + 0x48]
// 0081faa6  d96c243c             fldcw word ptr [esp + 0x3c]
// 0081faaa  e9c1000000           jmp 0x81fb70
// 0081faaf  0fb646ff             movzx eax, byte ptr [esi - 1]
// 0081fab3  0fb64efe             movzx ecx, byte ptr [esi - 2]
// 0081fab7  0fb616               movzx edx, byte ptr [esi]
// 0081faba  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081fabe  db44243c             fild dword ptr [esp + 0x3c]
// 0081fac2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081fac6  decc                 fmulp st(4)
// 0081fac8  db44243c             fild dword ptr [esp + 0x3c]
// 0081facc  8954243c             mov dword ptr [esp + 0x3c], edx
// 0081fad0  decb                 fmulp st(3)
// 0081fad2  d9cb                 fxch st(3)
// 0081fad4  dec2                 faddp st(2)
// 0081fad6  db44243c             fild dword ptr [esp + 0x3c]
// 0081fada  dec9                 fmulp st(1)
// 0081fadc  dec1                 faddp st(1)
// 0081fade  def1                 fdivrp st(1)
// 0081fae0  dd05105cc900         fld qword ptr [0xc95c10]
// 0081fae6  e8a7bffeff           call 0x80ba92
// 0081faeb  dd052891a600         fld qword ptr [0xa69128]
// 0081faf1  d97c243c             fnstcw word ptr [esp + 0x3c]
// 0081faf5  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 0081fafa  dcc9                 fmul st(1), st(0)
// 0081fafc  0d000c0000           or eax, 0xc00
// 0081fb01  d9c9                 fxch st(1)
// 0081fb03  89442448             mov dword ptr [esp + 0x48], eax
// 0081fb07  d96c2448             fldcw word ptr [esp + 0x48]
// 0081fb0b  db5c2448             fistp dword ptr [esp + 0x48]
// 0081fb0f  8a442448             mov al, byte ptr [esp + 0x48]
// 0081fb13  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 0081fb17  8846fe               mov byte ptr [esi - 2], al
// 0081fb1a  d96c243c             fldcw word ptr [esp + 0x3c]
// 0081fb1e  8846ff               mov byte ptr [esi - 1], al
// 0081fb21  0fb6c0               movzx eax, al
// 0081fb24  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081fb28  8806                 mov byte ptr [esi], al
// 0081fb2a  db44243c             fild dword ptr [esp + 0x3c]
// 0081fb2e  d97c243c             fnstcw word ptr [esp + 0x3c]
// 0081fb32  dc35085cc900         fdiv qword ptr [0xc95c08]
// 0081fb38  0fb744243c           movzx eax, word ptr [esp + 0x3c]
// 0081fb3d  0d000c0000           or eax, 0xc00
// 0081fb42  89442448             mov dword ptr [esp + 0x48], eax
// 0081fb46  d96c2448             fldcw word ptr [esp + 0x48]
// 0081fb4a  db5c2448             fistp dword ptr [esp + 0x48]
// 0081fb4e  8a542448             mov dl, byte ptr [esp + 0x48]
// 0081fb52  d96c243c             fldcw word ptr [esp + 0x3c]
// 0081fb56  dd05d02fac00         fld qword ptr [0xac2fd0]
// 0081fb5c  dd0538f8a700         fld qword ptr [0xa7f838]
// 0081fb62  dd0540f8a700         fld qword ptr [0xa7f840]
// 0081fb68  d9cb                 fxch st(3)
// 0081fb6a  d9c9                 fxch st(1)
// 0081fb6c  d9ca                 fxch st(2)
// 0081fb6e  d9c9                 fxch st(1)
// 0081fb70  885601               mov byte ptr [esi + 1], dl
// 0081fb73  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081fb77  43                   inc ebx
// 0081fb78  83c604               add esi, 4
// 0081fb7b  3bd8                 cmp ebx, eax
// 0081fb7d  0f8c63fdffff         jl 0x81f8e6
// 0081fb83  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081fb87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081fb8b  0374241c             add esi, dword ptr [esp + 0x1c]
// 0081fb8f  41                   inc ecx
// 0081fb90  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0081fb94  89742414             mov dword ptr [esp + 0x14], esi
// 0081fb98  894c2418             mov dword ptr [esp + 0x18], ecx
// 0081fb9c  0f8c3afdffff         jl 0x81f8dc
// 0081fba2  ddd8                 fstp st(0)
// 0081fba4  5f                   pop edi
// 0081fba5  ddda                 fstp st(2)
// 0081fba7  5e                   pop esi
// 0081fba8  ddd8                 fstp st(0)
// 0081fbaa  5d                   pop ebp
// 0081fbab  ddd8                 fstp st(0)
// 0081fbad  5b                   pop ebx
// 0081fbae  b801000000           mov eax, 1
// 0081fbb3  83c428               add esp, 0x28
// 0081fbb6  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?DoDisableBitmap@CXTPImageManager@@AAEHPAUHBITMAP__@@KKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp

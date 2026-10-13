// roc 2008-06 007b68e0  unit: G3D::Sky  size: 588 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b68e0
//
// 007b68e0  83ec18               sub esp, 0x18
// 007b68e3  53                   push ebx
// 007b68e4  55                   push ebp
// 007b68e5  57                   push edi
// 007b68e6  8bf9                 mov edi, ecx
// 007b68e8  db870c020000         fild dword ptr [edi + 0x20c]
// 007b68ee  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007b68f2  8b4314               mov eax, dword ptr [ebx + 0x14]
// 007b68f5  33ed                 xor ebp, ebp
// 007b68f7  dc7c2440             fdivr qword ptr [esp + 0x40]
// 007b68fb  89442418             mov dword ptr [esp + 0x18], eax
// 007b68ff  896c240c             mov dword ptr [esp + 0xc], ebp
// 007b6903  dd54241c             fst qword ptr [esp + 0x1c]
// 007b6907  db8710020000         fild dword ptr [edi + 0x210]
// 007b690d  dd442448             fld qword ptr [esp + 0x48]
// 007b6911  d9c0                 fld st(0)
// 007b6913  def2                 fdivrp st(2)
// 007b6915  d9c9                 fxch st(1)
// 007b6917  d9542410             fst dword ptr [esp + 0x10]
// 007b691b  db8740010000         fild dword ptr [edi + 0x140]
// 007b6921  d80d3cf88200         fmul dword ptr [0x82f83c]
// 007b6927  d8cb                 fmul st(3)
// 007b6929  d95c2414             fstp dword ptr [esp + 0x14]
// 007b692d  85c0                 test eax, eax
// 007b692f  0f8ed9010000         jle 0x7b6b0e
// 007b6935  dd442438             fld qword ptr [esp + 0x38]
// 007b6939  56                   push esi
// 007b693a  8b742458             mov esi, dword ptr [esp + 0x58]
// 007b693e  dd442434             fld qword ptr [esp + 0x34]
// 007b6942  83c6f8               add esi, -8
// 007b6945  eb04                 jmp 0x7b694b
// 007b6947  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 007b694b  3b6b14               cmp ebp, dword ptr [ebx + 0x14]
// 007b694e  762c                 jbe 0x7b697c
// 007b6950  dddc                 fstp st(4)
// 007b6952  ddd9                 fstp st(1)
// 007b6954  ddd8                 fstp st(0)
// 007b6956  ddd9                 fstp st(1)
// 007b6958  ddd8                 fstp st(0)
// 007b695a  ff1590288000         call dword ptr [0x802890]
// 007b6960  dd44244c             fld qword ptr [esp + 0x4c]
// 007b6964  dd44243c             fld qword ptr [esp + 0x3c]
// 007b6968  dd442434             fld qword ptr [esp + 0x34]
// 007b696c  d9442414             fld dword ptr [esp + 0x14]
// 007b6970  dd442420             fld qword ptr [esp + 0x20]
// 007b6974  d9cc                 fxch st(4)
// 007b6976  d9cb                 fxch st(3)
// 007b6978  d9c9                 fxch st(1)
// 007b697a  d9ca                 fxch st(2)
// 007b697c  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 007b6980  8d4304               lea eax, [ebx + 4]
// 007b6983  7202                 jb 0x7b6987
// 007b6985  8b00                 mov eax, dword ptr [eax]
// 007b6987  8a1c28               mov bl, byte ptr [eax + ebp]
// 007b698a  80e37f               and bl, 0x7f
// 007b698d  80fb20               cmp bl, 0x20
// 007b6990  0f8432010000         je 0x7b6ac8
// 007b6996  0fbed3               movsx edx, bl
// 007b6999  8bc2                 mov eax, edx
// 007b699b  8bca                 mov ecx, edx
// 007b699d  c1f804               sar eax, 4
// 007b69a0  83e10f               and ecx, 0xf
// 007b69a3  837c245400           cmp dword ptr [esp + 0x54], 0
// 007b69a8  751e                 jne 0x7b69c8
// 007b69aa  8baf0c020000         mov ebp, dword ptr [edi + 0x20c]
// 007b69b0  2b6c970c             sub ebp, dword ptr [edi + edx*4 + 0xc]
// 007b69b4  896c2458             mov dword ptr [esp + 0x58], ebp
// 007b69b8  db442458             fild dword ptr [esp + 0x58]
// 007b69bc  decd                 fmulp st(5)
// 007b69be  d9cc                 fxch st(4)
// 007b69c0  dc0d38e78100         fmul qword ptr [0x81e738]
// 007b69c6  eb04                 jmp 0x7b69cc
// 007b69c8  dddc                 fstp st(4)
// 007b69ca  d9ee                 fldz 
// 007b69cc  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 007b69d2  d8ec                 fsubr st(4)
// 007b69d4  0fafd1               imul edx, ecx
// 007b69d7  89542458             mov dword ptr [esp + 0x58], edx
// 007b69db  83c608               add esi, 8
// 007b69de  83c608               add esi, 8
// 007b69e1  db442458             fild dword ptr [esp + 0x58]
// 007b69e5  83c608               add esi, 8
// 007b69e8  83c608               add esi, 8
// 007b69eb  83c608               add esi, 8
// 007b69ee  d95ee0               fstp dword ptr [esi - 0x20]
// 007b69f1  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 007b69f7  0fafd0               imul edx, eax
// 007b69fa  42                   inc edx
// 007b69fb  89542458             mov dword ptr [esp + 0x58], edx
// 007b69ff  83c608               add esi, 8
// 007b6a02  83c608               add esi, 8
// 007b6a05  db442458             fild dword ptr [esp + 0x58]
// 007b6a09  d95ed4               fstp dword ptr [esi - 0x2c]
// 007b6a0c  d956d8               fst dword ptr [esi - 0x28]
// 007b6a0f  d9c2                 fld st(2)
// 007b6a11  d8c2                 fadd st(2)
// 007b6a13  d956dc               fst dword ptr [esi - 0x24]
// 007b6a16  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 007b6a1c  0fafd1               imul edx, ecx
// 007b6a1f  89542458             mov dword ptr [esp + 0x58], edx
// 007b6a23  8d5001               lea edx, [eax + 1]
// 007b6a26  41                   inc ecx
// 007b6a27  db442458             fild dword ptr [esp + 0x58]
// 007b6a2b  d95ee0               fstp dword ptr [esi - 0x20]
// 007b6a2e  8baf10020000         mov ebp, dword ptr [edi + 0x210]
// 007b6a34  0fafea               imul ebp, edx
// 007b6a37  83ed02               sub ebp, 2
// 007b6a3a  896c2458             mov dword ptr [esp + 0x58], ebp
// 007b6a3e  db442458             fild dword ptr [esp + 0x58]
// 007b6a42  d95ee4               fstp dword ptr [esi - 0x1c]
// 007b6a45  d9c9                 fxch st(1)
// 007b6a47  d956e8               fst dword ptr [esi - 0x18]
// 007b6a4a  d9c2                 fld st(2)
// 007b6a4c  d8c5                 fadd st(5)
// 007b6a4e  d8e4                 fsub st(4)
// 007b6a50  d956ec               fst dword ptr [esi - 0x14]
// 007b6a53  8baf0c020000         mov ebp, dword ptr [edi + 0x20c]
// 007b6a59  0fafe9               imul ebp, ecx
// 007b6a5c  d9c9                 fxch st(1)
// 007b6a5e  dc442444             fadd qword ptr [esp + 0x44]
// 007b6a62  4d                   dec ebp
// 007b6a63  896c2458             mov dword ptr [esp + 0x58], ebp
// 007b6a67  db442458             fild dword ptr [esp + 0x58]
// 007b6a6b  d95ef0               fstp dword ptr [esi - 0x10]
// 007b6a6e  8baf10020000         mov ebp, dword ptr [edi + 0x210]
// 007b6a74  0fafea               imul ebp, edx
// 007b6a77  83ed02               sub ebp, 2
// 007b6a7a  896c2458             mov dword ptr [esp + 0x58], ebp
// 007b6a7e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007b6a82  db442458             fild dword ptr [esp + 0x58]
// 007b6a86  d95ef4               fstp dword ptr [esi - 0xc]
// 007b6a89  d956f8               fst dword ptr [esi - 8]
// 007b6a8c  d9c9                 fxch st(1)
// 007b6a8e  d95efc               fstp dword ptr [esi - 4]
// 007b6a91  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 007b6a97  0fafd1               imul edx, ecx
// 007b6a9a  4a                   dec edx
// 007b6a9b  89542458             mov dword ptr [esp + 0x58], edx
// 007b6a9f  db442458             fild dword ptr [esp + 0x58]
// 007b6aa3  d91e                 fstp dword ptr [esi]
// 007b6aa5  8b8f10020000         mov ecx, dword ptr [edi + 0x210]
// 007b6aab  0fafc8               imul ecx, eax
// 007b6aae  41                   inc ecx
// 007b6aaf  894c2458             mov dword ptr [esp + 0x58], ecx
// 007b6ab3  83c608               add esi, 8
// 007b6ab6  db442458             fild dword ptr [esp + 0x58]
// 007b6aba  d95efc               fstp dword ptr [esi - 4]
// 007b6abd  d91e                 fstp dword ptr [esi]
// 007b6abf  d95e04               fstp dword ptr [esi + 4]
// 007b6ac2  dd442420             fld qword ptr [esp + 0x20]
// 007b6ac6  d9cc                 fxch st(4)
// 007b6ac8  837c245400           cmp dword ptr [esp + 0x54], 0
// 007b6acd  750b                 jne 0x7b6ada
// 007b6acf  0fbed3               movsx edx, bl
// 007b6ad2  db44970c             fild dword ptr [edi + edx*4 + 0xc]
// 007b6ad6  d8cd                 fmul st(5)
// 007b6ad8  eb04                 jmp 0x7b6ade
// 007b6ada  d9442418             fld dword ptr [esp + 0x18]
// 007b6ade  dec1                 faddp st(1)
// 007b6ae0  45                   inc ebp
// 007b6ae1  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 007b6ae5  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b6ae9  dd542434             fst qword ptr [esp + 0x34]
// 007b6aed  0f8c54feffff         jl 0x7b6947
// 007b6af3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b6af7  dddc                 fstp st(4)
// 007b6af9  ddd9                 fstp st(1)
// 007b6afb  5e                   pop esi
// 007b6afc  ddd8                 fstp st(0)
// 007b6afe  5f                   pop edi
// 007b6aff  d9c9                 fxch st(1)
// 007b6b01  5d                   pop ebp
// 007b6b02  d918                 fstp dword ptr [eax]
// 007b6b04  5b                   pop ebx
// 007b6b05  d95804               fstp dword ptr [eax + 4]
// 007b6b08  83c418               add esp, 0x18
// 007b6b0b  c23000               ret 0x30
// 007b6b0e  8b442428             mov eax, dword ptr [esp + 0x28]
// 007b6b12  ddda                 fstp st(2)
// 007b6b14  ddd9                 fstp st(1)
// 007b6b16  5f                   pop edi
// 007b6b17  dd44242c             fld qword ptr [esp + 0x2c]
// 007b6b1b  5d                   pop ebp
// 007b6b1c  d9c9                 fxch st(1)
// 007b6b1e  5b                   pop ebx
// 007b6b1f  d9c9                 fxch st(1)
// 007b6b21  d918                 fstp dword ptr [eax]
// 007b6b23  d95804               fstp dword ptr [eax + 4]
// 007b6b26  83c418               add esp, 0x18
// 007b6b29  c23000               ret 0x30
// library g3d-6.09-rbx2008/GLG3Dcpp\GFont.cpp (function ?computePackedArray@GFont@G3D@@ABE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNNNW4Spacing@12@PAV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/GFont.cpp

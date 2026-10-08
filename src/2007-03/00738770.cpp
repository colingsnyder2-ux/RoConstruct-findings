// roc 2007-03 00738770  unit: seg_00730000  size: 638 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00738770
//
// 00738770  83ec18               sub esp, 0x18
// 00738773  53                   push ebx
// 00738774  55                   push ebp
// 00738775  57                   push edi
// 00738776  8bf9                 mov edi, ecx
// 00738778  db870c020000         fild dword ptr [edi + 0x20c]
// 0073877e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00738782  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00738785  33db                 xor ebx, ebx
// 00738787  85c0                 test eax, eax
// 00738789  dc7c2440             fdivr qword ptr [esp + 0x40]
// 0073878d  89442418             mov dword ptr [esp + 0x18], eax
// 00738791  895c240c             mov dword ptr [esp + 0xc], ebx
// 00738795  dd54241c             fst qword ptr [esp + 0x1c]
// 00738799  db8710020000         fild dword ptr [edi + 0x210]
// 0073879f  dd442448             fld qword ptr [esp + 0x48]
// 007387a3  d9c0                 fld st(0)
// 007387a5  def2                 fdivrp st(2)
// 007387a7  d9c9                 fxch st(1)
// 007387a9  d95c2410             fstp dword ptr [esp + 0x10]
// 007387ad  db8740010000         fild dword ptr [edi + 0x140]
// 007387b3  dc0d30aa7e00         fmul qword ptr [0x7eaa30]
// 007387b9  d8ca                 fmul st(2)
// 007387bb  d95c2414             fstp dword ptr [esp + 0x14]
// 007387bf  0f8e07020000         jle 0x7389cc
// 007387c5  dd442438             fld qword ptr [esp + 0x38]
// 007387c9  56                   push esi
// 007387ca  8b742458             mov esi, dword ptr [esp + 0x58]
// 007387ce  d9442414             fld dword ptr [esp + 0x14]
// 007387d2  dd442434             fld qword ptr [esp + 0x34]
// 007387d6  83c6f8               add esi, -8
// 007387d9  eb04                 jmp 0x7387df
// 007387db  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007387df  3b5d14               cmp ebx, dword ptr [ebp + 0x14]
// 007387e2  762c                 jbe 0x738810
// 007387e4  dddc                 fstp st(4)
// 007387e6  ddd9                 fstp st(1)
// 007387e8  ddd8                 fstp st(0)
// 007387ea  ddd9                 fstp st(1)
// 007387ec  ddd8                 fstp st(0)
// 007387ee  ff1544e97700         call dword ptr [0x77e944]
// 007387f4  dd442434             fld qword ptr [esp + 0x34]
// 007387f8  dd44243c             fld qword ptr [esp + 0x3c]
// 007387fc  dd44244c             fld qword ptr [esp + 0x4c]
// 00738800  d9442414             fld dword ptr [esp + 0x14]
// 00738804  dd442420             fld qword ptr [esp + 0x20]
// 00738808  d9cc                 fxch st(4)
// 0073880a  d9ca                 fxch st(2)
// 0073880c  d9cb                 fxch st(3)
// 0073880e  d9ca                 fxch st(2)
// 00738810  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00738814  7205                 jb 0x73881b
// 00738816  8b4504               mov eax, dword ptr [ebp + 4]
// 00738819  eb03                 jmp 0x73881e
// 0073881b  8d4504               lea eax, [ebp + 4]
// 0073881e  8a1c18               mov bl, byte ptr [eax + ebx]
// 00738821  80e37f               and bl, 0x7f
// 00738824  80fb20               cmp bl, 0x20
// 00738827  0f8465010000         je 0x738992
// 0073882d  0fbed3               movsx edx, bl
// 00738830  8bc2                 mov eax, edx
// 00738832  8bca                 mov ecx, edx
// 00738834  c1f804               sar eax, 4
// 00738837  83e10f               and ecx, 0xf
// 0073883a  837c245400           cmp dword ptr [esp + 0x54], 0
// 0073883f  751e                 jne 0x73885f
// 00738841  8baf0c020000         mov ebp, dword ptr [edi + 0x20c]
// 00738847  2b6c970c             sub ebp, dword ptr [edi + edx*4 + 0xc]
// 0073884b  896c2458             mov dword ptr [esp + 0x58], ebp
// 0073884f  db442458             fild dword ptr [esp + 0x58]
// 00738853  decd                 fmulp st(5)
// 00738855  d9cc                 fxch st(4)
// 00738857  dc0d584f7900         fmul qword ptr [0x794f58]
// 0073885d  eb04                 jmp 0x738863
// 0073885f  dddc                 fstp st(4)
// 00738861  d9ee                 fldz 
// 00738863  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 00738869  d95c2458             fstp dword ptr [esp + 0x58]
// 0073886d  d9442458             fld dword ptr [esp + 0x58]
// 00738871  0fafd1               imul edx, ecx
// 00738874  d8ec                 fsubr st(4)
// 00738876  d95c2458             fstp dword ptr [esp + 0x58]
// 0073887a  89542434             mov dword ptr [esp + 0x34], edx
// 0073887e  83c608               add esi, 8
// 00738881  83c608               add esi, 8
// 00738884  db442434             fild dword ptr [esp + 0x34]
// 00738888  83c608               add esi, 8
// 0073888b  83c608               add esi, 8
// 0073888e  83c608               add esi, 8
// 00738891  d95ee0               fstp dword ptr [esi - 0x20]
// 00738894  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 0073889a  0fafd0               imul edx, eax
// 0073889d  83c201               add edx, 1
// 007388a0  89542434             mov dword ptr [esp + 0x34], edx
// 007388a4  83c608               add esi, 8
// 007388a7  83c608               add esi, 8
// 007388aa  db442434             fild dword ptr [esp + 0x34]
// 007388ae  d95ed4               fstp dword ptr [esi - 0x2c]
// 007388b1  d9442458             fld dword ptr [esp + 0x58]
// 007388b5  d956d8               fst dword ptr [esi - 0x28]
// 007388b8  d9c1                 fld st(1)
// 007388ba  d8c3                 fadd st(3)
// 007388bc  d95c2458             fstp dword ptr [esp + 0x58]
// 007388c0  d9442458             fld dword ptr [esp + 0x58]
// 007388c4  d956dc               fst dword ptr [esi - 0x24]
// 007388c7  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 007388cd  0fafd1               imul edx, ecx
// 007388d0  89542458             mov dword ptr [esp + 0x58], edx
// 007388d4  8d5001               lea edx, [eax + 1]
// 007388d7  83c101               add ecx, 1
// 007388da  db442458             fild dword ptr [esp + 0x58]
// 007388de  d95ee0               fstp dword ptr [esi - 0x20]
// 007388e1  8baf10020000         mov ebp, dword ptr [edi + 0x210]
// 007388e7  0fafea               imul ebp, edx
// 007388ea  83ed02               sub ebp, 2
// 007388ed  896c2458             mov dword ptr [esp + 0x58], ebp
// 007388f1  db442458             fild dword ptr [esp + 0x58]
// 007388f5  d95ee4               fstp dword ptr [esi - 0x1c]
// 007388f8  d9c9                 fxch st(1)
// 007388fa  d956e8               fst dword ptr [esi - 0x18]
// 007388fd  d9c3                 fld st(3)
// 007388ff  d8c5                 fadd st(5)
// 00738901  d8e3                 fsub st(3)
// 00738903  d95c2458             fstp dword ptr [esp + 0x58]
// 00738907  d9442458             fld dword ptr [esp + 0x58]
// 0073890b  d956ec               fst dword ptr [esi - 0x14]
// 0073890e  8baf0c020000         mov ebp, dword ptr [edi + 0x20c]
// 00738914  0fafe9               imul ebp, ecx
// 00738917  d9c9                 fxch st(1)
// 00738919  dc442444             fadd qword ptr [esp + 0x44]
// 0073891d  d95c2458             fstp dword ptr [esp + 0x58]
// 00738921  83ed01               sub ebp, 1
// 00738924  896c2434             mov dword ptr [esp + 0x34], ebp
// 00738928  db442434             fild dword ptr [esp + 0x34]
// 0073892c  d95ef0               fstp dword ptr [esi - 0x10]
// 0073892f  8baf10020000         mov ebp, dword ptr [edi + 0x210]
// 00738935  0fafea               imul ebp, edx
// 00738938  83ed02               sub ebp, 2
// 0073893b  896c2434             mov dword ptr [esp + 0x34], ebp
// 0073893f  db442434             fild dword ptr [esp + 0x34]
// 00738943  d95ef4               fstp dword ptr [esi - 0xc]
// 00738946  d9442458             fld dword ptr [esp + 0x58]
// 0073894a  d956f8               fst dword ptr [esi - 8]
// 0073894d  d9c9                 fxch st(1)
// 0073894f  d95efc               fstp dword ptr [esi - 4]
// 00738952  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 00738958  0fafd1               imul edx, ecx
// 0073895b  83ea01               sub edx, 1
// 0073895e  89542458             mov dword ptr [esp + 0x58], edx
// 00738962  db442458             fild dword ptr [esp + 0x58]
// 00738966  d91e                 fstp dword ptr [esi]
// 00738968  8b8f10020000         mov ecx, dword ptr [edi + 0x210]
// 0073896e  0fafc8               imul ecx, eax
// 00738971  83c101               add ecx, 1
// 00738974  894c2458             mov dword ptr [esp + 0x58], ecx
// 00738978  db442458             fild dword ptr [esp + 0x58]
// 0073897c  d95e04               fstp dword ptr [esi + 4]
// 0073897f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00738983  d95e08               fstp dword ptr [esi + 8]
// 00738986  83c608               add esi, 8
// 00738989  d95e04               fstp dword ptr [esi + 4]
// 0073898c  dd442420             fld qword ptr [esp + 0x20]
// 00738990  d9cc                 fxch st(4)
// 00738992  837c245400           cmp dword ptr [esp + 0x54], 0
// 00738997  750b                 jne 0x7389a4
// 00738999  0fbed3               movsx edx, bl
// 0073899c  db44970c             fild dword ptr [edi + edx*4 + 0xc]
// 007389a0  d8cd                 fmul st(5)
// 007389a2  eb04                 jmp 0x7389a8
// 007389a4  d9442418             fld dword ptr [esp + 0x18]
// 007389a8  8b442410             mov eax, dword ptr [esp + 0x10]
// 007389ac  dec1                 faddp st(1)
// 007389ae  83c001               add eax, 1
// 007389b1  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 007389b5  dd542434             fst qword ptr [esp + 0x34]
// 007389b9  89442410             mov dword ptr [esp + 0x10], eax
// 007389bd  0f8c18feffff         jl 0x7387db
// 007389c3  dddc                 fstp st(4)
// 007389c5  5e                   pop esi
// 007389c6  ddd9                 fstp st(1)
// 007389c8  ddd8                 fstp st(0)
// 007389ca  eb08                 jmp 0x7389d4
// 007389cc  ddd9                 fstp st(1)
// 007389ce  dd442430             fld qword ptr [esp + 0x30]
// 007389d2  d9c9                 fxch st(1)
// 007389d4  8b442428             mov eax, dword ptr [esp + 0x28]
// 007389d8  d9c9                 fxch st(1)
// 007389da  dc2560ef7800         fsub qword ptr [0x78ef60]
// 007389e0  5f                   pop edi
// 007389e1  5d                   pop ebp
// 007389e2  5b                   pop ebx
// 007389e3  d918                 fstp dword ptr [eax]
// 007389e5  d95804               fstp dword ptr [eax + 4]
// 007389e8  83c418               add esp, 0x18
// 007389eb  c23000               ret 0x30
// library rbxgs-g3d/GLG3Dcpp\GFont.cpp (function ?computePackedArray@GFont@G3D@@ABE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNNNW4Spacing@12@PAV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/GFont.cpp

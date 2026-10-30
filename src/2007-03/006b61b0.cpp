// roc 2007-03 006b61b0  unit: seg_006b0000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b61b0
//
// 006b61b0  83ec08               sub esp, 8
// 006b61b3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b61b7  53                   push ebx
// 006b61b8  56                   push esi
// 006b61b9  0fb6ce               movzx ecx, dh
// 006b61bc  0fb6f2               movzx esi, dl
// 006b61bf  8bc2                 mov eax, edx
// 006b61c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 006b61c5  c1e810               shr eax, 0x10
// 006b61c8  0fb6c0               movzx eax, al
// 006b61cb  89442414             mov dword ptr [esp + 0x14], eax
// 006b61cf  8bda                 mov ebx, edx
// 006b61d1  c1eb10               shr ebx, 0x10
// 006b61d4  db442414             fild dword ptr [esp + 0x14]
// 006b61d8  57                   push edi
// 006b61d9  0fb6fb               movzx edi, bl
// 006b61dc  2bc7                 sub eax, edi
// 006b61de  89442418             mov dword ptr [esp + 0x18], eax
// 006b61e2  33db                 xor ebx, ebx
// 006b61e4  894c240c             mov dword ptr [esp + 0xc], ecx
// 006b61e8  db442418             fild dword ptr [esp + 0x18]
// 006b61ec  89742410             mov dword ptr [esp + 0x10], esi
// 006b61f0  dd442420             fld qword ptr [esp + 0x20]
// 006b61f4  5f                   pop edi
// 006b61f5  d97c2414             fnstcw word ptr [esp + 0x14]
// 006b61f9  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 006b61fe  dcc9                 fmul st(1), st(0)
// 006b6200  d9ca                 fxch st(2)
// 006b6202  0d000c0000           or eax, 0xc00
// 006b6207  89442418             mov dword ptr [esp + 0x18], eax
// 006b620b  dee1                 fsubrp st(1)
// 006b620d  d96c2418             fldcw word ptr [esp + 0x18]
// 006b6211  db5c2418             fistp dword ptr [esp + 0x18]
// 006b6215  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 006b621a  8af8                 mov bh, al
// 006b621c  0fb6c6               movzx eax, dh
// 006b621f  d96c2414             fldcw word ptr [esp + 0x14]
// 006b6223  2bc8                 sub ecx, eax
// 006b6225  894c2414             mov dword ptr [esp + 0x14], ecx
// 006b6229  0fb6d2               movzx edx, dl
// 006b622c  db442408             fild dword ptr [esp + 8]
// 006b6230  2bf2                 sub esi, edx
// 006b6232  db442414             fild dword ptr [esp + 0x14]
// 006b6236  d97c2414             fnstcw word ptr [esp + 0x14]
// 006b623a  d8ca                 fmul st(2)
// 006b623c  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 006b6241  0d000c0000           or eax, 0xc00
// 006b6246  89442418             mov dword ptr [esp + 0x18], eax
// 006b624a  dee9                 fsubp st(1)
// 006b624c  d96c2418             fldcw word ptr [esp + 0x18]
// 006b6250  db5c2418             fistp dword ptr [esp + 0x18]
// 006b6254  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 006b6258  8ad9                 mov bl, cl
// 006b625a  d96c2414             fldcw word ptr [esp + 0x14]
// 006b625e  89742414             mov dword ptr [esp + 0x14], esi
// 006b6262  5e                   pop esi
// 006b6263  c1e308               shl ebx, 8
// 006b6266  db442408             fild dword ptr [esp + 8]
// 006b626a  db442410             fild dword ptr [esp + 0x10]
// 006b626e  d97c2410             fnstcw word ptr [esp + 0x10]
// 006b6272  deca                 fmulp st(2)
// 006b6274  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 006b6279  0d000c0000           or eax, 0xc00
// 006b627e  89442414             mov dword ptr [esp + 0x14], eax
// 006b6282  dee1                 fsubrp st(1)
// 006b6284  d96c2414             fldcw word ptr [esp + 0x14]
// 006b6288  db5c2414             fistp dword ptr [esp + 0x14]
// 006b628c  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 006b6291  0fb6c8               movzx ecx, al
// 006b6294  d96c2410             fldcw word ptr [esp + 0x10]
// 006b6298  0bd9                 or ebx, ecx
// 006b629a  8bc3                 mov eax, ebx
// 006b629c  5b                   pop ebx
// 006b629d  83c408               add esp, 8
// 006b62a0  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTHeaderCtrlTheme.cpp (function ?MixColor@CXTHeaderCtrlThemeOffice2003@@AAEKKKN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTHeaderCtrlTheme.cpp

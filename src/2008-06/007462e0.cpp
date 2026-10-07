// roc 2008-06 007462e0  unit: CXTPDockContext  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007462e0
//
// 007462e0  83ec08               sub esp, 8
// 007462e3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007462e7  53                   push ebx
// 007462e8  56                   push esi
// 007462e9  0fb6f2               movzx esi, dl
// 007462ec  8bc2                 mov eax, edx
// 007462ee  c1e810               shr eax, 0x10
// 007462f1  0fb6c0               movzx eax, al
// 007462f4  89442414             mov dword ptr [esp + 0x14], eax
// 007462f8  8bca                 mov ecx, edx
// 007462fa  8b542418             mov edx, dword ptr [esp + 0x18]
// 007462fe  db442414             fild dword ptr [esp + 0x14]
// 00746302  57                   push edi
// 00746303  8bda                 mov ebx, edx
// 00746305  c1eb10               shr ebx, 0x10
// 00746308  0fb6fb               movzx edi, bl
// 0074630b  2bc7                 sub eax, edi
// 0074630d  89442418             mov dword ptr [esp + 0x18], eax
// 00746311  c1e908               shr ecx, 8
// 00746314  0fb6c9               movzx ecx, cl
// 00746317  db442418             fild dword ptr [esp + 0x18]
// 0074631b  dd442420             fld qword ptr [esp + 0x20]
// 0074631f  d97c2418             fnstcw word ptr [esp + 0x18]
// 00746323  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00746328  dcc9                 fmul st(1), st(0)
// 0074632a  d9ca                 fxch st(2)
// 0074632c  0d000c0000           or eax, 0xc00
// 00746331  8944241c             mov dword ptr [esp + 0x1c], eax
// 00746335  dee1                 fsubrp st(1)
// 00746337  894c240c             mov dword ptr [esp + 0xc], ecx
// 0074633b  89742410             mov dword ptr [esp + 0x10], esi
// 0074633f  d96c241c             fldcw word ptr [esp + 0x1c]
// 00746343  db5c241c             fistp dword ptr [esp + 0x1c]
// 00746347  8a44241c             mov al, byte ptr [esp + 0x1c]
// 0074634b  0fb6f8               movzx edi, al
// 0074634e  8bc2                 mov eax, edx
// 00746350  d96c2418             fldcw word ptr [esp + 0x18]
// 00746354  c1e808               shr eax, 8
// 00746357  0fb6c0               movzx eax, al
// 0074635a  2bc8                 sub ecx, eax
// 0074635c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00746360  c1e708               shl edi, 8
// 00746363  db44240c             fild dword ptr [esp + 0xc]
// 00746367  db442418             fild dword ptr [esp + 0x18]
// 0074636b  d97c2418             fnstcw word ptr [esp + 0x18]
// 0074636f  d8ca                 fmul st(2)
// 00746371  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00746376  0d000c0000           or eax, 0xc00
// 0074637b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0074637f  dee9                 fsubp st(1)
// 00746381  d96c241c             fldcw word ptr [esp + 0x1c]
// 00746385  db5c241c             fistp dword ptr [esp + 0x1c]
// 00746389  8a4c241c             mov cl, byte ptr [esp + 0x1c]
// 0074638d  0fb6c1               movzx eax, cl
// 00746390  0fb6ca               movzx ecx, dl
// 00746393  d96c2418             fldcw word ptr [esp + 0x18]
// 00746397  2bf1                 sub esi, ecx
// 00746399  89742418             mov dword ptr [esp + 0x18], esi
// 0074639d  0bf8                 or edi, eax
// 0074639f  c1e708               shl edi, 8
// 007463a2  db442410             fild dword ptr [esp + 0x10]
// 007463a6  db442418             fild dword ptr [esp + 0x18]
// 007463aa  d97c2418             fnstcw word ptr [esp + 0x18]
// 007463ae  deca                 fmulp st(2)
// 007463b0  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 007463b5  0d000c0000           or eax, 0xc00
// 007463ba  8944241c             mov dword ptr [esp + 0x1c], eax
// 007463be  dee1                 fsubrp st(1)
// 007463c0  d96c241c             fldcw word ptr [esp + 0x1c]
// 007463c4  db5c241c             fistp dword ptr [esp + 0x1c]
// 007463c8  8a54241c             mov dl, byte ptr [esp + 0x1c]
// 007463cc  0fb6c2               movzx eax, dl
// 007463cf  0bc7                 or eax, edi
// 007463d1  d96c2418             fldcw word ptr [esp + 0x18]
// 007463d5  5f                   pop edi
// 007463d6  5e                   pop esi
// 007463d7  5b                   pop ebx
// 007463d8  83c408               add esp, 8
// 007463db  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTHeaderCtrlTheme.cpp (function ?MixColor@CXTHeaderCtrlThemeOffice2003@@AAEKKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTHeaderCtrlTheme.cpp

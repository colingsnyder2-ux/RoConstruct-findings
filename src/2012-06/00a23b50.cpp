// from server: 100% by auto
// roc 2012-06 00a23b50  unit: CXTPRibbonBar  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a23b50
//
// 00a23b50  83ec08               sub esp, 8
// 00a23b53  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a23b57  53                   push ebx
// 00a23b58  56                   push esi
// 00a23b59  0fb6f2               movzx esi, dl
// 00a23b5c  8bc2                 mov eax, edx
// 00a23b5e  c1e810               shr eax, 0x10
// 00a23b61  0fb6c0               movzx eax, al
// 00a23b64  89442414             mov dword ptr [esp + 0x14], eax
// 00a23b68  8bca                 mov ecx, edx
// 00a23b6a  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a23b6e  db442414             fild dword ptr [esp + 0x14]
// 00a23b72  57                   push edi
// 00a23b73  8bda                 mov ebx, edx
// 00a23b75  c1eb10               shr ebx, 0x10
// 00a23b78  0fb6fb               movzx edi, bl
// 00a23b7b  2bc7                 sub eax, edi
// 00a23b7d  89442418             mov dword ptr [esp + 0x18], eax
// 00a23b81  c1e908               shr ecx, 8
// 00a23b84  0fb6c9               movzx ecx, cl
// 00a23b87  db442418             fild dword ptr [esp + 0x18]
// 00a23b8b  dd442420             fld qword ptr [esp + 0x20]
// 00a23b8f  d97c2418             fnstcw word ptr [esp + 0x18]
// 00a23b93  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00a23b98  dcc9                 fmul st(1), st(0)
// 00a23b9a  d9ca                 fxch st(2)
// 00a23b9c  0d000c0000           or eax, 0xc00
// 00a23ba1  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a23ba5  dee1                 fsubrp st(1)
// 00a23ba7  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a23bab  89742410             mov dword ptr [esp + 0x10], esi
// 00a23baf  d96c241c             fldcw word ptr [esp + 0x1c]
// 00a23bb3  db5c241c             fistp dword ptr [esp + 0x1c]
// 00a23bb7  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00a23bbb  0fb6f8               movzx edi, al
// 00a23bbe  8bc2                 mov eax, edx
// 00a23bc0  d96c2418             fldcw word ptr [esp + 0x18]
// 00a23bc4  c1e808               shr eax, 8
// 00a23bc7  0fb6c0               movzx eax, al
// 00a23bca  2bc8                 sub ecx, eax
// 00a23bcc  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a23bd0  c1e708               shl edi, 8
// 00a23bd3  db44240c             fild dword ptr [esp + 0xc]
// 00a23bd7  db442418             fild dword ptr [esp + 0x18]
// 00a23bdb  d97c2418             fnstcw word ptr [esp + 0x18]
// 00a23bdf  d8ca                 fmul st(2)
// 00a23be1  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00a23be6  0d000c0000           or eax, 0xc00
// 00a23beb  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a23bef  dee9                 fsubp st(1)
// 00a23bf1  d96c241c             fldcw word ptr [esp + 0x1c]
// 00a23bf5  db5c241c             fistp dword ptr [esp + 0x1c]
// 00a23bf9  8a4c241c             mov cl, byte ptr [esp + 0x1c]
// 00a23bfd  0fb6c1               movzx eax, cl
// 00a23c00  0fb6ca               movzx ecx, dl
// 00a23c03  d96c2418             fldcw word ptr [esp + 0x18]
// 00a23c07  2bf1                 sub esi, ecx
// 00a23c09  89742418             mov dword ptr [esp + 0x18], esi
// 00a23c0d  0bf8                 or edi, eax
// 00a23c0f  c1e708               shl edi, 8
// 00a23c12  db442410             fild dword ptr [esp + 0x10]
// 00a23c16  db442418             fild dword ptr [esp + 0x18]
// 00a23c1a  d97c2418             fnstcw word ptr [esp + 0x18]
// 00a23c1e  deca                 fmulp st(2)
// 00a23c20  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00a23c25  0d000c0000           or eax, 0xc00
// 00a23c2a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a23c2e  dee1                 fsubrp st(1)
// 00a23c30  d96c241c             fldcw word ptr [esp + 0x1c]
// 00a23c34  db5c241c             fistp dword ptr [esp + 0x1c]
// 00a23c38  8a54241c             mov dl, byte ptr [esp + 0x1c]
// 00a23c3c  0fb6c2               movzx eax, dl
// 00a23c3f  0bc7                 or eax, edi
// 00a23c41  d96c2418             fldcw word ptr [esp + 0x18]
// 00a23c45  5f                   pop edi
// 00a23c46  5e                   pop esi
// 00a23c47  5b                   pop ebx
// 00a23c48  83c408               add esp, 8
// 00a23c4b  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Header\XTPHeaderCtrlTheme.cpp (function ?MixColor@CXTPHeaderCtrlThemeOffice2003@@AAEKKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Header/XTPHeaderCtrlTheme.cpp

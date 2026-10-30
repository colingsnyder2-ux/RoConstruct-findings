// from server: 100% by auto
// roc 2011-06 008ab6a0  unit: CXTPRibbonBar  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ab6a0
//
// 008ab6a0  83ec08               sub esp, 8
// 008ab6a3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ab6a7  53                   push ebx
// 008ab6a8  56                   push esi
// 008ab6a9  0fb6f2               movzx esi, dl
// 008ab6ac  8bc2                 mov eax, edx
// 008ab6ae  c1e810               shr eax, 0x10
// 008ab6b1  0fb6c0               movzx eax, al
// 008ab6b4  89442414             mov dword ptr [esp + 0x14], eax
// 008ab6b8  8bca                 mov ecx, edx
// 008ab6ba  8b542418             mov edx, dword ptr [esp + 0x18]
// 008ab6be  db442414             fild dword ptr [esp + 0x14]
// 008ab6c2  57                   push edi
// 008ab6c3  8bda                 mov ebx, edx
// 008ab6c5  c1eb10               shr ebx, 0x10
// 008ab6c8  0fb6fb               movzx edi, bl
// 008ab6cb  2bc7                 sub eax, edi
// 008ab6cd  89442418             mov dword ptr [esp + 0x18], eax
// 008ab6d1  c1e908               shr ecx, 8
// 008ab6d4  0fb6c9               movzx ecx, cl
// 008ab6d7  db442418             fild dword ptr [esp + 0x18]
// 008ab6db  dd442420             fld qword ptr [esp + 0x20]
// 008ab6df  d97c2418             fnstcw word ptr [esp + 0x18]
// 008ab6e3  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 008ab6e8  dcc9                 fmul st(1), st(0)
// 008ab6ea  d9ca                 fxch st(2)
// 008ab6ec  0d000c0000           or eax, 0xc00
// 008ab6f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ab6f5  dee1                 fsubrp st(1)
// 008ab6f7  894c240c             mov dword ptr [esp + 0xc], ecx
// 008ab6fb  89742410             mov dword ptr [esp + 0x10], esi
// 008ab6ff  d96c241c             fldcw word ptr [esp + 0x1c]
// 008ab703  db5c241c             fistp dword ptr [esp + 0x1c]
// 008ab707  8a44241c             mov al, byte ptr [esp + 0x1c]
// 008ab70b  0fb6f8               movzx edi, al
// 008ab70e  8bc2                 mov eax, edx
// 008ab710  d96c2418             fldcw word ptr [esp + 0x18]
// 008ab714  c1e808               shr eax, 8
// 008ab717  0fb6c0               movzx eax, al
// 008ab71a  2bc8                 sub ecx, eax
// 008ab71c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008ab720  c1e708               shl edi, 8
// 008ab723  db44240c             fild dword ptr [esp + 0xc]
// 008ab727  db442418             fild dword ptr [esp + 0x18]
// 008ab72b  d97c2418             fnstcw word ptr [esp + 0x18]
// 008ab72f  d8ca                 fmul st(2)
// 008ab731  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 008ab736  0d000c0000           or eax, 0xc00
// 008ab73b  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ab73f  dee9                 fsubp st(1)
// 008ab741  d96c241c             fldcw word ptr [esp + 0x1c]
// 008ab745  db5c241c             fistp dword ptr [esp + 0x1c]
// 008ab749  8a4c241c             mov cl, byte ptr [esp + 0x1c]
// 008ab74d  0fb6c1               movzx eax, cl
// 008ab750  0fb6ca               movzx ecx, dl
// 008ab753  d96c2418             fldcw word ptr [esp + 0x18]
// 008ab757  2bf1                 sub esi, ecx
// 008ab759  89742418             mov dword ptr [esp + 0x18], esi
// 008ab75d  0bf8                 or edi, eax
// 008ab75f  c1e708               shl edi, 8
// 008ab762  db442410             fild dword ptr [esp + 0x10]
// 008ab766  db442418             fild dword ptr [esp + 0x18]
// 008ab76a  d97c2418             fnstcw word ptr [esp + 0x18]
// 008ab76e  deca                 fmulp st(2)
// 008ab770  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 008ab775  0d000c0000           or eax, 0xc00
// 008ab77a  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ab77e  dee1                 fsubrp st(1)
// 008ab780  d96c241c             fldcw word ptr [esp + 0x1c]
// 008ab784  db5c241c             fistp dword ptr [esp + 0x1c]
// 008ab788  8a54241c             mov dl, byte ptr [esp + 0x1c]
// 008ab78c  0fb6c2               movzx eax, dl
// 008ab78f  0bc7                 or eax, edi
// 008ab791  d96c2418             fldcw word ptr [esp + 0x18]
// 008ab795  5f                   pop edi
// 008ab796  5e                   pop esi
// 008ab797  5b                   pop ebx
// 008ab798  83c408               add esp, 8
// 008ab79b  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Header\XTPHeaderCtrlTheme.cpp (function ?MixColor@CXTPHeaderCtrlThemeOffice2003@@AAEKKKN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Header/XTPHeaderCtrlTheme.cpp

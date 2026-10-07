// roc 2007-08 006cb0c0  unit: CXTPDockContext  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb0c0
//
// 006cb0c0  83ec08               sub esp, 8
// 006cb0c3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006cb0c7  53                   push ebx
// 006cb0c8  56                   push esi
// 006cb0c9  0fb6ce               movzx ecx, dh
// 006cb0cc  0fb6f2               movzx esi, dl
// 006cb0cf  8bc2                 mov eax, edx
// 006cb0d1  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cb0d5  c1e810               shr eax, 0x10
// 006cb0d8  0fb6c0               movzx eax, al
// 006cb0db  89442414             mov dword ptr [esp + 0x14], eax
// 006cb0df  8bda                 mov ebx, edx
// 006cb0e1  c1eb10               shr ebx, 0x10
// 006cb0e4  db442414             fild dword ptr [esp + 0x14]
// 006cb0e8  57                   push edi
// 006cb0e9  0fb6fb               movzx edi, bl
// 006cb0ec  2bc7                 sub eax, edi
// 006cb0ee  89442418             mov dword ptr [esp + 0x18], eax
// 006cb0f2  33db                 xor ebx, ebx
// 006cb0f4  894c240c             mov dword ptr [esp + 0xc], ecx
// 006cb0f8  db442418             fild dword ptr [esp + 0x18]
// 006cb0fc  89742410             mov dword ptr [esp + 0x10], esi
// 006cb100  dd442420             fld qword ptr [esp + 0x20]
// 006cb104  5f                   pop edi
// 006cb105  d97c2414             fnstcw word ptr [esp + 0x14]
// 006cb109  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 006cb10e  dcc9                 fmul st(1), st(0)
// 006cb110  d9ca                 fxch st(2)
// 006cb112  0d000c0000           or eax, 0xc00
// 006cb117  89442418             mov dword ptr [esp + 0x18], eax
// 006cb11b  dee1                 fsubrp st(1)
// 006cb11d  d96c2418             fldcw word ptr [esp + 0x18]
// 006cb121  db5c2418             fistp dword ptr [esp + 0x18]
// 006cb125  0fb6442418           movzx eax, byte ptr [esp + 0x18]
// 006cb12a  8af8                 mov bh, al
// 006cb12c  0fb6c6               movzx eax, dh
// 006cb12f  d96c2414             fldcw word ptr [esp + 0x14]
// 006cb133  2bc8                 sub ecx, eax
// 006cb135  894c2414             mov dword ptr [esp + 0x14], ecx
// 006cb139  0fb6d2               movzx edx, dl
// 006cb13c  db442408             fild dword ptr [esp + 8]
// 006cb140  2bf2                 sub esi, edx
// 006cb142  db442414             fild dword ptr [esp + 0x14]
// 006cb146  d97c2414             fnstcw word ptr [esp + 0x14]
// 006cb14a  d8ca                 fmul st(2)
// 006cb14c  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 006cb151  0d000c0000           or eax, 0xc00
// 006cb156  89442418             mov dword ptr [esp + 0x18], eax
// 006cb15a  dee9                 fsubp st(1)
// 006cb15c  d96c2418             fldcw word ptr [esp + 0x18]
// 006cb160  db5c2418             fistp dword ptr [esp + 0x18]
// 006cb164  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 006cb168  8ad9                 mov bl, cl
// 006cb16a  d96c2414             fldcw word ptr [esp + 0x14]
// 006cb16e  89742414             mov dword ptr [esp + 0x14], esi
// 006cb172  5e                   pop esi
// 006cb173  c1e308               shl ebx, 8
// 006cb176  db442408             fild dword ptr [esp + 8]
// 006cb17a  db442410             fild dword ptr [esp + 0x10]
// 006cb17e  d97c2410             fnstcw word ptr [esp + 0x10]
// 006cb182  deca                 fmulp st(2)
// 006cb184  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 006cb189  0d000c0000           or eax, 0xc00
// 006cb18e  89442414             mov dword ptr [esp + 0x14], eax
// 006cb192  dee1                 fsubrp st(1)
// 006cb194  d96c2414             fldcw word ptr [esp + 0x14]
// 006cb198  db5c2414             fistp dword ptr [esp + 0x14]
// 006cb19c  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 006cb1a1  0fb6c8               movzx ecx, al
// 006cb1a4  d96c2410             fldcw word ptr [esp + 0x10]
// 006cb1a8  0bd9                 or ebx, ecx
// 006cb1aa  8bc3                 mov eax, ebx
// 006cb1ac  5b                   pop ebx
// 006cb1ad  83c408               add esp, 8
// 006cb1b0  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTHeaderCtrlTheme.cpp (function ?MixColor@CXTHeaderCtrlThemeOffice2003@@AAEKKKN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTHeaderCtrlTheme.cpp

// from server: 100% by auto
// roc 2008-06 00791870  unit: CXTCaptionThemeOffice2003  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791870
//
// 00791870  56                   push esi
// 00791871  8b742408             mov esi, dword ptr [esp + 8]
// 00791875  57                   push edi
// 00791876  6a01                 push 1
// 00791878  8bce                 mov ecx, esi
// 0079187a  e8a3a70200           call 0x7bc022
// 0079187f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00791883  80b88100000000       cmp byte ptr [eax + 0x81], 0
// 0079188a  744e                 je 0x7918da
// 0079188c  53                   push ebx
// 0079188d  e8aee4f4ff           call 0x6dfd40
// 00791892  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00791896  6a00                 push 0
// 00791898  6a00                 push 0
// 0079189a  83c020               add eax, 0x20
// 0079189d  50                   push eax
// 0079189e  57                   push edi
// 0079189f  56                   push esi
// 007918a0  e82b83f6ff           call 0x6f9bd0
// 007918a5  8bc8                 mov ecx, eax
// 007918a7  e84486f6ff           call 0x6f9ef0
// 007918ac  e88fe4f4ff           call 0x6dfd40
// 007918b1  6a36                 push 0x36
// 007918b3  8bc8                 mov ecx, eax
// 007918b5  e866dcf4ff           call 0x6df520
// 007918ba  8bd8                 mov ebx, eax
// 007918bc  e87fe4f4ff           call 0x6dfd40
// 007918c1  6a36                 push 0x36
// 007918c3  8bc8                 mov ecx, eax
// 007918c5  e856dcf4ff           call 0x6df520
// 007918ca  53                   push ebx
// 007918cb  50                   push eax
// 007918cc  57                   push edi
// 007918cd  8bce                 mov ecx, esi
// 007918cf  e884faf0ff           call 0x6a1358
// 007918d4  5b                   pop ebx
// 007918d5  5f                   pop edi
// 007918d6  5e                   pop esi
// 007918d7  c20c00               ret 0xc
// 007918da  e861e4f4ff           call 0x6dfd40
// 007918df  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007918e3  6a00                 push 0
// 007918e5  6a00                 push 0
// 007918e7  83e880               sub eax, -0x80
// 007918ea  50                   push eax
// 007918eb  57                   push edi
// 007918ec  56                   push esi
// 007918ed  e8de82f6ff           call 0x6f9bd0
// 007918f2  8bc8                 mov ecx, eax
// 007918f4  e8f785f6ff           call 0x6f9ef0
// 007918f9  e842e4f4ff           call 0x6dfd40
// 007918fe  6a36                 push 0x36
// 00791900  8bc8                 mov ecx, eax
// 00791902  e819dcf4ff           call 0x6df520
// 00791907  8b0f                 mov ecx, dword ptr [edi]
// 00791909  8b5708               mov edx, dword ptr [edi + 8]
// 0079190c  50                   push eax
// 0079190d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00791910  6a01                 push 1
// 00791912  2bd1                 sub edx, ecx
// 00791914  52                   push edx
// 00791915  48                   dec eax
// 00791916  50                   push eax
// 00791917  51                   push ecx
// 00791918  8bce                 mov ecx, esi
// 0079191a  e821a70200           call 0x7bc040
// 0079191f  5f                   pop edi
// 00791920  5e                   pop esi
// 00791921  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionThemeOffice2003@@MAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp

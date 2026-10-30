// from server: 100% by auto
// roc 2008-06 007785c0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007785c0
//
// 007785c0  83ec10               sub esp, 0x10
// 007785c3  56                   push esi
// 007785c4  8bf1                 mov esi, ecx
// 007785c6  8b4674               mov eax, dword ptr [esi + 0x74]
// 007785c9  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007785cc  83c04c               add eax, 0x4c
// 007785cf  57                   push edi
// 007785d0  83f9ff               cmp ecx, -1
// 007785d3  7505                 jne 0x7785da
// 007785d5  8b4004               mov eax, dword ptr [eax + 4]
// 007785d8  eb02                 jmp 0x7785dc
// 007785da  8bc1                 mov eax, ecx
// 007785dc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007785e0  50                   push eax
// 007785e1  8d442424             lea eax, [esp + 0x24]
// 007785e5  50                   push eax
// 007785e6  8bcf                 mov ecx, edi
// 007785e8  e8718df2ff           call 0x6a135e
// 007785ed  e84e77f6ff           call 0x6dfd40
// 007785f2  6a14                 push 0x14
// 007785f4  8bc8                 mov ecx, eax
// 007785f6  e8256ff6ff           call 0x6df520
// 007785fb  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007785fe  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00778601  83c14c               add ecx, 0x4c
// 00778604  83faff               cmp edx, -1
// 00778607  7505                 jne 0x77860e
// 00778609  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077860c  eb02                 jmp 0x778610
// 0077860e  8bca                 mov ecx, edx
// 00778610  8b542420             mov edx, dword ptr [esp + 0x20]
// 00778614  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00778618  6a01                 push 1
// 0077861a  50                   push eax
// 0077861b  89542410             mov dword ptr [esp + 0x10], edx
// 0077861f  8d56fe               lea edx, [esi - 2]
// 00778622  51                   push ecx
// 00778623  8d442414             lea eax, [esp + 0x14]
// 00778627  89542418             mov dword ptr [esp + 0x18], edx
// 0077862b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0077862f  50                   push eax
// 00778630  4e                   dec esi
// 00778631  57                   push edi
// 00778632  89542424             mov dword ptr [esp + 0x24], edx
// 00778636  89742428             mov dword ptr [esp + 0x28], esi
// 0077863a  e89115f8ff           call 0x6f9bd0
// 0077863f  8bc8                 mov ecx, eax
// 00778641  e8ba15f8ff           call 0x6f9c00
// 00778646  5f                   pop edi
// 00778647  5e                   pop esi
// 00778648  83c410               add esp, 0x10
// 0077864b  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp

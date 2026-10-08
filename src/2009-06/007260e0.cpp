// roc 2009-06 007260e0  unit: CXTPPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007260e0
//
// 007260e0  83ec08               sub esp, 8
// 007260e3  56                   push esi
// 007260e4  57                   push edi
// 007260e5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007260e9  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 007260ef  8bf1                 mov esi, ecx
// 007260f1  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007260f7  83f903               cmp ecx, 3
// 007260fa  0f84e5000000         je 0x7261e5
// 00726100  83f902               cmp ecx, 2
// 00726103  0f84dc000000         je 0x7261e5
// 00726109  837c244000           cmp dword ptr [esp + 0x40], 0
// 0072610e  747b                 je 0x72618b
// 00726110  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 00726117  8b442438             mov eax, dword ptr [esp + 0x38]
// 0072611b  7501                 jne 0x72611e
// 0072611d  48                   dec eax
// 0072611e  01442420             add dword ptr [esp + 0x20], eax
// 00726122  8b442434             mov eax, dword ptr [esp + 0x34]
// 00726126  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072612a  50                   push eax
// 0072612b  6a00                 push 0
// 0072612d  6a00                 push 0
// 0072612f  51                   push ecx
// 00726130  83ec10               sub esp, 0x10
// 00726133  8bc4                 mov eax, esp
// 00726135  8d542440             lea edx, [esp + 0x40]
// 00726139  52                   push edx
// 0072613a  50                   push eax
// 0072613b  ff1500ee8900         call dword ptr [0x89ee00]
// 00726141  8b442438             mov eax, dword ptr [esp + 0x38]
// 00726145  57                   push edi
// 00726146  50                   push eax
// 00726147  8d4c2430             lea ecx, [esp + 0x30]
// 0072614b  51                   push ecx
// 0072614c  8bce                 mov ecx, esi
// 0072614e  e89de6ffff           call 0x7247f0
// 00726153  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00726157  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072615b  83c006               add eax, 6
// 0072615e  3bc1                 cmp eax, ecx
// 00726160  7e02                 jle 0x726164
// 00726162  8bc8                 mov ecx, eax
// 00726164  8b442414             mov eax, dword ptr [esp + 0x14]
// 00726168  33d2                 xor edx, edx
// 0072616a  39968c000000         cmp dword ptr [esi + 0x8c], edx
// 00726170  894804               mov dword ptr [eax + 4], ecx
// 00726173  0f95c2               setne dl
// 00726176  83c203               add edx, 3
// 00726179  03542408             add edx, dword ptr [esp + 8]
// 0072617d  03542438             add edx, dword ptr [esp + 0x38]
// 00726181  8910                 mov dword ptr [eax], edx
// 00726183  5f                   pop edi
// 00726184  5e                   pop esi
// 00726185  83c408               add esp, 8
// 00726188  c23000               ret 0x30
// 0072618b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072618f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00726193  50                   push eax
// 00726194  6a01                 push 1
// 00726196  6a00                 push 0
// 00726198  51                   push ecx
// 00726199  83ec10               sub esp, 0x10
// 0072619c  8bc4                 mov eax, esp
// 0072619e  8d542440             lea edx, [esp + 0x40]
// 007261a2  52                   push edx
// 007261a3  50                   push eax
// 007261a4  ff1500ee8900         call dword ptr [0x89ee00]
// 007261aa  8b442438             mov eax, dword ptr [esp + 0x38]
// 007261ae  57                   push edi
// 007261af  50                   push eax
// 007261b0  8d4c2430             lea ecx, [esp + 0x30]
// 007261b4  51                   push ecx
// 007261b5  8bce                 mov ecx, esi
// 007261b7  e834e6ffff           call 0x7247f0
// 007261bc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007261c0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007261c4  83c006               add eax, 6
// 007261c7  3bc1                 cmp eax, ecx
// 007261c9  7e02                 jle 0x7261cd
// 007261cb  8bc8                 mov ecx, eax
// 007261cd  8b542408             mov edx, dword ptr [esp + 8]
// 007261d1  8b442414             mov eax, dword ptr [esp + 0x14]
// 007261d5  83c208               add edx, 8
// 007261d8  8910                 mov dword ptr [eax], edx
// 007261da  894804               mov dword ptr [eax + 4], ecx
// 007261dd  5f                   pop edi
// 007261de  5e                   pop esi
// 007261df  83c408               add esp, 8
// 007261e2  c23000               ret 0x30
// 007261e5  837c244000           cmp dword ptr [esp + 0x40], 0
// 007261ea  7465                 je 0x726251
// 007261ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007261f0  8b542430             mov edx, dword ptr [esp + 0x30]
// 007261f4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007261f8  01442424             add dword ptr [esp + 0x24], eax
// 007261fc  51                   push ecx
// 007261fd  6a00                 push 0
// 007261ff  6a01                 push 1
// 00726201  52                   push edx
// 00726202  83ec10               sub esp, 0x10
// 00726205  8bc4                 mov eax, esp
// 00726207  8d4c2440             lea ecx, [esp + 0x40]
// 0072620b  51                   push ecx
// 0072620c  50                   push eax
// 0072620d  ff1500ee8900         call dword ptr [0x89ee00]
// 00726213  8b542438             mov edx, dword ptr [esp + 0x38]
// 00726217  57                   push edi
// 00726218  52                   push edx
// 00726219  8d442430             lea eax, [esp + 0x30]
// 0072621d  50                   push eax
// 0072621e  8bce                 mov ecx, esi
// 00726220  e8cbe5ffff           call 0x7247f0
// 00726225  8b442408             mov eax, dword ptr [esp + 8]
// 00726229  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072622d  83c006               add eax, 6
// 00726230  3bc1                 cmp eax, ecx
// 00726232  8bd0                 mov edx, eax
// 00726234  7f02                 jg 0x726238
// 00726236  8bd1                 mov edx, ecx
// 00726238  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072623c  8910                 mov dword ptr [eax], edx
// 0072623e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00726242  8d4c0a03             lea ecx, [edx + ecx + 3]
// 00726246  894804               mov dword ptr [eax + 4], ecx
// 00726249  5f                   pop edi
// 0072624a  5e                   pop esi
// 0072624b  83c408               add esp, 8
// 0072624e  c23000               ret 0x30
// 00726251  8b542434             mov edx, dword ptr [esp + 0x34]
// 00726255  8b442430             mov eax, dword ptr [esp + 0x30]
// 00726259  52                   push edx
// 0072625a  6a01                 push 1
// 0072625c  6a01                 push 1
// 0072625e  50                   push eax
// 0072625f  83ec10               sub esp, 0x10
// 00726262  8bc4                 mov eax, esp
// 00726264  8d4c2440             lea ecx, [esp + 0x40]
// 00726268  51                   push ecx
// 00726269  50                   push eax
// 0072626a  ff1500ee8900         call dword ptr [0x89ee00]
// 00726270  8b542438             mov edx, dword ptr [esp + 0x38]
// 00726274  57                   push edi
// 00726275  52                   push edx
// 00726276  8d442430             lea eax, [esp + 0x30]
// 0072627a  50                   push eax
// 0072627b  8bce                 mov ecx, esi
// 0072627d  e86ee5ffff           call 0x7247f0
// 00726282  8b442408             mov eax, dword ptr [esp + 8]
// 00726286  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0072628a  83c006               add eax, 6
// 0072628d  3bc1                 cmp eax, ecx
// 0072628f  7e02                 jle 0x726293
// 00726291  8bc8                 mov ecx, eax
// 00726293  8b442414             mov eax, dword ptr [esp + 0x14]
// 00726297  8908                 mov dword ptr [eax], ecx
// 00726299  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072629d  83c108               add ecx, 8
// 007262a0  5f                   pop edi
// 007262a1  894804               mov dword ptr [eax + 4], ecx
// 007262a4  5e                   pop esi
// 007262a5  83c408               add esp, 8
// 007262a8  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlText@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp

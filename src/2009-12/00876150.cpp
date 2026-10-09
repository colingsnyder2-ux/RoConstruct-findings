// roc 2009-12 00876150  unit: CXTPRibbonTheme  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876150
//
// 00876150  8b442420             mov eax, dword ptr [esp + 0x20]
// 00876154  83ec30               sub esp, 0x30
// 00876157  53                   push ebx
// 00876158  55                   push ebp
// 00876159  33db                 xor ebx, ebx
// 0087615b  56                   push esi
// 0087615c  57                   push edi
// 0087615d  3bc3                 cmp eax, ebx
// 0087615f  7433                 je 0x876194
// 00876161  8b542458             mov edx, dword ptr [esp + 0x58]
// 00876165  50                   push eax
// 00876166  8b442460             mov eax, dword ptr [esp + 0x60]
// 0087616a  50                   push eax
// 0087616b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0087616f  52                   push edx
// 00876170  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00876174  50                   push eax
// 00876175  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00876179  52                   push edx
// 0087617a  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0087617e  50                   push eax
// 0087617f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00876183  52                   push edx
// 00876184  50                   push eax
// 00876185  e8568ff8ff           call 0x7ff0e0
// 0087618a  5f                   pop edi
// 0087618b  5e                   pop esi
// 0087618c  5d                   pop ebp
// 0087618d  5b                   pop ebx
// 0087618e  83c430               add esp, 0x30
// 00876191  c22000               ret 0x20
// 00876194  68f417a000           push 0xa017f4
// 00876199  e8628b0000           call 0x87ed00
// 0087619e  8bf8                 mov edi, eax
// 008761a0  3bfb                 cmp edi, ebx
// 008761a2  0f84b2000000         je 0x87625a
// 008761a8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008761ac  8d48fe               lea ecx, [eax - 2]
// 008761af  894c2410             mov dword ptr [esp + 0x10], ecx
// 008761b3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008761b7  8d51fe               lea edx, [ecx - 2]
// 008761ba  83c003               add eax, 3
// 008761bd  83c102               add ecx, 2
// 008761c0  89542414             mov dword ptr [esp + 0x14], edx
// 008761c4  89442418             mov dword ptr [esp + 0x18], eax
// 008761c8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008761cc  395c245c             cmp dword ptr [esp + 0x5c], ebx
// 008761d0  7507                 jne 0x8761d9
// 008761d2  bd03000000           mov ebp, 3
// 008761d7  eb0b                 jmp 0x8761e4
// 008761d9  33c0                 xor eax, eax
// 008761db  395c2454             cmp dword ptr [esp + 0x54], ebx
// 008761df  0f95c0               setne al
// 008761e2  8be8                 mov ebp, eax
// 008761e4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008761e8  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008761ee  8d542410             lea edx, [esp + 0x10]
// 008761f2  52                   push edx
// 008761f3  50                   push eax
// 008761f4  e857bbffff           call 0x871d50
// 008761f9  83c408               add esp, 8
// 008761fc  8bf0                 mov esi, eax
// 008761fe  6a04                 push 4
// 00876200  f7de                 neg esi
// 00876202  55                   push ebp
// 00876203  8d442438             lea eax, [esp + 0x38]
// 00876207  1bf6                 sbb esi, esi
// 00876209  50                   push eax
// 0087620a  8bcf                 mov ecx, edi
// 0087620c  f7de                 neg esi
// 0087620e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00876212  895c2430             mov dword ptr [esp + 0x30], ebx
// 00876216  895c2434             mov dword ptr [esp + 0x34], ebx
// 0087621a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0087621e  e89da60600           call 0x8e08c0
// 00876223  8b10                 mov edx, dword ptr [eax]
// 00876225  56                   push esi
// 00876226  68ff00ff00           push 0xff00ff
// 0087622b  8d4c2428             lea ecx, [esp + 0x28]
// 0087622f  51                   push ecx
// 00876230  83ec10               sub esp, 0x10
// 00876233  8bcc                 mov ecx, esp
// 00876235  8911                 mov dword ptr [ecx], edx
// 00876237  8b5004               mov edx, dword ptr [eax + 4]
// 0087623a  895104               mov dword ptr [ecx + 4], edx
// 0087623d  8b5008               mov edx, dword ptr [eax + 8]
// 00876240  8b400c               mov eax, dword ptr [eax + 0xc]
// 00876243  895108               mov dword ptr [ecx + 8], edx
// 00876246  8b542460             mov edx, dword ptr [esp + 0x60]
// 0087624a  89410c               mov dword ptr [ecx + 0xc], eax
// 0087624d  8d4c242c             lea ecx, [esp + 0x2c]
// 00876251  51                   push ecx
// 00876252  52                   push edx
// 00876253  8bcf                 mov ecx, edi
// 00876255  e876b00600           call 0x8e12d0
// 0087625a  5f                   pop edi
// 0087625b  5e                   pop esi
// 0087625c  5d                   pop ebp
// 0087625d  5b                   pop ebx
// 0087625e  83c430               add esp, 0x30
// 00876261  c22000               ret 0x20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawDropDownGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp

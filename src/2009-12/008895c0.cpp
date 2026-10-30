// roc 2009-12 008895c0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008895c0
//
// 008895c0  83ec40               sub esp, 0x40
// 008895c3  57                   push edi
// 008895c4  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008895c8  85ff                 test edi, edi
// 008895ca  0f84d3000000         je 0x8896a3
// 008895d0  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 008895d6  85c0                 test eax, eax
// 008895d8  0f84c5000000         je 0x8896a3
// 008895de  56                   push esi
// 008895df  8bb000010000         mov esi, dword ptr [eax + 0x100]
// 008895e5  85f6                 test esi, esi
// 008895e7  0f84b5000000         je 0x8896a2
// 008895ed  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 008895f4  0f84a8000000         je 0x8896a2
// 008895fa  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008895fd  53                   push ebx
// 008895fe  8b1d70cc9800         mov ebx, dword ptr [0x98cc70]
// 00889604  8d44243c             lea eax, [esp + 0x3c]
// 00889608  50                   push eax
// 00889609  51                   push ecx
// 0088960a  ffd3                 call ebx
// 0088960c  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 00889612  8d54241c             lea edx, [esp + 0x1c]
// 00889616  52                   push edx
// 00889617  e894c5f6ff           call 0x7f5bb0
// 0088961c  8d44241c             lea eax, [esp + 0x1c]
// 00889620  50                   push eax
// 00889621  8bce                 mov ecx, esi
// 00889623  e8d2a7f6ff           call 0x7f3dfa
// 00889628  8b5720               mov edx, dword ptr [edi + 0x20]
// 0088962b  8d4c242c             lea ecx, [esp + 0x2c]
// 0088962f  51                   push ecx
// 00889630  52                   push edx
// 00889631  ffd3                 call ebx
// 00889633  8d44241c             lea eax, [esp + 0x1c]
// 00889637  50                   push eax
// 00889638  8d4c2430             lea ecx, [esp + 0x30]
// 0088963c  51                   push ecx
// 0088963d  8d542414             lea edx, [esp + 0x14]
// 00889641  52                   push edx
// 00889642  ff15dcca9800         call dword ptr [0x98cadc]
// 00889648  5b                   pop ebx
// 00889649  85c0                 test eax, eax
// 0088964b  7455                 je 0x8896a2
// 0088964d  8d442408             lea eax, [esp + 8]
// 00889651  50                   push eax
// 00889652  8bcf                 mov ecx, edi
// 00889654  e87fb1f6ff           call 0x7f47d8
// 00889659  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088965d  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00889661  8b3558ca9800         mov esi, dword ptr [0x98ca58]
// 00889667  83f901               cmp ecx, 1
// 0088966a  7e0b                 jle 0x889677
// 0088966c  6a00                 push 0
// 0088966e  6aff                 push -1
// 00889670  8d542410             lea edx, [esp + 0x10]
// 00889674  52                   push edx
// 00889675  ffd6                 call esi
// 00889677  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088967b  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0088967f  83f801               cmp eax, 1
// 00889682  7e0b                 jle 0x88968f
// 00889684  6aff                 push -1
// 00889686  6a00                 push 0
// 00889688  8d4c2410             lea ecx, [esp + 0x10]
// 0088968c  51                   push ecx
// 0088968d  ffd6                 call esi
// 0088968f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00889693  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00889697  52                   push edx
// 00889698  8d44240c             lea eax, [esp + 0xc]
// 0088969c  50                   push eax
// 0088969d  e85caff6ff           call 0x7f45fe
// 008896a2  5e                   pop esi
// 008896a3  5f                   pop edi
// 008896a4  83c440               add esp, 0x40
// 008896a7  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillIntersectRect@CXTPOfficeTheme@XTPPaintThemes@@IAEXPAVCDC@@PAVCXTPPopupBar@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp

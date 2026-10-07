// roc 2011-06 008a1850  unit: CXTPDockContext  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a1850
//
// 008a1850  83ec10               sub esp, 0x10
// 008a1853  56                   push esi
// 008a1854  8d442404             lea eax, [esp + 4]
// 008a1858  57                   push edi
// 008a1859  50                   push eax
// 008a185a  e8b108fbff           call 0x852110
// 008a185f  8bc8                 mov ecx, eax
// 008a1861  e87a04fbff           call 0x851ce0
// 008a1866  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a186a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008a186e  2b4604               sub eax, dword ptr [esi + 4]
// 008a1871  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 008a1877  83f80a               cmp eax, 0xa
// 008a187a  7d09                 jge 0x8a1885
// 008a187c  83c0f6               add eax, -0xa
// 008a187f  50                   push eax
// 008a1880  6a00                 push 0
// 008a1882  56                   push esi
// 008a1883  ffd7                 call edi
// 008a1885  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008a1888  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a188c  8bd1                 mov edx, ecx
// 008a188e  2bd0                 sub edx, eax
// 008a1890  83fa0a               cmp edx, 0xa
// 008a1893  7d0b                 jge 0x8a18a0
// 008a1895  2bc1                 sub eax, ecx
// 008a1897  83c00a               add eax, 0xa
// 008a189a  50                   push eax
// 008a189b  6a00                 push 0
// 008a189d  56                   push esi
// 008a189e  ffd7                 call edi
// 008a18a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a18a4  2b06                 sub eax, dword ptr [esi]
// 008a18a6  83f80a               cmp eax, 0xa
// 008a18a9  7d09                 jge 0x8a18b4
// 008a18ab  6a00                 push 0
// 008a18ad  83c0f6               add eax, -0xa
// 008a18b0  50                   push eax
// 008a18b1  56                   push esi
// 008a18b2  ffd7                 call edi
// 008a18b4  8b4e08               mov ecx, dword ptr [esi + 8]
// 008a18b7  8b442408             mov eax, dword ptr [esp + 8]
// 008a18bb  8bd1                 mov edx, ecx
// 008a18bd  2bd0                 sub edx, eax
// 008a18bf  83fa0a               cmp edx, 0xa
// 008a18c2  7d0b                 jge 0x8a18cf
// 008a18c4  2bc1                 sub eax, ecx
// 008a18c6  6a00                 push 0
// 008a18c8  83c00a               add eax, 0xa
// 008a18cb  50                   push eax
// 008a18cc  56                   push esi
// 008a18cd  ffd7                 call edi
// 008a18cf  5f                   pop edi
// 008a18d0  5e                   pop esi
// 008a18d1  83c410               add esp, 0x10
// 008a18d4  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockContext.cpp (function ?EnsureVisible@CXTPDockContext@@AAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockContext.cpp

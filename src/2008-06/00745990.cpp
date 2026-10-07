// roc 2008-06 00745990  unit: CXTPDockContext  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745990
//
// 00745990  83ec10               sub esp, 0x10
// 00745993  56                   push esi
// 00745994  8d442404             lea eax, [esp + 4]
// 00745998  57                   push edi
// 00745999  50                   push eax
// 0074599a  e8e136faff           call 0x6e9080
// 0074599f  8bc8                 mov ecx, eax
// 007459a1  e8aa32faff           call 0x6e8c50
// 007459a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 007459aa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007459ae  2b4604               sub eax, dword ptr [esi + 4]
// 007459b1  8b3d682d8000         mov edi, dword ptr [0x802d68]
// 007459b7  83f80a               cmp eax, 0xa
// 007459ba  7d09                 jge 0x7459c5
// 007459bc  83c0f6               add eax, -0xa
// 007459bf  50                   push eax
// 007459c0  6a00                 push 0
// 007459c2  56                   push esi
// 007459c3  ffd7                 call edi
// 007459c5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007459c8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007459cc  8bd1                 mov edx, ecx
// 007459ce  2bd0                 sub edx, eax
// 007459d0  83fa0a               cmp edx, 0xa
// 007459d3  7d0b                 jge 0x7459e0
// 007459d5  2bc1                 sub eax, ecx
// 007459d7  83c00a               add eax, 0xa
// 007459da  50                   push eax
// 007459db  6a00                 push 0
// 007459dd  56                   push esi
// 007459de  ffd7                 call edi
// 007459e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007459e4  2b06                 sub eax, dword ptr [esi]
// 007459e6  83f80a               cmp eax, 0xa
// 007459e9  7d09                 jge 0x7459f4
// 007459eb  6a00                 push 0
// 007459ed  83c0f6               add eax, -0xa
// 007459f0  50                   push eax
// 007459f1  56                   push esi
// 007459f2  ffd7                 call edi
// 007459f4  8b4e08               mov ecx, dword ptr [esi + 8]
// 007459f7  8b442408             mov eax, dword ptr [esp + 8]
// 007459fb  8bd1                 mov edx, ecx
// 007459fd  2bd0                 sub edx, eax
// 007459ff  83fa0a               cmp edx, 0xa
// 00745a02  7d0b                 jge 0x745a0f
// 00745a04  2bc1                 sub eax, ecx
// 00745a06  6a00                 push 0
// 00745a08  83c00a               add eax, 0xa
// 00745a0b  50                   push eax
// 00745a0c  56                   push esi
// 00745a0d  ffd7                 call edi
// 00745a0f  5f                   pop edi
// 00745a10  5e                   pop esi
// 00745a11  83c410               add esp, 0x10
// 00745a14  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?EnsureVisible@CXTPDockContext@@AAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp

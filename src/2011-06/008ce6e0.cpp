// roc 2011-06 008ce6e0  unit: CXTPDockingPaneContext  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ce6e0
//
// 008ce6e0  83ec10               sub esp, 0x10
// 008ce6e3  56                   push esi
// 008ce6e4  8b742418             mov esi, dword ptr [esp + 0x18]
// 008ce6e8  57                   push edi
// 008ce6e9  8d442408             lea eax, [esp + 8]
// 008ce6ed  56                   push esi
// 008ce6ee  50                   push eax
// 008ce6ef  e81c3af8ff           call 0x852110
// 008ce6f4  8bc8                 mov ecx, eax
// 008ce6f6  e87535f8ff           call 0x851c70
// 008ce6fb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ce6ff  2b4604               sub eax, dword ptr [esi + 4]
// 008ce702  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 008ce708  83f80a               cmp eax, 0xa
// 008ce70b  7d09                 jge 0x8ce716
// 008ce70d  83c0f6               add eax, -0xa
// 008ce710  50                   push eax
// 008ce711  6a00                 push 0
// 008ce713  56                   push esi
// 008ce714  ffd7                 call edi
// 008ce716  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce719  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ce71d  8bd1                 mov edx, ecx
// 008ce71f  2bd0                 sub edx, eax
// 008ce721  83fa0a               cmp edx, 0xa
// 008ce724  7d0b                 jge 0x8ce731
// 008ce726  2bc1                 sub eax, ecx
// 008ce728  83c00a               add eax, 0xa
// 008ce72b  50                   push eax
// 008ce72c  6a00                 push 0
// 008ce72e  56                   push esi
// 008ce72f  ffd7                 call edi
// 008ce731  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ce735  2b06                 sub eax, dword ptr [esi]
// 008ce737  83f80a               cmp eax, 0xa
// 008ce73a  7d09                 jge 0x8ce745
// 008ce73c  6a00                 push 0
// 008ce73e  83c0f6               add eax, -0xa
// 008ce741  50                   push eax
// 008ce742  56                   push esi
// 008ce743  ffd7                 call edi
// 008ce745  8b4e08               mov ecx, dword ptr [esi + 8]
// 008ce748  8b442408             mov eax, dword ptr [esp + 8]
// 008ce74c  8bd1                 mov edx, ecx
// 008ce74e  2bd0                 sub edx, eax
// 008ce750  83fa0a               cmp edx, 0xa
// 008ce753  7d0b                 jge 0x8ce760
// 008ce755  2bc1                 sub eax, ecx
// 008ce757  6a00                 push 0
// 008ce759  83c00a               add eax, 0xa
// 008ce75c  50                   push eax
// 008ce75d  56                   push esi
// 008ce75e  ffd7                 call edi
// 008ce760  5f                   pop edi
// 008ce761  5e                   pop esi
// 008ce762  83c410               add esp, 0x10
// 008ce765  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ?EnsureVisible@CXTPDockingPaneContext@@SAXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp

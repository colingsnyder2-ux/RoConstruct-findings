// roc 2008-06 00769e50  unit: CXTPDockingPaneContext  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00769e50
//
// 00769e50  83ec10               sub esp, 0x10
// 00769e53  56                   push esi
// 00769e54  8b742418             mov esi, dword ptr [esp + 0x18]
// 00769e58  57                   push edi
// 00769e59  8d442408             lea eax, [esp + 8]
// 00769e5d  56                   push esi
// 00769e5e  50                   push eax
// 00769e5f  e81cf2f7ff           call 0x6e9080
// 00769e64  8bc8                 mov ecx, eax
// 00769e66  e875edf7ff           call 0x6e8be0
// 00769e6b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00769e6f  2b4604               sub eax, dword ptr [esi + 4]
// 00769e72  8b3d682d8000         mov edi, dword ptr [0x802d68]
// 00769e78  83f80a               cmp eax, 0xa
// 00769e7b  7d09                 jge 0x769e86
// 00769e7d  83c0f6               add eax, -0xa
// 00769e80  50                   push eax
// 00769e81  6a00                 push 0
// 00769e83  56                   push esi
// 00769e84  ffd7                 call edi
// 00769e86  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00769e89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00769e8d  8bd1                 mov edx, ecx
// 00769e8f  2bd0                 sub edx, eax
// 00769e91  83fa0a               cmp edx, 0xa
// 00769e94  7d0b                 jge 0x769ea1
// 00769e96  2bc1                 sub eax, ecx
// 00769e98  83c00a               add eax, 0xa
// 00769e9b  50                   push eax
// 00769e9c  6a00                 push 0
// 00769e9e  56                   push esi
// 00769e9f  ffd7                 call edi
// 00769ea1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00769ea5  2b06                 sub eax, dword ptr [esi]
// 00769ea7  83f80a               cmp eax, 0xa
// 00769eaa  7d09                 jge 0x769eb5
// 00769eac  6a00                 push 0
// 00769eae  83c0f6               add eax, -0xa
// 00769eb1  50                   push eax
// 00769eb2  56                   push esi
// 00769eb3  ffd7                 call edi
// 00769eb5  8b4e08               mov ecx, dword ptr [esi + 8]
// 00769eb8  8b442408             mov eax, dword ptr [esp + 8]
// 00769ebc  8bd1                 mov edx, ecx
// 00769ebe  2bd0                 sub edx, eax
// 00769ec0  83fa0a               cmp edx, 0xa
// 00769ec3  7d0b                 jge 0x769ed0
// 00769ec5  2bc1                 sub eax, ecx
// 00769ec7  6a00                 push 0
// 00769ec9  83c00a               add eax, 0xa
// 00769ecc  50                   push eax
// 00769ecd  56                   push esi
// 00769ece  ffd7                 call edi
// 00769ed0  5f                   pop edi
// 00769ed1  5e                   pop esi
// 00769ed2  83c410               add esp, 0x10
// 00769ed5  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?EnsureVisible@CXTPDockingPaneContext@@SAXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp

// from server: 100% by auto
// roc 2007-08 006ecd40  unit: CXTPDockingPaneContext  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ecd40
//
// 006ecd40  83ec10               sub esp, 0x10
// 006ecd43  56                   push esi
// 006ecd44  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ecd48  57                   push edi
// 006ecd49  8d442408             lea eax, [esp + 8]
// 006ecd4d  56                   push esi
// 006ecd4e  50                   push eax
// 006ecd4f  e85c54f8ff           call 0x6721b0
// 006ecd54  8bc8                 mov ecx, eax
// 006ecd56  e8b54ff8ff           call 0x671d10
// 006ecd5b  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ecd5f  2b4604               sub eax, dword ptr [esi + 4]
// 006ecd62  8b3dd8ed7700         mov edi, dword ptr [0x77edd8]
// 006ecd68  83f80a               cmp eax, 0xa
// 006ecd6b  7d09                 jge 0x6ecd76
// 006ecd6d  83c0f6               add eax, -0xa
// 006ecd70  50                   push eax
// 006ecd71  6a00                 push 0
// 006ecd73  56                   push esi
// 006ecd74  ffd7                 call edi
// 006ecd76  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ecd79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ecd7d  8bd1                 mov edx, ecx
// 006ecd7f  2bd0                 sub edx, eax
// 006ecd81  83fa0a               cmp edx, 0xa
// 006ecd84  7d0b                 jge 0x6ecd91
// 006ecd86  2bc1                 sub eax, ecx
// 006ecd88  83c00a               add eax, 0xa
// 006ecd8b  50                   push eax
// 006ecd8c  6a00                 push 0
// 006ecd8e  56                   push esi
// 006ecd8f  ffd7                 call edi
// 006ecd91  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ecd95  2b06                 sub eax, dword ptr [esi]
// 006ecd97  83f80a               cmp eax, 0xa
// 006ecd9a  7d09                 jge 0x6ecda5
// 006ecd9c  6a00                 push 0
// 006ecd9e  83c0f6               add eax, -0xa
// 006ecda1  50                   push eax
// 006ecda2  56                   push esi
// 006ecda3  ffd7                 call edi
// 006ecda5  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ecda8  8b442408             mov eax, dword ptr [esp + 8]
// 006ecdac  8bd1                 mov edx, ecx
// 006ecdae  2bd0                 sub edx, eax
// 006ecdb0  83fa0a               cmp edx, 0xa
// 006ecdb3  7d0b                 jge 0x6ecdc0
// 006ecdb5  2bc1                 sub eax, ecx
// 006ecdb7  6a00                 push 0
// 006ecdb9  83c00a               add eax, 0xa
// 006ecdbc  50                   push eax
// 006ecdbd  56                   push esi
// 006ecdbe  ffd7                 call edi
// 006ecdc0  5f                   pop edi
// 006ecdc1  5e                   pop esi
// 006ecdc2  83c410               add esp, 0x10
// 006ecdc5  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?EnsureVisible@CXTPDockingPaneContext@@SAXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp

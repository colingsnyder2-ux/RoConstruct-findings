// from server: 100% by auto
// roc 2012-06 00a19ca0  unit: CXTPDockContext  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19ca0
//
// 00a19ca0  83ec10               sub esp, 0x10
// 00a19ca3  56                   push esi
// 00a19ca4  8d442404             lea eax, [esp + 4]
// 00a19ca8  57                   push edi
// 00a19ca9  50                   push eax
// 00a19caa  e82109fbff           call 0x9ca5d0
// 00a19caf  8bc8                 mov ecx, eax
// 00a19cb1  e8ea04fbff           call 0x9ca1a0
// 00a19cb6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a19cba  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a19cbe  2b4604               sub eax, dword ptr [esi + 4]
// 00a19cc1  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a19cc7  83f80a               cmp eax, 0xa
// 00a19cca  7d09                 jge 0xa19cd5
// 00a19ccc  83c0f6               add eax, -0xa
// 00a19ccf  50                   push eax
// 00a19cd0  6a00                 push 0
// 00a19cd2  56                   push esi
// 00a19cd3  ffd7                 call edi
// 00a19cd5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a19cd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a19cdc  8bd1                 mov edx, ecx
// 00a19cde  2bd0                 sub edx, eax
// 00a19ce0  83fa0a               cmp edx, 0xa
// 00a19ce3  7d0b                 jge 0xa19cf0
// 00a19ce5  2bc1                 sub eax, ecx
// 00a19ce7  83c00a               add eax, 0xa
// 00a19cea  50                   push eax
// 00a19ceb  6a00                 push 0
// 00a19ced  56                   push esi
// 00a19cee  ffd7                 call edi
// 00a19cf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a19cf4  2b06                 sub eax, dword ptr [esi]
// 00a19cf6  83f80a               cmp eax, 0xa
// 00a19cf9  7d09                 jge 0xa19d04
// 00a19cfb  6a00                 push 0
// 00a19cfd  83c0f6               add eax, -0xa
// 00a19d00  50                   push eax
// 00a19d01  56                   push esi
// 00a19d02  ffd7                 call edi
// 00a19d04  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a19d07  8b442408             mov eax, dword ptr [esp + 8]
// 00a19d0b  8bd1                 mov edx, ecx
// 00a19d0d  2bd0                 sub edx, eax
// 00a19d0f  83fa0a               cmp edx, 0xa
// 00a19d12  7d0b                 jge 0xa19d1f
// 00a19d14  2bc1                 sub eax, ecx
// 00a19d16  6a00                 push 0
// 00a19d18  83c00a               add eax, 0xa
// 00a19d1b  50                   push eax
// 00a19d1c  56                   push esi
// 00a19d1d  ffd7                 call edi
// 00a19d1f  5f                   pop edi
// 00a19d20  5e                   pop esi
// 00a19d21  83c410               add esp, 0x10
// 00a19d24  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockContext.cpp (function ?EnsureVisible@CXTPDockContext@@AAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockContext.cpp

// roc 2009-06 007b4340  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4340
//
// 007b4340  8b442408             mov eax, dword ptr [esp + 8]
// 007b4344  56                   push esi
// 007b4345  57                   push edi
// 007b4346  8bf1                 mov esi, ecx
// 007b4348  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b434c  50                   push eax
// 007b434d  51                   push ecx
// 007b434e  ff15dcec8900         call dword ptr [0x89ecdc]
// 007b4354  8bf8                 mov edi, eax
// 007b4356  8b4630               mov eax, dword ptr [esi + 0x30]
// 007b4359  85c0                 test eax, eax
// 007b435b  740e                 je 0x7b436b
// 007b435d  50                   push eax
// 007b435e  ff15d8ec8900         call dword ptr [0x89ecd8]
// 007b4364  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007b436b  897e30               mov dword ptr [esi + 0x30], edi
// 007b436e  5f                   pop edi
// 007b436f  5e                   pop esi
// 007b4370  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

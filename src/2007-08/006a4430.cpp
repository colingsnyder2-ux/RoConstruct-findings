// roc 2007-08 006a4430  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4430
//
// 006a4430  8b442408             mov eax, dword ptr [esp + 8]
// 006a4434  56                   push esi
// 006a4435  57                   push edi
// 006a4436  8bf1                 mov esi, ecx
// 006a4438  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a443c  50                   push eax
// 006a443d  51                   push ecx
// 006a443e  ff15a0ec7700         call dword ptr [0x77eca0]
// 006a4444  8bf8                 mov edi, eax
// 006a4446  8b4630               mov eax, dword ptr [esi + 0x30]
// 006a4449  85c0                 test eax, eax
// 006a444b  740e                 je 0x6a445b
// 006a444d  50                   push eax
// 006a444e  ff15a4ec7700         call dword ptr [0x77eca4]
// 006a4454  c7463000000000       mov dword ptr [esi + 0x30], 0
// 006a445b  897e30               mov dword ptr [esi + 0x30], edi
// 006a445e  5f                   pop edi
// 006a445f  5e                   pop esi
// 006a4460  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp

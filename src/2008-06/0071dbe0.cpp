// from server: 100% by auto
// roc 2008-06 0071dbe0  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071dbe0
//
// 0071dbe0  8b442408             mov eax, dword ptr [esp + 8]
// 0071dbe4  56                   push esi
// 0071dbe5  57                   push edi
// 0071dbe6  8bf1                 mov esi, ecx
// 0071dbe8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071dbec  50                   push eax
// 0071dbed  51                   push ecx
// 0071dbee  ff15142c8000         call dword ptr [0x802c14]
// 0071dbf4  8bf8                 mov edi, eax
// 0071dbf6  8b4630               mov eax, dword ptr [esi + 0x30]
// 0071dbf9  85c0                 test eax, eax
// 0071dbfb  740e                 je 0x71dc0b
// 0071dbfd  50                   push eax
// 0071dbfe  ff15102c8000         call dword ptr [0x802c10]
// 0071dc04  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0071dc0b  897e30               mov dword ptr [esi + 0x30], edi
// 0071dc0e  5f                   pop edi
// 0071dc0f  5e                   pop esi
// 0071dc10  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

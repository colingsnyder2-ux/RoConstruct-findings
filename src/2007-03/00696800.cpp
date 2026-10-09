// roc 2007-03 00696800  unit: seg_00690000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696800
//
// 00696800  8b442408             mov eax, dword ptr [esp + 8]
// 00696804  56                   push esi
// 00696805  57                   push edi
// 00696806  8bf1                 mov esi, ecx
// 00696808  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069680c  50                   push eax
// 0069680d  51                   push ecx
// 0069680e  ff15c0ef7700         call dword ptr [0x77efc0]
// 00696814  8bf8                 mov edi, eax
// 00696816  8b4630               mov eax, dword ptr [esi + 0x30]
// 00696819  85c0                 test eax, eax
// 0069681b  740e                 je 0x69682b
// 0069681d  50                   push eax
// 0069681e  ff15bcef7700         call dword ptr [0x77efbc]
// 00696824  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0069682b  897e30               mov dword ptr [esi + 0x30], edi
// 0069682e  5f                   pop edi
// 0069682f  5e                   pop esi
// 00696830  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

// roc 2009-12 0088e360  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e360
//
// 0088e360  8b442408             mov eax, dword ptr [esp + 8]
// 0088e364  56                   push esi
// 0088e365  57                   push edi
// 0088e366  8bf1                 mov esi, ecx
// 0088e368  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088e36c  50                   push eax
// 0088e36d  51                   push ecx
// 0088e36e  ff15a0cb9800         call dword ptr [0x98cba0]
// 0088e374  8bf8                 mov edi, eax
// 0088e376  8b4630               mov eax, dword ptr [esi + 0x30]
// 0088e379  85c0                 test eax, eax
// 0088e37b  740e                 je 0x88e38b
// 0088e37d  50                   push eax
// 0088e37e  ff159ccb9800         call dword ptr [0x98cb9c]
// 0088e384  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0088e38b  897e30               mov dword ptr [esi + 0x30], edi
// 0088e38e  5f                   pop edi
// 0088e38f  5e                   pop esi
// 0088e390  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

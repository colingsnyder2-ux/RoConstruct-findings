// roc 2012-06 00a17bc0  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17bc0
//
// 00a17bc0  8b442408             mov eax, dword ptr [esp + 8]
// 00a17bc4  56                   push esi
// 00a17bc5  57                   push edi
// 00a17bc6  8bf1                 mov esi, ecx
// 00a17bc8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a17bcc  50                   push eax
// 00a17bcd  51                   push ecx
// 00a17bce  ff15503cb200         call dword ptr [0xb23c50]
// 00a17bd4  8bf8                 mov edi, eax
// 00a17bd6  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a17bd9  85c0                 test eax, eax
// 00a17bdb  740e                 je 0xa17beb
// 00a17bdd  50                   push eax
// 00a17bde  ff15543cb200         call dword ptr [0xb23c54]
// 00a17be4  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00a17beb  897e30               mov dword ptr [esi + 0x30], edi
// 00a17bee  5f                   pop edi
// 00a17bef  5e                   pop esi
// 00a17bf0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

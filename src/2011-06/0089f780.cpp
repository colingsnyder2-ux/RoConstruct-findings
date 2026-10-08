// roc 2011-06 0089f780  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f780
//
// 0089f780  8b442408             mov eax, dword ptr [esp + 8]
// 0089f784  56                   push esi
// 0089f785  57                   push edi
// 0089f786  8bf1                 mov esi, ecx
// 0089f788  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089f78c  50                   push eax
// 0089f78d  51                   push ecx
// 0089f78e  ff15441aa400         call dword ptr [0xa41a44]
// 0089f794  8bf8                 mov edi, eax
// 0089f796  8b4630               mov eax, dword ptr [esi + 0x30]
// 0089f799  85c0                 test eax, eax
// 0089f79b  740e                 je 0x89f7ab
// 0089f79d  50                   push eax
// 0089f79e  ff15481aa400         call dword ptr [0xa41a48]
// 0089f7a4  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0089f7ab  897e30               mov dword ptr [esi + 0x30], edi
// 0089f7ae  5f                   pop edi
// 0089f7af  5e                   pop esi
// 0089f7b0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

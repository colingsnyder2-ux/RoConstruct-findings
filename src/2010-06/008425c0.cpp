// roc 2010-06 008425c0  unit: CXTPShortcutManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008425c0
//
// 008425c0  8b442408             mov eax, dword ptr [esp + 8]
// 008425c4  56                   push esi
// 008425c5  57                   push edi
// 008425c6  8bf1                 mov esi, ecx
// 008425c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008425cc  50                   push eax
// 008425cd  51                   push ecx
// 008425ce  ff151cbb9e00         call dword ptr [0x9ebb1c]
// 008425d4  8bf8                 mov edi, eax
// 008425d6  8b4630               mov eax, dword ptr [esi + 0x30]
// 008425d9  85c0                 test eax, eax
// 008425db  740e                 je 0x8425eb
// 008425dd  50                   push eax
// 008425de  ff1520bb9e00         call dword ptr [0x9ebb20]
// 008425e4  c7463000000000       mov dword ptr [esi + 0x30], 0
// 008425eb  897e30               mov dword ptr [esi + 0x30], edi
// 008425ee  5f                   pop edi
// 008425ef  5e                   pop esi
// 008425f0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?UpdateAcellTable@CXTPShortcutManager@@QAEXPAUtagACCEL@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp

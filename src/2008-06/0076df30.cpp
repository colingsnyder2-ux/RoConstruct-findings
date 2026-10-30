// from server: 100% by auto
// roc 2008-06 0076df30  unit: CXTPShadowsManager::CShadowWnd  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076df30
//
// 0076df30  83ec28               sub esp, 0x28
// 0076df33  8b542430             mov edx, dword ptr [esp + 0x30]
// 0076df37  33c0                 xor eax, eax
// 0076df39  56                   push esi
// 0076df3a  8bf1                 mov esi, ecx
// 0076df3c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0076df40  50                   push eax
// 0076df41  8944240c             mov dword ptr [esp + 0xc], eax
// 0076df45  894c240c             mov dword ptr [esp + 0xc], ecx
// 0076df49  89442414             mov dword ptr [esp + 0x14], eax
// 0076df4d  b901000000           mov ecx, 1
// 0076df52  50                   push eax
// 0076df53  89442414             mov dword ptr [esp + 0x14], eax
// 0076df57  89542414             mov dword ptr [esp + 0x14], edx
// 0076df5b  66894c2418           mov word ptr [esp + 0x18], cx
// 0076df60  8d4c2438             lea ecx, [esp + 0x38]
// 0076df64  51                   push ecx
// 0076df65  ba20000000           mov edx, 0x20
// 0076df6a  668954241e           mov word ptr [esp + 0x1e], dx
// 0076df6f  50                   push eax
// 0076df70  8d542414             lea edx, [esp + 0x14]
// 0076df74  52                   push edx
// 0076df75  89442418             mov dword ptr [esp + 0x18], eax
// 0076df79  89442428             mov dword ptr [esp + 0x28], eax
// 0076df7d  50                   push eax
// 0076df7e  89442430             mov dword ptr [esp + 0x30], eax
// 0076df82  89442434             mov dword ptr [esp + 0x34], eax
// 0076df86  89442438             mov dword ptr [esp + 0x38], eax
// 0076df8a  8944243c             mov dword ptr [esp + 0x3c], eax
// 0076df8e  89442440             mov dword ptr [esp + 0x40], eax
// 0076df92  c744241c28000000     mov dword ptr [esp + 0x1c], 0x28
// 0076df9a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0076df9e  89442448             mov dword ptr [esp + 0x48], eax
// 0076dfa2  ff154c218000         call dword ptr [0x80214c]
// 0076dfa8  50                   push eax
// 0076dfa9  8bce                 mov ecx, esi
// 0076dfab  e8b22cf3ff           call 0x6a0c62
// 0076dfb0  5e                   pop esi
// 0076dfb1  83c428               add esp, 0x28
// 0076dfb4  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?CreateEditorBitmap@CAlphaBitmap@CXTPImageEditorPicture@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

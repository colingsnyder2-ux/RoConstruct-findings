// roc 2009-12 008c1100  unit: CXTPShadowsManager::CShadowWnd  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1100
//
// 008c1100  83ec28               sub esp, 0x28
// 008c1103  8b542430             mov edx, dword ptr [esp + 0x30]
// 008c1107  33c0                 xor eax, eax
// 008c1109  56                   push esi
// 008c110a  8bf1                 mov esi, ecx
// 008c110c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c1110  50                   push eax
// 008c1111  8944240c             mov dword ptr [esp + 0xc], eax
// 008c1115  894c240c             mov dword ptr [esp + 0xc], ecx
// 008c1119  89442414             mov dword ptr [esp + 0x14], eax
// 008c111d  b901000000           mov ecx, 1
// 008c1122  50                   push eax
// 008c1123  89442414             mov dword ptr [esp + 0x14], eax
// 008c1127  89542414             mov dword ptr [esp + 0x14], edx
// 008c112b  66894c2418           mov word ptr [esp + 0x18], cx
// 008c1130  8d4c2438             lea ecx, [esp + 0x38]
// 008c1134  51                   push ecx
// 008c1135  ba20000000           mov edx, 0x20
// 008c113a  668954241e           mov word ptr [esp + 0x1e], dx
// 008c113f  50                   push eax
// 008c1140  8d542414             lea edx, [esp + 0x14]
// 008c1144  52                   push edx
// 008c1145  89442418             mov dword ptr [esp + 0x18], eax
// 008c1149  89442428             mov dword ptr [esp + 0x28], eax
// 008c114d  50                   push eax
// 008c114e  89442430             mov dword ptr [esp + 0x30], eax
// 008c1152  89442434             mov dword ptr [esp + 0x34], eax
// 008c1156  89442438             mov dword ptr [esp + 0x38], eax
// 008c115a  8944243c             mov dword ptr [esp + 0x3c], eax
// 008c115e  89442440             mov dword ptr [esp + 0x40], eax
// 008c1162  c744241c28000000     mov dword ptr [esp + 0x1c], 0x28
// 008c116a  8944242c             mov dword ptr [esp + 0x2c], eax
// 008c116e  89442448             mov dword ptr [esp + 0x48], eax
// 008c1172  ff1560b19800         call dword ptr [0x98b160]
// 008c1178  50                   push eax
// 008c1179  8bce                 mov ecx, esi
// 008c117b  e8aa2cf3ff           call 0x7f3e2a
// 008c1180  5e                   pop esi
// 008c1181  83c428               add esp, 0x28
// 008c1184  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?CreateEditorBitmap@CAlphaBitmap@CXTPImageEditorPicture@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

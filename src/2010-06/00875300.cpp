// roc 2010-06 00875300  unit: CXTPShadowsManager::CShadowWnd  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00875300
//
// 00875300  83ec28               sub esp, 0x28
// 00875303  8b542430             mov edx, dword ptr [esp + 0x30]
// 00875307  33c0                 xor eax, eax
// 00875309  56                   push esi
// 0087530a  8bf1                 mov esi, ecx
// 0087530c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00875310  50                   push eax
// 00875311  8944240c             mov dword ptr [esp + 0xc], eax
// 00875315  894c240c             mov dword ptr [esp + 0xc], ecx
// 00875319  89442414             mov dword ptr [esp + 0x14], eax
// 0087531d  b901000000           mov ecx, 1
// 00875322  50                   push eax
// 00875323  89442414             mov dword ptr [esp + 0x14], eax
// 00875327  89542414             mov dword ptr [esp + 0x14], edx
// 0087532b  66894c2418           mov word ptr [esp + 0x18], cx
// 00875330  8d4c2438             lea ecx, [esp + 0x38]
// 00875334  51                   push ecx
// 00875335  ba20000000           mov edx, 0x20
// 0087533a  668954241e           mov word ptr [esp + 0x1e], dx
// 0087533f  50                   push eax
// 00875340  8d542414             lea edx, [esp + 0x14]
// 00875344  52                   push edx
// 00875345  89442418             mov dword ptr [esp + 0x18], eax
// 00875349  89442428             mov dword ptr [esp + 0x28], eax
// 0087534d  50                   push eax
// 0087534e  89442430             mov dword ptr [esp + 0x30], eax
// 00875352  89442434             mov dword ptr [esp + 0x34], eax
// 00875356  89442438             mov dword ptr [esp + 0x38], eax
// 0087535a  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087535e  89442440             mov dword ptr [esp + 0x40], eax
// 00875362  c744241c28000000     mov dword ptr [esp + 0x1c], 0x28
// 0087536a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0087536e  89442448             mov dword ptr [esp + 0x48], eax
// 00875372  ff15b0a09e00         call dword ptr [0x9ea0b0]
// 00875378  50                   push eax
// 00875379  8bce                 mov ecx, esi
// 0087537b  e8ea2bf3ff           call 0x7a7f6a
// 00875380  5e                   pop esi
// 00875381  83c428               add esp, 0x28
// 00875384  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?CreateEditorBitmap@CAlphaBitmap@CXTPImageEditorPicture@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

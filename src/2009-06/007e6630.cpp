// roc 2009-06 007e6630  unit: CXTPShadowsManager::CShadowWnd  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e6630
//
// 007e6630  83ec28               sub esp, 0x28
// 007e6633  8b542430             mov edx, dword ptr [esp + 0x30]
// 007e6637  33c0                 xor eax, eax
// 007e6639  56                   push esi
// 007e663a  8bf1                 mov esi, ecx
// 007e663c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007e6640  50                   push eax
// 007e6641  8944240c             mov dword ptr [esp + 0xc], eax
// 007e6645  894c240c             mov dword ptr [esp + 0xc], ecx
// 007e6649  89442414             mov dword ptr [esp + 0x14], eax
// 007e664d  b901000000           mov ecx, 1
// 007e6652  50                   push eax
// 007e6653  89442414             mov dword ptr [esp + 0x14], eax
// 007e6657  89542414             mov dword ptr [esp + 0x14], edx
// 007e665b  66894c2418           mov word ptr [esp + 0x18], cx
// 007e6660  8d4c2438             lea ecx, [esp + 0x38]
// 007e6664  51                   push ecx
// 007e6665  ba20000000           mov edx, 0x20
// 007e666a  668954241e           mov word ptr [esp + 0x1e], dx
// 007e666f  50                   push eax
// 007e6670  8d542414             lea edx, [esp + 0x14]
// 007e6674  52                   push edx
// 007e6675  89442418             mov dword ptr [esp + 0x18], eax
// 007e6679  89442428             mov dword ptr [esp + 0x28], eax
// 007e667d  50                   push eax
// 007e667e  89442430             mov dword ptr [esp + 0x30], eax
// 007e6682  89442434             mov dword ptr [esp + 0x34], eax
// 007e6686  89442438             mov dword ptr [esp + 0x38], eax
// 007e668a  8944243c             mov dword ptr [esp + 0x3c], eax
// 007e668e  89442440             mov dword ptr [esp + 0x40], eax
// 007e6692  c744241c28000000     mov dword ptr [esp + 0x1c], 0x28
// 007e669a  8944242c             mov dword ptr [esp + 0x2c], eax
// 007e669e  89442448             mov dword ptr [esp + 0x48], eax
// 007e66a2  ff155ce18900         call dword ptr [0x89e15c]
// 007e66a8  50                   push eax
// 007e66a9  8bce                 mov ecx, esi
// 007e66ab  e85229f3ff           call 0x719002
// 007e66b0  5e                   pop esi
// 007e66b1  83c428               add esp, 0x28
// 007e66b4  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?CreateEditorBitmap@CAlphaBitmap@CXTPImageEditorPicture@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

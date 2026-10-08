// from server: 100% by auto
// roc 2007-08 006f0c00  unit: CXTPShadowsManager::CShadowWnd  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0c00
//
// 006f0c00  83ec28               sub esp, 0x28
// 006f0c03  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f0c07  33c0                 xor eax, eax
// 006f0c09  56                   push esi
// 006f0c0a  50                   push eax
// 006f0c0b  8bf1                 mov esi, ecx
// 006f0c0d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f0c11  50                   push eax
// 006f0c12  89442410             mov dword ptr [esp + 0x10], eax
// 006f0c16  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f0c1a  8d4c2438             lea ecx, [esp + 0x38]
// 006f0c1e  51                   push ecx
// 006f0c1f  89442418             mov dword ptr [esp + 0x18], eax
// 006f0c23  89542418             mov dword ptr [esp + 0x18], edx
// 006f0c27  50                   push eax
// 006f0c28  8d542414             lea edx, [esp + 0x14]
// 006f0c2c  52                   push edx
// 006f0c2d  89442424             mov dword ptr [esp + 0x24], eax
// 006f0c31  89442418             mov dword ptr [esp + 0x18], eax
// 006f0c35  89442428             mov dword ptr [esp + 0x28], eax
// 006f0c39  50                   push eax
// 006f0c3a  89442430             mov dword ptr [esp + 0x30], eax
// 006f0c3e  89442434             mov dword ptr [esp + 0x34], eax
// 006f0c42  89442438             mov dword ptr [esp + 0x38], eax
// 006f0c46  8944243c             mov dword ptr [esp + 0x3c], eax
// 006f0c4a  89442440             mov dword ptr [esp + 0x40], eax
// 006f0c4e  c744241c28000000     mov dword ptr [esp + 0x1c], 0x28
// 006f0c56  66c74424280100       mov word ptr [esp + 0x28], 1
// 006f0c5d  66c744242a2000       mov word ptr [esp + 0x2a], 0x20
// 006f0c64  8944242c             mov dword ptr [esp + 0x2c], eax
// 006f0c68  89442448             mov dword ptr [esp + 0x48], eax
// 006f0c6c  ff15c4d07700         call dword ptr [0x77d0c4]
// 006f0c72  50                   push eax
// 006f0c73  8bce                 mov ecx, esi
// 006f0c75  e8bef5f3ff           call 0x630238
// 006f0c7a  5e                   pop esi
// 006f0c7b  83c428               add esp, 0x28
// 006f0c7e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?CreateEditorBitmap@CAlphaBitmap@CXTPImageEditorPicture@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp

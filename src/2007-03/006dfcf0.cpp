// roc 2007-03 006dfcf0  unit: seg_006d0000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dfcf0
//
// 006dfcf0  83ec28               sub esp, 0x28
// 006dfcf3  8b542430             mov edx, dword ptr [esp + 0x30]
// 006dfcf7  33c0                 xor eax, eax
// 006dfcf9  56                   push esi
// 006dfcfa  50                   push eax
// 006dfcfb  8bf1                 mov esi, ecx
// 006dfcfd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006dfd01  50                   push eax
// 006dfd02  89442410             mov dword ptr [esp + 0x10], eax
// 006dfd06  894c2410             mov dword ptr [esp + 0x10], ecx
// 006dfd0a  8d4c2438             lea ecx, [esp + 0x38]
// 006dfd0e  51                   push ecx
// 006dfd0f  89442418             mov dword ptr [esp + 0x18], eax
// 006dfd13  89542418             mov dword ptr [esp + 0x18], edx
// 006dfd17  50                   push eax
// 006dfd18  8d542414             lea edx, [esp + 0x14]
// 006dfd1c  52                   push edx
// 006dfd1d  89442424             mov dword ptr [esp + 0x24], eax
// 006dfd21  89442418             mov dword ptr [esp + 0x18], eax
// 006dfd25  89442428             mov dword ptr [esp + 0x28], eax
// 006dfd29  50                   push eax
// 006dfd2a  89442430             mov dword ptr [esp + 0x30], eax
// 006dfd2e  89442434             mov dword ptr [esp + 0x34], eax
// 006dfd32  89442438             mov dword ptr [esp + 0x38], eax
// 006dfd36  8944243c             mov dword ptr [esp + 0x3c], eax
// 006dfd3a  89442440             mov dword ptr [esp + 0x40], eax
// 006dfd3e  c744241c28000000     mov dword ptr [esp + 0x1c], 0x28
// 006dfd46  66c74424280100       mov word ptr [esp + 0x28], 1
// 006dfd4d  66c744242a2000       mov word ptr [esp + 0x2a], 0x20
// 006dfd54  8944242c             mov dword ptr [esp + 0x2c], eax
// 006dfd58  89442448             mov dword ptr [esp + 0x48], eax
// 006dfd5c  ff15c8d07700         call dword ptr [0x77d0c8]
// 006dfd62  50                   push eax
// 006dfd63  8bce                 mov ecx, esi
// 006dfd65  e85ce9f3ff           call 0x61e6c6
// 006dfd6a  5e                   pop esi
// 006dfd6b  83c428               add esp, 0x28
// 006dfd6e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?CreateEditorBitmap@CAlphaBitmap@CXTPImageEditorPicture@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp

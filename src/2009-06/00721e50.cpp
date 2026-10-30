// roc 2009-06 00721e50  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721e50
//
// 00721e50  83ec10               sub esp, 0x10
// 00721e53  56                   push esi
// 00721e54  8bf1                 mov esi, ecx
// 00721e56  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00721e5c  85c9                 test ecx, ecx
// 00721e5e  7509                 jne 0x721e69
// 00721e60  33c0                 xor eax, eax
// 00721e62  5e                   pop esi
// 00721e63  83c410               add esp, 0x10
// 00721e66  c20400               ret 4
// 00721e69  8b542418             mov edx, dword ptr [esp + 0x18]
// 00721e6d  8d442404             lea eax, [esp + 4]
// 00721e71  50                   push eax
// 00721e72  52                   push edx
// 00721e73  e818e10000           call 0x72ff90
// 00721e78  50                   push eax
// 00721e79  8bce                 mov ecx, esi
// 00721e7b  e8b0e2ffff           call 0x720130
// 00721e80  5e                   pop esi
// 00721e81  83c410               add esp, 0x10
// 00721e84  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

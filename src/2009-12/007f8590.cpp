// roc 2009-12 007f8590  unit: CXTPControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8590
//
// 007f8590  83ec10               sub esp, 0x10
// 007f8593  56                   push esi
// 007f8594  8bf1                 mov esi, ecx
// 007f8596  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f859c  85c9                 test ecx, ecx
// 007f859e  7509                 jne 0x7f85a9
// 007f85a0  33c0                 xor eax, eax
// 007f85a2  5e                   pop esi
// 007f85a3  83c410               add esp, 0x10
// 007f85a6  c20400               ret 4
// 007f85a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f85ad  8d442404             lea eax, [esp + 4]
// 007f85b1  50                   push eax
// 007f85b2  52                   push edx
// 007f85b3  e838eb0000           call 0x8070f0
// 007f85b8  50                   push eax
// 007f85b9  8bce                 mov ecx, esi
// 007f85bb  e880e2ffff           call 0x7f6840
// 007f85c0  5e                   pop esi
// 007f85c1  83c410               add esp, 0x10
// 007f85c4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp

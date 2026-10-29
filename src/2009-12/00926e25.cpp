// roc 2009-12 00926e25  unit: CSpinButtonCtrl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00926e25
//
// 00926e25  8bff                 mov edi, edi
// 00926e27  55                   push ebp
// 00926e28  8bec                 mov ebp, esp
// 00926e2a  e8efccecff           call 0x7f3b1e
// 00926e2f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00926e32  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00926e35  884814               mov byte ptr [eax + 0x14], cl
// 00926e38  895044               mov dword ptr [eax + 0x44], edx
// 00926e3b  85c9                 test ecx, ecx
// 00926e3d  7509                 jne 0x926e48
// 00926e3f  6afd                 push -3
// 00926e41  ff1508ba9800         call dword ptr [0x98ba08]
// 00926e47  59                   pop ecx
// 00926e48  33c0                 xor eax, eax
// 00926e4a  40                   inc eax
// 00926e4b  5d                   pop ebp
// 00926e4c  c20800               ret 8
// copied from an identical function in another client (function ?AfxInitialize@@YGHHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj
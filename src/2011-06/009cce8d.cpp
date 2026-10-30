// roc 2011-06 009cce8d  unit: CSpinButtonCtrl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009cce8d
//
// 009cce8d  8bff                 mov edi, edi
// 009cce8f  55                   push ebp
// 009cce90  8bec                 mov ebp, esp
// 009cce92  e885d4e3ff           call 0x80a31c
// 009cce97  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009cce9a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 009cce9d  884814               mov byte ptr [eax + 0x14], cl
// 009ccea0  895044               mov dword ptr [eax + 0x44], edx
// 009ccea3  85c9                 test ecx, ecx
// 009ccea5  7509                 jne 0x9cceb0
// 009ccea7  6afd                 push -3
// 009ccea9  ff157407a400         call dword ptr [0xa40774]
// 009cceaf  59                   pop ecx
// 009cceb0  33c0                 xor eax, eax
// 009cceb2  40                   inc eax
// 009cceb3  5d                   pop ebp
// 009cceb4  c20800               ret 8
// copied from an identical function in another client (function ?AfxInitialize@@YGHHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj
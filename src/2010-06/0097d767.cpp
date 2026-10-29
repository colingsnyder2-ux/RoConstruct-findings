// roc 2010-06 0097d767  unit: CSpinButtonCtrl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0097d767
//
// 0097d767  8bff                 mov edi, edi
// 0097d769  55                   push ebp
// 0097d76a  8bec                 mov ebp, esp
// 0097d76c  e8eda4e2ff           call 0x7a7c5e
// 0097d771  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0097d774  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0097d777  884814               mov byte ptr [eax + 0x14], cl
// 0097d77a  895044               mov dword ptr [eax + 0x44], edx
// 0097d77d  85c9                 test ecx, ecx
// 0097d77f  7509                 jne 0x97d78a
// 0097d781  6afd                 push -3
// 0097d783  ff1528a99e00         call dword ptr [0x9ea928]
// 0097d789  59                   pop ecx
// 0097d78a  33c0                 xor eax, eax
// 0097d78c  40                   inc eax
// 0097d78d  5d                   pop ebp
// 0097d78e  c20800               ret 8
// copied from an identical function in another client (function ?AfxInitialize@@YGHHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj
// roc 2009-06 0084c8b9  unit: CSpinButtonCtrl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084c8b9
//
// 0084c8b9  8bff                 mov edi, edi
// 0084c8bb  55                   push ebp
// 0084c8bc  8bec                 mov ebp, esp
// 0084c8be  e833c4ecff           call 0x718cf6
// 0084c8c3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0084c8c6  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0084c8c9  884814               mov byte ptr [eax + 0x14], cl
// 0084c8cc  895044               mov dword ptr [eax + 0x44], edx
// 0084c8cf  85c9                 test ecx, ecx
// 0084c8d1  7509                 jne 0x84c8dc
// 0084c8d3  6afd                 push -3
// 0084c8d5  ff1510e78900         call dword ptr [0x89e710]
// 0084c8db  59                   pop ecx
// 0084c8dc  33c0                 xor eax, eax
// 0084c8de  40                   inc eax
// 0084c8df  5d                   pop ebp
// 0084c8e0  c20800               ret 8
// copied from an identical function in another client (function ?AfxInitialize@@YGHHK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm mfcs90.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/mfc/ansireleasedllstatic/objr/i386/appmodul.obj
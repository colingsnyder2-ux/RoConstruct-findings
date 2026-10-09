// roc 2007-03 00701a80  unit: seg_00700000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00701a80
//
// 00701a80  56                   push esi
// 00701a81  8bf1                 mov esi, ecx
// 00701a83  8b4e04               mov ecx, dword ptr [esi + 4]
// 00701a86  85c9                 test ecx, ecx
// 00701a88  c706b8d17d00         mov dword ptr [esi], 0x7dd1b8
// 00701a8e  740f                 je 0x701a9f
// 00701a90  8b01                 mov eax, dword ptr [ecx]
// 00701a92  8b10                 mov edx, dword ptr [eax]
// 00701a94  6a01                 push 1
// 00701a96  ffd2                 call edx
// 00701a98  c7460400000000       mov dword ptr [esi + 4], 0
// 00701a9f  5e                   pop esi
// 00701aa0  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerModuleList.cpp (function ??1CXTPSkinManagerModuleList@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerModuleList.cpp

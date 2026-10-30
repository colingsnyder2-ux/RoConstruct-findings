// roc 2012-06 00a1ef90  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1ef90
//
// 00a1ef90  83ec08               sub esp, 8
// 00a1ef93  56                   push esi
// 00a1ef94  8bf1                 mov esi, ecx
// 00a1ef96  e8553df7ff           call 0x992cf0
// 00a1ef9b  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 00a1efa2  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00a1efa8  7527                 jne 0xa1efd1
// 00a1efaa  83790400             cmp dword ptr [ecx + 4], 0
// 00a1efae  7521                 jne 0xa1efd1
// 00a1efb0  8b4074               mov eax, dword ptr [eax + 0x74]
// 00a1efb3  83c064               add eax, 0x64
// 00a1efb6  833800               cmp dword ptr [eax], 0
// 00a1efb9  7514                 jne 0xa1efcf
// 00a1efbb  83780400             cmp dword ptr [eax + 4], 0
// 00a1efbf  750e                 jne 0xa1efcf
// 00a1efc1  6a00                 push 0
// 00a1efc3  8d442408             lea eax, [esp + 8]
// 00a1efc7  50                   push eax
// 00a1efc8  8bce                 mov ecx, esi
// 00a1efca  e8d108f8ff           call 0x99f8a0
// 00a1efcf  8bc8                 mov ecx, eax
// 00a1efd1  8b11                 mov edx, dword ptr [ecx]
// 00a1efd3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a1efd7  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a1efda  8910                 mov dword ptr [eax], edx
// 00a1efdc  894804               mov dword ptr [eax + 4], ecx
// 00a1efdf  5e                   pop esi
// 00a1efe0  83c408               add esp, 8
// 00a1efe3  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetIconSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

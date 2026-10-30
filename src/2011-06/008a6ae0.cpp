// roc 2011-06 008a6ae0  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6ae0
//
// 008a6ae0  83ec08               sub esp, 8
// 008a6ae3  56                   push esi
// 008a6ae4  8bf1                 mov esi, ecx
// 008a6ae6  e8a53ff7ff           call 0x81aa90
// 008a6aeb  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 008a6af2  8d8e0c010000         lea ecx, [esi + 0x10c]
// 008a6af8  7527                 jne 0x8a6b21
// 008a6afa  83790400             cmp dword ptr [ecx + 4], 0
// 008a6afe  7521                 jne 0x8a6b21
// 008a6b00  8b4074               mov eax, dword ptr [eax + 0x74]
// 008a6b03  83c064               add eax, 0x64
// 008a6b06  833800               cmp dword ptr [eax], 0
// 008a6b09  7514                 jne 0x8a6b1f
// 008a6b0b  83780400             cmp dword ptr [eax + 4], 0
// 008a6b0f  750e                 jne 0x8a6b1f
// 008a6b11  6a00                 push 0
// 008a6b13  8d442408             lea eax, [esp + 8]
// 008a6b17  50                   push eax
// 008a6b18  8bce                 mov ecx, esi
// 008a6b1a  e86107f8ff           call 0x827280
// 008a6b1f  8bc8                 mov ecx, eax
// 008a6b21  8b11                 mov edx, dword ptr [ecx]
// 008a6b23  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a6b27  8b4904               mov ecx, dword ptr [ecx + 4]
// 008a6b2a  8910                 mov dword ptr [eax], edx
// 008a6b2c  894804               mov dword ptr [eax + 4], ecx
// 008a6b2f  5e                   pop esi
// 008a6b30  83c408               add esp, 8
// 008a6b33  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetIconSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

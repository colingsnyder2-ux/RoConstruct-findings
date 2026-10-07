// roc 2008-06 00722c60  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722c60
//
// 00722c60  83ec08               sub esp, 8
// 00722c63  56                   push esi
// 00722c64  8bf1                 mov esi, ecx
// 00722c66  e8a521f9ff           call 0x6b4e10
// 00722c6b  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 00722c72  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00722c78  7527                 jne 0x722ca1
// 00722c7a  83790400             cmp dword ptr [ecx + 4], 0
// 00722c7e  7521                 jne 0x722ca1
// 00722c80  8b4074               mov eax, dword ptr [eax + 0x74]
// 00722c83  83c064               add eax, 0x64
// 00722c86  833800               cmp dword ptr [eax], 0
// 00722c89  7514                 jne 0x722c9f
// 00722c8b  83780400             cmp dword ptr [eax + 4], 0
// 00722c8f  750e                 jne 0x722c9f
// 00722c91  6a00                 push 0
// 00722c93  8d442408             lea eax, [esp + 8]
// 00722c97  50                   push eax
// 00722c98  8bce                 mov ecx, esi
// 00722c9a  e8c1f3f9ff           call 0x6c2060
// 00722c9f  8bc8                 mov ecx, eax
// 00722ca1  8b11                 mov edx, dword ptr [ecx]
// 00722ca3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00722ca7  8b4904               mov ecx, dword ptr [ecx + 4]
// 00722caa  8910                 mov dword ptr [eax], edx
// 00722cac  894804               mov dword ptr [eax + 4], ecx
// 00722caf  5e                   pop esi
// 00722cb0  83c408               add esp, 8
// 00722cb3  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetIconSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

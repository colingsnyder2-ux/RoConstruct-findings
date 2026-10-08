// roc 2009-06 007b83e0  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b83e0
//
// 007b83e0  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 007b83e7  7509                 jne 0x7b83f2
// 007b83e9  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 007b83f0  7418                 je 0x7b840a
// 007b83f2  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 007b83f8  8b442404             mov eax, dword ptr [esp + 4]
// 007b83fc  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 007b8402  8910                 mov dword ptr [eax], edx
// 007b8404  894804               mov dword ptr [eax + 4], ecx
// 007b8407  c20400               ret 4
// 007b840a  e84150f7ff           call 0x72d450
// 007b840f  8bc8                 mov ecx, eax
// 007b8411  e8eaa4f6ff           call 0x722900
// 007b8416  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007b841a  8901                 mov dword ptr [ecx], eax
// 007b841c  894104               mov dword ptr [ecx + 4], eax
// 007b841f  8bc1                 mov eax, ecx
// 007b8421  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetButtonSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

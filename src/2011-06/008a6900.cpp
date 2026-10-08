// roc 2011-06 008a6900  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6900
//
// 008a6900  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 008a6907  7509                 jne 0x8a6912
// 008a6909  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 008a6910  7418                 je 0x8a692a
// 008a6912  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 008a6918  8b442404             mov eax, dword ptr [esp + 4]
// 008a691c  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 008a6922  8910                 mov dword ptr [eax], edx
// 008a6924  894804               mov dword ptr [eax + 4], ecx
// 008a6927  c20400               ret 4
// 008a692a  e82142f7ff           call 0x81ab50
// 008a692f  8bc8                 mov ecx, eax
// 008a6931  e8fa8df6ff           call 0x80f730
// 008a6936  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a693a  8901                 mov dword ptr [ecx], eax
// 008a693c  894104               mov dword ptr [ecx + 4], eax
// 008a693f  8bc1                 mov eax, ecx
// 008a6941  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetButtonSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

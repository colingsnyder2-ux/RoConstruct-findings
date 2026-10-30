// roc 2010-06 008497c0  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008497c0
//
// 008497c0  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 008497c7  7509                 jne 0x8497d2
// 008497c9  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 008497d0  7418                 je 0x8497ea
// 008497d2  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 008497d8  8b442404             mov eax, dword ptr [esp + 4]
// 008497dc  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 008497e2  8910                 mov dword ptr [eax], edx
// 008497e4  894804               mov dword ptr [eax + 4], ecx
// 008497e7  c20400               ret 4
// 008497ea  e8a1eef6ff           call 0x7b8690
// 008497ef  8bc8                 mov ecx, eax
// 008497f1  e89a3af6ff           call 0x7ad290
// 008497f6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008497fa  8901                 mov dword ptr [ecx], eax
// 008497fc  894104               mov dword ptr [ecx + 4], eax
// 008497ff  8bc1                 mov eax, ecx
// 00849801  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetButtonSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

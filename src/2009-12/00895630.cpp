// roc 2009-12 00895630  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895630
//
// 00895630  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 00895637  7509                 jne 0x895642
// 00895639  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 00895640  7418                 je 0x89565a
// 00895642  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 00895648  8b442404             mov eax, dword ptr [esp + 4]
// 0089564c  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 00895652  8910                 mov dword ptr [eax], edx
// 00895654  894804               mov dword ptr [eax + 4], ecx
// 00895657  c20400               ret 4
// 0089565a  e831eff6ff           call 0x804590
// 0089565f  8bc8                 mov ecx, eax
// 00895661  e85a81f6ff           call 0x7fd7c0
// 00895666  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0089566a  8901                 mov dword ptr [ecx], eax
// 0089566c  894104               mov dword ptr [ecx + 4], eax
// 0089566f  8bc1                 mov eax, ecx
// 00895671  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetButtonSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp

// roc 2012-06 00a4b670  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4b670
//
// 00a4b670  8b442404             mov eax, dword ptr [esp + 4]
// 00a4b674  39411c               cmp dword ptr [ecx + 0x1c], eax
// 00a4b677  740a                 je 0xa4b683
// 00a4b679  89411c               mov dword ptr [ecx + 0x1c], eax
// 00a4b67c  8b01                 mov eax, dword ptr [ecx]
// 00a4b67e  8b5004               mov edx, dword ptr [eax + 4]
// 00a4b681  ffd2                 call edx
// 00a4b683  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetActive@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp

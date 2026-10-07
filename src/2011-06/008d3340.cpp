// roc 2011-06 008d3340  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3340
//
// 008d3340  8b442404             mov eax, dword ptr [esp + 4]
// 008d3344  39411c               cmp dword ptr [ecx + 0x1c], eax
// 008d3347  740a                 je 0x8d3353
// 008d3349  89411c               mov dword ptr [ecx + 0x1c], eax
// 008d334c  8b01                 mov eax, dword ptr [ecx]
// 008d334e  8b5004               mov edx, dword ptr [eax + 4]
// 008d3351  ffd2                 call edx
// 008d3353  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?SetActive@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp

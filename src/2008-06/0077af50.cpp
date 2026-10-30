// from server: 100% by auto
// roc 2008-06 0077af50  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077af50
//
// 0077af50  8b442404             mov eax, dword ptr [esp + 4]
// 0077af54  39411c               cmp dword ptr [ecx + 0x1c], eax
// 0077af57  740a                 je 0x77af63
// 0077af59  89411c               mov dword ptr [ecx + 0x1c], eax
// 0077af5c  8b01                 mov eax, dword ptr [ecx]
// 0077af5e  8b5004               mov edx, dword ptr [eax + 4]
// 0077af61  ffd2                 call edx
// 0077af63  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetActive@CXTPTabManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

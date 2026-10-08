// roc 2012-06 009f1650  unit: CXTPPropertyGridItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1650
//
// 009f1650  8b442404             mov eax, dword ptr [esp + 4]
// 009f1654  3b81fc000000         cmp eax, dword ptr [ecx + 0xfc]
// 009f165a  7411                 je 0x9f166d
// 009f165c  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 009f1662  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 009f1668  e823fcffff           call 0x9f1290
// 009f166d  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetHidden@CXTPPropertyGridItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

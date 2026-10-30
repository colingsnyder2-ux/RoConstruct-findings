// roc 2010-06 008188b0  unit: CXTPPropertyGridItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008188b0
//
// 008188b0  8b442404             mov eax, dword ptr [esp + 4]
// 008188b4  3b81fc000000         cmp eax, dword ptr [ecx + 0xfc]
// 008188ba  7411                 je 0x8188cd
// 008188bc  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 008188c2  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 008188c8  e8735e0000           call 0x81e740
// 008188cd  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetHidden@CXTPPropertyGridItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

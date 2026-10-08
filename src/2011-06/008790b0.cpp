// roc 2011-06 008790b0  unit: CXTPPropertyGridItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008790b0
//
// 008790b0  8b442404             mov eax, dword ptr [esp + 4]
// 008790b4  3b81fc000000         cmp eax, dword ptr [ecx + 0xfc]
// 008790ba  7411                 je 0x8790cd
// 008790bc  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 008790c2  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 008790c8  e843fcffff           call 0x878d10
// 008790cd  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetHidden@CXTPPropertyGridItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

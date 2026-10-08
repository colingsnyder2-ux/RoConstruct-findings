// roc 2009-06 007898d0  unit: CXTPPropertyGridItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007898d0
//
// 007898d0  8b442404             mov eax, dword ptr [esp + 4]
// 007898d4  3b81fc000000         cmp eax, dword ptr [ecx + 0xfc]
// 007898da  7411                 je 0x7898ed
// 007898dc  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 007898e2  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 007898e8  e8335e0000           call 0x78f720
// 007898ed  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetHidden@CXTPPropertyGridItem@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

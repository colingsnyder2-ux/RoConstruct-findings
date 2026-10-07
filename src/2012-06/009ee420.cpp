// roc 2012-06 009ee420  unit: CXTPPropertyGridView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee420
//
// 009ee420  8d442404             lea eax, [esp + 4]
// 009ee424  50                   push eax
// 009ee425  e8c6b3fdff           call 0x9c97f0
// 009ee42a  85c0                 test eax, eax
// 009ee42c  740d                 je 0x9ee43b
// 009ee42e  83f8ff               cmp eax, -1
// 009ee431  7408                 je 0x9ee43b
// 009ee433  b857000780           mov eax, 0x80070057
// 009ee438  c21400               ret 0x14
// 009ee43b  68f48bc100           push 0xc18bf4
// 009ee440  ff15482bb200         call dword ptr [0xb22b48]
// 009ee446  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009ee44a  8901                 mov dword ptr [ecx], eax
// 009ee44c  33c0                 xor eax, eax
// 009ee44e  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleName@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp

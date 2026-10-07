// roc 2007-08 0069aba0  unit: CXTPPropertyGridView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069aba0
//
// 0069aba0  8d442404             lea eax, [esp + 4]
// 0069aba4  50                   push eax
// 0069aba5  e82668fdff           call 0x6713d0
// 0069abaa  85c0                 test eax, eax
// 0069abac  740d                 je 0x69abbb
// 0069abae  83f8ff               cmp eax, -1
// 0069abb1  7408                 je 0x69abbb
// 0069abb3  b857000780           mov eax, 0x80070057
// 0069abb8  c21400               ret 0x14
// 0069abbb  68d01b7d00           push 0x7d1bd0
// 0069abc0  ff15f4e97700         call dword ptr [0x77e9f4]
// 0069abc6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069abca  8901                 mov dword ptr [ecx], eax
// 0069abcc  33c0                 xor eax, eax
// 0069abce  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleName@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp

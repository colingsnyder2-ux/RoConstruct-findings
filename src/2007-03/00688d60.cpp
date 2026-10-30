// roc 2007-03 00688d60  unit: seg_00680000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688d60
//
// 00688d60  8b542404             mov edx, dword ptr [esp + 4]
// 00688d64  8d41ac               lea eax, [ecx - 0x54]
// 00688d67  85c0                 test eax, eax
// 00688d69  c70200000000         mov dword ptr [edx], 0
// 00688d6f  742e                 je 0x688d9f
// 00688d71  83782000             cmp dword ptr [eax + 0x20], 0
// 00688d75  7428                 je 0x688d9f
// 00688d77  85c0                 test eax, eax
// 00688d79  7510                 jne 0x688d8b
// 00688d7b  52                   push edx
// 00688d7c  6830257c00           push 0x7c2530
// 00688d81  50                   push eax
// 00688d82  50                   push eax
// 00688d83  e858dcffff           call 0x6869e0
// 00688d88  c20400               ret 4
// 00688d8b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00688d8e  52                   push edx
// 00688d8f  6830257c00           push 0x7c2530
// 00688d94  6a00                 push 0
// 00688d96  50                   push eax
// 00688d97  e844dcffff           call 0x6869e0
// 00688d9c  c20400               ret 4
// 00688d9f  b805400080           mov eax, 0x80004005
// 00688da4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleParent@CXTPPropertyGridView@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp

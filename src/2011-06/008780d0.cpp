// from server: 100% by auto
// roc 2011-06 008780d0  unit: CXTPPropertyGridView  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008780d0
//
// 008780d0  8b542404             mov edx, dword ptr [esp + 4]
// 008780d4  8d41ac               lea eax, [ecx - 0x54]
// 008780d7  c70200000000         mov dword ptr [edx], 0
// 008780dd  85c0                 test eax, eax
// 008780df  742e                 je 0x87810f
// 008780e1  83782000             cmp dword ptr [eax + 0x20], 0
// 008780e5  7428                 je 0x87810f
// 008780e7  85c0                 test eax, eax
// 008780e9  7510                 jne 0x8780fb
// 008780eb  52                   push edx
// 008780ec  68a091af00           push 0xaf91a0
// 008780f1  50                   push eax
// 008780f2  50                   push eax
// 008780f3  e8089dfdff           call 0x851e00
// 008780f8  c20400               ret 4
// 008780fb  8b4020               mov eax, dword ptr [eax + 0x20]
// 008780fe  52                   push edx
// 008780ff  68a091af00           push 0xaf91a0
// 00878104  6a00                 push 0
// 00878106  50                   push eax
// 00878107  e8f49cfdff           call 0x851e00
// 0087810c  c20400               ret 4
// 0087810f  b805400080           mov eax, 0x80004005
// 00878114  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleParent@CXTPPropertyGridView@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp

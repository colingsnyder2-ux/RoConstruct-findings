// from server: 100% by auto
// roc 2012-06 009f0650  unit: CXTPPropertyGridView  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0650
//
// 009f0650  8b542404             mov edx, dword ptr [esp + 4]
// 009f0654  8d41ac               lea eax, [ecx - 0x54]
// 009f0657  c70200000000         mov dword ptr [edx], 0
// 009f065d  85c0                 test eax, eax
// 009f065f  742e                 je 0x9f068f
// 009f0661  83782000             cmp dword ptr [eax + 0x20], 0
// 009f0665  7428                 je 0x9f068f
// 009f0667  85c0                 test eax, eax
// 009f0669  7510                 jne 0x9f067b
// 009f066b  52                   push edx
// 009f066c  68b4fcc300           push 0xc3fcb4
// 009f0671  50                   push eax
// 009f0672  50                   push eax
// 009f0673  e8489cfdff           call 0x9ca2c0
// 009f0678  c20400               ret 4
// 009f067b  8b4020               mov eax, dword ptr [eax + 0x20]
// 009f067e  52                   push edx
// 009f067f  68b4fcc300           push 0xc3fcb4
// 009f0684  6a00                 push 0
// 009f0686  50                   push eax
// 009f0687  e8349cfdff           call 0x9ca2c0
// 009f068c  c20400               ret 4
// 009f068f  b805400080           mov eax, 0x80004005
// 009f0694  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleParent@CXTPPropertyGridView@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp

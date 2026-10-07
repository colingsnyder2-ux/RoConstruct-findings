// roc 2012-06 009f7d60  unit: CXTCaption  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7d60
//
// 009f7d60  56                   push esi
// 009f7d61  8bf1                 mov esi, ecx
// 009f7d63  803e00               cmp byte ptr [esi], 0
// 009f7d66  740e                 je 0x9f7d76
// 009f7d68  e865a6f8ff           call 0x9823d2
// 009f7d6d  8b4e04               mov ecx, dword ptr [esi + 4]
// 009f7d70  89480c               mov dword ptr [eax + 0xc], ecx
// 009f7d73  c60600               mov byte ptr [esi], 0
// 009f7d76  5e                   pop esi
// 009f7d77  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?Undo@CManageState@CXTPResourceManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp

// from server: 100% by tester
// roc 2008-06 006bc7b0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bc7b0
//
// 006bc7b0  0fb7442404           movzx eax, word ptr [esp + 4]
// 006bc7b5  50                   push eax
// 006bc7b6  6a02                 push 2
// 006bc7b8  50                   push eax
// 006bc7b9  e86e47feff           call 0x6a0f2c
// 006bc7be  50                   push eax
// 006bc7bf  e82ce6ffff           call 0x6badf0
// 006bc7c4  83c408               add esp, 8
// 006bc7c7  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPImageManager.cpp (function ?LoadAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPImageManager.cpp

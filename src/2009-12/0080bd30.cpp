// roc 2009-12 0080bd30  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080bd30
//
// 0080bd30  0fb7442404           movzx eax, word ptr [esp + 4]
// 0080bd35  50                   push eax
// 0080bd36  6a02                 push 2
// 0080bd38  50                   push eax
// 0080bd39  e8a084feff           call 0x7f41de
// 0080bd3e  50                   push eax
// 0080bd3f  e88ce6ffff           call 0x80a3d0
// 0080bd44  83c408               add esp, 8
// 0080bd47  c3                   ret 
// copied from an identical function in another client (function ?IsAlphaBitmapResource@CXTPImageManager@@SAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
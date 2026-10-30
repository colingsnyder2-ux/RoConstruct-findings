// roc 2009-12 00860400  unit: CXTPToolTipContext::CHTMLToolTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860400
//
// 00860400  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00860403  e888a3ffff           call 0x85a790
// 00860408  83f8ff               cmp eax, -1
// 0086040b  7508                 jne 0x860415
// 0086040d  6a00                 push 0
// 0086040f  ff15dccb9800         call dword ptr [0x98cbdc]
// 00860415  c3                   ret 
// copied from an identical function in another client (function ?GetMaxTipWidth@CXTPToolTipContextToolTip@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp
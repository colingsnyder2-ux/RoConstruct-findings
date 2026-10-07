// roc 2012-06 00a31780  unit: CXTPDockingPaneBase  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31780
//
// 00a31780  833900               cmp dword ptr [ecx], 0
// 00a31783  7518                 jne 0xa3179d
// 00a31785  83790800             cmp dword ptr [ecx + 8], 0
// 00a31789  7512                 jne 0xa3179d
// 00a3178b  83790400             cmp dword ptr [ecx + 4], 0
// 00a3178f  750c                 jne 0xa3179d
// 00a31791  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00a31795  7506                 jne 0xa3179d
// 00a31797  b801000000           mov eax, 1
// 00a3179c  c3                   ret 
// 00a3179d  33c0                 xor eax, eax
// 00a3179f  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?IsRectNull@CRect@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp

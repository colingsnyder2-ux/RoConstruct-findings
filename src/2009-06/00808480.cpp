// roc 2009-06 00808480  unit: CXTShadowHook  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808480
//
// 00808480  e8ebffffff           call 0x808470
// 00808485  85c0                 test eax, eax
// 00808487  7403                 je 0x80848c
// 00808489  33c0                 xor eax, eax
// 0080848b  c3                   ret 
// 0080848c  e84f10f8ff           call 0x7894e0
// 00808491  33c9                 xor ecx, ecx
// 00808493  398844010000         cmp dword ptr [eax + 0x144], ecx
// 00808499  0f94c1               sete cl
// 0080849c  8bc1                 mov eax, ecx
// 0080849e  c3                   ret 
// copied from an identical function in another client (function ?PseudoShadow@CXTShadowsManager@@AAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp
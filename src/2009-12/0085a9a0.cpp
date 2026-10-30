// roc 2009-12 0085a9a0  unit: CXTPStatusBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a9a0
//
// 0085a9a0  83b9cc00000000       cmp dword ptr [ecx + 0xcc], 0
// 0085a9a7  7503                 jne 0x85a9ac
// 0085a9a9  33c0                 xor eax, eax
// 0085a9ab  c3                   ret 
// 0085a9ac  8b89c8000000         mov ecx, dword ptr [ecx + 0xc8]
// 0085a9b2  85c9                 test ecx, ecx
// 0085a9b4  7405                 je 0x85a9bb
// 0085a9b6  e9259dfbff           jmp 0x8146e0
// 0085a9bb  833da4adb90000       cmp dword ptr [0xb9ada4], 0
// 0085a9c2  750a                 jne 0x85a9ce
// 0085a9c4  6a00                 push 0
// 0085a9c6  e8953cfaff           call 0x7fe660
// 0085a9cb  83c404               add esp, 4
// 0085a9ce  a1a4adb900           mov eax, dword ptr [0xb9ada4]
// 0085a9d3  c3                   ret 
// copied from an identical function in another client (function ?GetPaintManager@CXTPStatusBar@@QBEPAVCXTPPaintManager@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
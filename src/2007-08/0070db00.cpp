// roc 2007-08 0070db00  unit: CXTColorLum  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070db00
//
// 0070db00  56                   push esi
// 0070db01  8bf1                 mov esi, ecx
// 0070db03  e83627f2ff           call 0x63023e
// 0070db08  6a00                 push 0
// 0070db0a  c70550978c0000000000 mov dword ptr [0x8c9750], 0
// 0070db14  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070db17  6a00                 push 0
// 0070db19  50                   push eax
// 0070db1a  ff15dcec7700         call dword ptr [0x77ecdc]
// 0070db20  5e                   pop esi
// 0070db21  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?OnKillFocus@CXTColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp

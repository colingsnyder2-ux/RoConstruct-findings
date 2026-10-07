// roc 2007-08 0070d1b0  unit: CXTColorWnd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d1b0
//
// 0070d1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0070d1b4  56                   push esi
// 0070d1b5  50                   push eax
// 0070d1b6  8bf1                 mov esi, ecx
// 0070d1b8  e86537f2ff           call 0x630922
// 0070d1bd  6a00                 push 0
// 0070d1bf  c70550978c0001000000 mov dword ptr [0x8c9750], 1
// 0070d1c9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0070d1cc  6a00                 push 0
// 0070d1ce  51                   push ecx
// 0070d1cf  ff15dcec7700         call dword ptr [0x77ecdc]
// 0070d1d5  5e                   pop esi
// 0070d1d6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?OnSetFocus@CXTColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp

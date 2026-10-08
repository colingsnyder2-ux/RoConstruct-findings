// from server: 100% by auto
// roc 2007-08 0069f710  unit: CXTCaption  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f710
//
// 0069f710  56                   push esi
// 0069f711  8bf1                 mov esi, ecx
// 0069f713  e8260bf9ff           call 0x63023e
// 0069f718  83becc00000000       cmp dword ptr [esi + 0xcc], 0
// 0069f71f  7413                 je 0x69f734
// 0069f721  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069f724  6805010000           push 0x105
// 0069f729  6a00                 push 0
// 0069f72b  6a00                 push 0
// 0069f72d  50                   push eax
// 0069f72e  ff151cee7700         call dword ptr [0x77ee1c]
// 0069f734  5e                   pop esi
// 0069f735  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaption.cpp (function ?OnSize@CXTCaption@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaption.cpp

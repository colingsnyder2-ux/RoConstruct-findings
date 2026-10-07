// roc 2007-08 0070f5c0  unit: CXTPRichRender::XTextHost  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f5c0
//
// 0070f5c0  56                   push esi
// 0070f5c1  8bf1                 mov esi, ecx
// 0070f5c3  837e2400             cmp dword ptr [esi + 0x24], 0
// 0070f5c7  7423                 je 0x70f5ec
// 0070f5c9  57                   push edi
// 0070f5ca  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0070f5cd  57                   push edi
// 0070f5ce  e8adbdf3ff           call 0x64b380
// 0070f5d3  83c404               add esp, 4
// 0070f5d6  57                   push edi
// 0070f5d7  894620               mov dword ptr [esi + 0x20], eax
// 0070f5da  ff15c8d07700         call dword ptr [0x77d0c8]
// 0070f5e0  33c0                 xor eax, eax
// 0070f5e2  394630               cmp dword ptr [esi + 0x30], eax
// 0070f5e5  5f                   pop edi
// 0070f5e6  0f94c0               sete al
// 0070f5e9  894630               mov dword ptr [esi + 0x30], eax
// 0070f5ec  5e                   pop esi
// 0070f5ed  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ?InvertBitmap@CXTPOffice2007Image@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp

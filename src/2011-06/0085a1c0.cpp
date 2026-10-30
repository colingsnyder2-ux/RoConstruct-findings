// roc 2011-06 0085a1c0  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a1c0
//
// 0085a1c0  56                   push esi
// 0085a1c1  57                   push edi
// 0085a1c2  8bf9                 mov edi, ecx
// 0085a1c4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0085a1ca  e8c108fcff           call 0x81aa90
// 0085a1cf  8bf0                 mov esi, eax
// 0085a1d1  8bce                 mov ecx, esi
// 0085a1d3  e88818fdff           call 0x82ba60
// 0085a1d8  85f6                 test esi, esi
// 0085a1da  740b                 je 0x85a1e7
// 0085a1dc  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0085a1df  50                   push eax
// 0085a1e0  8bce                 mov ecx, esi
// 0085a1e2  e8c906fdff           call 0x82a8b0
// 0085a1e7  5f                   pop edi
// 0085a1e8  5e                   pop esi
// 0085a1e9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?OnExecute@CXTPControlToolbar@CXTPControlToolbars@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

// from server: 100% by auto
// roc 2008-06 006f4fc0  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f4fc0
//
// 006f4fc0  56                   push esi
// 006f4fc1  57                   push edi
// 006f4fc2  8bf9                 mov edi, ecx
// 006f4fc4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 006f4fca  e841fefbff           call 0x6b4e10
// 006f4fcf  8bf0                 mov esi, eax
// 006f4fd1  8bce                 mov ecx, esi
// 006f4fd3  e878f9faff           call 0x6a4950
// 006f4fd8  85f6                 test esi, esi
// 006f4fda  740b                 je 0x6f4fe7
// 006f4fdc  8b477c               mov eax, dword ptr [edi + 0x7c]
// 006f4fdf  50                   push eax
// 006f4fe0  8bce                 mov ecx, esi
// 006f4fe2  e879e7faff           call 0x6a3760
// 006f4fe7  5f                   pop edi
// 006f4fe8  5e                   pop esi
// 006f4fe9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?OnExecute@CXTPControlToolbar@CXTPControlToolbars@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

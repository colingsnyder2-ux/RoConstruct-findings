// from server: 100% by auto
// roc 2011-06 008161b0  unit: CXTPEdit  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008161b0
//
// 008161b0  56                   push esi
// 008161b1  8bf1                 mov esi, ecx
// 008161b3  6a00                 push 0
// 008161b5  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 008161bc  e85142ffff           call 0x80a412
// 008161c1  8b442408             mov eax, dword ptr [esp + 8]
// 008161c5  50                   push eax
// 008161c6  8bce                 mov ecx, esi
// 008161c8  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 008161cf  e83e42ffff           call 0x80a412
// 008161d4  5e                   pop esi
// 008161d5  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?SetWindowTextEx@CXTPCommandBarEditCtrl@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp

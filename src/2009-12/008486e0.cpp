// roc 2009-12 008486e0  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008486e0
//
// 008486e0  56                   push esi
// 008486e1  57                   push edi
// 008486e2  8bf9                 mov edi, ecx
// 008486e4  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 008486ea  e8e1bdfbff           call 0x8044d0
// 008486ef  8bf0                 mov esi, eax
// 008486f1  8bce                 mov ecx, esi
// 008486f3  e8e8d7fcff           call 0x815ee0
// 008486f8  85f6                 test esi, esi
// 008486fa  740b                 je 0x848707
// 008486fc  8b477c               mov eax, dword ptr [edi + 0x7c]
// 008486ff  50                   push eax
// 00848700  8bce                 mov ecx, esi
// 00848702  e809c6fcff           call 0x814d10
// 00848707  5f                   pop edi
// 00848708  5e                   pop esi
// 00848709  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?OnExecute@CXTPControlToolbar@CXTPControlToolbars@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

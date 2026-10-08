// roc 2012-06 009d2590  unit: CXTPControlToolbars::CXTPControlToolbar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d2590
//
// 009d2590  56                   push esi
// 009d2591  57                   push edi
// 009d2592  8bf9                 mov edi, ecx
// 009d2594  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 009d259a  e85107fcff           call 0x992cf0
// 009d259f  8bf0                 mov esi, eax
// 009d25a1  8bce                 mov ecx, esi
// 009d25a3  e8881afdff           call 0x9a4030
// 009d25a8  85f6                 test esi, esi
// 009d25aa  740b                 je 0x9d25b7
// 009d25ac  8b477c               mov eax, dword ptr [edi + 0x7c]
// 009d25af  50                   push eax
// 009d25b0  8bce                 mov ecx, esi
// 009d25b2  e8c908fdff           call 0x9a2e80
// 009d25b7  5f                   pop edi
// 009d25b8  5e                   pop esi
// 009d25b9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?OnExecute@CXTPControlToolbar@CXTPControlToolbars@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp

// from server: 100% by tester
// roc 2008-06 00422560  unit: CSettingsExplorer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422560
//
// 00422560  0fb7442404           movzx eax, word ptr [esp + 4]
// 00422565  56                   push esi
// 00422566  50                   push eax
// 00422567  6a04                 push 4
// 00422569  50                   push eax
// 0042256a  8bf1                 mov esi, ecx
// 0042256c  e8bbe92700           call 0x6a0f2c
// 00422571  50                   push eax
// 00422572  ff15882d8000         call dword ptr [0x802d88]
// 00422578  50                   push eax
// 00422579  8bce                 mov ecx, esi
// 0042257b  e8a6e92700           call 0x6a0f26
// 00422580  5e                   pop esi
// 00422581  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?LoadMenuA@CMenu@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp

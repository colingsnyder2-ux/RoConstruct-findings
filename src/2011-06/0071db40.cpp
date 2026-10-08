// roc 2011-06 0071db40  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071db40
//
// 0071db40  53                   push ebx
// 0071db41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0071db45  56                   push esi
// 0071db46  57                   push edi
// 0071db47  8bf9                 mov edi, ecx
// 0071db49  8b37                 mov esi, dword ptr [edi]
// 0071db4b  3bde                 cmp ebx, esi
// 0071db4d  7414                 je 0x71db63
// 0071db4f  85f6                 test esi, esi
// 0071db51  7410                 je 0x71db63
// 0071db53  8bce                 mov ecx, esi
// 0071db55  e886440a00           call 0x7c1fe0
// 0071db5a  56                   push esi
// 0071db5b  e8f8c40e00           call 0x80a058
// 0071db60  83c404               add esp, 4
// 0071db63  891f                 mov dword ptr [edi], ebx
// 0071db65  5f                   pop edi
// 0071db66  5e                   pop esi
// 0071db67  5b                   pop ebx
// 0071db68  c20400               ret 4
// library rbxgs/tool\GroupDragTool.cpp (function ?reset@?$auto_ptr@VMegaDragger@RBX@@@std@@QAEXPAVMegaDragger@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/GroupDragTool.cpp

// roc 2008-06 0046f1d0  unit: RBX::LDraw2Lua::LDrawParser  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f1d0
//
// 0046f1d0  56                   push esi
// 0046f1d1  8bf1                 mov esi, ecx
// 0046f1d3  8d4e04               lea ecx, [esi + 4]
// 0046f1d6  c70674cb8100         mov dword ptr [esi], 0x81cb74
// 0046f1dc  ff1568248000         call dword ptr [0x802468]
// 0046f1e2  f644240801           test byte ptr [esp + 8], 1
// 0046f1e7  7409                 je 0x46f1f2
// 0046f1e9  56                   push esi
// 0046f1ea  e88b142300           call 0x6a067a
// 0046f1ef  83c404               add esp, 4
// 0046f1f2  8bc6                 mov eax, esi
// 0046f1f4  5e                   pop esi
// 0046f1f5  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\SyntaxEdit\XTPSyntaxEditUndoManager.cpp (function ??_GCXTPSyntaxEditCommand@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/SyntaxEdit/XTPSyntaxEditUndoManager.cpp

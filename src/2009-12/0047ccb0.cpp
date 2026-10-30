// roc 2009-12 0047ccb0  unit: RBX::LDraw2Lua::LDrawParser  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047ccb0
//
// 0047ccb0  56                   push esi
// 0047ccb1  8bf1                 mov esi, ecx
// 0047ccb3  8d4e04               lea ecx, [esi + 4]
// 0047ccb6  c706e41f9b00         mov dword ptr [esi], 0x9b1fe4
// 0047ccbc  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047ccc2  f644240801           test byte ptr [esp + 8], 1
// 0047ccc7  7409                 je 0x47ccd2
// 0047ccc9  56                   push esi
// 0047ccca  e88b6b3700           call 0x7f385a
// 0047cccf  83c404               add esp, 4
// 0047ccd2  8bc6                 mov eax, esi
// 0047ccd4  5e                   pop esi
// 0047ccd5  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPSyntaxEditCommand@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/SyntaxEdit/XTPSyntaxEditUndoManager.cpp
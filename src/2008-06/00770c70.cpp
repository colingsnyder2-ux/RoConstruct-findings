// roc 2008-06 00770c70  unit: CXTPImageEditorPicture  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00770c70
//
// 00770c70  56                   push esi
// 00770c71  8bf1                 mov esi, ecx
// 00770c73  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00770c7d  e89efcffff           call 0x770920
// 00770c82  8bce                 mov ecx, esi
// 00770c84  e8dffff2ff           call 0x6a0c68
// 00770c89  5e                   pop esi
// 00770c8a  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnCaptureChanged@CXTPImageEditorPicture@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

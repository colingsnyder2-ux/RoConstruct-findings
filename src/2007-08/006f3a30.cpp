// from server: 100% by auto
// roc 2007-08 006f3a30  unit: CXTPImageEditorPicture  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f3a30
//
// 006f3a30  56                   push esi
// 006f3a31  8bf1                 mov esi, ecx
// 006f3a33  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 006f3a3d  e8aefcffff           call 0x6f36f0
// 006f3a42  8bce                 mov ecx, esi
// 006f3a44  e8f5c7f3ff           call 0x63023e
// 006f3a49  5e                   pop esi
// 006f3a4a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnCaptureChanged@CXTPImageEditorPicture@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp

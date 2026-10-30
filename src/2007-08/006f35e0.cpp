// from server: 100% by auto
// roc 2007-08 006f35e0  unit: CXTPImageEditorDlg  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f35e0
//
// 006f35e0  56                   push esi
// 006f35e1  8bf1                 mov esi, ecx
// 006f35e3  83be600a000000       cmp dword ptr [esi + 0xa60], 0
// 006f35ea  7423                 je 0x6f360f
// 006f35ec  6880226300           push 0x632280
// 006f35f1  b914938c00           mov ecx, 0x8c9314
// 006f35f6  e86f4d0400           call 0x73836a
// 006f35fb  85c0                 test eax, eax
// 006f35fd  7505                 jne 0x6f3604
// 006f35ff  e91cc9f3ff           jmp 0x62ff20
// 006f3604  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f3607  51                   push ecx
// 006f3608  8bc8                 mov ecx, eax
// 006f360a  e88104fbff           call 0x6a3a90
// 006f360f  8bce                 mov ecx, esi
// 006f3611  5e                   pop esi
// 006f3612  e935d3f3ff           jmp 0x63094c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?OnDestroy@CXTPImageEditorDlg@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp

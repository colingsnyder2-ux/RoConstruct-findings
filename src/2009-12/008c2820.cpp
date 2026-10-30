// roc 2009-12 008c2820  unit: CXTPImageEditorDlg  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2820
//
// 008c2820  8b442404             mov eax, dword ptr [esp + 4]
// 008c2824  56                   push esi
// 008c2825  8bf1                 mov esi, ecx
// 008c2827  8b08                 mov ecx, dword ptr [eax]
// 008c2829  51                   push ecx
// 008c282a  e8b11af3ff           call 0x7f42e0
// 008c282f  50                   push eax
// 008c2830  e85beaffff           call 0x8c1290
// 008c2835  50                   push eax
// 008c2836  e80314f3ff           call 0x7f3c3e
// 008c283b  83c408               add esp, 8
// 008c283e  50                   push eax
// 008c283f  8bce                 mov ecx, esi
// 008c2841  e89affffff           call 0x8c27e0
// 008c2846  5e                   pop esi
// 008c2847  c20800               ret 8
// copied from an identical function in another client (function ?OnEraseClick@CXTPImageEditorDlg@@AAEXPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp
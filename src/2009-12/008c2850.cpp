// roc 2009-12 008c2850  unit: CXTPImageEditorDlg  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2850
//
// 008c2850  8b442408             mov eax, dword ptr [esp + 8]
// 008c2854  56                   push esi
// 008c2855  8bf1                 mov esi, ecx
// 008c2857  8b08                 mov ecx, dword ptr [eax]
// 008c2859  51                   push ecx
// 008c285a  e8811af3ff           call 0x7f42e0
// 008c285f  50                   push eax
// 008c2860  e82beaffff           call 0x8c1290
// 008c2865  50                   push eax
// 008c2866  e8d313f3ff           call 0x7f3c3e
// 008c286b  83c408               add esp, 8
// 008c286e  50                   push eax
// 008c286f  8bce                 mov ecx, esi
// 008c2871  e86affffff           call 0x8c27e0
// 008c2876  5e                   pop esi
// 008c2877  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSelectorClick@CXTPImageEditorDlg@@AAEXIPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp
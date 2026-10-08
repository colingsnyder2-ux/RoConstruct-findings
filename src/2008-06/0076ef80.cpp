// from server: 100% by auto
// roc 2008-06 0076ef80  unit: CXTPImageEditorDlg::CDlgToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ef80
//
// 0076ef80  83ec0c               sub esp, 0xc
// 0076ef83  56                   push esi
// 0076ef84  8bf1                 mov esi, ecx
// 0076ef86  8b4620               mov eax, dword ptr [esi + 0x20]
// 0076ef89  89442404             mov dword ptr [esp + 4], eax
// 0076ef8d  c744240cfeffffff     mov dword ptr [esp + 0xc], 0xfffffffe
// 0076ef95  e8ecd20400           call 0x7bc286
// 0076ef9a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0076ef9d  51                   push ecx
// 0076ef9e  8944240c             mov dword ptr [esp + 0xc], eax
// 0076efa2  ff15f82d8000         call dword ptr [0x802df8]
// 0076efa8  50                   push eax
// 0076efa9  e8301cf3ff           call 0x6a0bde
// 0076efae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076efb2  8d542404             lea edx, [esp + 4]
// 0076efb6  52                   push edx
// 0076efb7  8b5020               mov edx, dword ptr [eax + 0x20]
// 0076efba  51                   push ecx
// 0076efbb  6a4e                 push 0x4e
// 0076efbd  52                   push edx
// 0076efbe  ff15142e8000         call dword ptr [0x802e14]
// 0076efc4  5e                   pop esi
// 0076efc5  83c40c               add esp, 0xc
// 0076efc8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnLButtonDown@CXTPImageEditorPicker@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

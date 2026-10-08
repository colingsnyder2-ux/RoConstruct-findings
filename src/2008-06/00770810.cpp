// from server: 100% by auto
// roc 2008-06 00770810  unit: CXTPImageEditorDlg  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00770810
//
// 00770810  56                   push esi
// 00770811  8bf1                 mov esi, ecx
// 00770813  83be680a000000       cmp dword ptr [esi + 0xa68], 0
// 0077081a  7423                 je 0x77083f
// 0077081c  6810306a00           push 0x6a3010
// 00770821  b99ced9700           mov ecx, 0x97ed9c
// 00770826  e8afb70400           call 0x7bbfda
// 0077082b  85c0                 test eax, eax
// 0077082d  7505                 jne 0x770834
// 0077082f  e81001f3ff           call 0x6a0944
// 00770834  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00770837  51                   push ecx
// 00770838  8bc8                 mov ecx, eax
// 0077083a  e8b1c9faff           call 0x71d1f0
// 0077083f  8bce                 mov ecx, esi
// 00770841  5e                   pop esi
// 00770842  e93508f3ff           jmp 0x6a107c
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?OnDestroy@CXTPImageEditorDlg@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

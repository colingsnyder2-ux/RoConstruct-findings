// from server: 100% by auto
// roc 2008-06 0076e0d0  unit: CXTPImageEditorPicker  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e0d0
//
// 0076e0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0076e0d4  56                   push esi
// 0076e0d5  57                   push edi
// 0076e0d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076e0da  57                   push edi
// 0076e0db  8bf1                 mov esi, ecx
// 0076e0dd  50                   push eax
// 0076e0de  897e54               mov dword ptr [esi + 0x54], edi
// 0076e0e1  e8dae00400           call 0x7bc1c0
// 0076e0e6  8b8f600a0000         mov ecx, dword ptr [edi + 0xa60]
// 0076e0ec  6a00                 push 0
// 0076e0ee  894e58               mov dword ptr [esi + 0x58], ecx
// 0076e0f1  8b97640a0000         mov edx, dword ptr [edi + 0xa64]
// 0076e0f7  6a00                 push 0
// 0076e0f9  6800000200           push 0x20000
// 0076e0fe  8bce                 mov ecx, esi
// 0076e100  89565c               mov dword ptr [esi + 0x5c], edx
// 0076e103  e8302bf3ff           call 0x6a0c38
// 0076e108  5f                   pop edi
// 0076e109  5e                   pop esi
// 0076e10a  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?Init@CXTPImageEditorPreview@@QAEXIPAVCXTPImageEditorDlg@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp

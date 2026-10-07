// roc 2007-08 006f0d40  unit: CXTPImageEditorPicker  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0d40
//
// 006f0d40  8b442404             mov eax, dword ptr [esp + 4]
// 006f0d44  56                   push esi
// 006f0d45  57                   push edi
// 006f0d46  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f0d4a  57                   push edi
// 006f0d4b  8bf1                 mov esi, ecx
// 006f0d4d  50                   push eax
// 006f0d4e  897e54               mov dword ptr [esi + 0x54], edi
// 006f0d51  e88e770400           call 0x7384e4
// 006f0d56  8b8f580a0000         mov ecx, dword ptr [edi + 0xa58]
// 006f0d5c  6a00                 push 0
// 006f0d5e  894e58               mov dword ptr [esi + 0x58], ecx
// 006f0d61  8b975c0a0000         mov edx, dword ptr [edi + 0xa5c]
// 006f0d67  6a00                 push 0
// 006f0d69  6800000200           push 0x20000
// 006f0d6e  8bce                 mov ecx, esi
// 006f0d70  89565c               mov dword ptr [esi + 0x5c], edx
// 006f0d73  e89cf4f3ff           call 0x630214
// 006f0d78  5f                   pop edi
// 006f0d79  5e                   pop esi
// 006f0d7a  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?Init@CXTPImageEditorPreview@@QAEXIPAVCXTPImageEditorDlg@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp

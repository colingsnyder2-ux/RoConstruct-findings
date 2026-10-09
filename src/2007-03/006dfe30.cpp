// roc 2007-03 006dfe30  unit: seg_006d0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dfe30
//
// 006dfe30  8b442404             mov eax, dword ptr [esp + 4]
// 006dfe34  56                   push esi
// 006dfe35  57                   push edi
// 006dfe36  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006dfe3a  57                   push edi
// 006dfe3b  8bf1                 mov esi, ecx
// 006dfe3d  50                   push eax
// 006dfe3e  897e54               mov dword ptr [esi + 0x54], edi
// 006dfe41  e8e4ad0500           call 0x73ac2a
// 006dfe46  8b8f580a0000         mov ecx, dword ptr [edi + 0xa58]
// 006dfe4c  6a00                 push 0
// 006dfe4e  894e58               mov dword ptr [esi + 0x58], ecx
// 006dfe51  8b975c0a0000         mov edx, dword ptr [edi + 0xa5c]
// 006dfe57  6a00                 push 0
// 006dfe59  6800000200           push 0x20000
// 006dfe5e  8bce                 mov ecx, esi
// 006dfe60  89565c               mov dword ptr [esi + 0x5c], edx
// 006dfe63  e83ae8f3ff           call 0x61e6a2
// 006dfe68  5f                   pop edi
// 006dfe69  5e                   pop esi
// 006dfe6a  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?Init@CXTPImageEditorPreview@@QAEXIPAVCXTPImageEditorDlg@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp

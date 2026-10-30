// from server: 100% by auto
// roc 2008-06 00771850  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771850
//
// 00771850  56                   push esi
// 00771851  8bf1                 mov esi, ecx
// 00771853  e810f4f2ff           call 0x6a0c68
// 00771858  8bce                 mov ecx, esi
// 0077185a  e8aba70400           call 0x7bc00a
// 0077185f  83e050               and eax, 0x50
// 00771862  3c50                 cmp al, 0x50
// 00771864  7533                 jne 0x771899
// 00771866  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00771869  57                   push edi
// 0077186a  8bce                 mov ecx, esi
// 0077186c  8d7803               lea edi, [eax + 3]
// 0077186f  e8eab00400           call 0x7bc95e
// 00771874  3bf8                 cmp edi, eax
// 00771876  7e04                 jle 0x77187c
// 00771878  8bc7                 mov eax, edi
// 0077187a  eb07                 jmp 0x771883
// 0077187c  8bce                 mov ecx, esi
// 0077187e  e8dbb00400           call 0x7bc95e
// 00771883  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00771886  0fb7c0               movzx eax, ax
// 00771889  50                   push eax
// 0077188a  6a00                 push 0
// 0077188c  68a0010000           push 0x1a0
// 00771891  51                   push ecx
// 00771892  ff15142e8000         call dword ptr [0x802e14]
// 00771898  5f                   pop edi
// 00771899  33c0                 xor eax, eax
// 0077189b  5e                   pop esi
// 0077189c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSetFont@CXTPCustomizeToolbarsPageCheckListBox@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp

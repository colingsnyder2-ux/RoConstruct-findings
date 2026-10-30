// roc 2009-06 007e9f20  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e9f20
//
// 007e9f20  56                   push esi
// 007e9f21  8bf1                 mov esi, ecx
// 007e9f23  e876ebf2ff           call 0x718a9e
// 007e9f28  8bce                 mov ecx, esi
// 007e9f2a  e8ad1f0600           call 0x84bedc
// 007e9f2f  83e050               and eax, 0x50
// 007e9f32  3c50                 cmp al, 0x50
// 007e9f34  7533                 jne 0x7e9f69
// 007e9f36  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007e9f39  57                   push edi
// 007e9f3a  8bce                 mov ecx, esi
// 007e9f3c  8d7803               lea edi, [eax + 3]
// 007e9f3f  e8c8280600           call 0x84c80c
// 007e9f44  3bf8                 cmp edi, eax
// 007e9f46  7e04                 jle 0x7e9f4c
// 007e9f48  8bc7                 mov eax, edi
// 007e9f4a  eb07                 jmp 0x7e9f53
// 007e9f4c  8bce                 mov ecx, esi
// 007e9f4e  e8b9280600           call 0x84c80c
// 007e9f53  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007e9f56  0fb7c0               movzx eax, ax
// 007e9f59  50                   push eax
// 007e9f5a  6a00                 push 0
// 007e9f5c  68a0010000           push 0x1a0
// 007e9f61  51                   push ecx
// 007e9f62  ff1590ee8900         call dword ptr [0x89ee90]
// 007e9f68  5f                   pop edi
// 007e9f69  5e                   pop esi
// 007e9f6a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?PreSubclassWindow@CXTPCustomizeToolbarsPageCheckListBox@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp

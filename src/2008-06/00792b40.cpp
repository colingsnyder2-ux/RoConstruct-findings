// roc 2008-06 00792b40  unit: CXTCaptionButton  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792b40
//
// 00792b40  56                   push esi
// 00792b41  8bf1                 mov esi, ecx
// 00792b43  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00792b4a  741c                 je 0x792b68
// 00792b4c  ff15102e8000         call dword ptr [0x802e10]
// 00792b52  50                   push eax
// 00792b53  e886e0f0ff           call 0x6a0bde
// 00792b58  2bc6                 sub eax, esi
// 00792b5a  f7d8                 neg eax
// 00792b5c  1bc0                 sbb eax, eax
// 00792b5e  83e0f0               and eax, 0xfffffff0
// 00792b61  0510200000           add eax, 0x2010
// 00792b66  5e                   pop esi
// 00792b67  c3                   ret 
// 00792b68  5e                   pop esi
// 00792b69  e9fae0f0ff           jmp 0x6a0c68
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnGetDlgCode@CXTButton@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp

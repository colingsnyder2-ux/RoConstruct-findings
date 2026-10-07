// roc 2012-06 00a6af10  unit: CXTCaptionButton  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6af10
//
// 00a6af10  56                   push esi
// 00a6af11  8bf1                 mov esi, ecx
// 00a6af13  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00a6af1a  741c                 je 0xa6af38
// 00a6af1c  ff15e83bb200         call dword ptr [0xb23be8]
// 00a6af22  50                   push eax
// 00a6af23  e83e77f1ff           call 0x982666
// 00a6af28  2bc6                 sub eax, esi
// 00a6af2a  f7d8                 neg eax
// 00a6af2c  1bc0                 sbb eax, eax
// 00a6af2e  83e0f0               and eax, 0xfffffff0
// 00a6af31  0510200000           add eax, 0x2010
// 00a6af36  5e                   pop esi
// 00a6af37  c3                   ret 
// 00a6af38  5e                   pop esi
// 00a6af39  e9a077f1ff           jmp 0x9826de
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnGetDlgCode@CXTButton@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp

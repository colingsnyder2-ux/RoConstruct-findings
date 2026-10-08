// roc 2011-06 0084bbf0  unit: CXTPPopupBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084bbf0
//
// 0084bbf0  53                   push ebx
// 0084bbf1  55                   push ebp
// 0084bbf2  56                   push esi
// 0084bbf3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084bbf7  57                   push edi
// 0084bbf8  56                   push esi
// 0084bbf9  8bf9                 mov edi, ecx
// 0084bbfb  e840faffff           call 0x84b640
// 0084bc00  6a00                 push 0
// 0084bc02  8d87b0010000         lea eax, [edi + 0x1b0]
// 0084bc08  50                   push eax
// 0084bc09  68e87aac00           push 0xac7ae8
// 0084bc0e  56                   push esi
// 0084bc0f  e89c430100           call 0x85ffb0
// 0084bc14  68cabea500           push 0xa5beca
// 0084bc19  8d8ff0010000         lea ecx, [edi + 0x1f0]
// 0084bc1f  51                   push ecx
// 0084bc20  68d87aac00           push 0xac7ad8
// 0084bc25  56                   push esi
// 0084bc26  e8e5430100           call 0x860010
// 0084bc2b  6a00                 push 0
// 0084bc2d  8d97f4010000         lea edx, [edi + 0x1f4]
// 0084bc33  52                   push edx
// 0084bc34  68cc7aac00           push 0xac7acc
// 0084bc39  56                   push esi
// 0084bc3a  e811430100           call 0x85ff50
// 0084bc3f  6a00                 push 0
// 0084bc41  8d87f8010000         lea eax, [edi + 0x1f8]
// 0084bc47  50                   push eax
// 0084bc48  68bc7aac00           push 0xac7abc
// 0084bc4d  56                   push esi
// 0084bc4e  e8fd420100           call 0x85ff50
// 0084bc53  83c440               add esp, 0x40
// 0084bc56  837e2c03             cmp dword ptr [esi + 0x2c], 3
// 0084bc5a  7647                 jbe 0x84bca3
// 0084bc5c  83ec10               sub esp, 0x10
// 0084bc5f  8bc4                 mov eax, esp
// 0084bc61  b902000000           mov ecx, 2
// 0084bc66  8908                 mov dword ptr [eax], ecx
// 0084bc68  8bd9                 mov ebx, ecx
// 0084bc6a  8d8f00020000         lea ecx, [edi + 0x200]
// 0084bc70  51                   push ecx
// 0084bc71  ba04000000           mov edx, 4
// 0084bc76  895004               mov dword ptr [eax + 4], edx
// 0084bc79  8bea                 mov ebp, edx
// 0084bc7b  68b47aac00           push 0xac7ab4
// 0084bc80  895808               mov dword ptr [eax + 8], ebx
// 0084bc83  56                   push esi
// 0084bc84  89680c               mov dword ptr [eax + 0xc], ebp
// 0084bc87  e844440100           call 0x8600d0
// 0084bc8c  6a01                 push 1
// 0084bc8e  8d97fc010000         lea edx, [edi + 0x1fc]
// 0084bc94  52                   push edx
// 0084bc95  68a87aac00           push 0xac7aa8
// 0084bc9a  56                   push esi
// 0084bc9b  e810430100           call 0x85ffb0
// 0084bca0  83c42c               add esp, 0x2c
// 0084bca3  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 0084bca7  7617                 jbe 0x84bcc0
// 0084bca9  6a00                 push 0
// 0084bcab  8d8710020000         lea eax, [edi + 0x210]
// 0084bcb1  50                   push eax
// 0084bcb2  68987aac00           push 0xac7a98
// 0084bcb7  56                   push esi
// 0084bcb8  e8f3420100           call 0x85ffb0
// 0084bcbd  83c410               add esp, 0x10
// 0084bcc0  837e2c14             cmp dword ptr [esi + 0x2c], 0x14
// 0084bcc4  7309                 jae 0x84bccf
// 0084bcc6  6a01                 push 1
// 0084bcc8  8bcf                 mov ecx, edi
// 0084bcca  e871ecfcff           call 0x81a940
// 0084bccf  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 0084bcd3  7617                 jbe 0x84bcec
// 0084bcd5  6a00                 push 0
// 0084bcd7  81c714020000         add edi, 0x214
// 0084bcdd  57                   push edi
// 0084bcde  688c7aac00           push 0xac7a8c
// 0084bce3  56                   push esi
// 0084bce4  e8c7420100           call 0x85ffb0
// 0084bce9  83c410               add esp, 0x10
// 0084bcec  5f                   pop edi
// 0084bced  5e                   pop esi
// 0084bcee  5d                   pop ebp
// 0084bcef  5b                   pop ebx
// 0084bcf0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPPopupBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

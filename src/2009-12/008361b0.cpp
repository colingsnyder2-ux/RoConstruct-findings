// roc 2009-12 008361b0  unit: CXTPPopupBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008361b0
//
// 008361b0  53                   push ebx
// 008361b1  55                   push ebp
// 008361b2  56                   push esi
// 008361b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 008361b7  57                   push edi
// 008361b8  56                   push esi
// 008361b9  8bf9                 mov edi, ecx
// 008361bb  e840faffff           call 0x835c00
// 008361c0  6a00                 push 0
// 008361c2  8d87b0010000         lea eax, [edi + 0x1b0]
// 008361c8  50                   push eax
// 008361c9  68b87b9f00           push 0x9f7bb8
// 008361ce  56                   push esi
// 008361cf  e88ca80100           call 0x850a60
// 008361d4  6856fd9900           push 0x99fd56
// 008361d9  8d8ff0010000         lea ecx, [edi + 0x1f0]
// 008361df  51                   push ecx
// 008361e0  68a87b9f00           push 0x9f7ba8
// 008361e5  56                   push esi
// 008361e6  e8d5a80100           call 0x850ac0
// 008361eb  6a00                 push 0
// 008361ed  8d97f4010000         lea edx, [edi + 0x1f4]
// 008361f3  52                   push edx
// 008361f4  689c7b9f00           push 0x9f7b9c
// 008361f9  56                   push esi
// 008361fa  e801a80100           call 0x850a00
// 008361ff  6a00                 push 0
// 00836201  8d87f8010000         lea eax, [edi + 0x1f8]
// 00836207  50                   push eax
// 00836208  688c7b9f00           push 0x9f7b8c
// 0083620d  56                   push esi
// 0083620e  e8eda70100           call 0x850a00
// 00836213  83c440               add esp, 0x40
// 00836216  837e2c03             cmp dword ptr [esi + 0x2c], 3
// 0083621a  7647                 jbe 0x836263
// 0083621c  83ec10               sub esp, 0x10
// 0083621f  8bc4                 mov eax, esp
// 00836221  b902000000           mov ecx, 2
// 00836226  8908                 mov dword ptr [eax], ecx
// 00836228  8bd9                 mov ebx, ecx
// 0083622a  8d8f00020000         lea ecx, [edi + 0x200]
// 00836230  51                   push ecx
// 00836231  ba04000000           mov edx, 4
// 00836236  895004               mov dword ptr [eax + 4], edx
// 00836239  8bea                 mov ebp, edx
// 0083623b  68847b9f00           push 0x9f7b84
// 00836240  895808               mov dword ptr [eax + 8], ebx
// 00836243  56                   push esi
// 00836244  89680c               mov dword ptr [eax + 0xc], ebp
// 00836247  e834a90100           call 0x850b80
// 0083624c  6a01                 push 1
// 0083624e  8d97fc010000         lea edx, [edi + 0x1fc]
// 00836254  52                   push edx
// 00836255  68787b9f00           push 0x9f7b78
// 0083625a  56                   push esi
// 0083625b  e800a80100           call 0x850a60
// 00836260  83c42c               add esp, 0x2c
// 00836263  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 00836267  7617                 jbe 0x836280
// 00836269  6a00                 push 0
// 0083626b  8d8710020000         lea eax, [edi + 0x210]
// 00836271  50                   push eax
// 00836272  68687b9f00           push 0x9f7b68
// 00836277  56                   push esi
// 00836278  e8e3a70100           call 0x850a60
// 0083627d  83c410               add esp, 0x10
// 00836280  837e2c14             cmp dword ptr [esi + 0x2c], 0x14
// 00836284  7309                 jae 0x83628f
// 00836286  6a01                 push 1
// 00836288  8bcf                 mov ecx, edi
// 0083628a  e8f1e0fcff           call 0x804380
// 0083628f  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 00836293  7617                 jbe 0x8362ac
// 00836295  6a00                 push 0
// 00836297  81c714020000         add edi, 0x214
// 0083629d  57                   push edi
// 0083629e  685c7b9f00           push 0x9f7b5c
// 008362a3  56                   push esi
// 008362a4  e8b7a70100           call 0x850a60
// 008362a9  83c410               add esp, 0x10
// 008362ac  5f                   pop edi
// 008362ad  5e                   pop esi
// 008362ae  5d                   pop ebp
// 008362af  5b                   pop ebx
// 008362b0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPPopupBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

// roc 2011-06 0084c380  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084c380
//
// 0084c380  53                   push ebx
// 0084c381  56                   push esi
// 0084c382  57                   push edi
// 0084c383  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084c387  57                   push edi
// 0084c388  8bf1                 mov esi, ecx
// 0084c38a  e861ffffff           call 0x84c2f0
// 0084c38f  6a01                 push 1
// 0084c391  8d9e88010000         lea ebx, [esi + 0x188]
// 0084c397  53                   push ebx
// 0084c398  685c7cac00           push 0xac7c5c
// 0084c39d  57                   push edi
// 0084c39e  e80d3c0100           call 0x85ffb0
// 0084c3a3  6a00                 push 0
// 0084c3a5  8d8660010000         lea eax, [esi + 0x160]
// 0084c3ab  50                   push eax
// 0084c3ac  68f06fab00           push 0xab6ff0
// 0084c3b1  57                   push edi
// 0084c3b2  e8993b0100           call 0x85ff50
// 0084c3b7  6a00                 push 0
// 0084c3b9  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0084c3bf  51                   push ecx
// 0084c3c0  68507cac00           push 0xac7c50
// 0084c3c5  57                   push edi
// 0084c3c6  e8853b0100           call 0x85ff50
// 0084c3cb  83c430               add esp, 0x30
// 0084c3ce  837f2c08             cmp dword ptr [edi + 0x2c], 8
// 0084c3d2  766d                 jbe 0x84c441
// 0084c3d4  68cabea500           push 0xa5beca
// 0084c3d9  8d96a8010000         lea edx, [esi + 0x1a8]
// 0084c3df  52                   push edx
// 0084c3e0  68447cac00           push 0xac7c44
// 0084c3e5  57                   push edi
// 0084c3e6  e8253c0100           call 0x860010
// 0084c3eb  6a00                 push 0
// 0084c3ed  8d86b4010000         lea eax, [esi + 0x1b4]
// 0084c3f3  50                   push eax
// 0084c3f4  682c7cac00           push 0xac7c2c
// 0084c3f9  57                   push edi
// 0084c3fa  e8513b0100           call 0x85ff50
// 0084c3ff  6a00                 push 0
// 0084c401  8d8eac010000         lea ecx, [esi + 0x1ac]
// 0084c407  51                   push ecx
// 0084c408  681c7cac00           push 0xac7c1c
// 0084c40d  57                   push edi
// 0084c40e  e89d3b0100           call 0x85ffb0
// 0084c413  6a00                 push 0
// 0084c415  8d96bc010000         lea edx, [esi + 0x1bc]
// 0084c41b  52                   push edx
// 0084c41c  68107cac00           push 0xac7c10
// 0084c421  57                   push edi
// 0084c422  e8293b0100           call 0x85ff50
// 0084c427  83c440               add esp, 0x40
// 0084c42a  6a0c                 push 0xc
// 0084c42c  8d86c4010000         lea eax, [esi + 0x1c4]
// 0084c432  50                   push eax
// 0084c433  68fc7bac00           push 0xac7bfc
// 0084c438  57                   push edi
// 0084c439  e8123b0100           call 0x85ff50
// 0084c43e  83c410               add esp, 0x10
// 0084c441  837f2c10             cmp dword ptr [edi + 0x2c], 0x10
// 0084c445  7617                 jbe 0x84c45e
// 0084c447  6a00                 push 0
// 0084c449  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 0084c44f  51                   push ecx
// 0084c450  68f07bac00           push 0xac7bf0
// 0084c455  57                   push edi
// 0084c456  e8f53a0100           call 0x85ff50
// 0084c45b  83c410               add esp, 0x10
// 0084c45e  837f2800             cmp dword ptr [edi + 0x28], 0
// 0084c462  7418                 je 0x84c47c
// 0084c464  8b13                 mov edx, dword ptr [ebx]
// 0084c466  52                   push edx
// 0084c467  8bce                 mov ecx, esi
// 0084c469  e8a2a1fcff           call 0x816610
// 0084c46e  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 0084c474  50                   push eax
// 0084c475  8bce                 mov ecx, esi
// 0084c477  e8b4b3fcff           call 0x817830
// 0084c47c  5f                   pop edi
// 0084c47d  5e                   pop esi
// 0084c47e  5b                   pop ebx
// 0084c47f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlComboBox@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

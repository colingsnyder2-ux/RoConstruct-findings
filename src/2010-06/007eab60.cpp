// roc 2010-06 007eab60  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eab60
//
// 007eab60  53                   push ebx
// 007eab61  56                   push esi
// 007eab62  57                   push edi
// 007eab63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007eab67  57                   push edi
// 007eab68  8bf1                 mov esi, ecx
// 007eab6a  e861ffffff           call 0x7eaad0
// 007eab6f  6a01                 push 1
// 007eab71  8d9e88010000         lea ebx, [esi + 0x188]
// 007eab77  53                   push ebx
// 007eab78  6814c0a500           push 0xa5c014
// 007eab7d  57                   push edi
// 007eab7e  e84d9f0100           call 0x804ad0
// 007eab83  6a00                 push 0
// 007eab85  8d8660010000         lea eax, [esi + 0x160]
// 007eab8b  50                   push eax
// 007eab8c  686c68a100           push 0xa1686c
// 007eab91  57                   push edi
// 007eab92  e8a99e0100           call 0x804a40
// 007eab97  6a00                 push 0
// 007eab99  8d8e8c010000         lea ecx, [esi + 0x18c]
// 007eab9f  51                   push ecx
// 007eaba0  6808c0a500           push 0xa5c008
// 007eaba5  57                   push edi
// 007eaba6  e8959e0100           call 0x804a40
// 007eabab  83c430               add esp, 0x30
// 007eabae  837f2c08             cmp dword ptr [edi + 0x2c], 8
// 007eabb2  766d                 jbe 0x7eac21
// 007eabb4  68fe08a000           push 0xa008fe
// 007eabb9  8d96a8010000         lea edx, [esi + 0x1a8]
// 007eabbf  52                   push edx
// 007eabc0  68fcbfa500           push 0xa5bffc
// 007eabc5  57                   push edi
// 007eabc6  e8659f0100           call 0x804b30
// 007eabcb  6a00                 push 0
// 007eabcd  8d86b4010000         lea eax, [esi + 0x1b4]
// 007eabd3  50                   push eax
// 007eabd4  68e4bfa500           push 0xa5bfe4
// 007eabd9  57                   push edi
// 007eabda  e8619e0100           call 0x804a40
// 007eabdf  6a00                 push 0
// 007eabe1  8d8eac010000         lea ecx, [esi + 0x1ac]
// 007eabe7  51                   push ecx
// 007eabe8  68d4bfa500           push 0xa5bfd4
// 007eabed  57                   push edi
// 007eabee  e8dd9e0100           call 0x804ad0
// 007eabf3  6a00                 push 0
// 007eabf5  8d96bc010000         lea edx, [esi + 0x1bc]
// 007eabfb  52                   push edx
// 007eabfc  68c8bfa500           push 0xa5bfc8
// 007eac01  57                   push edi
// 007eac02  e8399e0100           call 0x804a40
// 007eac07  83c440               add esp, 0x40
// 007eac0a  6a0c                 push 0xc
// 007eac0c  8d86c4010000         lea eax, [esi + 0x1c4]
// 007eac12  50                   push eax
// 007eac13  68b4bfa500           push 0xa5bfb4
// 007eac18  57                   push edi
// 007eac19  e8229e0100           call 0x804a40
// 007eac1e  83c410               add esp, 0x10
// 007eac21  837f2c10             cmp dword ptr [edi + 0x2c], 0x10
// 007eac25  7617                 jbe 0x7eac3e
// 007eac27  6a00                 push 0
// 007eac29  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 007eac2f  51                   push ecx
// 007eac30  68a8bfa500           push 0xa5bfa8
// 007eac35  57                   push edi
// 007eac36  e8059e0100           call 0x804a40
// 007eac3b  83c410               add esp, 0x10
// 007eac3e  837f2800             cmp dword ptr [edi + 0x28], 0
// 007eac42  7418                 je 0x7eac5c
// 007eac44  8b13                 mov edx, dword ptr [ebx]
// 007eac46  52                   push edx
// 007eac47  8bce                 mov ecx, esi
// 007eac49  e88295fcff           call 0x7b41d0
// 007eac4e  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 007eac54  50                   push eax
// 007eac55  8bce                 mov ecx, esi
// 007eac57  e844a7fcff           call 0x7b53a0
// 007eac5c  5f                   pop edi
// 007eac5d  5e                   pop esi
// 007eac5e  5b                   pop ebx
// 007eac5f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlComboBox@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

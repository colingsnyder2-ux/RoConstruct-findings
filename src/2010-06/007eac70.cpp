// roc 2010-06 007eac70  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eac70
//
// 007eac70  56                   push esi
// 007eac71  8b742408             mov esi, dword ptr [esp + 8]
// 007eac75  57                   push edi
// 007eac76  56                   push esi
// 007eac77  8bf9                 mov edi, ecx
// 007eac79  e852faffff           call 0x7ea6d0
// 007eac7e  837e2c05             cmp dword ptr [esi + 0x2c], 5
// 007eac82  762b                 jbe 0x7eacaf
// 007eac84  6a00                 push 0
// 007eac86  8d8778010000         lea eax, [edi + 0x178]
// 007eac8c  50                   push eax
// 007eac8d  683cc0a500           push 0xa5c03c
// 007eac92  56                   push esi
// 007eac93  e8389e0100           call 0x804ad0
// 007eac98  6a00                 push 0
// 007eac9a  8d8f60010000         lea ecx, [edi + 0x160]
// 007eaca0  51                   push ecx
// 007eaca1  686c68a100           push 0xa1686c
// 007eaca6  56                   push esi
// 007eaca7  e8949d0100           call 0x804a40
// 007eacac  83c420               add esp, 0x20
// 007eacaf  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 007eacb3  7617                 jbe 0x7eaccc
// 007eacb5  6a00                 push 0
// 007eacb7  8d977c010000         lea edx, [edi + 0x17c]
// 007eacbd  52                   push edx
// 007eacbe  6830c0a500           push 0xa5c030
// 007eacc3  56                   push esi
// 007eacc4  e8079e0100           call 0x804ad0
// 007eacc9  83c410               add esp, 0x10
// 007eaccc  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 007eacd0  762e                 jbe 0x7ead00
// 007eacd2  68fe08a000           push 0xa008fe
// 007eacd7  8d878c010000         lea eax, [edi + 0x18c]
// 007eacdd  50                   push eax
// 007eacde  68fcbfa500           push 0xa5bffc
// 007eace3  56                   push esi
// 007eace4  e8479e0100           call 0x804b30
// 007eace9  6a00                 push 0
// 007eaceb  8d8fa4010000         lea ecx, [edi + 0x1a4]
// 007eacf1  51                   push ecx
// 007eacf2  68e4bfa500           push 0xa5bfe4
// 007eacf7  56                   push esi
// 007eacf8  e8439d0100           call 0x804a40
// 007eacfd  83c420               add esp, 0x20
// 007ead00  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 007ead04  7617                 jbe 0x7ead1d
// 007ead06  6a00                 push 0
// 007ead08  8d97a8010000         lea edx, [edi + 0x1a8]
// 007ead0e  52                   push edx
// 007ead0f  68a8bfa500           push 0xa5bfa8
// 007ead14  56                   push esi
// 007ead15  e8269d0100           call 0x804a40
// 007ead1a  83c410               add esp, 0x10
// 007ead1d  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 007ead21  7617                 jbe 0x7ead3a
// 007ead23  6a00                 push 0
// 007ead25  8d87ac010000         lea eax, [edi + 0x1ac]
// 007ead2b  50                   push eax
// 007ead2c  6820c0a500           push 0xa5c020
// 007ead31  56                   push esi
// 007ead32  e8999d0100           call 0x804ad0
// 007ead37  83c410               add esp, 0x10
// 007ead3a  837e2800             cmp dword ptr [esi + 0x28], 0
// 007ead3e  740e                 je 0x7ead4e
// 007ead40  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 007ead46  51                   push ecx
// 007ead47  8bcf                 mov ecx, edi
// 007ead49  e8823f0500           call 0x83ecd0
// 007ead4e  5f                   pop edi
// 007ead4f  5e                   pop esi
// 007ead50  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlEdit@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp

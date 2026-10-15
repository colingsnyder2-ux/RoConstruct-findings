// roc 2008-06 0057d050  unit: RBX::VInstance::?$SignalDesc  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d050
//
// 0057d050  83ec2c               sub esp, 0x2c
// 0057d053  53                   push ebx
// 0057d054  56                   push esi
// 0057d055  8bf1                 mov esi, ecx
// 0057d057  8b4604               mov eax, dword ptr [esi + 4]
// 0057d05a  c744240800000000     mov dword ptr [esp + 8], 0
// 0057d062  83f809               cmp eax, 9
// 0057d065  0f8755010000         ja 0x57d1c0
// 0057d06b  ff2485dcd15700       jmp dword ptr [eax*4 + 0x57d1dc]
// 0057d072  83c608               add esi, 8
// 0057d075  56                   push esi
// 0057d076  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057d07a  56                   push esi
// 0057d07b  e8b00d0400           call 0x5bde30
// 0057d080  83c408               add esp, 8
// 0057d083  8bc6                 mov eax, esi
// 0057d085  5e                   pop esi
// 0057d086  5b                   pop ebx
// 0057d087  83c42c               add esp, 0x2c
// 0057d08a  c20800               ret 8
// 0057d08d  83c608               add esi, 8
// 0057d090  56                   push esi
// 0057d091  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057d095  56                   push esi
// 0057d096  e8550e0400           call 0x5bdef0
// 0057d09b  83c408               add esp, 8
// 0057d09e  8bc6                 mov eax, esi
// 0057d0a0  5e                   pop esi
// 0057d0a1  5b                   pop ebx
// 0057d0a2  83c42c               add esp, 0x2c
// 0057d0a5  c20800               ret 8
// 0057d0a8  83c608               add esi, 8
// 0057d0ab  56                   push esi
// 0057d0ac  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057d0b0  56                   push esi
// 0057d0b1  e87a0e0400           call 0x5bdf30
// 0057d0b6  83c408               add esp, 8
// 0057d0b9  8bc6                 mov eax, esi
// 0057d0bb  5e                   pop esi
// 0057d0bc  5b                   pop ebx
// 0057d0bd  83c42c               add esp, 0x2c
// 0057d0c0  c20800               ret 8
// 0057d0c3  83c608               add esi, 8
// 0057d0c6  56                   push esi
// 0057d0c7  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057d0cb  56                   push esi
// 0057d0cc  e86f0f0400           call 0x5be040
// 0057d0d1  83c408               add esp, 8
// 0057d0d4  8bc6                 mov eax, esi
// 0057d0d6  5e                   pop esi
// 0057d0d7  5b                   pop ebx
// 0057d0d8  83c42c               add esp, 0x2c
// 0057d0db  c20800               ret 8
// 0057d0de  83c608               add esi, 8
// 0057d0e1  56                   push esi
// 0057d0e2  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057d0e6  56                   push esi
// 0057d0e7  e8840e0400           call 0x5bdf70
// 0057d0ec  83c408               add esp, 8
// 0057d0ef  8bc6                 mov eax, esi
// 0057d0f1  5e                   pop esi
// 0057d0f2  5b                   pop ebx
// 0057d0f3  83c42c               add esp, 0x2c
// 0057d0f6  c20800               ret 8
// 0057d0f9  8b4608               mov eax, dword ptr [esi + 8]
// 0057d0fc  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057d100  83c004               add eax, 4
// 0057d103  50                   push eax
// 0057d104  8bce                 mov ecx, esi
// 0057d106  ff155c248000         call dword ptr [0x80245c]
// 0057d10c  8bc6                 mov eax, esi
// 0057d10e  5e                   pop esi
// 0057d10f  5b                   pop ebx
// 0057d110  83c42c               add esp, 0x2c
// 0057d113  c20800               ret 8
// 0057d116  8d4c240c             lea ecx, [esp + 0xc]
// 0057d11a  51                   push ecx
// 0057d11b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057d11e  e88d44f1ff           call 0x4915b0
// 0057d123  833800               cmp dword ptr [eax], 0
// 0057d126  8d4c240c             lea ecx, [esp + 0xc]
// 0057d12a  0f94c3               sete bl
// 0057d12d  e82e350800           call 0x600660
// 0057d132  84db                 test bl, bl
// 0057d134  7420                 je 0x57d156
// 0057d136  8b151c539700         mov edx, dword ptr [0x97531c]
// 0057d13c  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057d140  83c204               add edx, 4
// 0057d143  52                   push edx
// 0057d144  8bce                 mov ecx, esi
// 0057d146  ff155c248000         call dword ptr [0x80245c]
// 0057d14c  8bc6                 mov eax, esi
// 0057d14e  5e                   pop esi
// 0057d14f  5b                   pop ebx
// 0057d150  83c42c               add esp, 0x2c
// 0057d153  c20800               ret 8
// 0057d156  8b4608               mov eax, dword ptr [esi + 8]
// 0057d159  83ec08               sub esp, 8
// 0057d15c  8bcc                 mov ecx, esp
// 0057d15e  89642410             mov dword ptr [esp + 0x10], esp
// 0057d162  50                   push eax
// 0057d163  e88845e9ff           call 0x4116f0
// 0057d168  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0057d16c  e8dffdffff           call 0x57cf50
// 0057d171  50                   push eax
// 0057d172  8d4c2418             lea ecx, [esp + 0x18]
// 0057d176  68d8048300           push 0x8304d8
// 0057d17b  51                   push ecx
// 0057d17c  ff1530288000         call dword ptr [0x802830]
// 0057d182  83c40c               add esp, 0xc
// 0057d185  8d542414             lea edx, [esp + 0x14]
// 0057d189  52                   push edx
// 0057d18a  eb39                 jmp 0x57d1c5
// 0057d18c  8b4608               mov eax, dword ptr [esi + 8]
// 0057d18f  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057d193  50                   push eax
// 0057d194  8bce                 mov ecx, esi
// 0057d196  ff155c248000         call dword ptr [0x80245c]
// 0057d19c  8bc6                 mov eax, esi
// 0057d19e  5e                   pop esi
// 0057d19f  5b                   pop ebx
// 0057d1a0  83c42c               add esp, 0x2c
// 0057d1a3  c20800               ret 8
// 0057d1a6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057d1a9  8b742438             mov esi, dword ptr [esp + 0x38]
// 0057d1ad  51                   push ecx
// 0057d1ae  8bce                 mov ecx, esi
// 0057d1b0  ff155c248000         call dword ptr [0x80245c]
// 0057d1b6  8bc6                 mov eax, esi
// 0057d1b8  5e                   pop esi
// 0057d1b9  5b                   pop ebx
// 0057d1ba  83c42c               add esp, 0x2c
// 0057d1bd  c20800               ret 8
// 0057d1c0  6816b78000           push 0x80b716
// 0057d1c5  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057d1c9  8bce                 mov ecx, esi
// 0057d1cb  ff1558248000         call dword ptr [0x802458]
// 0057d1d1  8bc6                 mov eax, esi
// 0057d1d3  5e                   pop esi
// 0057d1d4  5b                   pop ebx
// 0057d1d5  83c42c               add esp, 0x2c
// 0057d1d8  c20800               ret 8
// 0057d1db  90                   nop 
// 0057d1dc  c0d157               rcl cl, 0x57
// 0057d1df  00f9                 add cl, bh
// 0057d1e1  d05700               rcl byte ptr [edi]
// 0057d1e4  8cd1                 mov ecx, ss
// 0057d1e6  57                   push edi
// 0057d1e7  00a6d1570072         add byte ptr [esi + 0x720057d1], ah
// 0057d1ed  d05700               rcl byte ptr [edi]
// library openrbx-client-dll/App\v8xml\XmlElement.cpp (function ?toString@XmlNameValuePair@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVXmlWriter@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp

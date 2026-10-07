// roc 2012-06 0059bfd0  unit: VAuthoringSettings::?$FactoryProduct  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059bfd0
//
// 0059bfd0  55                   push ebp
// 0059bfd1  56                   push esi
// 0059bfd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059bfd6  57                   push edi
// 0059bfd7  33ff                 xor edi, edi
// 0059bfd9  8be9                 mov ebp, ecx
// 0059bfdb  3bf7                 cmp esi, edi
// 0059bfdd  747b                 je 0x59c05a
// 0059bfdf  8b4640               mov eax, dword ptr [esi + 0x40]
// 0059bfe2  83f801               cmp eax, 1
// 0059bfe5  7551                 jne 0x59c038
// 0059bfe7  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059bfea  3bc7                 cmp eax, edi
// 0059bfec  746c                 je 0x59c05a
// 0059bfee  ff4804               dec dword ptr [eax + 4]
// 0059bff1  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059bff4  397804               cmp dword ptr [eax + 4], edi
// 0059bff7  7561                 jne 0x59c05a
// 0059bff9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0059bffd  8b00                 mov eax, dword ptr [eax]
// 0059bfff  53                   push ebx
// 0059c000  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0059c004  57                   push edi
// 0059c005  53                   push ebx
// 0059c006  50                   push eax
// 0059c007  ff159c04d900         call dword ptr [0xd9049c]
// 0059c00d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0059c010  83c40c               add esp, 0xc
// 0059c013  57                   push edi
// 0059c014  c70100000000         mov dword ptr [ecx], 0
// 0059c01a  8b5644               mov edx, dword ptr [esi + 0x44]
// 0059c01d  53                   push ebx
// 0059c01e  52                   push edx
// 0059c01f  8d8d6c0f0000         lea ecx, [ebp + 0xf6c]
// 0059c025  e8a6f1ffff           call 0x59b1d0
// 0059c02a  5b                   pop ebx
// 0059c02b  5f                   pop edi
// 0059c02c  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0059c033  5e                   pop esi
// 0059c034  5d                   pop ebp
// 0059c035  c20c00               ret 0xc
// 0059c038  3bc7                 cmp eax, edi
// 0059c03a  751b                 jne 0x59c057
// 0059c03c  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0059c03f  3bc7                 cmp eax, edi
// 0059c041  7417                 je 0x59c05a
// 0059c043  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c047  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059c04b  51                   push ecx
// 0059c04c  52                   push edx
// 0059c04d  50                   push eax
// 0059c04e  ff159c04d900         call dword ptr [0xd9049c]
// 0059c054  83c40c               add esp, 0xc
// 0059c057  897e3c               mov dword ptr [esi + 0x3c], edi
// 0059c05a  5f                   pop edi
// 0059c05b  5e                   pop esi
// 0059c05c  5d                   pop ebp
// 0059c05d  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?FreeInternalPacketData@ReliabilityLayer@RakNet@@AAEXPAUInternalPacket@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp

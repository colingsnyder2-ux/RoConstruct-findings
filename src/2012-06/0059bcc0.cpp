// roc 2012-06 0059bcc0  unit: VAuthoringSettings::?$FactoryProduct  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059bcc0
//
// 0059bcc0  56                   push esi
// 0059bcc1  8bf1                 mov esi, ecx
// 0059bcc3  8b86ec0e0000         mov eax, dword ptr [esi + 0xeec]
// 0059bcc9  57                   push edi
// 0059bcca  33ff                 xor edi, edi
// 0059bccc  3bc7                 cmp eax, edi
// 0059bcce  7428                 je 0x59bcf8
// 0059bcd0  3d00020000           cmp eax, 0x200
// 0059bcd5  761b                 jbe 0x59bcf2
// 0059bcd7  8b86e40e0000         mov eax, dword ptr [esi + 0xee4]
// 0059bcdd  50                   push eax
// 0059bcde  e8d7663e00           call 0x9823ba
// 0059bce3  83c404               add esp, 4
// 0059bce6  89beec0e0000         mov dword ptr [esi + 0xeec], edi
// 0059bcec  89bee40e0000         mov dword ptr [esi + 0xee4], edi
// 0059bcf2  89bee80e0000         mov dword ptr [esi + 0xee8], edi
// 0059bcf8  8b86f80e0000         mov eax, dword ptr [esi + 0xef8]
// 0059bcfe  3bc7                 cmp eax, edi
// 0059bd00  7428                 je 0x59bd2a
// 0059bd02  3d00020000           cmp eax, 0x200
// 0059bd07  761b                 jbe 0x59bd24
// 0059bd09  8b8ef00e0000         mov ecx, dword ptr [esi + 0xef0]
// 0059bd0f  51                   push ecx
// 0059bd10  e8a5663e00           call 0x9823ba
// 0059bd15  83c404               add esp, 4
// 0059bd18  89bef80e0000         mov dword ptr [esi + 0xef8], edi
// 0059bd1e  89bef00e0000         mov dword ptr [esi + 0xef0], edi
// 0059bd24  89bef40e0000         mov dword ptr [esi + 0xef4], edi
// 0059bd2a  8b86040f0000         mov eax, dword ptr [esi + 0xf04]
// 0059bd30  3bc7                 cmp eax, edi
// 0059bd32  7428                 je 0x59bd5c
// 0059bd34  3d00020000           cmp eax, 0x200
// 0059bd39  761b                 jbe 0x59bd56
// 0059bd3b  8b96fc0e0000         mov edx, dword ptr [esi + 0xefc]
// 0059bd41  52                   push edx
// 0059bd42  e873663e00           call 0x9823ba
// 0059bd47  83c404               add esp, 4
// 0059bd4a  89be040f0000         mov dword ptr [esi + 0xf04], edi
// 0059bd50  89befc0e0000         mov dword ptr [esi + 0xefc], edi
// 0059bd56  89be000f0000         mov dword ptr [esi + 0xf00], edi
// 0059bd5c  8b86100f0000         mov eax, dword ptr [esi + 0xf10]
// 0059bd62  3bc7                 cmp eax, edi
// 0059bd64  7428                 je 0x59bd8e
// 0059bd66  3d00020000           cmp eax, 0x200
// 0059bd6b  761b                 jbe 0x59bd88
// 0059bd6d  8b86080f0000         mov eax, dword ptr [esi + 0xf08]
// 0059bd73  50                   push eax
// 0059bd74  e841663e00           call 0x9823ba
// 0059bd79  83c404               add esp, 4
// 0059bd7c  89be100f0000         mov dword ptr [esi + 0xf10], edi
// 0059bd82  89be080f0000         mov dword ptr [esi + 0xf08], edi
// 0059bd88  89be0c0f0000         mov dword ptr [esi + 0xf0c], edi
// 0059bd8e  8b861c0f0000         mov eax, dword ptr [esi + 0xf1c]
// 0059bd94  3bc7                 cmp eax, edi
// 0059bd96  7428                 je 0x59bdc0
// 0059bd98  3d00020000           cmp eax, 0x200
// 0059bd9d  761b                 jbe 0x59bdba
// 0059bd9f  8b8e140f0000         mov ecx, dword ptr [esi + 0xf14]
// 0059bda5  51                   push ecx
// 0059bda6  e80f663e00           call 0x9823ba
// 0059bdab  83c404               add esp, 4
// 0059bdae  89be1c0f0000         mov dword ptr [esi + 0xf1c], edi
// 0059bdb4  89be140f0000         mov dword ptr [esi + 0xf14], edi
// 0059bdba  89be180f0000         mov dword ptr [esi + 0xf18], edi
// 0059bdc0  89be200f0000         mov dword ptr [esi + 0xf20], edi
// 0059bdc6  5f                   pop edi
// 0059bdc7  5e                   pop esi
// 0059bdc8  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?ResetPacketsAndDatagrams@ReliabilityLayer@RakNet@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp

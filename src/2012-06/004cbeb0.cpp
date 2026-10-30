// roc 2012-06 004cbeb0  unit: Ogre::UFileInfo::V?$vector::?$SharedPtr  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cbeb0
//
// 004cbeb0  53                   push ebx
// 004cbeb1  8b1d042eb200         mov ebx, dword ptr [0xb22e04]
// 004cbeb7  56                   push esi
// 004cbeb8  8bf1                 mov esi, ecx
// 004cbeba  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cbebd  83e800               sub eax, 0
// 004cbec0  7440                 je 0x4cbf02
// 004cbec2  83e801               sub eax, 1
// 004cbec5  741a                 je 0x4cbee1
// 004cbec7  83e801               sub eax, 1
// 004cbeca  754f                 jne 0x4cbf1b
// 004cbecc  8b4604               mov eax, dword ptr [esi + 4]
// 004cbecf  50                   push eax
// 004cbed0  ffd3                 call ebx
// 004cbed2  8b5608               mov edx, dword ptr [esi + 8]
// 004cbed5  83c404               add esp, 4
// 004cbed8  52                   push edx
// 004cbed9  ffd3                 call ebx
// 004cbedb  83c404               add esp, 4
// 004cbede  5e                   pop esi
// 004cbedf  5b                   pop ebx
// 004cbee0  c3                   ret 
// 004cbee1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cbee4  85c9                 test ecx, ecx
// 004cbee6  7433                 je 0x4cbf1b
// 004cbee8  e8a3faffff           call 0x4cb990
// 004cbeed  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cbef0  51                   push ecx
// 004cbef1  ffd3                 call ebx
// 004cbef3  8b5608               mov edx, dword ptr [esi + 8]
// 004cbef6  83c404               add esp, 4
// 004cbef9  52                   push edx
// 004cbefa  ffd3                 call ebx
// 004cbefc  83c404               add esp, 4
// 004cbeff  5e                   pop esi
// 004cbf00  5b                   pop ebx
// 004cbf01  c3                   ret 
// 004cbf02  57                   push edi
// 004cbf03  8b7e04               mov edi, dword ptr [esi + 4]
// 004cbf06  85ff                 test edi, edi
// 004cbf08  7410                 je 0x4cbf1a
// 004cbf0a  8bcf                 mov ecx, edi
// 004cbf0c  e87ffaffff           call 0x4cb990
// 004cbf11  57                   push edi
// 004cbf12  e8fd614b00           call 0x982114
// 004cbf17  83c404               add esp, 4
// 004cbf1a  5f                   pop edi
// 004cbf1b  8b5608               mov edx, dword ptr [esi + 8]
// 004cbf1e  52                   push edx
// 004cbf1f  ffd3                 call ebx
// 004cbf21  83c404               add esp, 4
// 004cbf24  5e                   pop esi
// 004cbf25  5b                   pop ebx
// 004cbf26  c3                   ret 
// library ogre-1.7.0/OgreScriptLexer.cpp (function ?destroy@?$SharedPtr@V?$vector@V?$SharedPtr@UScriptToken@Ogre@@@Ogre@@V?$allocator@V?$SharedPtr@UScriptToken@Ogre@@@Ogre@@@std@@@std@@@Ogre@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptLexer.cpp

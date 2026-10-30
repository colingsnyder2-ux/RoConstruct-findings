// roc 2009-06 004998a0  unit: Ogre::RbxArchive  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004998a0
//
// 004998a0  6aff                 push -1
// 004998a2  685d6a8500           push 0x856a5d
// 004998a7  64a100000000         mov eax, dword ptr fs:[0]
// 004998ad  50                   push eax
// 004998ae  64892500000000       mov dword ptr fs:[0], esp
// 004998b5  83ec24               sub esp, 0x24
// 004998b8  53                   push ebx
// 004998b9  56                   push esi
// 004998ba  57                   push edi
// 004998bb  33db                 xor ebx, ebx
// 004998bd  6a18                 push 0x18
// 004998bf  8bf9                 mov edi, ecx
// 004998c1  895c243c             mov dword ptr [esp + 0x3c], ebx
// 004998c5  895c2410             mov dword ptr [esp + 0x10], ebx
// 004998c9  e86af12700           call 0x718a38
// 004998ce  83c404               add esp, 4
// 004998d1  89442410             mov dword ptr [esp + 0x10], eax
// 004998d5  c744243801000000     mov dword ptr [esp + 0x38], 1
// 004998dd  3bc3                 cmp eax, ebx
// 004998df  7409                 je 0x4998ea
// 004998e1  8bc8                 mov ecx, eax
// 004998e3  e8280d1c00           call 0x65a610
// 004998e8  eb02                 jmp 0x4998ec
// 004998ea  33c0                 xor eax, eax
// 004998ec  8b742440             mov esi, dword ptr [esp + 0x40]
// 004998f0  6a04                 push 4
// 004998f2  885c243c             mov byte ptr [esp + 0x3c], bl
// 004998f6  c706d0fb8b00         mov dword ptr [esi], 0x8bfbd0
// 004998fc  894604               mov dword ptr [esi + 4], eax
// 004998ff  e834f12700           call 0x718a38
// 00499904  83c404               add esp, 4
// 00499907  3bc3                 cmp eax, ebx
// 00499909  7408                 je 0x499913
// 0049990b  c70001000000         mov dword ptr [eax], 1
// 00499911  eb02                 jmp 0x499915
// 00499913  33c0                 xor eax, eax
// 00499915  894608               mov dword ptr [esi + 8], eax
// 00499918  6844fc8b00           push 0x8bfc44
// 0049991d  8d4c2418             lea ecx, [esp + 0x18]
// 00499921  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00499925  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0049992d  ff15b4e48900         call dword ptr [0x89e4b4]
// 00499933  8b4604               mov eax, dword ptr [esi + 4]
// 00499936  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0049993a  53                   push ebx
// 0049993b  50                   push eax
// 0049993c  8b442450             mov eax, dword ptr [esp + 0x50]
// 00499940  50                   push eax
// 00499941  51                   push ecx
// 00499942  8d542424             lea edx, [esp + 0x24]
// 00499946  52                   push edx
// 00499947  8bcf                 mov ecx, edi
// 00499949  c744244c02000000     mov dword ptr [esp + 0x4c], 2
// 00499951  e82afaffff           call 0x499380
// 00499956  8d4c2414             lea ecx, [esp + 0x14]
// 0049995a  885c2438             mov byte ptr [esp + 0x38], bl
// 0049995e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00499964  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00499968  5f                   pop edi
// 00499969  8bc6                 mov eax, esi
// 0049996b  5e                   pop esi
// 0049996c  5b                   pop ebx
// 0049996d  64890d00000000       mov dword ptr fs:[0], ecx
// 00499974  83c430               add esp, 0x30
// 00499977  c20c00               ret 0xc
// copied from an identical function in another client (function ?list@FileSystemArchive@Ogre@@UAE?AV?$SharedPtr@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@2@_N0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreFileSystem.cpp
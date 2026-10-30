// roc 2009-06 00499980  unit: Ogre::RbxArchive  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00499980
//
// 00499980  6aff                 push -1
// 00499982  689d6a8500           push 0x856a9d
// 00499987  64a100000000         mov eax, dword ptr fs:[0]
// 0049998d  50                   push eax
// 0049998e  64892500000000       mov dword ptr fs:[0], esp
// 00499995  83ec24               sub esp, 0x24
// 00499998  53                   push ebx
// 00499999  56                   push esi
// 0049999a  57                   push edi
// 0049999b  33db                 xor ebx, ebx
// 0049999d  6a18                 push 0x18
// 0049999f  8bf9                 mov edi, ecx
// 004999a1  895c243c             mov dword ptr [esp + 0x3c], ebx
// 004999a5  895c2410             mov dword ptr [esp + 0x10], ebx
// 004999a9  e88af02700           call 0x718a38
// 004999ae  83c404               add esp, 4
// 004999b1  89442410             mov dword ptr [esp + 0x10], eax
// 004999b5  c744243801000000     mov dword ptr [esp + 0x38], 1
// 004999bd  3bc3                 cmp eax, ebx
// 004999bf  7409                 je 0x4999ca
// 004999c1  8bc8                 mov ecx, eax
// 004999c3  e8480c1c00           call 0x65a610
// 004999c8  eb02                 jmp 0x4999cc
// 004999ca  33c0                 xor eax, eax
// 004999cc  8b742440             mov esi, dword ptr [esp + 0x40]
// 004999d0  6a04                 push 4
// 004999d2  885c243c             mov byte ptr [esp + 0x3c], bl
// 004999d6  c706e0fb8b00         mov dword ptr [esi], 0x8bfbe0
// 004999dc  894604               mov dword ptr [esi + 4], eax
// 004999df  e854f02700           call 0x718a38
// 004999e4  83c404               add esp, 4
// 004999e7  3bc3                 cmp eax, ebx
// 004999e9  7408                 je 0x4999f3
// 004999eb  c70001000000         mov dword ptr [eax], 1
// 004999f1  eb02                 jmp 0x4999f5
// 004999f3  33c0                 xor eax, eax
// 004999f5  894608               mov dword ptr [esi + 8], eax
// 004999f8  6844fc8b00           push 0x8bfc44
// 004999fd  8d4c2418             lea ecx, [esp + 0x18]
// 00499a01  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00499a05  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00499a0d  ff15b4e48900         call dword ptr [0x89e4b4]
// 00499a13  8b4604               mov eax, dword ptr [esi + 4]
// 00499a16  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00499a1a  50                   push eax
// 00499a1b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00499a1f  53                   push ebx
// 00499a20  50                   push eax
// 00499a21  51                   push ecx
// 00499a22  8d542424             lea edx, [esp + 0x24]
// 00499a26  52                   push edx
// 00499a27  8bcf                 mov ecx, edi
// 00499a29  c744244c02000000     mov dword ptr [esp + 0x4c], 2
// 00499a31  e84af9ffff           call 0x499380
// 00499a36  8d4c2414             lea ecx, [esp + 0x14]
// 00499a3a  885c2438             mov byte ptr [esp + 0x38], bl
// 00499a3e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00499a44  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00499a48  5f                   pop edi
// 00499a49  8bc6                 mov eax, esi
// 00499a4b  5e                   pop esi
// 00499a4c  5b                   pop ebx
// 00499a4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00499a54  83c430               add esp, 0x30
// 00499a57  c20c00               ret 0xc
// copied from an identical function in another client (function ?listFileInfo@FileSystemArchive@Ogre@@UAE?AV?$SharedPtr@V?$vector@UFileInfo@Ogre@@V?$allocator@UFileInfo@Ogre@@@std@@@std@@@2@_N0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreFileSystem.cpp
// roc 2012-06 004e4240  unit: Ogre::VGpuProgramParameters::?$SharedPtr  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e4240
//
// 004e4240  53                   push ebx
// 004e4241  8b1d042eb200         mov ebx, dword ptr [0xb22e04]
// 004e4247  56                   push esi
// 004e4248  8bf1                 mov esi, ecx
// 004e424a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004e424d  83e800               sub eax, 0
// 004e4250  7441                 je 0x4e4293
// 004e4252  83e801               sub eax, 1
// 004e4255  741a                 je 0x4e4271
// 004e4257  83e801               sub eax, 1
// 004e425a  754e                 jne 0x4e42aa
// 004e425c  8b4604               mov eax, dword ptr [esi + 4]
// 004e425f  50                   push eax
// 004e4260  ffd3                 call ebx
// 004e4262  8b5608               mov edx, dword ptr [esi + 8]
// 004e4265  83c404               add esp, 4
// 004e4268  52                   push edx
// 004e4269  ffd3                 call ebx
// 004e426b  83c404               add esp, 4
// 004e426e  5e                   pop esi
// 004e426f  5b                   pop ebx
// 004e4270  c3                   ret 
// 004e4271  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4274  85c9                 test ecx, ecx
// 004e4276  7432                 je 0x4e42aa
// 004e4278  ff15d835b200         call dword ptr [0xb235d8]
// 004e427e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e4281  51                   push ecx
// 004e4282  ffd3                 call ebx
// 004e4284  8b5608               mov edx, dword ptr [esi + 8]
// 004e4287  83c404               add esp, 4
// 004e428a  52                   push edx
// 004e428b  ffd3                 call ebx
// 004e428d  83c404               add esp, 4
// 004e4290  5e                   pop esi
// 004e4291  5b                   pop ebx
// 004e4292  c3                   ret 
// 004e4293  57                   push edi
// 004e4294  8b7e04               mov edi, dword ptr [esi + 4]
// 004e4297  85ff                 test edi, edi
// 004e4299  740e                 je 0x4e42a9
// 004e429b  8bcf                 mov ecx, edi
// 004e429d  ff15d835b200         call dword ptr [0xb235d8]
// 004e42a3  57                   push edi
// 004e42a4  ffd3                 call ebx
// 004e42a6  83c404               add esp, 4
// 004e42a9  5f                   pop edi
// 004e42aa  8b5608               mov edx, dword ptr [esi + 8]
// 004e42ad  52                   push edx
// 004e42ae  ffd3                 call ebx
// 004e42b0  83c404               add esp, 4
// 004e42b3  5e                   pop esi
// 004e42b4  5b                   pop ebx
// 004e42b5  c3                   ret 
// library ogre-1.7.0/OgreGpuProgramUsage.cpp (function ?destroy@?$SharedPtr@VGpuProgramParameters@Ogre@@@Ogre@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreGpuProgramUsage.cpp

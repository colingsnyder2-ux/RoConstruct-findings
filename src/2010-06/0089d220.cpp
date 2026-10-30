// roc 2010-06 0089d220  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 1198 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089d220
//
// 0089d220  6aff                 push -1
// 0089d222  6816c39b00           push 0x9bc316
// 0089d227  64a100000000         mov eax, dword ptr fs:[0]
// 0089d22d  50                   push eax
// 0089d22e  83ec08               sub esp, 8
// 0089d231  55                   push ebp
// 0089d232  56                   push esi
// 0089d233  57                   push edi
// 0089d234  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089d239  33c4                 xor eax, esp
// 0089d23b  50                   push eax
// 0089d23c  8d442418             lea eax, [esp + 0x18]
// 0089d240  64a300000000         mov dword ptr fs:[0], eax
// 0089d246  8bf1                 mov esi, ecx
// 0089d248  e8d3f8ffff           call 0x89cb20
// 0089d24d  e81e88ffff           call 0x895a70
// 0089d252  8bc8                 mov ecx, eax
// 0089d254  e8f76effff           call 0x894150
// 0089d259  85c0                 test eax, eax
// 0089d25b  0f8467030000         je 0x89d5c8
// 0089d261  51                   push ecx
// 0089d262  8bcc                 mov ecx, esp
// 0089d264  89642414             mov dword ptr [esp + 0x14], esp
// 0089d268  33ff                 xor edi, edi
// 0089d26a  68280fa700           push 0xa70f28
// 0089d26f  89becc000000         mov dword ptr [esi + 0xcc], edi
// 0089d275  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d27b  51                   push ecx
// 0089d27c  8bcc                 mov ecx, esp
// 0089d27e  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089d282  681c0fa700           push 0xa70f1c
// 0089d287  897c242c             mov dword ptr [esp + 0x2c], edi
// 0089d28b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d291  c644242801           mov byte ptr [esp + 0x28], 1
// 0089d296  e8d587ffff           call 0x895a70
// 0089d29b  83cfff               or edi, 0xffffffff
// 0089d29e  8bc8                 mov ecx, eax
// 0089d2a0  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d2a4  e8c780ffff           call 0x895370
// 0089d2a9  894648               mov dword ptr [esi + 0x48], eax
// 0089d2ac  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089d2af  3bc7                 cmp eax, edi
// 0089d2b1  7503                 jne 0x89d2b6
// 0089d2b3  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089d2b6  51                   push ecx
// 0089d2b7  8bcc                 mov ecx, esp
// 0089d2b9  89642418             mov dword ptr [esp + 0x18], esp
// 0089d2bd  68100fa700           push 0xa70f10
// 0089d2c2  898654010000         mov dword ptr [esi + 0x154], eax
// 0089d2c8  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d2ce  51                   push ecx
// 0089d2cf  8bcc                 mov ecx, esp
// 0089d2d1  89642418             mov dword ptr [esp + 0x18], esp
// 0089d2d5  681c0fa700           push 0xa70f1c
// 0089d2da  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0089d2e2  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d2e8  c644242803           mov byte ptr [esp + 0x28], 3
// 0089d2ed  e87e87ffff           call 0x895a70
// 0089d2f2  8bc8                 mov ecx, eax
// 0089d2f4  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d2f8  e87380ffff           call 0x895370
// 0089d2fd  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0089d303  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0089d309  3bc7                 cmp eax, edi
// 0089d30b  7506                 jne 0x89d313
// 0089d30d  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0089d313  51                   push ecx
// 0089d314  8bcc                 mov ecx, esp
// 0089d316  89642418             mov dword ptr [esp + 0x18], esp
// 0089d31a  68040fa700           push 0xa70f04
// 0089d31f  898648010000         mov dword ptr [esi + 0x148], eax
// 0089d325  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d32b  51                   push ecx
// 0089d32c  8bcc                 mov ecx, esp
// 0089d32e  89642418             mov dword ptr [esp + 0x18], esp
// 0089d332  681c0fa700           push 0xa70f1c
// 0089d337  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0089d33f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d345  c644242805           mov byte ptr [esp + 0x28], 5
// 0089d34a  e82187ffff           call 0x895a70
// 0089d34f  8bc8                 mov ecx, eax
// 0089d351  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d355  e81680ffff           call 0x895370
// 0089d35a  898630010000         mov dword ptr [esi + 0x130], eax
// 0089d360  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0089d366  3bc7                 cmp eax, edi
// 0089d368  7506                 jne 0x89d370
// 0089d36a  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0089d370  51                   push ecx
// 0089d371  8bcc                 mov ecx, esp
// 0089d373  89642418             mov dword ptr [esp + 0x18], esp
// 0089d377  684c58a600           push 0xa6584c
// 0089d37c  898660010000         mov dword ptr [esi + 0x160], eax
// 0089d382  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0089d38c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d392  51                   push ecx
// 0089d393  8bcc                 mov ecx, esp
// 0089d395  89642418             mov dword ptr [esp + 0x18], esp
// 0089d399  684458a600           push 0xa65844
// 0089d39e  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 0089d3a6  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d3ac  c644242807           mov byte ptr [esp + 0x28], 7
// 0089d3b1  e8ba86ffff           call 0x895a70
// 0089d3b6  8bc8                 mov ecx, eax
// 0089d3b8  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d3bc  e8af7fffff           call 0x895370
// 0089d3c1  8d6e04               lea ebp, [esi + 4]
// 0089d3c4  50                   push eax
// 0089d3c5  8bcd                 mov ecx, ebp
// 0089d3c7  e8a466f4ff           call 0x7e3a70
// 0089d3cc  55                   push ebp
// 0089d3cd  8d4e24               lea ecx, [esi + 0x24]
// 0089d3d0  e85b5cf4ff           call 0x7e3030
// 0089d3d5  51                   push ecx
// 0089d3d6  8bcc                 mov ecx, esp
// 0089d3d8  89642418             mov dword ptr [esp + 0x18], esp
// 0089d3dc  681866a600           push 0xa66618
// 0089d3e1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d3e7  51                   push ecx
// 0089d3e8  8bcc                 mov ecx, esp
// 0089d3ea  89642418             mov dword ptr [esp + 0x18], esp
// 0089d3ee  688868a100           push 0xa16888
// 0089d3f3  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0089d3fb  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d401  c644242809           mov byte ptr [esp + 0x28], 9
// 0089d406  e86586ffff           call 0x895a70
// 0089d40b  8bc8                 mov ecx, eax
// 0089d40d  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d411  e85a7fffff           call 0x895370
// 0089d416  51                   push ecx
// 0089d417  8bcc                 mov ecx, esp
// 0089d419  89642418             mov dword ptr [esp + 0x18], esp
// 0089d41d  683465a600           push 0xa66534
// 0089d422  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0089d428  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d42e  51                   push ecx
// 0089d42f  8bcc                 mov ecx, esp
// 0089d431  89642418             mov dword ptr [esp + 0x18], esp
// 0089d435  688868a100           push 0xa16888
// 0089d43a  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 0089d442  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d448  c64424280b           mov byte ptr [esp + 0x28], 0xb
// 0089d44d  e81e86ffff           call 0x895a70
// 0089d452  8bc8                 mov ecx, eax
// 0089d454  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d458  e8137fffff           call 0x895370
// 0089d45d  51                   push ecx
// 0089d45e  8bcc                 mov ecx, esp
// 0089d460  89642418             mov dword ptr [esp + 0x18], esp
// 0089d464  688c65a600           push 0xa6658c
// 0089d469  894678               mov dword ptr [esi + 0x78], eax
// 0089d46c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d472  51                   push ecx
// 0089d473  8bcc                 mov ecx, esp
// 0089d475  89642418             mov dword ptr [esp + 0x18], esp
// 0089d479  688868a100           push 0xa16888
// 0089d47e  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 0089d486  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d48c  c64424280d           mov byte ptr [esp + 0x28], 0xd
// 0089d491  e8da85ffff           call 0x895a70
// 0089d496  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d49a  8bc8                 mov ecx, eax
// 0089d49c  e8cf7effff           call 0x895370
// 0089d4a1  51                   push ecx
// 0089d4a2  8bcc                 mov ecx, esp
// 0089d4a4  89642418             mov dword ptr [esp + 0x18], esp
// 0089d4a8  687466a600           push 0xa66674
// 0089d4ad  898684000000         mov dword ptr [esi + 0x84], eax
// 0089d4b3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d4b9  51                   push ecx
// 0089d4ba  8bcc                 mov ecx, esp
// 0089d4bc  89642418             mov dword ptr [esp + 0x18], esp
// 0089d4c0  688868a100           push 0xa16888
// 0089d4c5  c744242c0e000000     mov dword ptr [esp + 0x2c], 0xe
// 0089d4cd  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d4d3  c64424280f           mov byte ptr [esp + 0x28], 0xf
// 0089d4d8  e89385ffff           call 0x895a70
// 0089d4dd  8bc8                 mov ecx, eax
// 0089d4df  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d4e3  e8887effff           call 0x895370
// 0089d4e8  51                   push ecx
// 0089d4e9  8bcc                 mov ecx, esp
// 0089d4eb  89642418             mov dword ptr [esp + 0x18], esp
// 0089d4ef  683458a600           push 0xa65834
// 0089d4f4  89860c020000         mov dword ptr [esi + 0x20c], eax
// 0089d4fa  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d500  51                   push ecx
// 0089d501  8bcc                 mov ecx, esp
// 0089d503  89642418             mov dword ptr [esp + 0x18], esp
// 0089d507  684458a600           push 0xa65844
// 0089d50c  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 0089d514  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d51a  c644242811           mov byte ptr [esp + 0x28], 0x11
// 0089d51f  e84c85ffff           call 0x895a70
// 0089d524  8bc8                 mov ecx, eax
// 0089d526  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d52a  e8417effff           call 0x895370
// 0089d52f  51                   push ecx
// 0089d530  8bcc                 mov ecx, esp
// 0089d532  89642418             mov dword ptr [esp + 0x18], esp
// 0089d536  683458a600           push 0xa65834
// 0089d53b  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0089d541  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d547  51                   push ecx
// 0089d548  8bcc                 mov ecx, esp
// 0089d54a  89642418             mov dword ptr [esp + 0x18], esp
// 0089d54e  684458a600           push 0xa65844
// 0089d553  c744242c12000000     mov dword ptr [esp + 0x2c], 0x12
// 0089d55b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d561  c644242813           mov byte ptr [esp + 0x28], 0x13
// 0089d566  e80585ffff           call 0x895a70
// 0089d56b  8bc8                 mov ecx, eax
// 0089d56d  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d571  e8fa7dffff           call 0x895370
// 0089d576  51                   push ecx
// 0089d577  8bcc                 mov ecx, esp
// 0089d579  89642418             mov dword ptr [esp + 0x18], esp
// 0089d57d  682458a600           push 0xa65824
// 0089d582  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0089d588  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d58e  51                   push ecx
// 0089d58f  8bcc                 mov ecx, esp
// 0089d591  89642418             mov dword ptr [esp + 0x18], esp
// 0089d595  684458a600           push 0xa65844
// 0089d59a  c744242c14000000     mov dword ptr [esp + 0x2c], 0x14
// 0089d5a2  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0089d5a8  c644242815           mov byte ptr [esp + 0x28], 0x15
// 0089d5ad  e8be84ffff           call 0x895a70
// 0089d5b2  8bc8                 mov ecx, eax
// 0089d5b4  897c2428             mov dword ptr [esp + 0x28], edi
// 0089d5b8  e8b37dffff           call 0x895370
// 0089d5bd  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0089d5c3  e9e9000000           jmp 0x89d6b1
// 0089d5c8  e85365f4ff           call 0x7e3b20
// 0089d5cd  6a21                 push 0x21
// 0089d5cf  8bc8                 mov ecx, eax
// 0089d5d1  e8da5cf4ff           call 0x7e32b0
// 0089d5d6  898690000000         mov dword ptr [esi + 0x90], eax
// 0089d5dc  e83f65f4ff           call 0x7e3b20
// 0089d5e1  6a12                 push 0x12
// 0089d5e3  8bc8                 mov ecx, eax
// 0089d5e5  e8c65cf4ff           call 0x7e32b0
// 0089d5ea  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0089d5f0  c746483b619c00       mov dword ptr [esi + 0x48], 0x9c613b
// 0089d5f7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089d5fa  83f8ff               cmp eax, -1
// 0089d5fd  7503                 jne 0x89d602
// 0089d5ff  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089d602  898654010000         mov dword ptr [esi + 0x154], eax
// 0089d608  b800359a00           mov eax, 0x9a3500
// 0089d60d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0089d613  898648010000         mov dword ptr [esi + 0x148], eax
// 0089d619  b875a6f100           mov eax, 0xf1a675
// 0089d61e  68ffc06f00           push 0x6fc0ff
// 0089d623  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0089d629  898630010000         mov dword ptr [esi + 0x130], eax
// 0089d62f  898660010000         mov dword ptr [esi + 0x160], eax
// 0089d635  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0089d63f  e82c64f4ff           call 0x7e3a70
// 0089d644  6800008000           push 0x800000
// 0089d649  8d8e00010000         lea ecx, [esi + 0x100]
// 0089d64f  e81c64f4ff           call 0x7e3a70
// 0089d654  d905e026a100         fld dword ptr [0xa126e0]
// 0089d65a  51                   push ecx
// 0089d65b  d91c24               fstp dword ptr [esp]
// 0089d65e  68fcfdfe00           push 0xfefdfc
// 0089d663  68c4dafa00           push 0xfadac4
// 0089d668  8d4e04               lea ecx, [esi + 4]
// 0089d66b  e8a059f4ff           call 0x7e3010
// 0089d670  d905e026a100         fld dword ptr [0xa126e0]
// 0089d676  51                   push ecx
// 0089d677  d91c24               fstp dword ptr [esp]
// 0089d67a  68c4dafa00           push 0xfadac4
// 0089d67f  689ebef500           push 0xf5be9e
// 0089d684  8d4e24               lea ecx, [esi + 0x24]
// 0089d687  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 0089d691  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0089d698  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 0089d6a2  e86959f4ff           call 0x7e3010
// 0089d6a7  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 0089d6b1  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0089d6bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089d6bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0089d6c6  59                   pop ecx
// 0089d6c7  5f                   pop edi
// 0089d6c8  5e                   pop esi
// 0089d6c9  5d                   pop ebp
// 0089d6ca  83c414               add esp, 0x14
// 0089d6cd  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2007@CXTPTabPaintManager@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
// roc 2008-06 0079bfd0  unit: CXTPTabPaintManager::CColorSet  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bfd0
//
// 0079bfd0  56                   push esi
// 0079bfd1  57                   push edi
// 0079bfd2  8bf1                 mov esi, ecx
// 0079bfd4  e83759f4ff           call 0x6e1910
// 0079bfd9  e8623df4ff           call 0x6dfd40
// 0079bfde  6a10                 push 0x10
// 0079bfe0  8bc8                 mov ecx, eax
// 0079bfe2  e83935f4ff           call 0x6df520
// 0079bfe7  894648               mov dword ptr [esi + 0x48], eax
// 0079bfea  e8513df4ff           call 0x6dfd40
// 0079bfef  6a0f                 push 0xf
// 0079bff1  8bc8                 mov ecx, eax
// 0079bff3  8d7e04               lea edi, [esi + 4]
// 0079bff6  e82535f4ff           call 0x6df520
// 0079bffb  50                   push eax
// 0079bffc  8bcf                 mov ecx, edi
// 0079bffe  e88d3cf4ff           call 0x6dfc90
// 0079c003  e8383df4ff           call 0x6dfd40
// 0079c008  6a0f                 push 0xf
// 0079c00a  8bc8                 mov ecx, eax
// 0079c00c  e80f35f4ff           call 0x6df520
// 0079c011  894654               mov dword ptr [esi + 0x54], eax
// 0079c014  e8273df4ff           call 0x6dfd40
// 0079c019  6a0f                 push 0xf
// 0079c01b  8bc8                 mov ecx, eax
// 0079c01d  e8fe34f4ff           call 0x6df520
// 0079c022  894660               mov dword ptr [esi + 0x60], eax
// 0079c025  e8163df4ff           call 0x6dfd40
// 0079c02a  6a14                 push 0x14
// 0079c02c  8bc8                 mov ecx, eax
// 0079c02e  e8ed34f4ff           call 0x6df520
// 0079c033  89466c               mov dword ptr [esi + 0x6c], eax
// 0079c036  e8053df4ff           call 0x6dfd40
// 0079c03b  6a12                 push 0x12
// 0079c03d  8bc8                 mov ecx, eax
// 0079c03f  e8dc34f4ff           call 0x6df520
// 0079c044  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0079c04a  e8f13cf4ff           call 0x6dfd40
// 0079c04f  6a12                 push 0x12
// 0079c051  8bc8                 mov ecx, eax
// 0079c053  e8c834f4ff           call 0x6df520
// 0079c058  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0079c05e  e8dd3cf4ff           call 0x6dfd40
// 0079c063  6a12                 push 0x12
// 0079c065  8bc8                 mov ecx, eax
// 0079c067  e8b434f4ff           call 0x6df520
// 0079c06c  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0079c072  c786cc00000000008000 mov dword ptr [esi + 0xcc], 0x800000
// 0079c07c  e8bf3cf4ff           call 0x6dfd40
// 0079c081  6a11                 push 0x11
// 0079c083  8bc8                 mov ecx, eax
// 0079c085  e89634f4ff           call 0x6df520
// 0079c08a  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0079c090  e8ab3cf4ff           call 0x6dfd40
// 0079c095  6a05                 push 5
// 0079c097  8bc8                 mov ecx, eax
// 0079c099  e88234f4ff           call 0x6df520
// 0079c09e  50                   push eax
// 0079c09f  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0079c0a5  e8e63bf4ff           call 0x6dfc90
// 0079c0aa  e8913cf4ff           call 0x6dfd40
// 0079c0af  6a0d                 push 0xd
// 0079c0b1  8bc8                 mov ecx, eax
// 0079c0b3  e86834f4ff           call 0x6df520
// 0079c0b8  50                   push eax
// 0079c0b9  8d8e00010000         lea ecx, [esi + 0x100]
// 0079c0bf  e8cc3bf4ff           call 0x6dfc90
// 0079c0c4  e8773cf4ff           call 0x6dfd40
// 0079c0c9  6a10                 push 0x10
// 0079c0cb  8bc8                 mov ecx, eax
// 0079c0cd  e84e34f4ff           call 0x6df520
// 0079c0d2  898648010000         mov dword ptr [esi + 0x148], eax
// 0079c0d8  e8633cf4ff           call 0x6dfd40
// 0079c0dd  6a10                 push 0x10
// 0079c0df  8bc8                 mov ecx, eax
// 0079c0e1  e83a34f4ff           call 0x6df520
// 0079c0e6  898654010000         mov dword ptr [esi + 0x154], eax
// 0079c0ec  e84f3cf4ff           call 0x6dfd40
// 0079c0f1  6a0f                 push 0xf
// 0079c0f3  8bc8                 mov ecx, eax
// 0079c0f5  e82634f4ff           call 0x6df520
// 0079c0fa  898660010000         mov dword ptr [esi + 0x160], eax
// 0079c100  e83b3cf4ff           call 0x6dfd40
// 0079c105  6a0f                 push 0xf
// 0079c107  8bc8                 mov ecx, eax
// 0079c109  e81234f4ff           call 0x6df520
// 0079c10e  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0079c114  e8273cf4ff           call 0x6dfd40
// 0079c119  6a14                 push 0x14
// 0079c11b  8bc8                 mov ecx, eax
// 0079c11d  e8fe33f4ff           call 0x6df520
// 0079c122  898624010000         mov dword ptr [esi + 0x124], eax
// 0079c128  e8133cf4ff           call 0x6dfd40
// 0079c12d  6a10                 push 0x10
// 0079c12f  8bc8                 mov ecx, eax
// 0079c131  e8ea33f4ff           call 0x6df520
// 0079c136  898630010000         mov dword ptr [esi + 0x130], eax
// 0079c13c  e8ff3bf4ff           call 0x6dfd40
// 0079c141  6a15                 push 0x15
// 0079c143  8bc8                 mov ecx, eax
// 0079c145  e8d633f4ff           call 0x6df520
// 0079c14a  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0079c150  e8eb3bf4ff           call 0x6dfd40
// 0079c155  6a12                 push 0x12
// 0079c157  8bc8                 mov ecx, eax
// 0079c159  e8c233f4ff           call 0x6df520
// 0079c15e  898690010000         mov dword ptr [esi + 0x190], eax
// 0079c164  e8d73bf4ff           call 0x6dfd40
// 0079c169  6a12                 push 0x12
// 0079c16b  8bc8                 mov ecx, eax
// 0079c16d  e8ae33f4ff           call 0x6df520
// 0079c172  898678010000         mov dword ptr [esi + 0x178], eax
// 0079c178  e8c33bf4ff           call 0x6dfd40
// 0079c17d  6a10                 push 0x10
// 0079c17f  8bc8                 mov ecx, eax
// 0079c181  e89a33f4ff           call 0x6df520
// 0079c186  898684010000         mov dword ptr [esi + 0x184], eax
// 0079c18c  83c8ff               or eax, 0xffffffff
// 0079c18f  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0079c195  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0079c19b  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0079c1a1  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0079c1a7  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 0079c1ad  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0079c1b3  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 0079c1b9  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0079c1bf  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 0079c1c5  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0079c1cb  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 0079c1d1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0079c1d7  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 0079c1dd  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0079c1e3  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 0079c1e9  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0079c1ef  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 0079c1f5  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0079c1fb  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 0079c201  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 0079c207  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 0079c20d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0079c213  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0079c219  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 0079c21f  898e00020000         mov dword ptr [esi + 0x200], ecx
// 0079c225  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 0079c22b  8996fc010000         mov dword ptr [esi + 0x1fc], edx
// 0079c231  e80a3bf4ff           call 0x6dfd40
// 0079c236  6a05                 push 5
// 0079c238  8bc8                 mov ecx, eax
// 0079c23a  e8e132f4ff           call 0x6df520
// 0079c23f  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0079c245  e8f63af4ff           call 0x6dfd40
// 0079c24a  6a10                 push 0x10
// 0079c24c  8bc8                 mov ecx, eax
// 0079c24e  e8cd32f4ff           call 0x6df520
// 0079c253  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0079c259  e8e23af4ff           call 0x6dfd40
// 0079c25e  6a0f                 push 0xf
// 0079c260  8bc8                 mov ecx, eax
// 0079c262  e8b932f4ff           call 0x6df520
// 0079c267  894678               mov dword ptr [esi + 0x78], eax
// 0079c26a  e8d13af4ff           call 0x6dfd40
// 0079c26f  6a0f                 push 0xf
// 0079c271  8bc8                 mov ecx, eax
// 0079c273  e8a832f4ff           call 0x6df520
// 0079c278  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0079c27e  e8bd3af4ff           call 0x6dfd40
// 0079c283  6a0f                 push 0xf
// 0079c285  8bc8                 mov ecx, eax
// 0079c287  e89432f4ff           call 0x6df520
// 0079c28c  898684000000         mov dword ptr [esi + 0x84], eax
// 0079c292  e8a93af4ff           call 0x6dfd40
// 0079c297  6a0f                 push 0xf
// 0079c299  8bc8                 mov ecx, eax
// 0079c29b  e88032f4ff           call 0x6df520
// 0079c2a0  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079c2a6  898690000000         mov dword ptr [esi + 0x90], eax
// 0079c2ac  e80f4ef7ff           call 0x7110c0
// 0079c2b1  83f807               cmp eax, 7
// 0079c2b4  7511                 jne 0x79c2c7
// 0079c2b6  e8853af4ff           call 0x6dfd40
// 0079c2bb  6a05                 push 5
// 0079c2bd  8bc8                 mov ecx, eax
// 0079c2bf  e85c32f4ff           call 0x6df520
// 0079c2c4  894678               mov dword ptr [esi + 0x78], eax
// 0079c2c7  8b470c               mov eax, dword ptr [edi + 0xc]
// 0079c2ca  894630               mov dword ptr [esi + 0x30], eax
// 0079c2cd  8b4f08               mov ecx, dword ptr [edi + 8]
// 0079c2d0  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0079c2d3  8b5718               mov edx, dword ptr [edi + 0x18]
// 0079c2d6  89563c               mov dword ptr [esi + 0x3c], edx
// 0079c2d9  8b4714               mov eax, dword ptr [edi + 0x14]
// 0079c2dc  894638               mov dword ptr [esi + 0x38], eax
// 0079c2df  d9471c               fld dword ptr [edi + 0x1c]
// 0079c2e2  5f                   pop edi
// 0079c2e3  d95e40               fstp dword ptr [esi + 0x40]
// 0079c2e6  5e                   pop esi
// 0079c2e7  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSet@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

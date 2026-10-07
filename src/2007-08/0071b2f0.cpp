// roc 2007-08 0071b2f0  unit: CXTPTabPaintManager::CColorSet  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b2f0
//
// 0071b2f0  56                   push esi
// 0071b2f1  57                   push edi
// 0071b2f2  8bf1                 mov esi, ecx
// 0071b2f4  e8a7f7f4ff           call 0x66aaa0
// 0071b2f9  e872dcf4ff           call 0x668f70
// 0071b2fe  6a10                 push 0x10
// 0071b300  8bc8                 mov ecx, eax
// 0071b302  e869d4f4ff           call 0x668770
// 0071b307  894648               mov dword ptr [esi + 0x48], eax
// 0071b30a  e861dcf4ff           call 0x668f70
// 0071b30f  6a0f                 push 0xf
// 0071b311  8bc8                 mov ecx, eax
// 0071b313  8d7e04               lea edi, [esi + 4]
// 0071b316  e855d4f4ff           call 0x668770
// 0071b31b  50                   push eax
// 0071b31c  8bcf                 mov ecx, edi
// 0071b31e  e89ddbf4ff           call 0x668ec0
// 0071b323  e848dcf4ff           call 0x668f70
// 0071b328  6a0f                 push 0xf
// 0071b32a  8bc8                 mov ecx, eax
// 0071b32c  e83fd4f4ff           call 0x668770
// 0071b331  894654               mov dword ptr [esi + 0x54], eax
// 0071b334  e837dcf4ff           call 0x668f70
// 0071b339  6a0f                 push 0xf
// 0071b33b  8bc8                 mov ecx, eax
// 0071b33d  e82ed4f4ff           call 0x668770
// 0071b342  894660               mov dword ptr [esi + 0x60], eax
// 0071b345  e826dcf4ff           call 0x668f70
// 0071b34a  6a14                 push 0x14
// 0071b34c  8bc8                 mov ecx, eax
// 0071b34e  e81dd4f4ff           call 0x668770
// 0071b353  89466c               mov dword ptr [esi + 0x6c], eax
// 0071b356  e815dcf4ff           call 0x668f70
// 0071b35b  6a12                 push 0x12
// 0071b35d  8bc8                 mov ecx, eax
// 0071b35f  e80cd4f4ff           call 0x668770
// 0071b364  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0071b36a  e801dcf4ff           call 0x668f70
// 0071b36f  6a12                 push 0x12
// 0071b371  8bc8                 mov ecx, eax
// 0071b373  e8f8d3f4ff           call 0x668770
// 0071b378  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0071b37e  e8eddbf4ff           call 0x668f70
// 0071b383  6a12                 push 0x12
// 0071b385  8bc8                 mov ecx, eax
// 0071b387  e8e4d3f4ff           call 0x668770
// 0071b38c  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0071b392  c786cc00000000008000 mov dword ptr [esi + 0xcc], 0x800000
// 0071b39c  e8cfdbf4ff           call 0x668f70
// 0071b3a1  6a11                 push 0x11
// 0071b3a3  8bc8                 mov ecx, eax
// 0071b3a5  e8c6d3f4ff           call 0x668770
// 0071b3aa  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0071b3b0  e8bbdbf4ff           call 0x668f70
// 0071b3b5  6a05                 push 5
// 0071b3b7  8bc8                 mov ecx, eax
// 0071b3b9  e8b2d3f4ff           call 0x668770
// 0071b3be  50                   push eax
// 0071b3bf  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0071b3c5  e8f6daf4ff           call 0x668ec0
// 0071b3ca  e8a1dbf4ff           call 0x668f70
// 0071b3cf  6a0d                 push 0xd
// 0071b3d1  8bc8                 mov ecx, eax
// 0071b3d3  e898d3f4ff           call 0x668770
// 0071b3d8  50                   push eax
// 0071b3d9  8d8e00010000         lea ecx, [esi + 0x100]
// 0071b3df  e8dcdaf4ff           call 0x668ec0
// 0071b3e4  e887dbf4ff           call 0x668f70
// 0071b3e9  6a10                 push 0x10
// 0071b3eb  8bc8                 mov ecx, eax
// 0071b3ed  e87ed3f4ff           call 0x668770
// 0071b3f2  898648010000         mov dword ptr [esi + 0x148], eax
// 0071b3f8  e873dbf4ff           call 0x668f70
// 0071b3fd  6a10                 push 0x10
// 0071b3ff  8bc8                 mov ecx, eax
// 0071b401  e86ad3f4ff           call 0x668770
// 0071b406  898654010000         mov dword ptr [esi + 0x154], eax
// 0071b40c  e85fdbf4ff           call 0x668f70
// 0071b411  6a0f                 push 0xf
// 0071b413  8bc8                 mov ecx, eax
// 0071b415  e856d3f4ff           call 0x668770
// 0071b41a  898660010000         mov dword ptr [esi + 0x160], eax
// 0071b420  e84bdbf4ff           call 0x668f70
// 0071b425  6a0f                 push 0xf
// 0071b427  8bc8                 mov ecx, eax
// 0071b429  e842d3f4ff           call 0x668770
// 0071b42e  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0071b434  e837dbf4ff           call 0x668f70
// 0071b439  6a14                 push 0x14
// 0071b43b  8bc8                 mov ecx, eax
// 0071b43d  e82ed3f4ff           call 0x668770
// 0071b442  898624010000         mov dword ptr [esi + 0x124], eax
// 0071b448  e823dbf4ff           call 0x668f70
// 0071b44d  6a10                 push 0x10
// 0071b44f  8bc8                 mov ecx, eax
// 0071b451  e81ad3f4ff           call 0x668770
// 0071b456  898630010000         mov dword ptr [esi + 0x130], eax
// 0071b45c  e80fdbf4ff           call 0x668f70
// 0071b461  6a15                 push 0x15
// 0071b463  8bc8                 mov ecx, eax
// 0071b465  e806d3f4ff           call 0x668770
// 0071b46a  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0071b470  e8fbdaf4ff           call 0x668f70
// 0071b475  6a12                 push 0x12
// 0071b477  8bc8                 mov ecx, eax
// 0071b479  e8f2d2f4ff           call 0x668770
// 0071b47e  898690010000         mov dword ptr [esi + 0x190], eax
// 0071b484  e8e7daf4ff           call 0x668f70
// 0071b489  6a12                 push 0x12
// 0071b48b  8bc8                 mov ecx, eax
// 0071b48d  e8ded2f4ff           call 0x668770
// 0071b492  898678010000         mov dword ptr [esi + 0x178], eax
// 0071b498  e8d3daf4ff           call 0x668f70
// 0071b49d  6a10                 push 0x10
// 0071b49f  8bc8                 mov ecx, eax
// 0071b4a1  e8cad2f4ff           call 0x668770
// 0071b4a6  898684010000         mov dword ptr [esi + 0x184], eax
// 0071b4ac  83c8ff               or eax, 0xffffffff
// 0071b4af  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0071b4b5  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0071b4bb  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0071b4c1  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0071b4c7  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 0071b4cd  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0071b4d3  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 0071b4d9  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0071b4df  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 0071b4e5  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0071b4eb  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 0071b4f1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0071b4f7  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 0071b4fd  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0071b503  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 0071b509  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 0071b50f  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 0071b515  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0071b51b  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 0071b521  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 0071b527  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 0071b52d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0071b533  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0071b539  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 0071b53f  898e00020000         mov dword ptr [esi + 0x200], ecx
// 0071b545  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 0071b54b  8996fc010000         mov dword ptr [esi + 0x1fc], edx
// 0071b551  e81adaf4ff           call 0x668f70
// 0071b556  6a05                 push 5
// 0071b558  8bc8                 mov ecx, eax
// 0071b55a  e811d2f4ff           call 0x668770
// 0071b55f  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 0071b565  e806daf4ff           call 0x668f70
// 0071b56a  6a10                 push 0x10
// 0071b56c  8bc8                 mov ecx, eax
// 0071b56e  e8fdd1f4ff           call 0x668770
// 0071b573  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 0071b579  e8f2d9f4ff           call 0x668f70
// 0071b57e  6a0f                 push 0xf
// 0071b580  8bc8                 mov ecx, eax
// 0071b582  e8e9d1f4ff           call 0x668770
// 0071b587  894678               mov dword ptr [esi + 0x78], eax
// 0071b58a  e8e1d9f4ff           call 0x668f70
// 0071b58f  6a0f                 push 0xf
// 0071b591  8bc8                 mov ecx, eax
// 0071b593  e8d8d1f4ff           call 0x668770
// 0071b598  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0071b59e  e8cdd9f4ff           call 0x668f70
// 0071b5a3  6a0f                 push 0xf
// 0071b5a5  8bc8                 mov ecx, eax
// 0071b5a7  e8c4d1f4ff           call 0x668770
// 0071b5ac  898684000000         mov dword ptr [esi + 0x84], eax
// 0071b5b2  e8b9d9f4ff           call 0x668f70
// 0071b5b7  6a0f                 push 0xf
// 0071b5b9  8bc8                 mov ecx, eax
// 0071b5bb  e8b0d1f4ff           call 0x668770
// 0071b5c0  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0071b5c6  898690000000         mov dword ptr [esi + 0x90], eax
// 0071b5cc  e87f44feff           call 0x6ffa50
// 0071b5d1  83f807               cmp eax, 7
// 0071b5d4  7511                 jne 0x71b5e7
// 0071b5d6  e895d9f4ff           call 0x668f70
// 0071b5db  6a05                 push 5
// 0071b5dd  8bc8                 mov ecx, eax
// 0071b5df  e88cd1f4ff           call 0x668770
// 0071b5e4  894678               mov dword ptr [esi + 0x78], eax
// 0071b5e7  8b470c               mov eax, dword ptr [edi + 0xc]
// 0071b5ea  894630               mov dword ptr [esi + 0x30], eax
// 0071b5ed  8b4f08               mov ecx, dword ptr [edi + 8]
// 0071b5f0  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0071b5f3  8b5718               mov edx, dword ptr [edi + 0x18]
// 0071b5f6  89563c               mov dword ptr [esi + 0x3c], edx
// 0071b5f9  8b4714               mov eax, dword ptr [edi + 0x14]
// 0071b5fc  894638               mov dword ptr [esi + 0x38], eax
// 0071b5ff  d9471c               fld dword ptr [edi + 0x1c]
// 0071b602  5f                   pop edi
// 0071b603  d95e40               fstp dword ptr [esi + 0x40]
// 0071b606  5e                   pop esi
// 0071b607  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSet@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp

// roc 2011-06 008f52b0  unit: CXTPTabPaintManager::CColorSetDefault  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f52b0
//
// 008f52b0  56                   push esi
// 008f52b1  57                   push edi
// 008f52b2  8bf1                 mov esi, ecx
// 008f52b4  e817f8ffff           call 0x8f4ad0
// 008f52b9  6afe                 push -2
// 008f52bb  8d8ee0000000         lea ecx, [esi + 0xe0]
// 008f52c1  e86a00f5ff           call 0x845330
// 008f52c6  e81501f5ff           call 0x8453e0
// 008f52cb  6a14                 push 0x14
// 008f52cd  8bc8                 mov ecx, eax
// 008f52cf  e8dcf8f4ff           call 0x844bb0
// 008f52d4  8bf8                 mov edi, eax
// 008f52d6  e80501f5ff           call 0x8453e0
// 008f52db  d905685ba700         fld dword ptr [0xa75b68]
// 008f52e1  51                   push ecx
// 008f52e2  d91c24               fstp dword ptr [esp]
// 008f52e5  57                   push edi
// 008f52e6  6a10                 push 0x10
// 008f52e8  8bc8                 mov ecx, eax
// 008f52ea  e8c1f8f4ff           call 0x844bb0
// 008f52ef  50                   push eax
// 008f52f0  8d8e00010000         lea ecx, [esi + 0x100]
// 008f52f6  e815f6f4ff           call 0x844910
// 008f52fb  e8e000f5ff           call 0x8453e0
// 008f5300  6a12                 push 0x12
// 008f5302  8bc8                 mov ecx, eax
// 008f5304  e8a7f8f4ff           call 0x844bb0
// 008f5309  898690010000         mov dword ptr [esi + 0x190], eax
// 008f530f  e8cc00f5ff           call 0x8453e0
// 008f5314  6a12                 push 0x12
// 008f5316  8bc8                 mov ecx, eax
// 008f5318  e893f8f4ff           call 0x844bb0
// 008f531d  898678010000         mov dword ptr [esi + 0x178], eax
// 008f5323  e8b800f5ff           call 0x8453e0
// 008f5328  6a12                 push 0x12
// 008f532a  8bc8                 mov ecx, eax
// 008f532c  e87ff8f4ff           call 0x844bb0
// 008f5331  898684010000         mov dword ptr [esi + 0x184], eax
// 008f5337  e8a400f5ff           call 0x8453e0
// 008f533c  6a05                 push 5
// 008f533e  8bc8                 mov ecx, eax
// 008f5340  e86bf8f4ff           call 0x844bb0
// 008f5345  89869c010000         mov dword ptr [esi + 0x19c], eax
// 008f534b  e89000f5ff           call 0x8453e0
// 008f5350  6a10                 push 0x10
// 008f5352  8bc8                 mov ecx, eax
// 008f5354  e857f8f4ff           call 0x844bb0
// 008f5359  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 008f535f  e87c00f5ff           call 0x8453e0
// 008f5364  6a10                 push 0x10
// 008f5366  8bc8                 mov ecx, eax
// 008f5368  e843f8f4ff           call 0x844bb0
// 008f536d  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 008f5373  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 008f5379  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008f537f  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008f5385  898ec0010000         mov dword ptr [esi + 0x1c0], ecx
// 008f538b  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 008f5391  8996d0010000         mov dword ptr [esi + 0x1d0], edx
// 008f5397  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008f539d  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 008f53a3  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 008f53a9  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 008f53af  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 008f53b5  8996d8010000         mov dword ptr [esi + 0x1d8], edx
// 008f53bb  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 008f53c1  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 008f53c7  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 008f53cd  898ee4010000         mov dword ptr [esi + 0x1e4], ecx
// 008f53d3  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 008f53d9  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 008f53df  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 008f53e5  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 008f53eb  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 008f53f1  898e00020000         mov dword ptr [esi + 0x200], ecx
// 008f53f7  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008f53fd  83c8ff               or eax, 0xffffffff
// 008f5400  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 008f5406  8986f0010000         mov dword ptr [esi + 0x1f0], eax
// 008f540c  8986fc010000         mov dword ptr [esi + 0x1fc], eax
// 008f5412  e8a905feff           call 0x8d59c0
// 008f5417  83f807               cmp eax, 7
// 008f541a  7536                 jne 0x8f5452
// 008f541c  e8bffff4ff           call 0x8453e0
// 008f5421  6a0f                 push 0xf
// 008f5423  8bc8                 mov ecx, eax
// 008f5425  e886f7f4ff           call 0x844bb0
// 008f542a  894678               mov dword ptr [esi + 0x78], eax
// 008f542d  e8aefff4ff           call 0x8453e0
// 008f5432  6a05                 push 5
// 008f5434  8bc8                 mov ecx, eax
// 008f5436  e875f7f4ff           call 0x844bb0
// 008f543b  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008f5441  e89afff4ff           call 0x8453e0
// 008f5446  6a12                 push 0x12
// 008f5448  8bc8                 mov ecx, eax
// 008f544a  e861f7f4ff           call 0x844bb0
// 008f544f  894648               mov dword ptr [esi + 0x48], eax
// 008f5452  5f                   pop edi
// 008f5453  5e                   pop esi
// 008f5454  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetDefault@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
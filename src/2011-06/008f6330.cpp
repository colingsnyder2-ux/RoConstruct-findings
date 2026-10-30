// roc 2011-06 008f6330  unit: CXTPTabPaintManager::CColorSetWinXP  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6330
//
// 008f6330  51                   push ecx
// 008f6331  56                   push esi
// 008f6332  57                   push edi
// 008f6333  8bf1                 mov esi, ecx
// 008f6335  e876efffff           call 0x8f52b0
// 008f633a  680479ad00           push 0xad7904
// 008f633f  8dbe08020000         lea edi, [esi + 0x208]
// 008f6345  6a00                 push 0
// 008f6347  8bcf                 mov ecx, edi
// 008f6349  e8c270f8ff           call 0x87d410
// 008f634e  8bcf                 mov ecx, edi
// 008f6350  e87b6ff8ff           call 0x87d2d0
// 008f6355  85c0                 test eax, eax
// 008f6357  745b                 je 0x8f63b4
// 008f6359  83c9ff               or ecx, 0xffffffff
// 008f635c  898e24010000         mov dword ptr [esi + 0x124], ecx
// 008f6362  898e30010000         mov dword ptr [esi + 0x130], ecx
// 008f6368  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 008f636e  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008f6374  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 008f637a  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 008f6380  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 008f6386  8b4664               mov eax, dword ptr [esi + 0x64]
// 008f6389  3bc1                 cmp eax, ecx
// 008f638b  7503                 jne 0x8f6390
// 008f638d  8b4660               mov eax, dword ptr [esi + 0x60]
// 008f6390  8d4c2408             lea ecx, [esp + 8]
// 008f6394  51                   push ecx
// 008f6395  68ed0e0000           push 0xeed
// 008f639a  6a00                 push 0
// 008f639c  6a09                 push 9
// 008f639e  8bcf                 mov ecx, edi
// 008f63a0  89442418             mov dword ptr [esp + 0x18], eax
// 008f63a4  e8c76df8ff           call 0x87d170
// 008f63a9  85c0                 test eax, eax
// 008f63ab  7c07                 jl 0x8f63b4
// 008f63ad  8b542408             mov edx, dword ptr [esp + 8]
// 008f63b1  895660               mov dword ptr [esi + 0x60], edx
// 008f63b4  688c18ad00           push 0xad188c
// 008f63b9  6a00                 push 0
// 008f63bb  8d8e14020000         lea ecx, [esi + 0x214]
// 008f63c1  e84a70f8ff           call 0x87d410
// 008f63c6  5f                   pop edi
// 008f63c7  5e                   pop esi
// 008f63c8  59                   pop ecx
// 008f63c9  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetWinXP@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

// roc 2012-06 00a6e690  unit: CXTPTabPaintManager::CColorSetWinXP  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6e690
//
// 00a6e690  51                   push ecx
// 00a6e691  56                   push esi
// 00a6e692  57                   push edi
// 00a6e693  8bf1                 mov esi, ecx
// 00a6e695  e876efffff           call 0xa6d610
// 00a6e69a  689c2fc200           push 0xc22f9c
// 00a6e69f  8dbe08020000         lea edi, [esi + 0x208]
// 00a6e6a5  6a00                 push 0
// 00a6e6a7  8bcf                 mov ecx, edi
// 00a6e6a9  e80273f8ff           call 0x9f59b0
// 00a6e6ae  8bcf                 mov ecx, edi
// 00a6e6b0  e8bb71f8ff           call 0x9f5870
// 00a6e6b5  85c0                 test eax, eax
// 00a6e6b7  745b                 je 0xa6e714
// 00a6e6b9  83c9ff               or ecx, 0xffffffff
// 00a6e6bc  898e24010000         mov dword ptr [esi + 0x124], ecx
// 00a6e6c2  898e30010000         mov dword ptr [esi + 0x130], ecx
// 00a6e6c8  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 00a6e6ce  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00a6e6d4  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00a6e6da  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 00a6e6e0  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 00a6e6e6  8b4664               mov eax, dword ptr [esi + 0x64]
// 00a6e6e9  3bc1                 cmp eax, ecx
// 00a6e6eb  7503                 jne 0xa6e6f0
// 00a6e6ed  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a6e6f0  8d4c2408             lea ecx, [esp + 8]
// 00a6e6f4  51                   push ecx
// 00a6e6f5  68ed0e0000           push 0xeed
// 00a6e6fa  6a00                 push 0
// 00a6e6fc  6a09                 push 9
// 00a6e6fe  8bcf                 mov ecx, edi
// 00a6e700  89442418             mov dword ptr [esp + 0x18], eax
// 00a6e704  e80770f8ff           call 0x9f5710
// 00a6e709  85c0                 test eax, eax
// 00a6e70b  7c07                 jl 0xa6e714
// 00a6e70d  8b542408             mov edx, dword ptr [esp + 8]
// 00a6e711  895660               mov dword ptr [esi + 0x60], edx
// 00a6e714  683ccfc100           push 0xc1cf3c
// 00a6e719  6a00                 push 0
// 00a6e71b  8d8e14020000         lea ecx, [esi + 0x214]
// 00a6e721  e88a72f8ff           call 0x9f59b0
// 00a6e726  5f                   pop edi
// 00a6e727  5e                   pop esi
// 00a6e728  59                   pop ecx
// 00a6e729  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetWinXP@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

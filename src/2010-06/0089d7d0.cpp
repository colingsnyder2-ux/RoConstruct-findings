// roc 2010-06 0089d7d0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089d7d0
//
// 0089d7d0  51                   push ecx
// 0089d7d1  56                   push esi
// 0089d7d2  57                   push edi
// 0089d7d3  8bf1                 mov esi, ecx
// 0089d7d5  e876efffff           call 0x89c750
// 0089d7da  68b0e9a600           push 0xa6e9b0
// 0089d7df  8dbe08020000         lea edi, [esi + 0x208]
// 0089d7e5  6a00                 push 0
// 0089d7e7  8bcf                 mov ecx, edi
// 0089d7e9  e81225f8ff           call 0x81fd00
// 0089d7ee  8bcf                 mov ecx, edi
// 0089d7f0  e8cb23f8ff           call 0x81fbc0
// 0089d7f5  85c0                 test eax, eax
// 0089d7f7  745b                 je 0x89d854
// 0089d7f9  83c9ff               or ecx, 0xffffffff
// 0089d7fc  898e24010000         mov dword ptr [esi + 0x124], ecx
// 0089d802  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0089d808  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 0089d80e  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0089d814  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0089d81a  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0089d820  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0089d826  8b4664               mov eax, dword ptr [esi + 0x64]
// 0089d829  3bc1                 cmp eax, ecx
// 0089d82b  7503                 jne 0x89d830
// 0089d82d  8b4660               mov eax, dword ptr [esi + 0x60]
// 0089d830  8d4c2408             lea ecx, [esp + 8]
// 0089d834  51                   push ecx
// 0089d835  68ed0e0000           push 0xeed
// 0089d83a  6a00                 push 0
// 0089d83c  6a09                 push 9
// 0089d83e  8bcf                 mov ecx, edi
// 0089d840  89442418             mov dword ptr [esp + 0x18], eax
// 0089d844  e86721f8ff           call 0x81f9b0
// 0089d849  85c0                 test eax, eax
// 0089d84b  7c07                 jl 0x89d854
// 0089d84d  8b542408             mov edx, dword ptr [esp + 8]
// 0089d851  895660               mov dword ptr [esi + 0x60], edx
// 0089d854  686c6ea600           push 0xa66e6c
// 0089d859  6a00                 push 0
// 0089d85b  8d8e14020000         lea ecx, [esi + 0x214]
// 0089d861  e89a24f8ff           call 0x81fd00
// 0089d866  5f                   pop edi
// 0089d867  5e                   pop esi
// 0089d868  59                   pop ecx
// 0089d869  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetWinXP@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

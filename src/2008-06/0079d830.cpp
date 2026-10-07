// roc 2008-06 0079d830  unit: CXTPTabPaintManager::CColorSetWinXP  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079d830
//
// 0079d830  51                   push ecx
// 0079d831  56                   push esi
// 0079d832  57                   push edi
// 0079d833  8bf1                 mov esi, ecx
// 0079d835  e876efffff           call 0x79c7b0
// 0079d83a  6820928600           push 0x869220
// 0079d83f  8dbe08020000         lea edi, [esi + 0x208]
// 0079d845  6a00                 push 0
// 0079d847  8bcf                 mov ecx, edi
// 0079d849  e822adf7ff           call 0x718570
// 0079d84e  8bcf                 mov ecx, edi
// 0079d850  e8dbabf7ff           call 0x718430
// 0079d855  85c0                 test eax, eax
// 0079d857  745b                 je 0x79d8b4
// 0079d859  83c9ff               or ecx, 0xffffffff
// 0079d85c  898e24010000         mov dword ptr [esi + 0x124], ecx
// 0079d862  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0079d868  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 0079d86e  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0079d874  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0079d87a  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0079d880  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0079d886  8b4664               mov eax, dword ptr [esi + 0x64]
// 0079d889  3bc1                 cmp eax, ecx
// 0079d88b  7503                 jne 0x79d890
// 0079d88d  8b4660               mov eax, dword ptr [esi + 0x60]
// 0079d890  8d4c2408             lea ecx, [esp + 8]
// 0079d894  51                   push ecx
// 0079d895  68ed0e0000           push 0xeed
// 0079d89a  6a00                 push 0
// 0079d89c  6a09                 push 9
// 0079d89e  8bcf                 mov ecx, edi
// 0079d8a0  89442418             mov dword ptr [esp + 0x18], eax
// 0079d8a4  e877a9f7ff           call 0x718220
// 0079d8a9  85c0                 test eax, eax
// 0079d8ab  7c07                 jl 0x79d8b4
// 0079d8ad  8b542408             mov edx, dword ptr [esp + 8]
// 0079d8b1  895660               mov dword ptr [esi + 0x60], edx
// 0079d8b4  68bc348600           push 0x8634bc
// 0079d8b9  6a00                 push 0
// 0079d8bb  8d8e14020000         lea ecx, [esi + 0x214]
// 0079d8c1  e8aaacf7ff           call 0x718570
// 0079d8c6  5f                   pop edi
// 0079d8c7  5e                   pop esi
// 0079d8c8  59                   pop ecx
// 0079d8c9  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetWinXP@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

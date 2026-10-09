// roc 2009-12 008e89b0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e89b0
//
// 008e89b0  51                   push ecx
// 008e89b1  56                   push esi
// 008e89b2  57                   push edi
// 008e89b3  8bf1                 mov esi, ecx
// 008e89b5  e876efffff           call 0x8e7930
// 008e89ba  68b8a6a000           push 0xa0a6b8
// 008e89bf  8dbe08020000         lea edi, [esi + 0x208]
// 008e89c5  6a00                 push 0
// 008e89c7  8bcf                 mov ecx, edi
// 008e89c9  e83233f8ff           call 0x86bd00
// 008e89ce  8bcf                 mov ecx, edi
// 008e89d0  e8eb31f8ff           call 0x86bbc0
// 008e89d5  85c0                 test eax, eax
// 008e89d7  745b                 je 0x8e8a34
// 008e89d9  83c9ff               or ecx, 0xffffffff
// 008e89dc  898e24010000         mov dword ptr [esi + 0x124], ecx
// 008e89e2  898e30010000         mov dword ptr [esi + 0x130], ecx
// 008e89e8  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 008e89ee  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008e89f4  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 008e89fa  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 008e8a00  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 008e8a06  8b4664               mov eax, dword ptr [esi + 0x64]
// 008e8a09  3bc1                 cmp eax, ecx
// 008e8a0b  7503                 jne 0x8e8a10
// 008e8a0d  8b4660               mov eax, dword ptr [esi + 0x60]
// 008e8a10  8d4c2408             lea ecx, [esp + 8]
// 008e8a14  51                   push ecx
// 008e8a15  68ed0e0000           push 0xeed
// 008e8a1a  6a00                 push 0
// 008e8a1c  6a09                 push 9
// 008e8a1e  8bcf                 mov ecx, edi
// 008e8a20  89442418             mov dword ptr [esp + 0x18], eax
// 008e8a24  e8872ff8ff           call 0x86b9b0
// 008e8a29  85c0                 test eax, eax
// 008e8a2b  7c07                 jl 0x8e8a34
// 008e8a2d  8b542408             mov edx, dword ptr [esp + 8]
// 008e8a31  895660               mov dword ptr [esi + 0x60], edx
// 008e8a34  68e42ba000           push 0xa02be4
// 008e8a39  6a00                 push 0
// 008e8a3b  8d8e14020000         lea ecx, [esi + 0x214]
// 008e8a41  e8ba32f8ff           call 0x86bd00
// 008e8a46  5f                   pop edi
// 008e8a47  5e                   pop esi
// 008e8a48  59                   pop ecx
// 008e8a49  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetWinXP@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

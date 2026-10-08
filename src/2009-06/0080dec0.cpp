// roc 2009-06 0080dec0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080dec0
//
// 0080dec0  51                   push ecx
// 0080dec1  56                   push esi
// 0080dec2  57                   push edi
// 0080dec3  8bf1                 mov esi, ecx
// 0080dec5  e876efffff           call 0x80ce40
// 0080deca  6848a29000           push 0x90a248
// 0080decf  8dbe08020000         lea edi, [esi + 0x208]
// 0080ded5  6a00                 push 0
// 0080ded7  8bcf                 mov ecx, edi
// 0080ded9  e8022ef8ff           call 0x790ce0
// 0080dede  8bcf                 mov ecx, edi
// 0080dee0  e8bb2cf8ff           call 0x790ba0
// 0080dee5  85c0                 test eax, eax
// 0080dee7  745b                 je 0x80df44
// 0080dee9  83c9ff               or ecx, 0xffffffff
// 0080deec  898e24010000         mov dword ptr [esi + 0x124], ecx
// 0080def2  898e30010000         mov dword ptr [esi + 0x130], ecx
// 0080def8  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 0080defe  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0080df04  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0080df0a  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0080df10  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0080df16  8b4664               mov eax, dword ptr [esi + 0x64]
// 0080df19  3bc1                 cmp eax, ecx
// 0080df1b  7503                 jne 0x80df20
// 0080df1d  8b4660               mov eax, dword ptr [esi + 0x60]
// 0080df20  8d4c2408             lea ecx, [esp + 8]
// 0080df24  51                   push ecx
// 0080df25  68ed0e0000           push 0xeed
// 0080df2a  6a00                 push 0
// 0080df2c  6a09                 push 9
// 0080df2e  8bcf                 mov ecx, edi
// 0080df30  89442418             mov dword ptr [esp + 0x18], eax
// 0080df34  e8572af8ff           call 0x790990
// 0080df39  85c0                 test eax, eax
// 0080df3b  7c07                 jl 0x80df44
// 0080df3d  8b542408             mov edx, dword ptr [esp + 8]
// 0080df41  895660               mov dword ptr [esi + 0x60], edx
// 0080df44  6864279000           push 0x902764
// 0080df49  6a00                 push 0
// 0080df4b  8d8e14020000         lea ecx, [esi + 0x214]
// 0080df51  e88a2df8ff           call 0x790ce0
// 0080df56  5f                   pop edi
// 0080df57  5e                   pop esi
// 0080df58  59                   pop ecx
// 0080df59  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetWinXP@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp

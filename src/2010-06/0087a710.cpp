// roc 2010-06 0087a710  unit: CXTPPropertyGridInplaceButton  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a710
//
// 0087a710  83ec10               sub esp, 0x10
// 0087a713  57                   push edi
// 0087a714  8bf9                 mov edi, ecx
// 0087a716  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0087a719  8b01                 mov eax, dword ptr [ecx]
// 0087a71b  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0087a721  ffd2                 call edx
// 0087a723  85c0                 test eax, eax
// 0087a725  7507                 jne 0x87a72e
// 0087a727  5f                   pop edi
// 0087a728  83c410               add esp, 0x10
// 0087a72b  c20800               ret 8
// 0087a72e  53                   push ebx
// 0087a72f  56                   push esi
// 0087a730  33f6                 xor esi, esi
// 0087a732  397728               cmp dword ptr [edi + 0x28], esi
// 0087a735  7e4f                 jle 0x87a786
// 0087a737  8b1de0bb9e00         mov ebx, dword ptr [0x9ebbe0]
// 0087a73d  8d4900               lea ecx, [ecx]
// 0087a740  85f6                 test esi, esi
// 0087a742  7c61                 jl 0x87a7a5
// 0087a744  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087a747  7d5c                 jge 0x87a7a5
// 0087a749  8b4724               mov eax, dword ptr [edi + 0x24]
// 0087a74c  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0087a74f  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0087a752  894c240c             mov dword ptr [esp + 0xc], ecx
// 0087a756  8b5038               mov edx, dword ptr [eax + 0x38]
// 0087a759  89542410             mov dword ptr [esp + 0x10], edx
// 0087a75d  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0087a760  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087a764  8b5040               mov edx, dword ptr [eax + 0x40]
// 0087a767  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087a76b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087a76f  50                   push eax
// 0087a770  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087a774  51                   push ecx
// 0087a775  8d542414             lea edx, [esp + 0x14]
// 0087a779  52                   push edx
// 0087a77a  ffd3                 call ebx
// 0087a77c  85c0                 test eax, eax
// 0087a77e  7511                 jne 0x87a791
// 0087a780  46                   inc esi
// 0087a781  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087a784  7cba                 jl 0x87a740
// 0087a786  5e                   pop esi
// 0087a787  5b                   pop ebx
// 0087a788  33c0                 xor eax, eax
// 0087a78a  5f                   pop edi
// 0087a78b  83c410               add esp, 0x10
// 0087a78e  c20800               ret 8
// 0087a791  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087a794  7d0f                 jge 0x87a7a5
// 0087a796  8b4724               mov eax, dword ptr [edi + 0x24]
// 0087a799  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0087a79c  5e                   pop esi
// 0087a79d  5b                   pop ebx
// 0087a79e  5f                   pop edi
// 0087a79f  83c410               add esp, 0x10
// 0087a7a2  c20800               ret 8
// 0087a7a5  e8a2d4f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?HitTest@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
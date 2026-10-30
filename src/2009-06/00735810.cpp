// roc 2009-06 00735810  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00735810
//
// 00735810  53                   push ebx
// 00735811  55                   push ebp
// 00735812  56                   push esi
// 00735813  57                   push edi
// 00735814  8bf9                 mov edi, ecx
// 00735816  33f6                 xor esi, esi
// 00735818  39774c               cmp dword ptr [edi + 0x4c], esi
// 0073581b  7e25                 jle 0x735842
// 0073581d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00735821  85f6                 test esi, esi
// 00735823  7c2f                 jl 0x735854
// 00735825  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 00735828  7d2a                 jge 0x735854
// 0073582a  8b4748               mov eax, dword ptr [edi + 0x48]
// 0073582d  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 00735830  55                   push ebp
// 00735831  8bcb                 mov ecx, ebx
// 00735833  e848c4ffff           call 0x731c80
// 00735838  85c0                 test eax, eax
// 0073583a  750f                 jne 0x73584b
// 0073583c  46                   inc esi
// 0073583d  3b774c               cmp esi, dword ptr [edi + 0x4c]
// 00735840  7cdf                 jl 0x735821
// 00735842  5f                   pop edi
// 00735843  5e                   pop esi
// 00735844  5d                   pop ebp
// 00735845  33c0                 xor eax, eax
// 00735847  5b                   pop ebx
// 00735848  c20400               ret 4
// 0073584b  5f                   pop edi
// 0073584c  5e                   pop esi
// 0073584d  5d                   pop ebp
// 0073584e  8bc3                 mov eax, ebx
// 00735850  5b                   pop ebx
// 00735851  c20400               ret 4
// 00735854  e88b34feff           call 0x718ce4
// copied from an identical function in another client (function ?GetImageList@CXTPImageManager@@QBEPAVCXTPImageManagerImageList@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
// roc 2011-06 00873730  unit: CXTPPropertyGridToolTip  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873730
//
// 00873730  53                   push ebx
// 00873731  56                   push esi
// 00873732  8bd1                 mov edx, ecx
// 00873734  57                   push edi
// 00873735  8b7a5c               mov edi, dword ptr [edx + 0x5c]
// 00873738  33c0                 xor eax, eax
// 0087373a  85ff                 test edi, edi
// 0087373c  7e27                 jle 0x873765
// 0087373e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00873742  85c0                 test eax, eax
// 00873744  7c5d                 jl 0x8737a3
// 00873746  3bc7                 cmp eax, edi
// 00873748  7d59                 jge 0x8737a3
// 0087374a  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 0087374d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00873750  8b5924               mov ebx, dword ptr [ecx + 0x24]
// 00873753  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 00873756  7508                 jne 0x873760
// 00873758  8b5920               mov ebx, dword ptr [ecx + 0x20]
// 0087375b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0087375e  740d                 je 0x87376d
// 00873760  40                   inc eax
// 00873761  3bc7                 cmp eax, edi
// 00873763  7cdd                 jl 0x873742
// 00873765  5f                   pop edi
// 00873766  5e                   pop esi
// 00873767  33c0                 xor eax, eax
// 00873769  5b                   pop ebx
// 0087376a  c20800               ret 8
// 0087376d  33c0                 xor eax, eax
// 0087376f  837e24ff             cmp dword ptr [esi + 0x24], -1
// 00873773  0f94c0               sete al
// 00873776  894104               mov dword ptr [ecx + 4], eax
// 00873779  85c0                 test eax, eax
// 0087377b  7414                 je 0x873791
// 0087377d  becabea500           mov esi, 0xa5beca
// 00873782  56                   push esi
// 00873783  ff15a42da400         call dword ptr [0xa42da4]
// 00873789  5f                   pop edi
// 0087378a  5e                   pop esi
// 0087378b  33c0                 xor eax, eax
// 0087378d  5b                   pop ebx
// 0087378e  c20800               ret 8
// 00873791  8b7624               mov esi, dword ptr [esi + 0x24]
// 00873794  56                   push esi
// 00873795  ff15a42da400         call dword ptr [0xa42da4]
// 0087379b  5f                   pop edi
// 0087379c  5e                   pop esi
// 0087379d  33c0                 xor eax, eax
// 0087379f  5b                   pop ebx
// 008737a0  c20800               ret 8
// 008737a3  e8626bf9ff           call 0x80a30a
// copied from an identical function in another client (function ?OnUpdateTipText@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
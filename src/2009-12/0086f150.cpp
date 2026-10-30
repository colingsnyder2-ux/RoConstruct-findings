// roc 2009-12 0086f150  unit: PAVCXTPCommandBar::?$CArray  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f150
//
// 0086f150  56                   push esi
// 0086f151  8bf1                 mov esi, ecx
// 0086f153  33c0                 xor eax, eax
// 0086f155  394610               cmp dword ptr [esi + 0x10], eax
// 0086f158  7e2d                 jle 0x86f187
// 0086f15a  57                   push edi
// 0086f15b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086f15f  90                   nop 
// 0086f160  85c0                 test eax, eax
// 0086f162  7c27                 jl 0x86f18b
// 0086f164  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0086f167  7d22                 jge 0x86f18b
// 0086f169  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0086f16c  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0086f16f  33c9                 xor ecx, ecx
// 0086f171  85ff                 test edi, edi
// 0086f173  0f95c1               setne cl
// 0086f176  40                   inc eax
// 0086f177  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0086f17b  018a2c010000         add dword ptr [edx + 0x12c], ecx
// 0086f181  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0086f184  7cda                 jl 0x86f160
// 0086f186  5f                   pop edi
// 0086f187  5e                   pop esi
// 0086f188  c20400               ret 4
// 0086f18b  e87c49f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?LockTrackRecurse@CXTPMouseManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp
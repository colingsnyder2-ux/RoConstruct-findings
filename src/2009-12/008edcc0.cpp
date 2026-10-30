// roc 2009-12 008edcc0  unit: PAVCXTPRibbonGroup::?$CArray  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edcc0
//
// 008edcc0  56                   push esi
// 008edcc1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008edcc5  57                   push edi
// 008edcc6  8bf9                 mov edi, ecx
// 008edcc8  897e30               mov dword ptr [esi + 0x30], edi
// 008edccb  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008edcce  e85dc8ffff           call 0x8ea530
// 008edcd3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008edcd7  89465c               mov dword ptr [esi + 0x5c], eax
// 008edcda  8b4734               mov eax, dword ptr [edi + 0x34]
// 008edcdd  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 008edce3  6a01                 push 1
// 008edce5  56                   push esi
// 008edce6  894e58               mov dword ptr [esi + 0x58], ecx
// 008edce9  52                   push edx
// 008edcea  8d4f20               lea ecx, [edi + 0x20]
// 008edced  e84efeffff           call 0x8edb40
// 008edcf2  8bcf                 mov ecx, edi
// 008edcf4  e8b7f0ffff           call 0x8ecdb0
// 008edcf9  8b06                 mov eax, dword ptr [esi]
// 008edcfb  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008edcfe  8bce                 mov ecx, esi
// 008edd00  ffd2                 call edx
// 008edd02  5f                   pop edi
// 008edd03  8bc6                 mov eax, esi
// 008edd05  5e                   pop esi
// 008edd06  c20800               ret 8
// copied from an identical function in another client (function ?InsertAt@CXTPRibbonGroups@@QAEPAVCXTPRibbonGroup@@HPAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
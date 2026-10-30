// roc 2009-06 007eb9d0  unit: CXTPPropertyGridInplaceButton  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb9d0
//
// 007eb9d0  83ec10               sub esp, 0x10
// 007eb9d3  57                   push edi
// 007eb9d4  8bf9                 mov edi, ecx
// 007eb9d6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007eb9d9  8b01                 mov eax, dword ptr [ecx]
// 007eb9db  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 007eb9e1  ffd2                 call edx
// 007eb9e3  85c0                 test eax, eax
// 007eb9e5  7507                 jne 0x7eb9ee
// 007eb9e7  5f                   pop edi
// 007eb9e8  83c410               add esp, 0x10
// 007eb9eb  c20800               ret 8
// 007eb9ee  53                   push ebx
// 007eb9ef  56                   push esi
// 007eb9f0  33f6                 xor esi, esi
// 007eb9f2  397728               cmp dword ptr [edi + 0x28], esi
// 007eb9f5  7e4f                 jle 0x7eba46
// 007eb9f7  8b1dc0ed8900         mov ebx, dword ptr [0x89edc0]
// 007eb9fd  8d4900               lea ecx, [ecx]
// 007eba00  85f6                 test esi, esi
// 007eba02  7c61                 jl 0x7eba65
// 007eba04  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007eba07  7d5c                 jge 0x7eba65
// 007eba09  8b4724               mov eax, dword ptr [edi + 0x24]
// 007eba0c  8b04b0               mov eax, dword ptr [eax + esi*4]
// 007eba0f  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007eba12  894c240c             mov dword ptr [esp + 0xc], ecx
// 007eba16  8b5038               mov edx, dword ptr [eax + 0x38]
// 007eba19  89542410             mov dword ptr [esp + 0x10], edx
// 007eba1d  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007eba20  894c2414             mov dword ptr [esp + 0x14], ecx
// 007eba24  8b5040               mov edx, dword ptr [eax + 0x40]
// 007eba27  8b442424             mov eax, dword ptr [esp + 0x24]
// 007eba2b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007eba2f  50                   push eax
// 007eba30  8954241c             mov dword ptr [esp + 0x1c], edx
// 007eba34  51                   push ecx
// 007eba35  8d542414             lea edx, [esp + 0x14]
// 007eba39  52                   push edx
// 007eba3a  ffd3                 call ebx
// 007eba3c  85c0                 test eax, eax
// 007eba3e  7511                 jne 0x7eba51
// 007eba40  46                   inc esi
// 007eba41  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007eba44  7cba                 jl 0x7eba00
// 007eba46  5e                   pop esi
// 007eba47  5b                   pop ebx
// 007eba48  33c0                 xor eax, eax
// 007eba4a  5f                   pop edi
// 007eba4b  83c410               add esp, 0x10
// 007eba4e  c20800               ret 8
// 007eba51  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007eba54  7d0f                 jge 0x7eba65
// 007eba56  8b4724               mov eax, dword ptr [edi + 0x24]
// 007eba59  8b04b0               mov eax, dword ptr [eax + esi*4]
// 007eba5c  5e                   pop esi
// 007eba5d  5b                   pop ebx
// 007eba5e  5f                   pop edi
// 007eba5f  83c410               add esp, 0x10
// 007eba62  c20800               ret 8
// 007eba65  e87ad2f2ff           call 0x718ce4
// copied from an identical function in another client (function ?HitTest@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
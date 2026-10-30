// roc 2011-06 008de3d0  unit: CXTPPropertyGridInplaceButton  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de3d0
//
// 008de3d0  83ec10               sub esp, 0x10
// 008de3d3  57                   push edi
// 008de3d4  8bf9                 mov edi, ecx
// 008de3d6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008de3d9  8b01                 mov eax, dword ptr [ecx]
// 008de3db  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008de3e1  ffd2                 call edx
// 008de3e3  85c0                 test eax, eax
// 008de3e5  7507                 jne 0x8de3ee
// 008de3e7  5f                   pop edi
// 008de3e8  83c410               add esp, 0x10
// 008de3eb  c20800               ret 8
// 008de3ee  53                   push ebx
// 008de3ef  56                   push esi
// 008de3f0  33f6                 xor esi, esi
// 008de3f2  397728               cmp dword ptr [edi + 0x28], esi
// 008de3f5  7e4f                 jle 0x8de446
// 008de3f7  8b1d101ca400         mov ebx, dword ptr [0xa41c10]
// 008de3fd  8d4900               lea ecx, [ecx]
// 008de400  85f6                 test esi, esi
// 008de402  7c61                 jl 0x8de465
// 008de404  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008de407  7d5c                 jge 0x8de465
// 008de409  8b4724               mov eax, dword ptr [edi + 0x24]
// 008de40c  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008de40f  8b4834               mov ecx, dword ptr [eax + 0x34]
// 008de412  894c240c             mov dword ptr [esp + 0xc], ecx
// 008de416  8b5038               mov edx, dword ptr [eax + 0x38]
// 008de419  89542410             mov dword ptr [esp + 0x10], edx
// 008de41d  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008de420  894c2414             mov dword ptr [esp + 0x14], ecx
// 008de424  8b5040               mov edx, dword ptr [eax + 0x40]
// 008de427  8b442424             mov eax, dword ptr [esp + 0x24]
// 008de42b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008de42f  50                   push eax
// 008de430  8954241c             mov dword ptr [esp + 0x1c], edx
// 008de434  51                   push ecx
// 008de435  8d542414             lea edx, [esp + 0x14]
// 008de439  52                   push edx
// 008de43a  ffd3                 call ebx
// 008de43c  85c0                 test eax, eax
// 008de43e  7511                 jne 0x8de451
// 008de440  46                   inc esi
// 008de441  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008de444  7cba                 jl 0x8de400
// 008de446  5e                   pop esi
// 008de447  5b                   pop ebx
// 008de448  33c0                 xor eax, eax
// 008de44a  5f                   pop edi
// 008de44b  83c410               add esp, 0x10
// 008de44e  c20800               ret 8
// 008de451  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008de454  7d0f                 jge 0x8de465
// 008de456  8b4724               mov eax, dword ptr [edi + 0x24]
// 008de459  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008de45c  5e                   pop esi
// 008de45d  5b                   pop ebx
// 008de45e  5f                   pop edi
// 008de45f  83c410               add esp, 0x10
// 008de462  c20800               ret 8
// 008de465  e8a0bef2ff           call 0x80a30a
// copied from an identical function in another client (function ?HitTest@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
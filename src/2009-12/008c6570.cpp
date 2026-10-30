// roc 2009-12 008c6570  unit: CXTPPropertyGridInplaceButton  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6570
//
// 008c6570  83ec10               sub esp, 0x10
// 008c6573  57                   push edi
// 008c6574  8bf9                 mov edi, ecx
// 008c6576  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008c6579  8b01                 mov eax, dword ptr [ecx]
// 008c657b  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008c6581  ffd2                 call edx
// 008c6583  85c0                 test eax, eax
// 008c6585  7507                 jne 0x8c658e
// 008c6587  5f                   pop edi
// 008c6588  83c410               add esp, 0x10
// 008c658b  c20800               ret 8
// 008c658e  53                   push ebx
// 008c658f  56                   push esi
// 008c6590  33f6                 xor esi, esi
// 008c6592  397728               cmp dword ptr [edi + 0x28], esi
// 008c6595  7e4f                 jle 0x8c65e6
// 008c6597  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 008c659d  8d4900               lea ecx, [ecx]
// 008c65a0  85f6                 test esi, esi
// 008c65a2  7c61                 jl 0x8c6605
// 008c65a4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008c65a7  7d5c                 jge 0x8c6605
// 008c65a9  8b4724               mov eax, dword ptr [edi + 0x24]
// 008c65ac  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008c65af  8b4834               mov ecx, dword ptr [eax + 0x34]
// 008c65b2  894c240c             mov dword ptr [esp + 0xc], ecx
// 008c65b6  8b5038               mov edx, dword ptr [eax + 0x38]
// 008c65b9  89542410             mov dword ptr [esp + 0x10], edx
// 008c65bd  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008c65c0  894c2414             mov dword ptr [esp + 0x14], ecx
// 008c65c4  8b5040               mov edx, dword ptr [eax + 0x40]
// 008c65c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 008c65cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c65cf  50                   push eax
// 008c65d0  8954241c             mov dword ptr [esp + 0x1c], edx
// 008c65d4  51                   push ecx
// 008c65d5  8d542414             lea edx, [esp + 0x14]
// 008c65d9  52                   push edx
// 008c65da  ffd3                 call ebx
// 008c65dc  85c0                 test eax, eax
// 008c65de  7511                 jne 0x8c65f1
// 008c65e0  46                   inc esi
// 008c65e1  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008c65e4  7cba                 jl 0x8c65a0
// 008c65e6  5e                   pop esi
// 008c65e7  5b                   pop ebx
// 008c65e8  33c0                 xor eax, eax
// 008c65ea  5f                   pop edi
// 008c65eb  83c410               add esp, 0x10
// 008c65ee  c20800               ret 8
// 008c65f1  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008c65f4  7d0f                 jge 0x8c6605
// 008c65f6  8b4724               mov eax, dword ptr [edi + 0x24]
// 008c65f9  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008c65fc  5e                   pop esi
// 008c65fd  5b                   pop ebx
// 008c65fe  5f                   pop edi
// 008c65ff  83c410               add esp, 0x10
// 008c6602  c20800               ret 8
// 008c6605  e802d5f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTest@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
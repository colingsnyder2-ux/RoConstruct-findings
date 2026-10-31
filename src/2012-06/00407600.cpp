// roc 2012-06 00407600  unit: VCApp::?$CComObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407600
//
// 00407600  56                   push esi
// 00407601  8b742408             mov esi, dword ptr [esp + 8]
// 00407605  85f6                 test esi, esi
// 00407607  7443                 je 0x40764c
// 00407609  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040760c  85c0                 test eax, eax
// 0040760e  7408                 je 0x407618
// 00407610  8b08                 mov ecx, dword ptr [eax]
// 00407612  8b5108               mov edx, dword ptr [ecx + 8]
// 00407615  50                   push eax
// 00407616  ffd2                 call edx
// 00407618  8b4614               mov eax, dword ptr [esi + 0x14]
// 0040761b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00407622  85c0                 test eax, eax
// 00407624  741f                 je 0x407645
// 00407626  8b48fc               mov ecx, dword ptr [eax - 4]
// 00407629  57                   push edi
// 0040762a  8d78fc               lea edi, [eax - 4]
// 0040762d  68d0244000           push 0x4024d0
// 00407632  51                   push ecx
// 00407633  6a0c                 push 0xc
// 00407635  50                   push eax
// 00407636  e835bc5700           call 0x983270
// 0040763b  57                   push edi
// 0040763c  e879ad5700           call 0x9823ba
// 00407641  83c404               add esp, 4
// 00407644  5f                   pop edi
// 00407645  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0040764c  5e                   pop esi
// 0040764d  c20400               ret 4
// copied from an identical function in another client (function ?Cleanup@RocTypeInfoHolder@@SGXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_noinline_febe0641d88ed97b.cpp
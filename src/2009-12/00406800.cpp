// roc 2009-12 00406800  unit: VCApp::?$CComObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406800
//
// 00406800  56                   push esi
// 00406801  8b742408             mov esi, dword ptr [esp + 8]
// 00406805  85f6                 test esi, esi
// 00406807  7443                 je 0x40684c
// 00406809  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040680c  85c0                 test eax, eax
// 0040680e  7408                 je 0x406818
// 00406810  8b08                 mov ecx, dword ptr [eax]
// 00406812  8b5108               mov edx, dword ptr [ecx + 8]
// 00406815  50                   push eax
// 00406816  ffd2                 call edx
// 00406818  8b4614               mov eax, dword ptr [esi + 0x14]
// 0040681b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00406822  85c0                 test eax, eax
// 00406824  741f                 je 0x406845
// 00406826  8b48fc               mov ecx, dword ptr [eax - 4]
// 00406829  57                   push edi
// 0040682a  8d78fc               lea edi, [eax - 4]
// 0040682d  6890204000           push 0x402090
// 00406832  51                   push ecx
// 00406833  6a0c                 push 0xc
// 00406835  50                   push eax
// 00406836  e869e13e00           call 0x7f49a4
// 0040683b  57                   push edi
// 0040683c  e8c5d23e00           call 0x7f3b06
// 00406841  83c404               add esp, 4
// 00406844  5f                   pop edi
// 00406845  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0040684c  5e                   pop esi
// 0040684d  c20400               ret 4
// copied from an identical function in another client (function ?Cleanup@RocTypeInfoHolder@@SGXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_noinline_febe0641d88ed97b.cpp
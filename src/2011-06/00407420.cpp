// roc 2011-06 00407420  unit: VCApp::?$CComObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407420
//
// 00407420  56                   push esi
// 00407421  8b742408             mov esi, dword ptr [esp + 8]
// 00407425  85f6                 test esi, esi
// 00407427  7443                 je 0x40746c
// 00407429  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040742c  85c0                 test eax, eax
// 0040742e  7408                 je 0x407438
// 00407430  8b08                 mov ecx, dword ptr [eax]
// 00407432  8b5108               mov edx, dword ptr [ecx + 8]
// 00407435  50                   push eax
// 00407436  ffd2                 call edx
// 00407438  8b4614               mov eax, dword ptr [esi + 0x14]
// 0040743b  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00407442  85c0                 test eax, eax
// 00407444  741f                 je 0x407465
// 00407446  8b48fc               mov ecx, dword ptr [eax - 4]
// 00407449  57                   push edi
// 0040744a  8d78fc               lea edi, [eax - 4]
// 0040744d  6890234000           push 0x402390
// 00407452  51                   push ecx
// 00407453  6a0c                 push 0xc
// 00407455  50                   push eax
// 00407456  e87d3d4000           call 0x80b1d8
// 0040745b  57                   push edi
// 0040745c  e8a32e4000           call 0x80a304
// 00407461  83c404               add esp, 4
// 00407464  5f                   pop edi
// 00407465  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0040746c  5e                   pop esi
// 0040746d  c20400               ret 4
// copied from an identical function in another client (function ?Cleanup@RocTypeInfoHolder@@SGXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_noinline_febe0641d88ed97b.cpp
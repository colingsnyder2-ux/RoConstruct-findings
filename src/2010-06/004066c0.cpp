// roc 2010-06 004066c0  unit: VCApp::?$CComObject  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004066c0
//
// 004066c0  56                   push esi
// 004066c1  8b742408             mov esi, dword ptr [esp + 8]
// 004066c5  85f6                 test esi, esi
// 004066c7  7443                 je 0x40670c
// 004066c9  8b460c               mov eax, dword ptr [esi + 0xc]
// 004066cc  85c0                 test eax, eax
// 004066ce  7408                 je 0x4066d8
// 004066d0  8b08                 mov ecx, dword ptr [eax]
// 004066d2  8b5108               mov edx, dword ptr [ecx + 8]
// 004066d5  50                   push eax
// 004066d6  ffd2                 call edx
// 004066d8  8b4614               mov eax, dword ptr [esi + 0x14]
// 004066db  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004066e2  85c0                 test eax, eax
// 004066e4  741f                 je 0x406705
// 004066e6  8b48fc               mov ecx, dword ptr [eax - 4]
// 004066e9  57                   push edi
// 004066ea  8d78fc               lea edi, [eax - 4]
// 004066ed  6880204000           push 0x402080
// 004066f2  51                   push ecx
// 004066f3  6a0c                 push 0xc
// 004066f5  50                   push eax
// 004066f6  e8e3233a00           call 0x7a8ade
// 004066fb  57                   push edi
// 004066fc  e845153a00           call 0x7a7c46
// 00406701  83c404               add esp, 4
// 00406704  5f                   pop edi
// 00406705  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0040670c  5e                   pop esi
// 0040670d  c20400               ret 4
// copied from an identical function in another client (function ?Cleanup@RocTypeInfoHolder@@SGXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_noinline_febe0641d88ed97b.cpp
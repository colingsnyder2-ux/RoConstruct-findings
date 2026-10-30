// roc 2009-06 00766090  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766090
//
// 00766090  53                   push ebx
// 00766091  56                   push esi
// 00766092  57                   push edi
// 00766093  8bf9                 mov edi, ecx
// 00766095  33f6                 xor esi, esi
// 00766097  39b744010000         cmp dword ptr [edi + 0x144], esi
// 0076609d  7e30                 jle 0x7660cf
// 0076609f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007660a3  85f6                 test esi, esi
// 007660a5  7c47                 jl 0x7660ee
// 007660a7  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 007660ad  7d3f                 jge 0x7660ee
// 007660af  8b8740010000         mov eax, dword ptr [edi + 0x140]
// 007660b5  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007660b8  8d04b0               lea eax, [eax + esi*4]
// 007660bb  53                   push ebx
// 007660bc  ff15d4fc8900         call dword ptr [0x89fcd4]
// 007660c2  85c0                 test eax, eax
// 007660c4  7411                 je 0x7660d7
// 007660c6  46                   inc esi
// 007660c7  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 007660cd  7cd4                 jl 0x7660a3
// 007660cf  5f                   pop edi
// 007660d0  5e                   pop esi
// 007660d1  33c0                 xor eax, eax
// 007660d3  5b                   pop ebx
// 007660d4  c20400               ret 4
// 007660d7  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 007660dd  7d0f                 jge 0x7660ee
// 007660df  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 007660e5  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007660e8  5f                   pop edi
// 007660e9  5e                   pop esi
// 007660ea  5b                   pop ebx
// 007660eb  c20400               ret 4
// 007660ee  e8f12bfbff           call 0x718ce4
// copied from an identical function in another client (function ?FindCategory@CXTPCustomizeCommandsPage@@ABEPAUXTP_COMMANDBARS_CATEGORYINFO@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp
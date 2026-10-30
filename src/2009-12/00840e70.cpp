// roc 2009-12 00840e70  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840e70
//
// 00840e70  53                   push ebx
// 00840e71  56                   push esi
// 00840e72  57                   push edi
// 00840e73  8bf9                 mov edi, ecx
// 00840e75  33f6                 xor esi, esi
// 00840e77  39b744010000         cmp dword ptr [edi + 0x144], esi
// 00840e7d  7e30                 jle 0x840eaf
// 00840e7f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00840e83  85f6                 test esi, esi
// 00840e85  7c47                 jl 0x840ece
// 00840e87  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 00840e8d  7d3f                 jge 0x840ece
// 00840e8f  8b8740010000         mov eax, dword ptr [edi + 0x140]
// 00840e95  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00840e98  8d04b0               lea eax, [eax + esi*4]
// 00840e9b  53                   push ebx
// 00840e9c  ff1584de9800         call dword ptr [0x98de84]
// 00840ea2  85c0                 test eax, eax
// 00840ea4  7411                 je 0x840eb7
// 00840ea6  46                   inc esi
// 00840ea7  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 00840ead  7cd4                 jl 0x840e83
// 00840eaf  5f                   pop edi
// 00840eb0  5e                   pop esi
// 00840eb1  33c0                 xor eax, eax
// 00840eb3  5b                   pop ebx
// 00840eb4  c20400               ret 4
// 00840eb7  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 00840ebd  7d0f                 jge 0x840ece
// 00840ebf  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 00840ec5  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00840ec8  5f                   pop edi
// 00840ec9  5e                   pop esi
// 00840eca  5b                   pop ebx
// 00840ecb  c20400               ret 4
// 00840ece  e8392cfbff           call 0x7f3b0c
// copied from an identical function in another client (function ?FindCategory@CXTPCustomizeCommandsPage@@ABEPAUXTP_COMMANDBARS_CATEGORYINFO@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp
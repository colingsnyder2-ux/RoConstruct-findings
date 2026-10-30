// roc 2010-06 007f4f00  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4f00
//
// 007f4f00  53                   push ebx
// 007f4f01  56                   push esi
// 007f4f02  57                   push edi
// 007f4f03  8bf9                 mov edi, ecx
// 007f4f05  33f6                 xor esi, esi
// 007f4f07  39b744010000         cmp dword ptr [edi + 0x144], esi
// 007f4f0d  7e30                 jle 0x7f4f3f
// 007f4f0f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f4f13  85f6                 test esi, esi
// 007f4f15  7c47                 jl 0x7f4f5e
// 007f4f17  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 007f4f1d  7d3f                 jge 0x7f4f5e
// 007f4f1f  8b8740010000         mov eax, dword ptr [edi + 0x140]
// 007f4f25  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007f4f28  8d04b0               lea eax, [eax + esi*4]
// 007f4f2b  53                   push ebx
// 007f4f2c  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 007f4f32  85c0                 test eax, eax
// 007f4f34  7411                 je 0x7f4f47
// 007f4f36  46                   inc esi
// 007f4f37  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 007f4f3d  7cd4                 jl 0x7f4f13
// 007f4f3f  5f                   pop edi
// 007f4f40  5e                   pop esi
// 007f4f41  33c0                 xor eax, eax
// 007f4f43  5b                   pop ebx
// 007f4f44  c20400               ret 4
// 007f4f47  3bb744010000         cmp esi, dword ptr [edi + 0x144]
// 007f4f4d  7d0f                 jge 0x7f4f5e
// 007f4f4f  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 007f4f55  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 007f4f58  5f                   pop edi
// 007f4f59  5e                   pop esi
// 007f4f5a  5b                   pop ebx
// 007f4f5b  c20400               ret 4
// 007f4f5e  e8e92cfbff           call 0x7a7c4c
// copied from an identical function in another client (function ?FindCategory@CXTPCustomizeCommandsPage@@ABEPAUXTP_COMMANDBARS_CATEGORYINFO@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp
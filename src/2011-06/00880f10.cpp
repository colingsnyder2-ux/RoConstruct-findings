// roc 2011-06 00880f10  unit: CXTPMouseManager  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880f10
//
// 00880f10  53                   push ebx
// 00880f11  56                   push esi
// 00880f12  8bd9                 mov ebx, ecx
// 00880f14  33f6                 xor esi, esi
// 00880f16  397328               cmp dword ptr [ebx + 0x28], esi
// 00880f19  7e2c                 jle 0x880f47
// 00880f1b  55                   push ebp
// 00880f1c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00880f20  57                   push edi
// 00880f21  8d7b20               lea edi, [ebx + 0x20]
// 00880f24  85f6                 test esi, esi
// 00880f26  7c24                 jl 0x880f4c
// 00880f28  3b7708               cmp esi, dword ptr [edi + 8]
// 00880f2b  7d1f                 jge 0x880f4c
// 00880f2d  8b4704               mov eax, dword ptr [edi + 4]
// 00880f30  3b2cb0               cmp ebp, dword ptr [eax + esi*4]
// 00880f33  750a                 jne 0x880f3f
// 00880f35  6a01                 push 1
// 00880f37  56                   push esi
// 00880f38  8bcf                 mov ecx, edi
// 00880f3a  e84193faff           call 0x82a280
// 00880f3f  46                   inc esi
// 00880f40  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 00880f43  7cdf                 jl 0x880f24
// 00880f45  5f                   pop edi
// 00880f46  5d                   pop ebp
// 00880f47  5e                   pop esi
// 00880f48  5b                   pop ebx
// 00880f49  c20400               ret 4
// 00880f4c  e8b993f8ff           call 0x80a30a
// copied from an identical function in another client (function ?UnRegister@CXTPCustomizeDropSource@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp
// roc 2009-12 0086fd70  unit: CXTPNewToolbarDlg  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086fd70
//
// 0086fd70  53                   push ebx
// 0086fd71  56                   push esi
// 0086fd72  8bd9                 mov ebx, ecx
// 0086fd74  33f6                 xor esi, esi
// 0086fd76  397328               cmp dword ptr [ebx + 0x28], esi
// 0086fd79  7e2c                 jle 0x86fda7
// 0086fd7b  55                   push ebp
// 0086fd7c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0086fd80  57                   push edi
// 0086fd81  8d7b20               lea edi, [ebx + 0x20]
// 0086fd84  85f6                 test esi, esi
// 0086fd86  7c24                 jl 0x86fdac
// 0086fd88  3b7708               cmp esi, dword ptr [edi + 8]
// 0086fd8b  7d1f                 jge 0x86fdac
// 0086fd8d  8b4704               mov eax, dword ptr [edi + 4]
// 0086fd90  3b2cb0               cmp ebp, dword ptr [eax + esi*4]
// 0086fd93  750a                 jne 0x86fd9f
// 0086fd95  6a01                 push 1
// 0086fd97  56                   push esi
// 0086fd98  8bcf                 mov ecx, edi
// 0086fd9a  e8e1d4fbff           call 0x82d280
// 0086fd9f  46                   inc esi
// 0086fda0  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 0086fda3  7cdf                 jl 0x86fd84
// 0086fda5  5f                   pop edi
// 0086fda6  5d                   pop ebp
// 0086fda7  5e                   pop esi
// 0086fda8  5b                   pop ebx
// 0086fda9  c20400               ret 4
// 0086fdac  e85b3df8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?UnRegister@CXTPCustomizeDropSource@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp
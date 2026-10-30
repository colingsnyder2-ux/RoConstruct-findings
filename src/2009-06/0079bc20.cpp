// roc 2009-06 0079bc20  unit: CXTPNewToolbarDlg  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079bc20
//
// 0079bc20  53                   push ebx
// 0079bc21  56                   push esi
// 0079bc22  8bd9                 mov ebx, ecx
// 0079bc24  33f6                 xor esi, esi
// 0079bc26  397328               cmp dword ptr [ebx + 0x28], esi
// 0079bc29  7e2c                 jle 0x79bc57
// 0079bc2b  55                   push ebp
// 0079bc2c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0079bc30  57                   push edi
// 0079bc31  8d7b20               lea edi, [ebx + 0x20]
// 0079bc34  85f6                 test esi, esi
// 0079bc36  7c24                 jl 0x79bc5c
// 0079bc38  3b7708               cmp esi, dword ptr [edi + 8]
// 0079bc3b  7d1f                 jge 0x79bc5c
// 0079bc3d  8b4704               mov eax, dword ptr [edi + 4]
// 0079bc40  3b2cb0               cmp ebp, dword ptr [eax + esi*4]
// 0079bc43  750a                 jne 0x79bc4f
// 0079bc45  6a01                 push 1
// 0079bc47  56                   push esi
// 0079bc48  8bcf                 mov ecx, edi
// 0079bc4a  e8116afbff           call 0x752660
// 0079bc4f  46                   inc esi
// 0079bc50  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 0079bc53  7cdf                 jl 0x79bc34
// 0079bc55  5f                   pop edi
// 0079bc56  5d                   pop ebp
// 0079bc57  5e                   pop esi
// 0079bc58  5b                   pop ebx
// 0079bc59  c20400               ret 4
// 0079bc5c  e883d0f7ff           call 0x718ce4
// copied from an identical function in another client (function ?UnRegister@CXTPCustomizeDropSource@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp
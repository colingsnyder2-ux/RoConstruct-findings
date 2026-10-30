// roc 2009-12 0087dec0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087dec0
//
// 0087dec0  83ec10               sub esp, 0x10
// 0087dec3  53                   push ebx
// 0087dec4  55                   push ebp
// 0087dec5  56                   push esi
// 0087dec6  57                   push edi
// 0087dec7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0087decb  8b07                 mov eax, dword ptr [edi]
// 0087decd  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0087ded3  8bf1                 mov esi, ecx
// 0087ded5  8bcf                 mov ecx, edi
// 0087ded7  ffd2                 call edx
// 0087ded9  85c0                 test eax, eax
// 0087dedb  7428                 je 0x87df05
// 0087dedd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087dee1  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087dee5  8b06                 mov eax, dword ptr [esi]
// 0087dee7  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0087deed  51                   push ecx
// 0087deee  57                   push edi
// 0087deef  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0087def3  52                   push edx
// 0087def4  57                   push edi
// 0087def5  8bce                 mov ecx, esi
// 0087def7  ffd0                 call eax
// 0087def9  8bc7                 mov eax, edi
// 0087defb  5f                   pop edi
// 0087defc  5e                   pop esi
// 0087defd  5d                   pop ebp
// 0087defe  5b                   pop ebx
// 0087deff  83c410               add esp, 0x10
// 0087df02  c21000               ret 0x10
// 0087df05  8b5720               mov edx, dword ptr [edi + 0x20]
// 0087df08  8d4c2410             lea ecx, [esp + 0x10]
// 0087df0c  51                   push ecx
// 0087df0d  52                   push edx
// 0087df0e  ff1550cc9800         call dword ptr [0x98cc50]
// 0087df14  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0087df1a  83f804               cmp eax, 4
// 0087df1d  7523                 jne 0x87df42
// 0087df1f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087df23  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087df27  50                   push eax
// 0087df28  57                   push edi
// 0087df29  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0087df2d  51                   push ecx
// 0087df2e  57                   push edi
// 0087df2f  8bce                 mov ecx, esi
// 0087df31  e86a5af8ff           call 0x8039a0
// 0087df36  8bc7                 mov eax, edi
// 0087df38  5f                   pop edi
// 0087df39  5e                   pop esi
// 0087df3a  5d                   pop ebp
// 0087df3b  5b                   pop ebx
// 0087df3c  83c410               add esp, 0x10
// 0087df3f  c21000               ret 0x10
// 0087df42  83f803               cmp eax, 3
// 0087df45  0f8480000000         je 0x87dfcb
// 0087df4b  83f802               cmp eax, 2
// 0087df4e  747b                 je 0x87dfcb
// 0087df50  85c0                 test eax, eax
// 0087df52  7420                 je 0x87df74
// 0087df54  83f801               cmp eax, 1
// 0087df57  741b                 je 0x87df74
// 0087df59  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087df5d  c7400400000000       mov dword ptr [eax + 4], 0
// 0087df64  c70000000000         mov dword ptr [eax], 0
// 0087df6a  5f                   pop edi
// 0087df6b  5e                   pop esi
// 0087df6c  5d                   pop ebp
// 0087df6d  5b                   pop ebx
// 0087df6e  83c410               add esp, 0x10
// 0087df71  c21000               ret 0x10
// 0087df74  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0087df78  85ed                 test ebp, ebp
// 0087df7a  7434                 je 0x87dfb0
// 0087df7c  837c243000           cmp dword ptr [esp + 0x30], 0
// 0087df81  742d                 je 0x87dfb0
// 0087df83  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087df87  6a10                 push 0x10
// 0087df89  6a14                 push 0x14
// 0087df8b  b903000000           mov ecx, 3
// 0087df90  83ec10               sub esp, 0x10
// 0087df93  8bc4                 mov eax, esp
// 0087df95  8908                 mov dword ptr [eax], ecx
// 0087df97  8bd1                 mov edx, ecx
// 0087df99  8d7903               lea edi, [ecx + 3]
// 0087df9c  895004               mov dword ptr [eax + 4], edx
// 0087df9f  83c3fd               add ebx, -3
// 0087dfa2  897808               mov dword ptr [eax + 8], edi
// 0087dfa5  55                   push ebp
// 0087dfa6  8bce                 mov ecx, esi
// 0087dfa8  89580c               mov dword ptr [eax + 0xc], ebx
// 0087dfab  e890f8f7ff           call 0x7fd840
// 0087dfb0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087dfb4  c70006000000         mov dword ptr [eax], 6
// 0087dfba  c7400400000000       mov dword ptr [eax + 4], 0
// 0087dfc1  5f                   pop edi
// 0087dfc2  5e                   pop esi
// 0087dfc3  5d                   pop ebp
// 0087dfc4  5b                   pop ebx
// 0087dfc5  83c410               add esp, 0x10
// 0087dfc8  c21000               ret 0x10
// 0087dfcb  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0087dfcf  85ed                 test ebp, ebp
// 0087dfd1  7434                 je 0x87e007
// 0087dfd3  837c243000           cmp dword ptr [esp + 0x30], 0
// 0087dfd8  742d                 je 0x87e007
// 0087dfda  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0087dfde  6a10                 push 0x10
// 0087dfe0  6a14                 push 0x14
// 0087dfe2  b903000000           mov ecx, 3
// 0087dfe7  83ec10               sub esp, 0x10
// 0087dfea  8bc4                 mov eax, esp
// 0087dfec  8908                 mov dword ptr [eax], ecx
// 0087dfee  8bd1                 mov edx, ecx
// 0087dff0  83c7fd               add edi, -3
// 0087dff3  8d5903               lea ebx, [ecx + 3]
// 0087dff6  895004               mov dword ptr [eax + 4], edx
// 0087dff9  897808               mov dword ptr [eax + 8], edi
// 0087dffc  55                   push ebp
// 0087dffd  8bce                 mov ecx, esi
// 0087dfff  89580c               mov dword ptr [eax + 0xc], ebx
// 0087e002  e839f8f7ff           call 0x7fd840
// 0087e007  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087e00b  5f                   pop edi
// 0087e00c  5e                   pop esi
// 0087e00d  5d                   pop ebp
// 0087e00e  c7400408000000       mov dword ptr [eax + 4], 8
// 0087e015  c70000000000         mov dword ptr [eax], 0
// 0087e01b  5b                   pop ebx
// 0087e01c  83c410               add esp, 0x10
// 0087e01f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCommandBarGripper@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
// roc 2011-06 00892320  unit: CXTPOffice2007Theme  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00892320
//
// 00892320  83ec10               sub esp, 0x10
// 00892323  8b442420             mov eax, dword ptr [esp + 0x20]
// 00892327  53                   push ebx
// 00892328  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0089232c  55                   push ebp
// 0089232d  bd03000000           mov ebp, 3
// 00892332  56                   push esi
// 00892333  83c0fd               add eax, -3
// 00892336  83c3fd               add ebx, -3
// 00892339  57                   push edi
// 0089233a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0089233e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00892342  89442418             mov dword ptr [esp + 0x18], eax
// 00892346  896c2410             mov dword ptr [esp + 0x10], ebp
// 0089234a  85ed                 test ebp, ebp
// 0089234c  7e41                 jle 0x89238f
// 0089234e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00892352  68ffffff00           push 0xffffff
// 00892357  6a02                 push 2
// 00892359  6a02                 push 2
// 0089235b  8d4301               lea eax, [ebx + 1]
// 0089235e  50                   push eax
// 0089235f  8d4e01               lea ecx, [esi + 1]
// 00892362  51                   push ecx
// 00892363  8bcf                 mov ecx, edi
// 00892365  e86ca21300           call 0x9cc5d6
// 0089236a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089236e  6a27                 push 0x27
// 00892370  e83bd2f7ff           call 0x80f5b0
// 00892375  50                   push eax
// 00892376  6a02                 push 2
// 00892378  6a02                 push 2
// 0089237a  53                   push ebx
// 0089237b  56                   push esi
// 0089237c  8bcf                 mov ecx, edi
// 0089237e  e853a21300           call 0x9cc5d6
// 00892383  83ee04               sub esi, 4
// 00892386  83ed01               sub ebp, 1
// 00892389  75c7                 jne 0x892352
// 0089238b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0089238f  4d                   dec ebp
// 00892390  83eb04               sub ebx, 4
// 00892393  896c2410             mov dword ptr [esp + 0x10], ebp
// 00892397  85ed                 test ebp, ebp
// 00892399  7fb3                 jg 0x89234e
// 0089239b  5f                   pop edi
// 0089239c  5e                   pop esi
// 0089239d  5d                   pop ebp
// 0089239e  5b                   pop ebx
// 0089239f  83c410               add esp, 0x10
// 008923a2  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ?DrawStatusBarGripper@CXTPResourceTheme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp

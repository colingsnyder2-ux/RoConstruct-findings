// roc 2009-12 0086e930  unit: CXTPResourceManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e930
//
// 0086e930  53                   push ebx
// 0086e931  55                   push ebp
// 0086e932  56                   push esi
// 0086e933  57                   push edi
// 0086e934  8bf1                 mov esi, ecx
// 0086e936  e865ffffff           call 0x86e8a0
// 0086e93b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086e93f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0086e942  8b5804               mov ebx, dword ptr [eax + 4]
// 0086e945  6a00                 push 0
// 0086e947  6a00                 push 0
// 0086e949  6a00                 push 0
// 0086e94b  6a00                 push 0
// 0086e94d  6aff                 push -1
// 0086e94f  55                   push ebp
// 0086e950  6a00                 push 0
// 0086e952  53                   push ebx
// 0086e953  ff153cb29800         call dword ptr [0x98b23c]
// 0086e959  8bf8                 mov edi, eax
// 0086e95b  8d4f01               lea ecx, [edi + 1]
// 0086e95e  51                   push ecx
// 0086e95f  e8de51f8ff           call 0x7f3b42
// 0086e964  83c404               add esp, 4
// 0086e967  6a00                 push 0
// 0086e969  6a00                 push 0
// 0086e96b  57                   push edi
// 0086e96c  50                   push eax
// 0086e96d  6aff                 push -1
// 0086e96f  55                   push ebp
// 0086e970  6a00                 push 0
// 0086e972  53                   push ebx
// 0086e973  8906                 mov dword ptr [esi], eax
// 0086e975  ff153cb29800         call dword ptr [0x98b23c]
// 0086e97b  8b16                 mov edx, dword ptr [esi]
// 0086e97d  c6041700             mov byte ptr [edi + edx], 0
// 0086e981  5f                   pop edi
// 0086e982  8bc6                 mov eax, esi
// 0086e984  5e                   pop esi
// 0086e985  5d                   pop ebp
// 0086e986  5b                   pop ebx
// 0086e987  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPW2A@CXTPResourceManager@@QAE@PB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp
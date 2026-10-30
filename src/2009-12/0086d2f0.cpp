// roc 2009-12 0086d2f0  unit: CSelectionCaption  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d2f0
//
// 0086d2f0  53                   push ebx
// 0086d2f1  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 0086d2f7  56                   push esi
// 0086d2f8  57                   push edi
// 0086d2f9  6a00                 push 0
// 0086d2fb  6a00                 push 0
// 0086d2fd  8bf1                 mov esi, ecx
// 0086d2ff  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086d305  68f3000000           push 0xf3
// 0086d30a  50                   push eax
// 0086d30b  ffd3                 call ebx
// 0086d30d  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086d313  8b11                 mov edx, dword ptr [ecx]
// 0086d315  8b4268               mov eax, dword ptr [edx + 0x68]
// 0086d318  ffd0                 call eax
// 0086d31a  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0086d320  85c9                 test ecx, ecx
// 0086d322  7413                 je 0x86d337
// 0086d324  8b11                 mov edx, dword ptr [ecx]
// 0086d326  8b4204               mov eax, dword ptr [edx + 4]
// 0086d329  6a01                 push 1
// 0086d32b  ffd0                 call eax
// 0086d32d  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 0086d337  8b4638               mov eax, dword ptr [esi + 0x38]
// 0086d33a  85c0                 test eax, eax
// 0086d33c  750a                 jne 0x86d348
// 0086d33e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086d341  51                   push ecx
// 0086d342  ff15bccb9800         call dword ptr [0x98cbbc]
// 0086d348  50                   push eax
// 0086d349  e8dc67f8ff           call 0x7f3b2a
// 0086d34e  8bf8                 mov edi, eax
// 0086d350  85ff                 test edi, edi
// 0086d352  7403                 je 0x86d357
// 0086d354  8b4720               mov eax, dword ptr [edi + 0x20]
// 0086d357  50                   push eax
// 0086d358  ff1584cc9800         call dword ptr [0x98cc84]
// 0086d35e  85c0                 test eax, eax
// 0086d360  741d                 je 0x86d37f
// 0086d362  8b5720               mov edx, dword ptr [edi + 0x20]
// 0086d365  6a00                 push 0
// 0086d367  6a00                 push 0
// 0086d369  683f270000           push 0x273f
// 0086d36e  52                   push edx
// 0086d36f  ffd3                 call ebx
// 0086d371  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086d374  6a01                 push 1
// 0086d376  6a00                 push 0
// 0086d378  50                   push eax
// 0086d379  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086d37f  5f                   pop edi
// 0086d380  5e                   pop esi
// 0086d381  5b                   pop ebx
// 0086d382  c3                   ret 
// copied from an identical function in another client (function ?OnPushPinCancel@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
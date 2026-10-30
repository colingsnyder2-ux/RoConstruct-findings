// roc 2009-12 008f5310  unit: CXTCaptionButtonTheme  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5310
//
// 008f5310  6aff                 push -1
// 008f5312  68686d9600           push 0x966d68
// 008f5317  64a100000000         mov eax, dword ptr fs:[0]
// 008f531d  50                   push eax
// 008f531e  83ec18               sub esp, 0x18
// 008f5321  53                   push ebx
// 008f5322  55                   push ebp
// 008f5323  56                   push esi
// 008f5324  57                   push edi
// 008f5325  a10052b600           mov eax, dword ptr [0xb65200]
// 008f532a  33c4                 xor eax, esp
// 008f532c  50                   push eax
// 008f532d  8d44242c             lea eax, [esp + 0x2c]
// 008f5331  64a300000000         mov dword ptr fs:[0], eax
// 008f5337  8bf1                 mov esi, ecx
// 008f5339  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008f533d  85ed                 test ebp, ebp
// 008f533f  0f84c7000000         je 0x8f540c
// 008f5345  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008f5349  8b06                 mov eax, dword ptr [esi]
// 008f534b  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008f534e  53                   push ebx
// 008f534f  55                   push ebp
// 008f5350  ffd2                 call edx
// 008f5352  85c0                 test eax, eax
// 008f5354  750b                 jne 0x8f5361
// 008f5356  8b06                 mov eax, dword ptr [esi]
// 008f5358  8b5060               mov edx, dword ptr [eax + 0x60]
// 008f535b  53                   push ebx
// 008f535c  55                   push ebp
// 008f535d  8bce                 mov ecx, esi
// 008f535f  ffd2                 call edx
// 008f5361  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008f5364  50                   push eax
// 008f5365  e8c6100300           call 0x926430
// 008f536a  8d4d1c               lea ecx, [ebp + 0x1c]
// 008f536d  51                   push ecx
// 008f536e  8d542420             lea edx, [esp + 0x20]
// 008f5372  52                   push edx
// 008f5373  8bf8                 mov edi, eax
// 008f5375  ff1564cc9800         call dword ptr [0x98cc64]
// 008f537b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008f537e  6a01                 push 1
// 008f5380  8bcf                 mov ecx, edi
// 008f5382  89442440             mov dword ptr [esp + 0x40], eax
// 008f5386  e805110300           call 0x926490
// 008f538b  89442414             mov dword ptr [esp + 0x14], eax
// 008f538f  897c2418             mov dword ptr [esp + 0x18], edi
// 008f5393  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f5397  8b16                 mov edx, dword ptr [esi]
// 008f5399  8b524c               mov edx, dword ptr [edx + 0x4c]
// 008f539c  53                   push ebx
// 008f539d  8d442420             lea eax, [esp + 0x20]
// 008f53a1  50                   push eax
// 008f53a2  51                   push ecx
// 008f53a3  57                   push edi
// 008f53a4  8bce                 mov ecx, esi
// 008f53a6  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008f53ae  ffd2                 call edx
// 008f53b0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008f53b4  8b06                 mov eax, dword ptr [esi]
// 008f53b6  8b4054               mov eax, dword ptr [eax + 0x54]
// 008f53b9  53                   push ebx
// 008f53ba  8d4c2420             lea ecx, [esp + 0x20]
// 008f53be  51                   push ecx
// 008f53bf  52                   push edx
// 008f53c0  57                   push edi
// 008f53c1  8bce                 mov ecx, esi
// 008f53c3  ffd0                 call eax
// 008f53c5  8b13                 mov edx, dword ptr [ebx]
// 008f53c7  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f53cd  8bcb                 mov ecx, ebx
// 008f53cf  ffd0                 call eax
// 008f53d1  a810                 test al, 0x10
// 008f53d3  7423                 je 0x8f53f8
// 008f53d5  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008f53d8  a810                 test al, 0x10
// 008f53da  741c                 je 0x8f53f8
// 008f53dc  a900020000           test eax, 0x200
// 008f53e1  7515                 jne 0x8f53f8
// 008f53e3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f53e7  8b16                 mov edx, dword ptr [esi]
// 008f53e9  8b5264               mov edx, dword ptr [edx + 0x64]
// 008f53ec  53                   push ebx
// 008f53ed  8d442420             lea eax, [esp + 0x20]
// 008f53f1  50                   push eax
// 008f53f2  51                   push ecx
// 008f53f3  57                   push edi
// 008f53f4  8bce                 mov ecx, esi
// 008f53f6  ffd2                 call edx
// 008f53f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f53fc  50                   push eax
// 008f53fd  8bcf                 mov ecx, edi
// 008f53ff  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008f5407  e884100300           call 0x926490
// 008f540c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f5410  64890d00000000       mov dword ptr fs:[0], ecx
// 008f5417  59                   pop ecx
// 008f5418  5f                   pop edi
// 008f5419  5e                   pop esi
// 008f541a  5d                   pop ebp
// 008f541b  5b                   pop ebx
// 008f541c  83c424               add esp, 0x24
// 008f541f  c20800               ret 8
// copied from an identical function in another client (function ?DrawItem@CXTButtonTheme@@MAEXPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp
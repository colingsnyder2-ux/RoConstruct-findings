// roc 2008-06 00725520  unit: CXTPRibbonBar  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00725520
//
// 00725520  83ec1c               sub esp, 0x1c
// 00725523  56                   push esi
// 00725524  8bf1                 mov esi, ecx
// 00725526  e8e5f8f8ff           call 0x6b4e10
// 0072552b  8944240c             mov dword ptr [esp + 0xc], eax
// 0072552f  85c0                 test eax, eax
// 00725531  0f84b6010000         je 0x7256ed
// 00725537  55                   push ebp
// 00725538  57                   push edi
// 00725539  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0072553d  8d442410             lea eax, [esp + 0x10]
// 00725541  50                   push eax
// 00725542  8d4c2410             lea ecx, [esp + 0x10]
// 00725546  51                   push ecx
// 00725547  8d542420             lea edx, [esp + 0x20]
// 0072554b  52                   push edx
// 0072554c  8d442440             lea eax, [esp + 0x40]
// 00725550  50                   push eax
// 00725551  57                   push edi
// 00725552  8bce                 mov ecx, esi
// 00725554  e8770cf9ff           call 0x6b61d0
// 00725559  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072555d  83f9ff               cmp ecx, -1
// 00725560  746f                 je 0x7255d1
// 00725562  51                   push ecx
// 00725563  8bce                 mov ecx, esi
// 00725565  e84606f9ff           call 0x6b5bb0
// 0072556a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072556e  8be8                 mov ebp, eax
// 00725570  83f9ff               cmp ecx, -1
// 00725573  0f840a010000         je 0x725683
// 00725579  3bfd                 cmp edi, ebp
// 0072557b  0f8502010000         jne 0x725683
// 00725581  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00725585  2b442434             sub eax, dword ptr [esp + 0x34]
// 00725589  99                   cdq 
// 0072558a  33c2                 xor eax, edx
// 0072558c  2bc2                 sub eax, edx
// 0072558e  83f804               cmp eax, 4
// 00725591  7f16                 jg 0x7255a9
// 00725593  8b442440             mov eax, dword ptr [esp + 0x40]
// 00725597  2b442438             sub eax, dword ptr [esp + 0x38]
// 0072559b  99                   cdq 
// 0072559c  33c2                 xor eax, edx
// 0072559e  2bc2                 sub eax, edx
// 007255a0  83f804               cmp eax, 4
// 007255a3  0f8ece000000         jle 0x725677
// 007255a9  51                   push ecx
// 007255aa  8bce                 mov ecx, esi
// 007255ac  e8ff05f9ff           call 0x6b5bb0
// 007255b1  837c241000           cmp dword ptr [esp + 0x10], 0
// 007255b6  0f84af000000         je 0x72566b
// 007255bc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007255c1  0f84a4000000         je 0x72566b
// 007255c7  ba01000000           mov edx, 1
// 007255cc  e99c000000           jmp 0x72566d
// 007255d1  33ed                 xor ebp, ebp
// 007255d3  33ff                 xor edi, edi
// 007255d5  837c241000           cmp dword ptr [esp + 0x10], 0
// 007255da  7405                 je 0x7255e1
// 007255dc  41                   inc ecx
// 007255dd  894c240c             mov dword ptr [esp + 0xc], ecx
// 007255e1  53                   push ebx
// 007255e2  6a00                 push 0
// 007255e4  6aff                 push -1
// 007255e6  8bce                 mov ecx, esi
// 007255e8  e8e318f9ff           call 0x6b6ed0
// 007255ed  8b16                 mov edx, dword ptr [esi]
// 007255ef  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 007255f5  6a00                 push 0
// 007255f7  6aff                 push -1
// 007255f9  8bce                 mov ecx, esi
// 007255fb  ffd0                 call eax
// 007255fd  33db                 xor ebx, ebx
// 007255ff  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00725603  753e                 jne 0x725643
// 00725605  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00725609  7c38                 jl 0x725643
// 0072560b  8bce                 mov ecx, esi
// 0072560d  e88e05f9ff           call 0x6b5ba0
// 00725612  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00725616  3bc8                 cmp ecx, eax
// 00725618  7d29                 jge 0x725643
// 0072561a  51                   push ecx
// 0072561b  8bce                 mov ecx, esi
// 0072561d  e88e05f9ff           call 0x6b5bb0
// 00725622  8b9898000000         mov ebx, dword ptr [eax + 0x98]
// 00725628  85db                 test ebx, ebx
// 0072562a  7417                 je 0x725643
// 0072562c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00725630  51                   push ecx
// 00725631  8bce                 mov ecx, esi
// 00725633  e87805f9ff           call 0x6b5bb0
// 00725638  8b10                 mov edx, dword ptr [eax]
// 0072563a  8bc8                 mov ecx, eax
// 0072563c  8b4264               mov eax, dword ptr [edx + 0x64]
// 0072563f  6a00                 push 0
// 00725641  ffd0                 call eax
// 00725643  6a00                 push 0
// 00725645  85ff                 test edi, edi
// 00725647  744d                 je 0x725696
// 00725649  55                   push ebp
// 0072564a  8bcf                 mov ecx, edi
// 0072564c  e8ff2f0700           call 0x798650
// 00725651  8b542434             mov edx, dword ptr [esp + 0x34]
// 00725655  33c9                 xor ecx, ecx
// 00725657  394c2418             cmp dword ptr [esp + 0x18], ecx
// 0072565b  0f95c1               setne cl
// 0072565e  03c1                 add eax, ecx
// 00725660  50                   push eax
// 00725661  52                   push edx
// 00725662  8bcf                 mov ecx, edi
// 00725664  e8a7350700           call 0x798c10
// 00725669  eb40                 jmp 0x7256ab
// 0072566b  33d2                 xor edx, edx
// 0072566d  8b38                 mov edi, dword ptr [eax]
// 0072566f  52                   push edx
// 00725670  8b5764               mov edx, dword ptr [edi + 0x64]
// 00725673  8bc8                 mov ecx, eax
// 00725675  ffd2                 call edx
// 00725677  8b442430             mov eax, dword ptr [esp + 0x30]
// 0072567b  c70005000000         mov dword ptr [eax], 5
// 00725681  eb3f                 jmp 0x7256c2
// 00725683  85ed                 test ebp, ebp
// 00725685  0f8448ffffff         je 0x7255d3
// 0072568b  8bbd58010000         mov edi, dword ptr [ebp + 0x158]
// 00725691  e93fffffff           jmp 0x7255d5
// 00725696  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072569a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0072569e  50                   push eax
// 0072569f  51                   push ecx
// 007256a0  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007256a6  e8e5e4fcff           call 0x6f3b90
// 007256ab  8bf8                 mov edi, eax
// 007256ad  8b17                 mov edx, dword ptr [edi]
// 007256af  8b4264               mov eax, dword ptr [edx + 0x64]
// 007256b2  53                   push ebx
// 007256b3  8bcf                 mov ecx, edi
// 007256b5  ffd0                 call eax
// 007256b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007256bb  57                   push edi
// 007256bc  e82fe1f7ff           call 0x6a37f0
// 007256c1  5b                   pop ebx
// 007256c2  8b16                 mov edx, dword ptr [esi]
// 007256c4  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 007256ca  8bce                 mov ecx, esi
// 007256cc  ffd0                 call eax
// 007256ce  8d8e3c010000         lea ecx, [esi + 0x13c]
// 007256d4  51                   push ecx
// 007256d5  ff157c2c8000         call dword ptr [0x802c7c]
// 007256db  8b16                 mov edx, dword ptr [esi]
// 007256dd  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 007256e3  6a01                 push 1
// 007256e5  6a00                 push 0
// 007256e7  8bce                 mov ecx, esi
// 007256e9  ffd0                 call eax
// 007256eb  5f                   pop edi
// 007256ec  5d                   pop ebp
// 007256ed  5e                   pop esi
// 007256ee  83c41c               add esp, 0x1c
// 007256f1  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCustomizeDrop@CXTPRibbonBar@@MAEXPAVCXTPControl@@AAKVCPoint@@2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp

// roc 2009-12 0084d5c0  unit: CXTPCompatibleDC  size: 406 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d5c0
//
// 0084d5c0  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0084d5c6  83ec20               sub esp, 0x20
// 0084d5c9  53                   push ebx
// 0084d5ca  56                   push esi
// 0084d5cb  8b742434             mov esi, dword ptr [esp + 0x34]
// 0084d5cf  d85e1c               fcomp dword ptr [esi + 0x1c]
// 0084d5d2  8bd9                 mov ebx, ecx
// 0084d5d4  dfe0                 fnstsw ax
// 0084d5d6  f6c444               test ah, 0x44
// 0084d5d9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0084d5dc  0f8b38010000         jnp 0x84d71a
// 0084d5e2  83f8ff               cmp eax, -1
// 0084d5e5  7505                 jne 0x84d5ec
// 0084d5e7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0084d5ea  eb02                 jmp 0x84d5ee
// 0084d5ec  8bc8                 mov ecx, eax
// 0084d5ee  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084d5f1  83f8ff               cmp eax, -1
// 0084d5f4  7503                 jne 0x84d5f9
// 0084d5f6  8b4608               mov eax, dword ptr [esi + 8]
// 0084d5f9  d9461c               fld dword ptr [esi + 0x1c]
// 0084d5fc  55                   push ebp
// 0084d5fd  57                   push edi
// 0084d5fe  51                   push ecx
// 0084d5ff  d91c24               fstp dword ptr [esp]
// 0084d602  51                   push ecx
// 0084d603  50                   push eax
// 0084d604  8bcb                 mov ecx, ebx
// 0084d606  e8b5cdffff           call 0x84a3c0
// 0084d60b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0084d60f  8bf8                 mov edi, eax
// 0084d611  85ed                 test ebp, ebp
// 0084d613  7476                 je 0x84d68b
// 0084d615  8b442438             mov eax, dword ptr [esp + 0x38]
// 0084d619  50                   push eax
// 0084d61a  8d4c2414             lea ecx, [esp + 0x14]
// 0084d61e  51                   push ecx
// 0084d61f  ff1564cc9800         call dword ptr [0x98cc64]
// 0084d625  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084d629  8bc1                 mov eax, ecx
// 0084d62b  2b442410             sub eax, dword ptr [esp + 0x10]
// 0084d62f  99                   cdq 
// 0084d630  2bc2                 sub eax, edx
// 0084d632  d1f8                 sar eax, 1
// 0084d634  f7d8                 neg eax
// 0084d636  03c8                 add ecx, eax
// 0084d638  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084d63b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0084d63f  83f8ff               cmp eax, -1
// 0084d642  7503                 jne 0x84d647
// 0084d644  8b4608               mov eax, dword ptr [esi + 8]
// 0084d647  8b542444             mov edx, dword ptr [esp + 0x44]
// 0084d64b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084d64f  52                   push edx
// 0084d650  55                   push ebp
// 0084d651  57                   push edi
// 0084d652  50                   push eax
// 0084d653  8d442420             lea eax, [esp + 0x20]
// 0084d657  50                   push eax
// 0084d658  51                   push ecx
// 0084d659  8bcb                 mov ecx, ebx
// 0084d65b  e840fdffff           call 0x84d3a0
// 0084d660  8b542438             mov edx, dword ptr [esp + 0x38]
// 0084d664  52                   push edx
// 0084d665  8d442424             lea eax, [esp + 0x24]
// 0084d669  50                   push eax
// 0084d66a  ff1564cc9800         call dword ptr [0x98cc64]
// 0084d670  8b4618               mov eax, dword ptr [esi + 0x18]
// 0084d673  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084d677  894c2420             mov dword ptr [esp + 0x20], ecx
// 0084d67b  83f8ff               cmp eax, -1
// 0084d67e  7503                 jne 0x84d683
// 0084d680  8b4614               mov eax, dword ptr [esi + 0x14]
// 0084d683  8b542444             mov edx, dword ptr [esp + 0x44]
// 0084d687  52                   push edx
// 0084d688  55                   push ebp
// 0084d689  eb72                 jmp 0x84d6fd
// 0084d68b  8b542438             mov edx, dword ptr [esp + 0x38]
// 0084d68f  52                   push edx
// 0084d690  8d442414             lea eax, [esp + 0x14]
// 0084d694  50                   push eax
// 0084d695  ff1564cc9800         call dword ptr [0x98cc64]
// 0084d69b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084d69f  8bc1                 mov eax, ecx
// 0084d6a1  2b442414             sub eax, dword ptr [esp + 0x14]
// 0084d6a5  99                   cdq 
// 0084d6a6  2bc2                 sub eax, edx
// 0084d6a8  d1f8                 sar eax, 1
// 0084d6aa  f7d8                 neg eax
// 0084d6ac  03c8                 add ecx, eax
// 0084d6ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084d6b1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0084d6b5  83f8ff               cmp eax, -1
// 0084d6b8  7503                 jne 0x84d6bd
// 0084d6ba  8b4608               mov eax, dword ptr [esi + 8]
// 0084d6bd  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0084d6c1  8b542434             mov edx, dword ptr [esp + 0x34]
// 0084d6c5  55                   push ebp
// 0084d6c6  6a00                 push 0
// 0084d6c8  57                   push edi
// 0084d6c9  50                   push eax
// 0084d6ca  8d4c2420             lea ecx, [esp + 0x20]
// 0084d6ce  51                   push ecx
// 0084d6cf  52                   push edx
// 0084d6d0  8bcb                 mov ecx, ebx
// 0084d6d2  e8c9fcffff           call 0x84d3a0
// 0084d6d7  8b442438             mov eax, dword ptr [esp + 0x38]
// 0084d6db  50                   push eax
// 0084d6dc  8d4c2424             lea ecx, [esp + 0x24]
// 0084d6e0  51                   push ecx
// 0084d6e1  ff1564cc9800         call dword ptr [0x98cc64]
// 0084d6e7  8b4618               mov eax, dword ptr [esi + 0x18]
// 0084d6ea  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084d6ee  89542424             mov dword ptr [esp + 0x24], edx
// 0084d6f2  83f8ff               cmp eax, -1
// 0084d6f5  7503                 jne 0x84d6fa
// 0084d6f7  8b4614               mov eax, dword ptr [esi + 0x14]
// 0084d6fa  55                   push ebp
// 0084d6fb  6a00                 push 0
// 0084d6fd  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0084d701  50                   push eax
// 0084d702  57                   push edi
// 0084d703  8d442430             lea eax, [esp + 0x30]
// 0084d707  50                   push eax
// 0084d708  51                   push ecx
// 0084d709  8bcb                 mov ecx, ebx
// 0084d70b  e890fcffff           call 0x84d3a0
// 0084d710  5f                   pop edi
// 0084d711  5d                   pop ebp
// 0084d712  5e                   pop esi
// 0084d713  5b                   pop ebx
// 0084d714  83c420               add esp, 0x20
// 0084d717  c21400               ret 0x14
// 0084d71a  83f8ff               cmp eax, -1
// 0084d71d  7505                 jne 0x84d724
// 0084d71f  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0084d722  eb02                 jmp 0x84d726
// 0084d724  8bc8                 mov ecx, eax
// 0084d726  8b460c               mov eax, dword ptr [esi + 0xc]
// 0084d729  83f8ff               cmp eax, -1
// 0084d72c  7503                 jne 0x84d731
// 0084d72e  8b4608               mov eax, dword ptr [esi + 8]
// 0084d731  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0084d735  52                   push edx
// 0084d736  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0084d73a  52                   push edx
// 0084d73b  51                   push ecx
// 0084d73c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0084d740  50                   push eax
// 0084d741  8b442440             mov eax, dword ptr [esp + 0x40]
// 0084d745  50                   push eax
// 0084d746  51                   push ecx
// 0084d747  8bcb                 mov ecx, ebx
// 0084d749  e852fcffff           call 0x84d3a0
// 0084d74e  5e                   pop esi
// 0084d74f  5b                   pop ebx
// 0084d750  83c420               add esp, 0x20
// 0084d753  c21400               ret 0x14
// copied from an identical function in another client (function ?GradientFill@CXTPDrawHelpers@@QAEXPAVCDC@@PBUtagRECT@@ABVCXTPPaintManagerColorGradient@@H1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp
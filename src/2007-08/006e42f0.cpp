// roc 2007-08 006e42f0  unit: CXTPDockingPaneSplitterContainer  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e42f0
//
// 006e42f0  83ec0c               sub esp, 0xc
// 006e42f3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006e42f7  53                   push ebx
// 006e42f8  55                   push ebp
// 006e42f9  56                   push esi
// 006e42fa  57                   push edi
// 006e42fb  e840c2ffff           call 0x6e0540
// 006e4300  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 006e4306  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006e4309  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e430d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006e4311  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006e4315  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006e4319  89542418             mov dword ptr [esp + 0x18], edx
// 006e431d  8d542414             lea edx, [esp + 0x14]
// 006e4321  52                   push edx
// 006e4322  33c9                 xor ecx, ecx
// 006e4324  8d542414             lea edx, [esp + 0x14]
// 006e4328  52                   push edx
// 006e4329  8b542440             mov edx, dword ptr [esp + 0x40]
// 006e432d  51                   push ecx
// 006e432e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006e4332  894c2420             mov dword ptr [esp + 0x20], ecx
// 006e4336  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006e433a  51                   push ecx
// 006e433b  83ec10               sub esp, 0x10
// 006e433e  8bcc                 mov ecx, esp
// 006e4340  8931                 mov dword ptr [ecx], esi
// 006e4342  897904               mov dword ptr [ecx + 4], edi
// 006e4345  55                   push ebp
// 006e4346  895908               mov dword ptr [ecx + 8], ebx
// 006e4349  50                   push eax
// 006e434a  89510c               mov dword ptr [ecx + 0xc], edx
// 006e434d  e85efdffff           call 0x6e40b0
// 006e4352  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006e4356  8b6d04               mov ebp, dword ptr [ebp + 4]
// 006e4359  8b442460             mov eax, dword ptr [esp + 0x60]
// 006e435d  8931                 mov dword ptr [ecx], esi
// 006e435f  897904               mov dword ptr [ecx + 4], edi
// 006e4362  83c428               add esp, 0x28
// 006e4365  85ed                 test ebp, ebp
// 006e4367  895908               mov dword ptr [ecx + 8], ebx
// 006e436a  89410c               mov dword ptr [ecx + 0xc], eax
// 006e436d  0f8492000000         je 0x6e4405
// 006e4373  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006e4377  8b742414             mov esi, dword ptr [esp + 0x14]
// 006e437b  eb03                 jmp 0x6e4380
// 006e437d  8d4900               lea ecx, [ecx]
// 006e4380  8bc5                 mov eax, ebp
// 006e4382  8b7808               mov edi, dword ptr [eax + 8]
// 006e4385  8b5730               mov edx, dword ptr [edi + 0x30]
// 006e4388  8b6d00               mov ebp, dword ptr [ebp]
// 006e438b  8bc2                 mov eax, edx
// 006e438d  f7d8                 neg eax
// 006e438f  85d2                 test edx, edx
// 006e4391  7e21                 jle 0x6e43b4
// 006e4393  85db                 test ebx, ebx
// 006e4395  7504                 jne 0x6e439b
// 006e4397  33c0                 xor eax, eax
// 006e4399  eb08                 jmp 0x6e43a3
// 006e439b  8bc2                 mov eax, edx
// 006e439d  0fafc6               imul eax, esi
// 006e43a0  99                   cdq 
// 006e43a1  f7fb                 idiv ebx
// 006e43a3  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 006e43a6  2bf0                 sub esi, eax
// 006e43a8  33d2                 xor edx, edx
// 006e43aa  85f6                 test esi, esi
// 006e43ac  0f9ec2               setle dl
// 006e43af  83ea01               sub edx, 1
// 006e43b2  23f2                 and esi, edx
// 006e43b4  837c242400           cmp dword ptr [esp + 0x24], 0
// 006e43b9  7421                 je 0x6e43dc
// 006e43bb  85ed                 test ebp, ebp
// 006e43bd  7506                 jne 0x6e43c5
// 006e43bf  8b542434             mov edx, dword ptr [esp + 0x34]
// 006e43c3  eb04                 jmp 0x6e43c9
// 006e43c5  8b11                 mov edx, dword ptr [ecx]
// 006e43c7  03d0                 add edx, eax
// 006e43c9  397c243c             cmp dword ptr [esp + 0x3c], edi
// 006e43cd  895108               mov dword ptr [ecx + 8], edx
// 006e43d0  7433                 je 0x6e4405
// 006e43d2  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e43d6  03d0                 add edx, eax
// 006e43d8  8911                 mov dword ptr [ecx], edx
// 006e43da  eb21                 jmp 0x6e43fd
// 006e43dc  85ed                 test ebp, ebp
// 006e43de  7506                 jne 0x6e43e6
// 006e43e0  8b542438             mov edx, dword ptr [esp + 0x38]
// 006e43e4  eb05                 jmp 0x6e43eb
// 006e43e6  8b5104               mov edx, dword ptr [ecx + 4]
// 006e43e9  03d0                 add edx, eax
// 006e43eb  397c243c             cmp dword ptr [esp + 0x3c], edi
// 006e43ef  89510c               mov dword ptr [ecx + 0xc], edx
// 006e43f2  7411                 je 0x6e4405
// 006e43f4  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e43f8  03d0                 add edx, eax
// 006e43fa  895104               mov dword ptr [ecx + 4], edx
// 006e43fd  85ed                 test ebp, ebp
// 006e43ff  0f857bffffff         jne 0x6e4380
// 006e4405  5f                   pop edi
// 006e4406  5e                   pop esi
// 006e4407  5d                   pop ebp
// 006e4408  8bc1                 mov eax, ecx
// 006e440a  5b                   pop ebx
// 006e440b  83c40c               add esp, 0xc
// 006e440e  c3                   ret 
// copied from an identical function in another client (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
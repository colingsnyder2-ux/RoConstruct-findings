// roc 2009-12 008b36b0  unit: CXTPDockingPaneTabbedContainer  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b36b0
//
// 008b36b0  51                   push ecx
// 008b36b1  55                   push ebp
// 008b36b2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008b36b6  56                   push esi
// 008b36b7  57                   push edi
// 008b36b8  33ff                 xor edi, edi
// 008b36ba  8bf1                 mov esi, ecx
// 008b36bc  3bef                 cmp ebp, edi
// 008b36be  0f845b010000         je 0x8b381f
// 008b36c4  53                   push ebx
// 008b36c5  8d4e54               lea ecx, [esi + 0x54]
// 008b36c8  89be94010000         mov dword ptr [esi + 0x194], edi
// 008b36ce  e86dd1ffff           call 0x8b0840
// 008b36d3  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 008b36d9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008b36dd  894668               mov dword ptr [esi + 0x68], eax
// 008b36e0  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 008b36e6  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 008b36ec  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 008b36ef  894e70               mov dword ptr [esi + 0x70], ecx
// 008b36f2  8b5574               mov edx, dword ptr [ebp + 0x74]
// 008b36f5  895674               mov dword ptr [esi + 0x74], edx
// 008b36f8  8b4578               mov eax, dword ptr [ebp + 0x78]
// 008b36fb  894678               mov dword ptr [esi + 0x78], eax
// 008b36fe  8b4d7c               mov ecx, dword ptr [ebp + 0x7c]
// 008b3701  894e7c               mov dword ptr [esi + 0x7c], ecx
// 008b3704  8b5558               mov edx, dword ptr [ebp + 0x58]
// 008b3707  895658               mov dword ptr [esi + 0x58], edx
// 008b370a  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 008b370d  89465c               mov dword ptr [esi + 0x5c], eax
// 008b3710  c7869801000001000000 mov dword ptr [esi + 0x198], 1
// 008b371a  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 008b3720  897c2418             mov dword ptr [esp + 0x18], edi
// 008b3724  3bdf                 cmp ebx, edi
// 008b3726  746c                 je 0x8b3794
// 008b3728  8d4d54               lea ecx, [ebp + 0x54]
// 008b372b  e86070faff           call 0x85a790
// 008b3730  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b3734  3bc7                 cmp eax, edi
// 008b3736  0f84e2000000         je 0x8b381e
// 008b373c  8d642400             lea esp, [esp]
// 008b3740  8d4c241c             lea ecx, [esp + 0x1c]
// 008b3744  51                   push ecx
// 008b3745  8d4d54               lea ecx, [ebp + 0x54]
// 008b3748  e8c3f70300           call 0x8f2f10
// 008b374d  85c0                 test eax, eax
// 008b374f  7405                 je 0x8b3756
// 008b3751  8d78e0               lea edi, [eax - 0x20]
// 008b3754  eb02                 jmp 0x8b3758
// 008b3756  33ff                 xor edi, edi
// 008b3758  8b5720               mov edx, dword ptr [edi + 0x20]
// 008b375b  8b4660               mov eax, dword ptr [esi + 0x60]
// 008b375e  8b5244               mov edx, dword ptr [edx + 0x44]
// 008b3761  6a00                 push 0
// 008b3763  8d4f20               lea ecx, [edi + 0x20]
// 008b3766  53                   push ebx
// 008b3767  50                   push eax
// 008b3768  ffd2                 call edx
// 008b376a  85c0                 test eax, eax
// 008b376c  7405                 je 0x8b3773
// 008b376e  83c0e0               add eax, -0x20
// 008b3771  eb02                 jmp 0x8b3775
// 008b3773  33c0                 xor eax, eax
// 008b3775  39bda4010000         cmp dword ptr [ebp + 0x1a4], edi
// 008b377b  7504                 jne 0x8b3781
// 008b377d  89442418             mov dword ptr [esp + 0x18], eax
// 008b3781  6a01                 push 1
// 008b3783  50                   push eax
// 008b3784  8bce                 mov ecx, esi
// 008b3786  e8b5f8ffff           call 0x8b3040
// 008b378b  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008b3790  75ae                 jne 0x8b3740
// 008b3792  eb71                 jmp 0x8b3805
// 008b3794  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 008b379a  89442410             mov dword ptr [esp + 0x10], eax
// 008b379e  3bc7                 cmp eax, edi
// 008b37a0  747c                 je 0x8b381e
// 008b37a2  8d5d54               lea ebx, [ebp + 0x54]
// 008b37a5  8d442410             lea eax, [esp + 0x10]
// 008b37a9  50                   push eax
// 008b37aa  8bcb                 mov ecx, ebx
// 008b37ac  e85ff70300           call 0x8f2f10
// 008b37b1  85c0                 test eax, eax
// 008b37b3  7405                 je 0x8b37ba
// 008b37b5  8d78e0               lea edi, [eax - 0x20]
// 008b37b8  eb02                 jmp 0x8b37bc
// 008b37ba  33ff                 xor edi, edi
// 008b37bc  8bcf                 mov ecx, edi
// 008b37be  e8bd93faff           call 0x85cb80
// 008b37c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b37c7  85c1                 test ecx, eax
// 008b37c9  7533                 jne 0x8b37fe
// 008b37cb  39bda4010000         cmp dword ptr [ebp + 0x1a4], edi
// 008b37d1  750b                 jne 0x8b37de
// 008b37d3  837c241800           cmp dword ptr [esp + 0x18], 0
// 008b37d8  7504                 jne 0x8b37de
// 008b37da  897c2418             mov dword ptr [esp + 0x18], edi
// 008b37de  85ff                 test edi, edi
// 008b37e0  7405                 je 0x8b37e7
// 008b37e2  8d4720               lea eax, [edi + 0x20]
// 008b37e5  eb02                 jmp 0x8b37e9
// 008b37e7  33c0                 xor eax, eax
// 008b37e9  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 008b37ec  8b11                 mov edx, dword ptr [ecx]
// 008b37ee  50                   push eax
// 008b37ef  8b4248               mov eax, dword ptr [edx + 0x48]
// 008b37f2  ffd0                 call eax
// 008b37f4  6a01                 push 1
// 008b37f6  57                   push edi
// 008b37f7  8bce                 mov ecx, esi
// 008b37f9  e842f8ffff           call 0x8b3040
// 008b37fe  837c241000           cmp dword ptr [esp + 0x10], 0
// 008b3803  75a0                 jne 0x8b37a5
// 008b3805  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b3809  85c0                 test eax, eax
// 008b380b  7411                 je 0x8b381e
// 008b380d  8b16                 mov edx, dword ptr [esi]
// 008b380f  6a01                 push 1
// 008b3811  6a00                 push 0
// 008b3813  50                   push eax
// 008b3814  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008b381a  8bce                 mov ecx, esi
// 008b381c  ffd0                 call eax
// 008b381e  5b                   pop ebx
// 008b381f  5f                   pop edi
// 008b3820  5e                   pop esi
// 008b3821  5d                   pop ebp
// 008b3822  59                   pop ecx
// 008b3823  c20c00               ret 0xc
// copied from an identical function in another client (function ?Copy@CXTPDockingPaneTabbedContainer@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
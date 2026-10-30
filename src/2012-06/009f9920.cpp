// roc 2012-06 009f9920  unit: CXTPDockingPaneAutoHidePanel  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9920
//
// 009f9920  56                   push esi
// 009f9921  8bf1                 mov esi, ecx
// 009f9923  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009f9926  85c9                 test ecx, ecx
// 009f9928  7506                 jne 0x9f9930
// 009f992a  33c0                 xor eax, eax
// 009f992c  5e                   pop esi
// 009f992d  c20800               ret 8
// 009f9930  8b4614               mov eax, dword ptr [esi + 0x14]
// 009f9933  85c0                 test eax, eax
// 009f9935  750a                 jne 0x9f9941
// 009f9937  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 009f993d  85c0                 test eax, eax
// 009f993f  74e9                 je 0x9f992a
// 009f9941  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009f9945  894e04               mov dword ptr [esi + 4], ecx
// 009f9948  8b4020               mov eax, dword ptr [eax + 0x20]
// 009f994b  57                   push edi
// 009f994c  50                   push eax
// 009f994d  8906                 mov dword ptr [esi], eax
// 009f994f  ff15803ab200         call dword ptr [0xb23a80]
// 009f9955  8b542410             mov edx, dword ptr [esp + 0x10]
// 009f9959  8d4618               lea eax, [esi + 0x18]
// 009f995c  50                   push eax
// 009f995d  c7460800000000       mov dword ptr [esi + 8], 0
// 009f9964  c7461000000000       mov dword ptr [esi + 0x10], 0
// 009f996b  89560c               mov dword ptr [esi + 0xc], edx
// 009f996e  ff158c3ab200         call dword ptr [0xb23a8c]
// 009f9974  8bce                 mov ecx, esi
// 009f9976  e855fdffff           call 0x9f96d0
// 009f997b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 009f997e  8bf8                 mov edi, eax
// 009f9980  85c9                 test ecx, ecx
// 009f9982  740a                 je 0x9f998e
// 009f9984  8b11                 mov edx, dword ptr [ecx]
// 009f9986  8b8274010000         mov eax, dword ptr [edx + 0x174]
// 009f998c  ffd0                 call eax
// 009f998e  ff15743ab200         call dword ptr [0xb23a74]
// 009f9994  e8398af8ff           call 0x9823d2
// 009f9999  68007f0000           push 0x7f00
// 009f999e  6a00                 push 0
// 009f99a0  ff159c3ab200         call dword ptr [0xb23a9c]
// 009f99a6  50                   push eax
// 009f99a7  ff15783bb200         call dword ptr [0xb23b78]
// 009f99ad  8bc7                 mov eax, edi
// 009f99af  5f                   pop edi
// 009f99b0  5e                   pop esi
// 009f99b1  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCustomizeTools.cpp (function ?DoDragDrop@CXTPCustomizeDropSource@@QAEKPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCustomizeTools.cpp

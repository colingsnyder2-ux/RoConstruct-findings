// roc 2008-06 00760360  unit: CXTPDockingPaneTabbedContainer  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760360
//
// 00760360  51                   push ecx
// 00760361  55                   push ebp
// 00760362  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00760366  56                   push esi
// 00760367  57                   push edi
// 00760368  33ff                 xor edi, edi
// 0076036a  8bf1                 mov esi, ecx
// 0076036c  3bef                 cmp ebp, edi
// 0076036e  0f845b010000         je 0x7604cf
// 00760374  53                   push ebx
// 00760375  8d4e54               lea ecx, [esi + 0x54]
// 00760378  89be94010000         mov dword ptr [esi + 0x194], edi
// 0076037e  e81dd1ffff           call 0x75d4a0
// 00760383  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00760389  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0076038d  894668               mov dword ptr [esi + 0x68], eax
// 00760390  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 00760396  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0076039c  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 0076039f  894e70               mov dword ptr [esi + 0x70], ecx
// 007603a2  8b5574               mov edx, dword ptr [ebp + 0x74]
// 007603a5  895674               mov dword ptr [esi + 0x74], edx
// 007603a8  8b4578               mov eax, dword ptr [ebp + 0x78]
// 007603ab  894678               mov dword ptr [esi + 0x78], eax
// 007603ae  8b4d7c               mov ecx, dword ptr [ebp + 0x7c]
// 007603b1  894e7c               mov dword ptr [esi + 0x7c], ecx
// 007603b4  8b5558               mov edx, dword ptr [ebp + 0x58]
// 007603b7  895658               mov dword ptr [esi + 0x58], edx
// 007603ba  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 007603bd  89465c               mov dword ptr [esi + 0x5c], eax
// 007603c0  c7869801000001000000 mov dword ptr [esi + 0x198], 1
// 007603ca  89be9c010000         mov dword ptr [esi + 0x19c], edi
// 007603d0  897c2418             mov dword ptr [esp + 0x18], edi
// 007603d4  3bdf                 cmp ebx, edi
// 007603d6  746c                 je 0x760444
// 007603d8  8d4d54               lea ecx, [ebp + 0x54]
// 007603db  e890030400           call 0x7a0770
// 007603e0  8944241c             mov dword ptr [esp + 0x1c], eax
// 007603e4  3bc7                 cmp eax, edi
// 007603e6  0f84e2000000         je 0x7604ce
// 007603ec  8d642400             lea esp, [esp]
// 007603f0  8d4c241c             lea ecx, [esp + 0x1c]
// 007603f4  51                   push ecx
// 007603f5  8d4d54               lea ecx, [ebp + 0x54]
// 007603f8  e883030400           call 0x7a0780
// 007603fd  85c0                 test eax, eax
// 007603ff  7405                 je 0x760406
// 00760401  8d78e0               lea edi, [eax - 0x20]
// 00760404  eb02                 jmp 0x760408
// 00760406  33ff                 xor edi, edi
// 00760408  8b5720               mov edx, dword ptr [edi + 0x20]
// 0076040b  8b4660               mov eax, dword ptr [esi + 0x60]
// 0076040e  8b5244               mov edx, dword ptr [edx + 0x44]
// 00760411  6a00                 push 0
// 00760413  8d4f20               lea ecx, [edi + 0x20]
// 00760416  53                   push ebx
// 00760417  50                   push eax
// 00760418  ffd2                 call edx
// 0076041a  85c0                 test eax, eax
// 0076041c  7405                 je 0x760423
// 0076041e  83c0e0               add eax, -0x20
// 00760421  eb02                 jmp 0x760425
// 00760423  33c0                 xor eax, eax
// 00760425  39bda4010000         cmp dword ptr [ebp + 0x1a4], edi
// 0076042b  7504                 jne 0x760431
// 0076042d  89442418             mov dword ptr [esp + 0x18], eax
// 00760431  6a01                 push 1
// 00760433  50                   push eax
// 00760434  8bce                 mov ecx, esi
// 00760436  e8b5f8ffff           call 0x75fcf0
// 0076043b  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00760440  75ae                 jne 0x7603f0
// 00760442  eb71                 jmp 0x7604b5
// 00760444  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 0076044a  89442410             mov dword ptr [esp + 0x10], eax
// 0076044e  3bc7                 cmp eax, edi
// 00760450  747c                 je 0x7604ce
// 00760452  8d5d54               lea ebx, [ebp + 0x54]
// 00760455  8d442410             lea eax, [esp + 0x10]
// 00760459  50                   push eax
// 0076045a  8bcb                 mov ecx, ebx
// 0076045c  e81f030400           call 0x7a0780
// 00760461  85c0                 test eax, eax
// 00760463  7405                 je 0x76046a
// 00760465  8d78e0               lea edi, [eax - 0x20]
// 00760468  eb02                 jmp 0x76046c
// 0076046a  33ff                 xor edi, edi
// 0076046c  8bcf                 mov ecx, edi
// 0076046e  e86d71faff           call 0x7075e0
// 00760473  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00760477  85c1                 test ecx, eax
// 00760479  7533                 jne 0x7604ae
// 0076047b  39bda4010000         cmp dword ptr [ebp + 0x1a4], edi
// 00760481  750b                 jne 0x76048e
// 00760483  837c241800           cmp dword ptr [esp + 0x18], 0
// 00760488  7504                 jne 0x76048e
// 0076048a  897c2418             mov dword ptr [esp + 0x18], edi
// 0076048e  85ff                 test edi, edi
// 00760490  7405                 je 0x760497
// 00760492  8d4720               lea eax, [edi + 0x20]
// 00760495  eb02                 jmp 0x760499
// 00760497  33c0                 xor eax, eax
// 00760499  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0076049c  8b11                 mov edx, dword ptr [ecx]
// 0076049e  50                   push eax
// 0076049f  8b4248               mov eax, dword ptr [edx + 0x48]
// 007604a2  ffd0                 call eax
// 007604a4  6a01                 push 1
// 007604a6  57                   push edi
// 007604a7  8bce                 mov ecx, esi
// 007604a9  e842f8ffff           call 0x75fcf0
// 007604ae  837c241000           cmp dword ptr [esp + 0x10], 0
// 007604b3  75a0                 jne 0x760455
// 007604b5  8b442418             mov eax, dword ptr [esp + 0x18]
// 007604b9  85c0                 test eax, eax
// 007604bb  7411                 je 0x7604ce
// 007604bd  8b16                 mov edx, dword ptr [esi]
// 007604bf  6a01                 push 1
// 007604c1  6a00                 push 0
// 007604c3  50                   push eax
// 007604c4  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 007604ca  8bce                 mov ecx, esi
// 007604cc  ffd0                 call eax
// 007604ce  5b                   pop ebx
// 007604cf  5f                   pop edi
// 007604d0  5e                   pop esi
// 007604d1  5d                   pop ebp
// 007604d2  59                   pop ecx
// 007604d3  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Copy@CXTPDockingPaneTabbedContainer@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

// roc 2007-03 006cc350  unit: seg_006c0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc350
//
// 006cc350  56                   push esi
// 006cc351  57                   push edi
// 006cc352  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006cc356  85ff                 test edi, edi
// 006cc358  8bf1                 mov esi, ecx
// 006cc35a  7446                 je 0x6cc3a2
// 006cc35c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cc360  894668               mov dword ptr [esi + 0x68], eax
// 006cc363  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 006cc366  894e58               mov dword ptr [esi + 0x58], ecx
// 006cc369  8b5728               mov edx, dword ptr [edi + 0x28]
// 006cc36c  89565c               mov dword ptr [esi + 0x5c], edx
// 006cc36f  8b473c               mov eax, dword ptr [edi + 0x3c]
// 006cc372  894670               mov dword ptr [esi + 0x70], eax
// 006cc375  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006cc378  894e74               mov dword ptr [esi + 0x74], ecx
// 006cc37b  8b5744               mov edx, dword ptr [edi + 0x44]
// 006cc37e  895678               mov dword ptr [esi + 0x78], edx
// 006cc381  8b4748               mov eax, dword ptr [edi + 0x48]
// 006cc384  6a01                 push 1
// 006cc386  57                   push edi
// 006cc387  8bce                 mov ecx, esi
// 006cc389  89467c               mov dword ptr [esi + 0x7c], eax
// 006cc38c  e89ff8ffff           call 0x6cbc30
// 006cc391  8b16                 mov edx, dword ptr [esi]
// 006cc393  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 006cc399  6a01                 push 1
// 006cc39b  6a01                 push 1
// 006cc39d  57                   push edi
// 006cc39e  8bce                 mov ecx, esi
// 006cc3a0  ffd0                 call eax
// 006cc3a2  5f                   pop edi
// 006cc3a3  5e                   pop esi
// 006cc3a4  c20800               ret 8
// copied from an identical function in another client (function ?Init@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
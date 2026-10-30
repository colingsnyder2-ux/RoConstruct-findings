// roc 2009-12 008b3830  unit: CXTPDockingPaneTabbedContainer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3830
//
// 008b3830  56                   push esi
// 008b3831  57                   push edi
// 008b3832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b3836  8bf1                 mov esi, ecx
// 008b3838  85ff                 test edi, edi
// 008b383a  7446                 je 0x8b3882
// 008b383c  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b3840  894668               mov dword ptr [esi + 0x68], eax
// 008b3843  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008b3846  894e58               mov dword ptr [esi + 0x58], ecx
// 008b3849  8b5728               mov edx, dword ptr [edi + 0x28]
// 008b384c  89565c               mov dword ptr [esi + 0x5c], edx
// 008b384f  8b473c               mov eax, dword ptr [edi + 0x3c]
// 008b3852  894670               mov dword ptr [esi + 0x70], eax
// 008b3855  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008b3858  894e74               mov dword ptr [esi + 0x74], ecx
// 008b385b  8b5744               mov edx, dword ptr [edi + 0x44]
// 008b385e  895678               mov dword ptr [esi + 0x78], edx
// 008b3861  8b4748               mov eax, dword ptr [edi + 0x48]
// 008b3864  6a01                 push 1
// 008b3866  57                   push edi
// 008b3867  8bce                 mov ecx, esi
// 008b3869  89467c               mov dword ptr [esi + 0x7c], eax
// 008b386c  e8cff7ffff           call 0x8b3040
// 008b3871  8b16                 mov edx, dword ptr [esi]
// 008b3873  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008b3879  6a01                 push 1
// 008b387b  6a01                 push 1
// 008b387d  57                   push edi
// 008b387e  8bce                 mov ecx, esi
// 008b3880  ffd0                 call eax
// 008b3882  5f                   pop edi
// 008b3883  5e                   pop esi
// 008b3884  c20800               ret 8
// copied from an identical function in another client (function ?Init@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@PAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
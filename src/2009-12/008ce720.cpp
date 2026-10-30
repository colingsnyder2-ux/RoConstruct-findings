// roc 2009-12 008ce720  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce720
//
// 008ce720  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ce724  2b44240c             sub eax, dword ptr [esp + 0xc]
// 008ce728  53                   push ebx
// 008ce729  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008ce72d  55                   push ebp
// 008ce72e  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008ce732  56                   push esi
// 008ce733  8bf1                 mov esi, ecx
// 008ce735  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce739  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 008ce73d  57                   push edi
// 008ce73e  3bc8                 cmp ecx, eax
// 008ce740  755e                 jne 0x8ce7a0
// 008ce742  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008ce745  8b11                 mov edx, dword ptr [ecx]
// 008ce747  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008ce74a  ffd0                 call eax
// 008ce74c  83b8c000000000       cmp dword ptr [eax + 0xc0], 0
// 008ce753  744b                 je 0x8ce7a0
// 008ce755  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008ce758  8b11                 mov edx, dword ptr [ecx]
// 008ce75a  8b4248               mov eax, dword ptr [edx + 0x48]
// 008ce75d  ffd0                 call eax
// 008ce75f  83f801               cmp eax, 1
// 008ce762  740f                 je 0x8ce773
// 008ce764  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008ce767  8b11                 mov edx, dword ptr [ecx]
// 008ce769  8b4248               mov eax, dword ptr [edx + 0x48]
// 008ce76c  ffd0                 call eax
// 008ce76e  83f803               cmp eax, 3
// 008ce771  752d                 jne 0x8ce7a0
// 008ce773  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ce777  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008ce77b  53                   push ebx
// 008ce77c  83ec10               sub esp, 0x10
// 008ce77f  8bc4                 mov eax, esp
// 008ce781  8908                 mov dword ptr [eax], ecx
// 008ce783  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ce787  895004               mov dword ptr [eax + 4], edx
// 008ce78a  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ce78e  894808               mov dword ptr [eax + 8], ecx
// 008ce791  55                   push ebp
// 008ce792  8bce                 mov ecx, esi
// 008ce794  89500c               mov dword ptr [eax + 0xc], edx
// 008ce797  e804fdffff           call 0x8ce4a0
// 008ce79c  85c0                 test eax, eax
// 008ce79e  7557                 jne 0x8ce7f7
// 008ce7a0  8bce                 mov ecx, esi
// 008ce7a2  e8f9bbf4ff           call 0x81a3a0
// 008ce7a7  8bcb                 mov ecx, ebx
// 008ce7a9  85c0                 test eax, eax
// 008ce7ab  7509                 jne 0x8ce7b6
// 008ce7ad  6a01                 push 1
// 008ce7af  e8ec19f4ff           call 0x8101a0
// 008ce7b4  eb20                 jmp 0x8ce7d6
// 008ce7b6  8b4660               mov eax, dword ptr [esi + 0x60]
// 008ce7b9  397008               cmp dword ptr [eax + 8], esi
// 008ce7bc  7507                 jne 0x8ce7c5
// 008ce7be  e88dc3f3ff           call 0x80ab50
// 008ce7c3  eb11                 jmp 0x8ce7d6
// 008ce7c5  397004               cmp dword ptr [eax + 4], esi
// 008ce7c8  7507                 jne 0x8ce7d1
// 008ce7ca  e8a1c3f3ff           call 0x80ab70
// 008ce7cf  eb05                 jmp 0x8ce7d6
// 008ce7d1  e86aa9f3ff           call 0x809140
// 008ce7d6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008ce7da  8b542424             mov edx, dword ptr [esp + 0x24]
// 008ce7de  8b742418             mov esi, dword ptr [esp + 0x18]
// 008ce7e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ce7e6  2bd7                 sub edx, edi
// 008ce7e8  52                   push edx
// 008ce7e9  2bce                 sub ecx, esi
// 008ce7eb  51                   push ecx
// 008ce7ec  50                   push eax
// 008ce7ed  57                   push edi
// 008ce7ee  56                   push esi
// 008ce7ef  55                   push ebp
// 008ce7f0  8bcb                 mov ecx, ebx
// 008ce7f2  e8b926f4ff           call 0x810eb0
// 008ce7f7  5f                   pop edi
// 008ce7f8  5e                   pop esi
// 008ce7f9  5d                   pop ebp
// 008ce7fa  5b                   pop ebx
// 008ce7fb  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawImage@CXTPTabManagerItem@@QAEXPAVCDC@@VCRect@@PAVCXTPImageManagerIcon@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp
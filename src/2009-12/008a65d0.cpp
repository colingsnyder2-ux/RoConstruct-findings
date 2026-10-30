// roc 2009-12 008a65d0  unit: CXTPReportTip  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a65d0
//
// 008a65d0  8b442404             mov eax, dword ptr [esp + 4]
// 008a65d4  83e800               sub eax, 0
// 008a65d7  56                   push esi
// 008a65d8  8bf1                 mov esi, ecx
// 008a65da  0f8480000000         je 0x8a6660
// 008a65e0  83e801               sub eax, 1
// 008a65e3  7444                 je 0x8a6629
// 008a65e5  83e801               sub eax, 1
// 008a65e8  0f8594000000         jne 0x8a6682
// 008a65ee  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a65f1  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008a65f7  85c9                 test ecx, ecx
// 008a65f9  0f8483000000         je 0x8a6682
// 008a65ff  e81c66f8ff           call 0x82cc20
// 008a6604  85c0                 test eax, eax
// 008a6606  7e7a                 jle 0x8a6682
// 008a6608  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a660b  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008a6611  8b11                 mov edx, dword ptr [ecx]
// 008a6613  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008a6616  6a00                 push 0
// 008a6618  6a00                 push 0
// 008a661a  ffd0                 call eax
// 008a661c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a661f  50                   push eax
// 008a6620  e87bf3f7ff           call 0x8259a0
// 008a6625  5e                   pop esi
// 008a6626  c20400               ret 4
// 008a6629  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a662c  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 008a6632  85c9                 test ecx, ecx
// 008a6634  744c                 je 0x8a6682
// 008a6636  e8e565f8ff           call 0x82cc20
// 008a663b  85c0                 test eax, eax
// 008a663d  7e43                 jle 0x8a6682
// 008a663f  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a6642  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 008a6648  8b01                 mov eax, dword ptr [ecx]
// 008a664a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008a664d  6a00                 push 0
// 008a664f  6a00                 push 0
// 008a6651  ffd2                 call edx
// 008a6653  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6656  50                   push eax
// 008a6657  e844f3f7ff           call 0x8259a0
// 008a665c  5e                   pop esi
// 008a665d  c20400               ret 4
// 008a6660  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6663  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a6669  8b11                 mov edx, dword ptr [ecx]
// 008a666b  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 008a6671  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008a6674  6a00                 push 0
// 008a6676  50                   push eax
// 008a6677  ffd2                 call edx
// 008a6679  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a667c  50                   push eax
// 008a667d  e81ef3f7ff           call 0x8259a0
// 008a6682  5e                   pop esi
// 008a6683  c20400               ret 4
// copied from an identical function in another client (function ?MoveFirstVisibleRow@CXTPReportNavigator@@IAEXW4XTPReportRowType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
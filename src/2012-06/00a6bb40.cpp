// roc 2012-06 00a6bb40  unit: CXTCaptionPopupWnd  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bb40
//
// 00a6bb40  83ec30               sub esp, 0x30
// 00a6bb43  53                   push ebx
// 00a6bb44  55                   push ebp
// 00a6bb45  56                   push esi
// 00a6bb46  8bf1                 mov esi, ecx
// 00a6bb48  57                   push edi
// 00a6bb49  56                   push esi
// 00a6bb4a  8d4c2424             lea ecx, [esp + 0x24]
// 00a6bb4e  e84d96f6ff           call 0x9d51a0
// 00a6bb53  6afe                 push -2
// 00a6bb55  6afe                 push -2
// 00a6bb57  8d442428             lea eax, [esp + 0x28]
// 00a6bb5b  50                   push eax
// 00a6bb5c  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a6bb62  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a6bb66  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a6bb6a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a6bb6e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a6bb72  8bf8                 mov edi, eax
// 00a6bb74  83c013               add eax, 0x13
// 00a6bb77  6a01                 push 1
// 00a6bb79  89542440             mov dword ptr [esp + 0x40], edx
// 00a6bb7d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a6bb81  2bd0                 sub edx, eax
// 00a6bb83  52                   push edx
// 00a6bb84  2bcb                 sub ecx, ebx
// 00a6bb86  51                   push ecx
// 00a6bb87  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a6bb8a  50                   push eax
// 00a6bb8b  53                   push ebx
// 00a6bb8c  89442438             mov dword ptr [esp + 0x38], eax
// 00a6bb90  e84569f1ff           call 0x9824da
// 00a6bb95  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a6bb99  8d6f13               lea ebp, [edi + 0x13]
// 00a6bb9c  6a01                 push 1
// 00a6bb9e  8bcd                 mov ecx, ebp
// 00a6bba0  2bcf                 sub ecx, edi
// 00a6bba2  51                   push ecx
// 00a6bba3  2bd3                 sub edx, ebx
// 00a6bba5  52                   push edx
// 00a6bba6  57                   push edi
// 00a6bba7  53                   push ebx
// 00a6bba8  8d4e60               lea ecx, [esi + 0x60]
// 00a6bbab  e82a69f1ff           call 0x9824da
// 00a6bbb0  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a6bbb4  6afe                 push -2
// 00a6bbb6  6afe                 push -2
// 00a6bbb8  8d4c2418             lea ecx, [esp + 0x18]
// 00a6bbbc  51                   push ecx
// 00a6bbbd  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a6bbc1  897c2420             mov dword ptr [esp + 0x20], edi
// 00a6bbc5  89442424             mov dword ptr [esp + 0x24], eax
// 00a6bbc9  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a6bbcd  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a6bbd3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a6bbd7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a6bbdb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a6bbdf  8d48f0               lea ecx, [eax - 0x10]
// 00a6bbe2  6a01                 push 1
// 00a6bbe4  2bfa                 sub edi, edx
// 00a6bbe6  57                   push edi
// 00a6bbe7  2bc1                 sub eax, ecx
// 00a6bbe9  50                   push eax
// 00a6bbea  52                   push edx
// 00a6bbeb  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a6bbef  51                   push ecx
// 00a6bbf0  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00a6bbf6  e8df68f1ff           call 0x9824da
// 00a6bbfb  5f                   pop edi
// 00a6bbfc  5e                   pop esi
// 00a6bbfd  5d                   pop ebp
// 00a6bbfe  5b                   pop ebx
// 00a6bbff  83c430               add esp, 0x30
// 00a6bc02  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTCaptionPopupWnd.cpp (function ?RecalcLayout@CXTCaptionPopupWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionPopupWnd.cpp

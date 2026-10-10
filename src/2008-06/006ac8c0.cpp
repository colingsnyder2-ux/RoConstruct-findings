// roc 2008-06 006ac8c0  unit: CPatchedControlComboBox  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ac8c0
//
// 006ac8c0  8b442404             mov eax, dword ptr [esp + 4]
// 006ac8c4  83ec10               sub esp, 0x10
// 006ac8c7  53                   push ebx
// 006ac8c8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006ac8cc  55                   push ebp
// 006ac8cd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006ac8d1  56                   push esi
// 006ac8d2  57                   push edi
// 006ac8d3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006ac8d7  8bf1                 mov esi, ecx
// 006ac8d9  c70700000000         mov dword ptr [edi], 0
// 006ac8df  8d4c2434             lea ecx, [esp + 0x34]
// 006ac8e3  c70300000000         mov dword ptr [ebx], 0
// 006ac8e9  51                   push ecx
// 006ac8ea  c7450000000000       mov dword ptr [ebp], 0
// 006ac8f1  8bce                 mov ecx, esi
// 006ac8f3  c70000000000         mov dword ptr [eax], 0
// 006ac8f9  e8a2b90300           call 0x6e82a0
// 006ac8fe  85c0                 test eax, eax
// 006ac900  740f                 je 0x6ac911
// 006ac902  5f                   pop edi
// 006ac903  5e                   pop esi
// 006ac904  5d                   pop ebp
// 006ac905  b857000780           mov eax, 0x80070057
// 006ac90a  5b                   pop ebx
// 006ac90b  83c410               add esp, 0x10
// 006ac90e  c22000               ret 0x20
// 006ac911  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 006ac917  85c0                 test eax, eax
// 006ac919  7473                 je 0x6ac98e
// 006ac91b  83782000             cmp dword ptr [eax + 0x20], 0
// 006ac91f  746d                 je 0x6ac98e
// 006ac921  8b56e0               mov edx, dword ptr [esi - 0x20]
// 006ac924  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006ac92a  8d4ee0               lea ecx, [esi - 0x20]
// 006ac92d  6a00                 push 0
// 006ac92f  ffd0                 call eax
// 006ac931  85c0                 test eax, eax
// 006ac933  7459                 je 0x6ac98e
// 006ac935  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006ac93b  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 006ac941  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 006ac947  894c2410             mov dword ptr [esp + 0x10], ecx
// 006ac94b  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 006ac951  89542414             mov dword ptr [esp + 0x14], edx
// 006ac955  8d542410             lea edx, [esp + 0x10]
// 006ac959  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006ac95d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 006ac963  52                   push edx
// 006ac964  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ac968  e8c542ffff           call 0x6a0c32
// 006ac96d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ac971  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ac975  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ac979  8901                 mov dword ptr [ecx], eax
// 006ac97b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ac97f  2bd0                 sub edx, eax
// 006ac981  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ac985  894d00               mov dword ptr [ebp], ecx
// 006ac988  2bc1                 sub eax, ecx
// 006ac98a  8913                 mov dword ptr [ebx], edx
// 006ac98c  8907                 mov dword ptr [edi], eax
// 006ac98e  5f                   pop edi
// 006ac98f  5e                   pop esi
// 006ac990  5d                   pop ebp
// 006ac991  33c0                 xor eax, eax
// 006ac993  5b                   pop ebx
// 006ac994  83c410               add esp, 0x10
// 006ac997  c22000               ret 0x20
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?AccessibleLocation@CXTPControl@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp

// roc 2012-06 00a3b880  unit: CXTPDockingPaneTabbedContainer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b880
//
// 00a3b880  8b442404             mov eax, dword ptr [esp + 4]
// 00a3b884  83ec10               sub esp, 0x10
// 00a3b887  53                   push ebx
// 00a3b888  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a3b88c  55                   push ebp
// 00a3b88d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00a3b891  56                   push esi
// 00a3b892  57                   push edi
// 00a3b893  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00a3b897  c70700000000         mov dword ptr [edi], 0
// 00a3b89d  c70300000000         mov dword ptr [ebx], 0
// 00a3b8a3  8bf1                 mov esi, ecx
// 00a3b8a5  c7450000000000       mov dword ptr [ebp], 0
// 00a3b8ac  c70000000000         mov dword ptr [eax], 0
// 00a3b8b2  8d86c8feffff         lea eax, [esi - 0x138]
// 00a3b8b8  85c0                 test eax, eax
// 00a3b8ba  7458                 je 0xa3b914
// 00a3b8bc  83782000             cmp dword ptr [eax + 0x20], 0
// 00a3b8c0  7452                 je 0xa3b914
// 00a3b8c2  8d4c2434             lea ecx, [esp + 0x34]
// 00a3b8c6  51                   push ecx
// 00a3b8c7  8bce                 mov ecx, esi
// 00a3b8c9  e822dff8ff           call 0x9c97f0
// 00a3b8ce  85c0                 test eax, eax
// 00a3b8d0  740f                 je 0xa3b8e1
// 00a3b8d2  5f                   pop edi
// 00a3b8d3  5e                   pop esi
// 00a3b8d4  5d                   pop ebp
// 00a3b8d5  b857000780           mov eax, 0x80070057
// 00a3b8da  5b                   pop ebx
// 00a3b8db  83c410               add esp, 0x10
// 00a3b8de  c22000               ret 0x20
// 00a3b8e1  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 00a3b8e7  8d542410             lea edx, [esp + 0x10]
// 00a3b8eb  52                   push edx
// 00a3b8ec  50                   push eax
// 00a3b8ed  ff15f83ab200         call dword ptr [0xb23af8]
// 00a3b8f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3b8f7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a3b8fb  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3b8ff  8901                 mov dword ptr [ecx], eax
// 00a3b901  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3b905  2bd0                 sub edx, eax
// 00a3b907  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a3b90b  894d00               mov dword ptr [ebp], ecx
// 00a3b90e  2bc1                 sub eax, ecx
// 00a3b910  8913                 mov dword ptr [ebx], edx
// 00a3b912  8907                 mov dword ptr [edi], eax
// 00a3b914  5f                   pop edi
// 00a3b915  5e                   pop esi
// 00a3b916  5d                   pop ebp
// 00a3b917  33c0                 xor eax, eax
// 00a3b919  5b                   pop ebx
// 00a3b91a  83c410               add esp, 0x10
// 00a3b91d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleLocation@CXTPDockingPaneTabbedContainer@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

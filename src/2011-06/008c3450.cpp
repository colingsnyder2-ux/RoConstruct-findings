// roc 2011-06 008c3450  unit: CXTPDockingPaneTabbedContainer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3450
//
// 008c3450  8b442404             mov eax, dword ptr [esp + 4]
// 008c3454  83ec10               sub esp, 0x10
// 008c3457  53                   push ebx
// 008c3458  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008c345c  55                   push ebp
// 008c345d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008c3461  56                   push esi
// 008c3462  57                   push edi
// 008c3463  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008c3467  c70700000000         mov dword ptr [edi], 0
// 008c346d  c70300000000         mov dword ptr [ebx], 0
// 008c3473  8bf1                 mov esi, ecx
// 008c3475  c7450000000000       mov dword ptr [ebp], 0
// 008c347c  c70000000000         mov dword ptr [eax], 0
// 008c3482  8d86c8feffff         lea eax, [esi - 0x138]
// 008c3488  85c0                 test eax, eax
// 008c348a  7458                 je 0x8c34e4
// 008c348c  83782000             cmp dword ptr [eax + 0x20], 0
// 008c3490  7452                 je 0x8c34e4
// 008c3492  8d4c2434             lea ecx, [esp + 0x34]
// 008c3496  51                   push ecx
// 008c3497  8bce                 mov ecx, esi
// 008c3499  e892def8ff           call 0x851330
// 008c349e  85c0                 test eax, eax
// 008c34a0  740f                 je 0x8c34b1
// 008c34a2  5f                   pop edi
// 008c34a3  5e                   pop esi
// 008c34a4  5d                   pop ebp
// 008c34a5  b857000780           mov eax, 0x80070057
// 008c34aa  5b                   pop ebx
// 008c34ab  83c410               add esp, 0x10
// 008c34ae  c22000               ret 0x20
// 008c34b1  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 008c34b7  8d542410             lea edx, [esp + 0x10]
// 008c34bb  52                   push edx
// 008c34bc  50                   push eax
// 008c34bd  ff155c1ca400         call dword ptr [0xa41c5c]
// 008c34c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c34c7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c34cb  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c34cf  8901                 mov dword ptr [ecx], eax
// 008c34d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c34d5  2bd0                 sub edx, eax
// 008c34d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008c34db  894d00               mov dword ptr [ebp], ecx
// 008c34de  2bc1                 sub eax, ecx
// 008c34e0  8913                 mov dword ptr [ebx], edx
// 008c34e2  8907                 mov dword ptr [edi], eax
// 008c34e4  5f                   pop edi
// 008c34e5  5e                   pop esi
// 008c34e6  5d                   pop ebp
// 008c34e7  33c0                 xor eax, eax
// 008c34e9  5b                   pop ebx
// 008c34ea  83c410               add esp, 0x10
// 008c34ed  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleLocation@CXTPDockingPaneTabbedContainer@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

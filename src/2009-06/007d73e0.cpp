// roc 2009-06 007d73e0  unit: CXTPDockingPaneTabbedContainer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d73e0
//
// 007d73e0  8b442404             mov eax, dword ptr [esp + 4]
// 007d73e4  83ec10               sub esp, 0x10
// 007d73e7  53                   push ebx
// 007d73e8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007d73ec  55                   push ebp
// 007d73ed  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007d73f1  56                   push esi
// 007d73f2  57                   push edi
// 007d73f3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007d73f7  c70700000000         mov dword ptr [edi], 0
// 007d73fd  c70300000000         mov dword ptr [ebx], 0
// 007d7403  8bf1                 mov esi, ecx
// 007d7405  c7450000000000       mov dword ptr [ebp], 0
// 007d740c  c70000000000         mov dword ptr [eax], 0
// 007d7412  8d86c8feffff         lea eax, [esi - 0x138]
// 007d7418  85c0                 test eax, eax
// 007d741a  7458                 je 0x7d7474
// 007d741c  83782000             cmp dword ptr [eax + 0x20], 0
// 007d7420  7452                 je 0x7d7474
// 007d7422  8d4c2434             lea ecx, [esp + 0x34]
// 007d7426  51                   push ecx
// 007d7427  8bce                 mov ecx, esi
// 007d7429  e8a297f8ff           call 0x760bd0
// 007d742e  85c0                 test eax, eax
// 007d7430  740f                 je 0x7d7441
// 007d7432  5f                   pop edi
// 007d7433  5e                   pop esi
// 007d7434  5d                   pop ebp
// 007d7435  b857000780           mov eax, 0x80070057
// 007d743a  5b                   pop ebx
// 007d743b  83c410               add esp, 0x10
// 007d743e  c22000               ret 0x20
// 007d7441  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 007d7447  8d542410             lea edx, [esp + 0x10]
// 007d744b  52                   push edx
// 007d744c  50                   push eax
// 007d744d  ff15f4ed8900         call dword ptr [0x89edf4]
// 007d7453  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d7457  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007d745b  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d745f  8901                 mov dword ptr [ecx], eax
// 007d7461  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d7465  2bd0                 sub edx, eax
// 007d7467  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007d746b  894d00               mov dword ptr [ebp], ecx
// 007d746e  2bc1                 sub eax, ecx
// 007d7470  8913                 mov dword ptr [ebx], edx
// 007d7472  8907                 mov dword ptr [edi], eax
// 007d7474  5f                   pop edi
// 007d7475  5e                   pop esi
// 007d7476  5d                   pop ebp
// 007d7477  33c0                 xor eax, eax
// 007d7479  5b                   pop ebx
// 007d747a  83c410               add esp, 0x10
// 007d747d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleLocation@CXTPDockingPaneTabbedContainer@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

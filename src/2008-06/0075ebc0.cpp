// from server: 100% by auto
// roc 2008-06 0075ebc0  unit: CXTPDockingPaneTabbedContainer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ebc0
//
// 0075ebc0  8b442404             mov eax, dword ptr [esp + 4]
// 0075ebc4  83ec10               sub esp, 0x10
// 0075ebc7  53                   push ebx
// 0075ebc8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0075ebcc  55                   push ebp
// 0075ebcd  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0075ebd1  56                   push esi
// 0075ebd2  57                   push edi
// 0075ebd3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0075ebd7  c70700000000         mov dword ptr [edi], 0
// 0075ebdd  c70300000000         mov dword ptr [ebx], 0
// 0075ebe3  8bf1                 mov esi, ecx
// 0075ebe5  c7450000000000       mov dword ptr [ebp], 0
// 0075ebec  c70000000000         mov dword ptr [eax], 0
// 0075ebf2  8d86c8feffff         lea eax, [esi - 0x138]
// 0075ebf8  85c0                 test eax, eax
// 0075ebfa  7458                 je 0x75ec54
// 0075ebfc  83782000             cmp dword ptr [eax + 0x20], 0
// 0075ec00  7452                 je 0x75ec54
// 0075ec02  8d4c2434             lea ecx, [esp + 0x34]
// 0075ec06  51                   push ecx
// 0075ec07  8bce                 mov ecx, esi
// 0075ec09  e89296f8ff           call 0x6e82a0
// 0075ec0e  85c0                 test eax, eax
// 0075ec10  740f                 je 0x75ec21
// 0075ec12  5f                   pop edi
// 0075ec13  5e                   pop esi
// 0075ec14  5d                   pop ebp
// 0075ec15  b857000780           mov eax, 0x80070057
// 0075ec1a  5b                   pop ebx
// 0075ec1b  83c410               add esp, 0x10
// 0075ec1e  c22000               ret 0x20
// 0075ec21  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 0075ec27  8d542410             lea edx, [esp + 0x10]
// 0075ec2b  52                   push edx
// 0075ec2c  50                   push eax
// 0075ec2d  ff15342e8000         call dword ptr [0x802e34]
// 0075ec33  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075ec37  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0075ec3b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075ec3f  8901                 mov dword ptr [ecx], eax
// 0075ec41  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075ec45  2bd0                 sub edx, eax
// 0075ec47  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0075ec4b  894d00               mov dword ptr [ebp], ecx
// 0075ec4e  2bc1                 sub eax, ecx
// 0075ec50  8913                 mov dword ptr [ebx], edx
// 0075ec52  8907                 mov dword ptr [edi], eax
// 0075ec54  5f                   pop edi
// 0075ec55  5e                   pop esi
// 0075ec56  5d                   pop ebp
// 0075ec57  33c0                 xor eax, eax
// 0075ec59  5b                   pop ebx
// 0075ec5a  83c410               add esp, 0x10
// 0075ec5d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleLocation@CXTPDockingPaneTabbedContainer@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

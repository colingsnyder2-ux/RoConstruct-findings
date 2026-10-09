// roc 2009-12 008b1f20  unit: CXTPDockingPaneTabbedContainer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1f20
//
// 008b1f20  8b442404             mov eax, dword ptr [esp + 4]
// 008b1f24  83ec10               sub esp, 0x10
// 008b1f27  53                   push ebx
// 008b1f28  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008b1f2c  55                   push ebp
// 008b1f2d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008b1f31  56                   push esi
// 008b1f32  57                   push edi
// 008b1f33  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008b1f37  c70700000000         mov dword ptr [edi], 0
// 008b1f3d  c70300000000         mov dword ptr [ebx], 0
// 008b1f43  8bf1                 mov esi, ecx
// 008b1f45  c7450000000000       mov dword ptr [ebp], 0
// 008b1f4c  c70000000000         mov dword ptr [eax], 0
// 008b1f52  8d86c8feffff         lea eax, [esi - 0x138]
// 008b1f58  85c0                 test eax, eax
// 008b1f5a  7458                 je 0x8b1fb4
// 008b1f5c  83782000             cmp dword ptr [eax + 0x20], 0
// 008b1f60  7452                 je 0x8b1fb4
// 008b1f62  8d4c2434             lea ecx, [esp + 0x34]
// 008b1f66  51                   push ecx
// 008b1f67  8bce                 mov ecx, esi
// 008b1f69  e8329af8ff           call 0x83b9a0
// 008b1f6e  85c0                 test eax, eax
// 008b1f70  740f                 je 0x8b1f81
// 008b1f72  5f                   pop edi
// 008b1f73  5e                   pop esi
// 008b1f74  5d                   pop ebp
// 008b1f75  b857000780           mov eax, 0x80070057
// 008b1f7a  5b                   pop ebx
// 008b1f7b  83c410               add esp, 0x10
// 008b1f7e  c22000               ret 0x20
// 008b1f81  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 008b1f87  8d542410             lea edx, [esp + 0x10]
// 008b1f8b  52                   push edx
// 008b1f8c  50                   push eax
// 008b1f8d  ff1570cc9800         call dword ptr [0x98cc70]
// 008b1f93  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b1f97  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b1f9b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b1f9f  8901                 mov dword ptr [ecx], eax
// 008b1fa1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b1fa5  2bd0                 sub edx, eax
// 008b1fa7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b1fab  894d00               mov dword ptr [ebp], ecx
// 008b1fae  2bc1                 sub eax, ecx
// 008b1fb0  8913                 mov dword ptr [ebx], edx
// 008b1fb2  8907                 mov dword ptr [edi], eax
// 008b1fb4  5f                   pop edi
// 008b1fb5  5e                   pop esi
// 008b1fb6  5d                   pop ebp
// 008b1fb7  33c0                 xor eax, eax
// 008b1fb9  5b                   pop ebx
// 008b1fba  83c410               add esp, 0x10
// 008b1fbd  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleLocation@CXTPDockingPaneTabbedContainer@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

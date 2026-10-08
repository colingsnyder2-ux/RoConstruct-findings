// roc 2010-06 00866000  unit: CXTPDockingPaneTabbedContainer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00866000
//
// 00866000  8b442404             mov eax, dword ptr [esp + 4]
// 00866004  83ec10               sub esp, 0x10
// 00866007  53                   push ebx
// 00866008  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0086600c  55                   push ebp
// 0086600d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00866011  56                   push esi
// 00866012  57                   push edi
// 00866013  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00866017  c70700000000         mov dword ptr [edi], 0
// 0086601d  c70300000000         mov dword ptr [ebx], 0
// 00866023  8bf1                 mov esi, ecx
// 00866025  c7450000000000       mov dword ptr [ebp], 0
// 0086602c  c70000000000         mov dword ptr [eax], 0
// 00866032  8d86c8feffff         lea eax, [esi - 0x138]
// 00866038  85c0                 test eax, eax
// 0086603a  7458                 je 0x866094
// 0086603c  83782000             cmp dword ptr [eax + 0x20], 0
// 00866040  7452                 je 0x866094
// 00866042  8d4c2434             lea ecx, [esp + 0x34]
// 00866046  51                   push ecx
// 00866047  8bce                 mov ecx, esi
// 00866049  e8a29af8ff           call 0x7efaf0
// 0086604e  85c0                 test eax, eax
// 00866050  740f                 je 0x866061
// 00866052  5f                   pop edi
// 00866053  5e                   pop esi
// 00866054  5d                   pop ebp
// 00866055  b857000780           mov eax, 0x80070057
// 0086605a  5b                   pop ebx
// 0086605b  83c410               add esp, 0x10
// 0086605e  c22000               ret 0x20
// 00866061  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 00866067  8d542410             lea edx, [esp + 0x10]
// 0086606b  52                   push edx
// 0086606c  50                   push eax
// 0086606d  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 00866073  8b442410             mov eax, dword ptr [esp + 0x10]
// 00866077  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086607b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086607f  8901                 mov dword ptr [ecx], eax
// 00866081  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00866085  2bd0                 sub edx, eax
// 00866087  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086608b  894d00               mov dword ptr [ebp], ecx
// 0086608e  2bc1                 sub eax, ecx
// 00866090  8913                 mov dword ptr [ebx], edx
// 00866092  8907                 mov dword ptr [edi], eax
// 00866094  5f                   pop edi
// 00866095  5e                   pop esi
// 00866096  5d                   pop ebp
// 00866097  33c0                 xor eax, eax
// 00866099  5b                   pop ebx
// 0086609a  83c410               add esp, 0x10
// 0086609d  c22000               ret 0x20
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleLocation@CXTPDockingPaneTabbedContainer@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

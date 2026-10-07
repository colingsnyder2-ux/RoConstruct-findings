// roc 2008-06 0077d3b0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d3b0
//
// 0077d3b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077d3b4  56                   push esi
// 0077d3b5  6a00                 push 0
// 0077d3b7  6a00                 push 0
// 0077d3b9  8bf1                 mov esi, ecx
// 0077d3bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077d3bf  50                   push eax
// 0077d3c0  51                   push ecx
// 0077d3c1  8bce                 mov ecx, esi
// 0077d3c3  e838f3ffff           call 0x77c700
// 0077d3c8  85c0                 test eax, eax
// 0077d3ca  7421                 je 0x77d3ed
// 0077d3cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077d3d0  8b10                 mov edx, dword ptr [eax]
// 0077d3d2  8b520c               mov edx, dword ptr [edx + 0xc]
// 0077d3d5  51                   push ecx
// 0077d3d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077d3da  51                   push ecx
// 0077d3db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077d3df  51                   push ecx
// 0077d3e0  8bc8                 mov ecx, eax
// 0077d3e2  ffd2                 call edx
// 0077d3e4  b801000000           mov eax, 1
// 0077d3e9  5e                   pop esi
// 0077d3ea  c21000               ret 0x10
// 0077d3ed  837c241400           cmp dword ptr [esp + 0x14], 0
// 0077d3f2  7406                 je 0x77d3fa
// 0077d3f4  33c0                 xor eax, eax
// 0077d3f6  5e                   pop esi
// 0077d3f7  c21000               ret 0x10
// 0077d3fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077d3fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077d402  57                   push edi
// 0077d403  50                   push eax
// 0077d404  51                   push ecx
// 0077d405  8bce                 mov ecx, esi
// 0077d407  e814f0ffff           call 0x77c420
// 0077d40c  8bf8                 mov edi, eax
// 0077d40e  85ff                 test edi, edi
// 0077d410  0f8484000000         je 0x77d49a
// 0077d416  8b16                 mov edx, dword ptr [esi]
// 0077d418  8b4264               mov eax, dword ptr [edx + 0x64]
// 0077d41b  57                   push edi
// 0077d41c  8bce                 mov ecx, esi
// 0077d41e  ffd0                 call eax
// 0077d420  85c0                 test eax, eax
// 0077d422  7476                 je 0x77d49a
// 0077d424  8b16                 mov edx, dword ptr [esi]
// 0077d426  8b4238               mov eax, dword ptr [edx + 0x38]
// 0077d429  8bce                 mov ecx, esi
// 0077d42b  ffd0                 call eax
// 0077d42d  85c0                 test eax, eax
// 0077d42f  7423                 je 0x77d454
// 0077d431  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077d435  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077d439  8b16                 mov edx, dword ptr [esi]
// 0077d43b  8b5268               mov edx, dword ptr [edx + 0x68]
// 0077d43e  57                   push edi
// 0077d43f  50                   push eax
// 0077d440  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077d444  51                   push ecx
// 0077d445  50                   push eax
// 0077d446  8bce                 mov ecx, esi
// 0077d448  ffd2                 call edx
// 0077d44a  5f                   pop edi
// 0077d44b  b801000000           mov eax, 1
// 0077d450  5e                   pop esi
// 0077d451  c21000               ret 0x10
// 0077d454  8b06                 mov eax, dword ptr [esi]
// 0077d456  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077d459  8bce                 mov ecx, esi
// 0077d45b  ffd2                 call edx
// 0077d45d  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 0077d464  57                   push edi
// 0077d465  7413                 je 0x77d47a
// 0077d467  8b06                 mov eax, dword ptr [esi]
// 0077d469  8b5060               mov edx, dword ptr [eax + 0x60]
// 0077d46c  8bce                 mov ecx, esi
// 0077d46e  ffd2                 call edx
// 0077d470  5f                   pop edi
// 0077d471  b801000000           mov eax, 1
// 0077d476  5e                   pop esi
// 0077d477  c21000               ret 0x10
// 0077d47a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077d47e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077d482  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077d486  50                   push eax
// 0077d487  51                   push ecx
// 0077d488  52                   push edx
// 0077d489  8bce                 mov ecx, esi
// 0077d48b  e8f0faffff           call 0x77cf80
// 0077d490  5f                   pop edi
// 0077d491  b801000000           mov eax, 1
// 0077d496  5e                   pop esi
// 0077d497  c21000               ret 0x10
// 0077d49a  5f                   pop edi
// 0077d49b  33c0                 xor eax, eax
// 0077d49d  5e                   pop esi
// 0077d49e  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

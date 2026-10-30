// roc 2009-12 008ab9a0  unit: CXTPDockingPaneAutoHideWnd  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab9a0
//
// 008ab9a0  6aff                 push -1
// 008ab9a2  68932a9600           push 0x962a93
// 008ab9a7  64a100000000         mov eax, dword ptr fs:[0]
// 008ab9ad  50                   push eax
// 008ab9ae  51                   push ecx
// 008ab9af  56                   push esi
// 008ab9b0  57                   push edi
// 008ab9b1  a10052b600           mov eax, dword ptr [0xb65200]
// 008ab9b6  33c4                 xor eax, esp
// 008ab9b8  50                   push eax
// 008ab9b9  8d442410             lea eax, [esp + 0x10]
// 008ab9bd  64a300000000         mov dword ptr fs:[0], eax
// 008ab9c3  8bf1                 mov esi, ecx
// 008ab9c5  8974240c             mov dword ptr [esp + 0xc], esi
// 008ab9c9  8d7e54               lea edi, [esi + 0x54]
// 008ab9cc  c706d468a000         mov dword ptr [esi], 0xa068d4
// 008ab9d2  c7077468a000         mov dword ptr [edi], 0xa06874
// 008ab9d8  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008ab9de  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008ab9e6  85c0                 test eax, eax
// 008ab9e8  7421                 je 0x8aba0b
// 008ab9ea  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 008ab9f4  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008ab9fa  6a00                 push 0
// 008ab9fc  c780fc00000000000000 mov dword ptr [eax + 0xfc], 0
// 008aba06  e815f6ffff           call 0x8ab020
// 008aba0b  837e2000             cmp dword ptr [esi + 0x20], 0
// 008aba0f  7407                 je 0x8aba18
// 008aba11  8bce                 mov ecx, esi
// 008aba13  e8c67ef4ff           call 0x7f38de
// 008aba18  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008aba1e  85c9                 test ecx, ecx
// 008aba20  7409                 je 0x8aba2b
// 008aba22  8b11                 mov edx, dword ptr [ecx]
// 008aba24  8b4204               mov eax, dword ptr [edx + 4]
// 008aba27  6a01                 push 1
// 008aba29  ffd0                 call eax
// 008aba2b  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 008aba31  85c9                 test ecx, ecx
// 008aba33  7409                 je 0x8aba3e
// 008aba35  8b11                 mov edx, dword ptr [ecx]
// 008aba37  8b4204               mov eax, dword ptr [edx + 4]
// 008aba3a  6a01                 push 1
// 008aba3c  ffd0                 call eax
// 008aba3e  8bcf                 mov ecx, edi
// 008aba40  c644241800           mov byte ptr [esp + 0x18], 0
// 008aba45  e846750400           call 0x8f2f90
// 008aba4a  8bce                 mov ecx, esi
// 008aba4c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008aba54  e8bd88f4ff           call 0x7f4316
// 008aba59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008aba5d  64890d00000000       mov dword ptr fs:[0], ecx
// 008aba64  59                   pop ecx
// 008aba65  5f                   pop edi
// 008aba66  5e                   pop esi
// 008aba67  83c410               add esp, 0x10
// 008aba6a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneAutoHidePanel@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp
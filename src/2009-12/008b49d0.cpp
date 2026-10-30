// roc 2009-12 008b49d0  unit: CXTPDockingPaneSplitterContainer  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b49d0
//
// 008b49d0  6aff                 push -1
// 008b49d2  68ce309600           push 0x9630ce
// 008b49d7  64a100000000         mov eax, dword ptr fs:[0]
// 008b49dd  50                   push eax
// 008b49de  51                   push ecx
// 008b49df  53                   push ebx
// 008b49e0  56                   push esi
// 008b49e1  57                   push edi
// 008b49e2  a10052b600           mov eax, dword ptr [0xb65200]
// 008b49e7  33c4                 xor eax, esp
// 008b49e9  50                   push eax
// 008b49ea  8d442414             lea eax, [esp + 0x14]
// 008b49ee  64a300000000         mov dword ptr fs:[0], eax
// 008b49f4  8bf1                 mov esi, ecx
// 008b49f6  89742410             mov dword ptr [esp + 0x10], esi
// 008b49fa  8d5e20               lea ebx, [esi + 0x20]
// 008b49fd  c706547aa000         mov dword ptr [esi], 0xa07a54
// 008b4a03  c703f479a000         mov dword ptr [ebx], 0xa079f4
// 008b4a09  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008b4a10  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 008b4a18  7425                 je 0x8b4a3f
// 008b4a1a  8d7e74               lea edi, [esi + 0x74]
// 008b4a1d  8d4900               lea ecx, [ecx]
// 008b4a20  8bcf                 mov ecx, edi
// 008b4a22  e82939ffff           call 0x8a8350
// 008b4a27  85c0                 test eax, eax
// 008b4a29  740b                 je 0x8b4a36
// 008b4a2b  8b10                 mov edx, dword ptr [eax]
// 008b4a2d  8bc8                 mov ecx, eax
// 008b4a2f  8b4204               mov eax, dword ptr [edx + 4]
// 008b4a32  6a01                 push 1
// 008b4a34  ffd0                 call eax
// 008b4a36  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008b4a3d  75e1                 jne 0x8b4a20
// 008b4a3f  8d4e74               lea ecx, [esi + 0x74]
// 008b4a42  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008b4a47  e854feffff           call 0x8b48a0
// 008b4a4c  8bcb                 mov ecx, ebx
// 008b4a4e  c644241c00           mov byte ptr [esp + 0x1c], 0
// 008b4a53  e838e50300           call 0x8f2f90
// 008b4a58  8bce                 mov ecx, esi
// 008b4a5a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008b4a62  e87bf9f3ff           call 0x7f43e2
// 008b4a67  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b4a6b  64890d00000000       mov dword ptr fs:[0], ecx
// 008b4a72  59                   pop ecx
// 008b4a73  5f                   pop edi
// 008b4a74  5e                   pop esi
// 008b4a75  5b                   pop ebx
// 008b4a76  83c410               add esp, 0x10
// 008b4a79  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPaneSplitterContainer@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp
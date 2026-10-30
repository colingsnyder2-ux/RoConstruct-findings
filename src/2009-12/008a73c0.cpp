// roc 2009-12 008a73c0  unit: CXTPReportHeaderDragWnd  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a73c0
//
// 008a73c0  6aff                 push -1
// 008a73c2  68683d9600           push 0x963d68
// 008a73c7  64a100000000         mov eax, dword ptr fs:[0]
// 008a73cd  50                   push eax
// 008a73ce  51                   push ecx
// 008a73cf  56                   push esi
// 008a73d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008a73d5  33c4                 xor eax, esp
// 008a73d7  50                   push eax
// 008a73d8  8d44240c             lea eax, [esp + 0xc]
// 008a73dc  64a300000000         mov dword ptr fs:[0], eax
// 008a73e2  8bf1                 mov esi, ecx
// 008a73e4  89742408             mov dword ptr [esp + 8], esi
// 008a73e8  c706cc60a000         mov dword ptr [esi], 0xa060cc
// 008a73ee  8d4e58               lea ecx, [esi + 0x58]
// 008a73f1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a73f9  c701f82a9f00         mov dword ptr [ecx], 0x9f2af8
// 008a73ff  e82c7eb6ff           call 0x40f230
// 008a7404  8bce                 mov ecx, esi
// 008a7406  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a740e  e803cff4ff           call 0x7f4316
// 008a7413  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a7417  64890d00000000       mov dword ptr fs:[0], ecx
// 008a741e  59                   pop ecx
// 008a741f  5e                   pop esi
// 008a7420  83c410               add esp, 0x10
// 008a7423  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportHeaderDropWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportDragDrop.cpp
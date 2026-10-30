// roc 2009-12 008e1080  unit: CXTPOffice2007Image  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1080
//
// 008e1080  6aff                 push -1
// 008e1082  687f5b9600           push 0x965b7f
// 008e1087  64a100000000         mov eax, dword ptr fs:[0]
// 008e108d  50                   push eax
// 008e108e  51                   push ecx
// 008e108f  56                   push esi
// 008e1090  a10052b600           mov eax, dword ptr [0xb65200]
// 008e1095  33c4                 xor eax, esp
// 008e1097  50                   push eax
// 008e1098  8d44240c             lea eax, [esp + 0xc]
// 008e109c  64a300000000         mov dword ptr fs:[0], eax
// 008e10a2  8bf1                 mov esi, ecx
// 008e10a4  89742408             mov dword ptr [esp + 8], esi
// 008e10a8  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008e10b0  e8cbf8ffff           call 0x8e0980
// 008e10b5  8b4604               mov eax, dword ptr [esi + 4]
// 008e10b8  85c0                 test eax, eax
// 008e10ba  740d                 je 0x8e10c9
// 008e10bc  837e1000             cmp dword ptr [esi + 0x10], 0
// 008e10c0  7407                 je 0x8e10c9
// 008e10c2  50                   push eax
// 008e10c3  ff15f8b19800         call dword ptr [0x98b1f8]
// 008e10c9  8d4e2c               lea ecx, [esi + 0x2c]
// 008e10cc  c644241401           mov byte ptr [esp + 0x14], 1
// 008e10d1  e8025d0400           call 0x926dd8
// 008e10d6  8d4e14               lea ecx, [esi + 0x14]
// 008e10d9  c644241400           mov byte ptr [esp + 0x14], 0
// 008e10de  e88da8f5ff           call 0x83b970
// 008e10e3  8bce                 mov ecx, esi
// 008e10e5  ff15c0de9800         call dword ptr [0x98dec0]
// 008e10eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e10ef  64890d00000000       mov dword ptr fs:[0], ecx
// 008e10f6  59                   pop ecx
// 008e10f7  5e                   pop esi
// 008e10f8  83c410               add esp, 0x10
// 008e10fb  c3                   ret 
// copied from an identical function in another client (function ??1CXTPOffice2007Images@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp
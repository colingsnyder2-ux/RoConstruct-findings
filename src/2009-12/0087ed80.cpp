// roc 2009-12 0087ed80  unit: CXTPControlGalleryOffice2007Theme  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087ed80
//
// 0087ed80  6aff                 push -1
// 0087ed82  687b049600           push 0x96047b
// 0087ed87  64a100000000         mov eax, dword ptr fs:[0]
// 0087ed8d  50                   push eax
// 0087ed8e  83ec08               sub esp, 8
// 0087ed91  56                   push esi
// 0087ed92  57                   push edi
// 0087ed93  a10052b600           mov eax, dword ptr [0xb65200]
// 0087ed98  33c4                 xor eax, esp
// 0087ed9a  50                   push eax
// 0087ed9b  8d442414             lea eax, [esp + 0x14]
// 0087ed9f  64a300000000         mov dword ptr fs:[0], eax
// 0087eda5  8bf1                 mov esi, ecx
// 0087eda7  e8748effff           call 0x877c20
// 0087edac  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 0087edb2  6a15                 push 0x15
// 0087edb4  ffd7                 call edi
// 0087edb6  6a03                 push 3
// 0087edb8  894604               mov dword ptr [esi + 4], eax
// 0087edbb  ffd7                 call edi
// 0087edbd  6a02                 push 2
// 0087edbf  894608               mov dword ptr [esi + 8], eax
// 0087edc2  ffd7                 call edi
// 0087edc4  6a14                 push 0x14
// 0087edc6  894610               mov dword ptr [esi + 0x10], eax
// 0087edc9  ffd7                 call edi
// 0087edcb  8b7e2c               mov edi, dword ptr [esi + 0x2c]
// 0087edce  51                   push ecx
// 0087edcf  8bcc                 mov ecx, esp
// 0087edd1  89642410             mov dword ptr [esp + 0x10], esp
// 0087edd5  68801fa000           push 0xa01f80
// 0087edda  89460c               mov dword ptr [esi + 0xc], eax
// 0087eddd  c7461415000000       mov dword ptr [esi + 0x14], 0x15
// 0087ede4  c7461813000000       mov dword ptr [esi + 0x18], 0x13
// 0087edeb  ff15b8de9800         call dword ptr [0x98deb8]
// 0087edf1  51                   push ecx
// 0087edf2  8bcc                 mov ecx, esp
// 0087edf4  89642418             mov dword ptr [esp + 0x18], esp
// 0087edf8  68781fa000           push 0xa01f78
// 0087edfd  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0087ee05  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ee0b  8bcf                 mov ecx, edi
// 0087ee0d  e8defeffff           call 0x87ecf0
// 0087ee12  8bc8                 mov ecx, eax
// 0087ee14  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0087ee1c  e8df220600           call 0x8e1100
// 0087ee21  51                   push ecx
// 0087ee22  8bcc                 mov ecx, esp
// 0087ee24  89642414             mov dword ptr [esp + 0x14], esp
// 0087ee28  68601fa000           push 0xa01f60
// 0087ee2d  894630               mov dword ptr [esi + 0x30], eax
// 0087ee30  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ee36  51                   push ecx
// 0087ee37  8bcc                 mov ecx, esp
// 0087ee39  89642414             mov dword ptr [esp + 0x14], esp
// 0087ee3d  68781fa000           push 0xa01f78
// 0087ee42  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0087ee4a  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ee50  8bcf                 mov ecx, edi
// 0087ee52  e899feffff           call 0x87ecf0
// 0087ee57  8bc8                 mov ecx, eax
// 0087ee59  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0087ee61  e89a220600           call 0x8e1100
// 0087ee66  51                   push ecx
// 0087ee67  8bcc                 mov ecx, esp
// 0087ee69  89642414             mov dword ptr [esp + 0x14], esp
// 0087ee6d  68481fa000           push 0xa01f48
// 0087ee72  894634               mov dword ptr [esi + 0x34], eax
// 0087ee75  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ee7b  51                   push ecx
// 0087ee7c  8bcc                 mov ecx, esp
// 0087ee7e  89642414             mov dword ptr [esp + 0x14], esp
// 0087ee82  68781fa000           push 0xa01f78
// 0087ee87  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0087ee8f  ff15b8de9800         call dword ptr [0x98deb8]
// 0087ee95  8bcf                 mov ecx, edi
// 0087ee97  e854feffff           call 0x87ecf0
// 0087ee9c  8bc8                 mov ecx, eax
// 0087ee9e  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0087eea6  e855220600           call 0x8e1100
// 0087eeab  894638               mov dword ptr [esi + 0x38], eax
// 0087eeae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087eeb2  64890d00000000       mov dword ptr fs:[0], ecx
// 0087eeb9  59                   pop ecx
// 0087eeba  5f                   pop edi
// 0087eebb  5e                   pop esi
// 0087eebc  83c414               add esp, 0x14
// 0087eebf  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPControlGalleryOffice2007Theme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp
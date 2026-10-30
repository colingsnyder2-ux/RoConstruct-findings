// roc 2012-06 00a3bd80  unit: CXTPDockingPaneTabbedContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3bd80
//
// 00a3bd80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a3bd84  56                   push esi
// 00a3bd85  6a01                 push 1
// 00a3bd87  8bf1                 mov esi, ecx
// 00a3bd89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a3bd8d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a3bd90  50                   push eax
// 00a3bd91  51                   push ecx
// 00a3bd92  52                   push edx
// 00a3bd93  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00a3bd99  e8a21c0100           call 0xa4da40
// 00a3bd9e  85c0                 test eax, eax
// 00a3bda0  7562                 jne 0xa3be04
// 00a3bda2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3bda6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a3bdaa  50                   push eax
// 00a3bdab  51                   push ecx
// 00a3bdac  8bce                 mov ecx, esi
// 00a3bdae  e8bdf7ffff           call 0xa3b570
// 00a3bdb3  85c0                 test eax, eax
// 00a3bdb5  754d                 jne 0xa3be04
// 00a3bdb7  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a3bdbb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a3bdbf  52                   push edx
// 00a3bdc0  50                   push eax
// 00a3bdc1  8bce                 mov ecx, esi
// 00a3bdc3  e878f4ffff           call 0xa3b240
// 00a3bdc8  83f8fe               cmp eax, -2
// 00a3bdcb  753b                 jne 0xa3be08
// 00a3bdcd  8b5654               mov edx, dword ptr [esi + 0x54]
// 00a3bdd0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a3bdd3  57                   push edi
// 00a3bdd4  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 00a3bdda  83c654               add esi, 0x54
// 00a3bddd  8bce                 mov ecx, esi
// 00a3bddf  ffd0                 call eax
// 00a3bde1  85c0                 test eax, eax
// 00a3bde3  740f                 je 0xa3bdf4
// 00a3bde5  85ff                 test edi, edi
// 00a3bde7  740b                 je 0xa3bdf4
// 00a3bde9  8bcf                 mov ecx, edi
// 00a3bdeb  e8a082faff           call 0x9e4090
// 00a3bdf0  a802                 test al, 2
// 00a3bdf2  750f                 jne 0xa3be03
// 00a3bdf4  56                   push esi
// 00a3bdf5  8bce                 mov ecx, esi
// 00a3bdf7  e874e3ffff           call 0xa3a170
// 00a3bdfc  8bc8                 mov ecx, eax
// 00a3bdfe  e8ddc8f8ff           call 0x9c86e0
// 00a3be03  5f                   pop edi
// 00a3be04  5e                   pop esi
// 00a3be05  c20c00               ret 0xc
// 00a3be08  85c0                 test eax, eax
// 00a3be0a  7cf8                 jl 0xa3be04
// 00a3be0c  50                   push eax
// 00a3be0d  8bce                 mov ecx, esi
// 00a3be0f  e83cffffff           call 0xa3bd50
// 00a3be14  85c0                 test eax, eax
// 00a3be16  7405                 je 0xa3be1d
// 00a3be18  83c020               add eax, 0x20
// 00a3be1b  eb02                 jmp 0xa3be1f
// 00a3be1d  33c0                 xor eax, eax
// 00a3be1f  50                   push eax
// 00a3be20  8d4e54               lea ecx, [esi + 0x54]
// 00a3be23  e848e3ffff           call 0xa3a170
// 00a3be28  8bc8                 mov ecx, eax
// 00a3be2a  e8b1c8f8ff           call 0x9c86e0
// 00a3be2f  5e                   pop esi
// 00a3be30  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonDblClk@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp

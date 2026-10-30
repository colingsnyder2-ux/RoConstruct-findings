// roc 2007-03 006d1480  unit: seg_006d0000  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d1480
//
// 006d1480  6aff                 push -1
// 006d1482  6840827600           push 0x768240
// 006d1487  64a100000000         mov eax, dword ptr fs:[0]
// 006d148d  50                   push eax
// 006d148e  83ec30               sub esp, 0x30
// 006d1491  53                   push ebx
// 006d1492  55                   push ebp
// 006d1493  56                   push esi
// 006d1494  57                   push edi
// 006d1495  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006d149a  33c4                 xor eax, esp
// 006d149c  50                   push eax
// 006d149d  8d442444             lea eax, [esp + 0x44]
// 006d14a1  64a300000000         mov dword ptr fs:[0], eax
// 006d14a7  8bf9                 mov edi, ecx
// 006d14a9  8b742458             mov esi, dword ptr [esp + 0x58]
// 006d14ad  8bce                 mov ecx, esi
// 006d14af  33db                 xor ebx, ebx
// 006d14b1  ff1528db7700         call dword ptr [0x77db28]
// 006d14b7  84c0                 test al, al
// 006d14b9  7407                 je 0x6d14c2
// 006d14bb  33c0                 xor eax, eax
// 006d14bd  e9f6000000           jmp 0x6d15b8
// 006d14c2  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 006d14c6  7471                 je 0x6d1539
// 006d14c8  81c78c000000         add edi, 0x8c
// 006d14ce  57                   push edi
// 006d14cf  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 006d14d3  57                   push edi
// 006d14d4  8d4c242c             lea ecx, [esp + 0x2c]
// 006d14d8  e813a9f9ff           call 0x66bdf0
// 006d14dd  56                   push esi
// 006d14de  8d442418             lea eax, [esp + 0x18]
// 006d14e2  50                   push eax
// 006d14e3  8bcf                 mov ecx, edi
// 006d14e5  895c2454             mov dword ptr [esp + 0x54], ebx
// 006d14e9  e8b29cd8ff           call 0x45b1a0
// 006d14ee  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 006d14f2  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 006d14f6  3bdd                 cmp ebx, ebp
// 006d14f8  7e35                 jle 0x6d152f
// 006d14fa  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006d14fe  8bc1                 mov eax, ecx
// 006d1500  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 006d1504  6820890000           push 0x8920
// 006d1509  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 006d150d  99                   cdq 
// 006d150e  2bc2                 sub eax, edx
// 006d1510  d1f8                 sar eax, 1
// 006d1512  2bc8                 sub ecx, eax
// 006d1514  8bc1                 mov eax, ecx
// 006d1516  89442460             mov dword ptr [esp + 0x60], eax
// 006d151a  8d4c2460             lea ecx, [esp + 0x60]
// 006d151e  2bc5                 sub eax, ebp
// 006d1520  51                   push ecx
// 006d1521  03c3                 add eax, ebx
// 006d1523  56                   push esi
// 006d1524  8bcf                 mov ecx, edi
// 006d1526  89442470             mov dword ptr [esp + 0x70], eax
// 006d152a  e881f7f4ff           call 0x620cb0
// 006d152f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006d1533  8d4c2424             lea ecx, [esp + 0x24]
// 006d1537  eb70                 jmp 0x6d15a9
// 006d1539  81c784000000         add edi, 0x84
// 006d153f  57                   push edi
// 006d1540  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 006d1544  57                   push edi
// 006d1545  8d4c243c             lea ecx, [esp + 0x3c]
// 006d1549  e8a2a8f9ff           call 0x66bdf0
// 006d154e  8b2f                 mov ebp, dword ptr [edi]
// 006d1550  6824880000           push 0x8824
// 006d1555  8d542460             lea edx, [esp + 0x60]
// 006d1559  52                   push edx
// 006d155a  8bce                 mov ecx, esi
// 006d155c  c744245401000000     mov dword ptr [esp + 0x54], 1
// 006d1564  ff1520db7700         call dword ptr [0x77db20]
// 006d156a  50                   push eax
// 006d156b  8bce                 mov ecx, esi
// 006d156d  ff1554dd7700         call dword ptr [0x77dd54]
// 006d1573  50                   push eax
// 006d1574  8b4570               mov eax, dword ptr [ebp + 0x70]
// 006d1577  8bcf                 mov ecx, edi
// 006d1579  ffd0                 call eax
// 006d157b  837c247000           cmp dword ptr [esp + 0x70], 0
// 006d1580  7423                 je 0x6d15a5
// 006d1582  8d4c2414             lea ecx, [esp + 0x14]
// 006d1586  e805a2f9ff           call 0x66b790
// 006d158b  68200c0000           push 0xc20
// 006d1590  8d4c2418             lea ecx, [esp + 0x18]
// 006d1594  51                   push ecx
// 006d1595  56                   push esi
// 006d1596  8bcf                 mov ecx, edi
// 006d1598  e813f7f4ff           call 0x620cb0
// 006d159d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006d15a1  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 006d15a5  8d4c2434             lea ecx, [esp + 0x34]
// 006d15a9  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 006d15b1  e8baa8f9ff           call 0x66be70
// 006d15b6  8bc3                 mov eax, ebx
// 006d15b8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006d15bc  64890d00000000       mov dword ptr fs:[0], ecx
// 006d15c3  59                   pop ecx
// 006d15c4  5f                   pop edi
// 006d15c5  5e                   pop esi
// 006d15c6  5d                   pop ebp
// 006d15c7  5b                   pop ebx
// 006d15c8  83c43c               add esp, 0x3c
// 006d15cb  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp
// roc 2009-12 007fbe60  unit: CXTPControlComboBox  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fbe60
//
// 007fbe60  6aff                 push -1
// 007fbe62  68720e9600           push 0x960e72
// 007fbe67  64a100000000         mov eax, dword ptr fs:[0]
// 007fbe6d  50                   push eax
// 007fbe6e  83ec08               sub esp, 8
// 007fbe71  56                   push esi
// 007fbe72  a10052b600           mov eax, dword ptr [0xb65200]
// 007fbe77  33c4                 xor eax, esp
// 007fbe79  50                   push eax
// 007fbe7a  8d442410             lea eax, [esp + 0x10]
// 007fbe7e  64a300000000         mov dword ptr fs:[0], eax
// 007fbe84  8bf1                 mov esi, ecx
// 007fbe86  8d442408             lea eax, [esp + 8]
// 007fbe8a  50                   push eax
// 007fbe8b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007fbe93  e868e4ffff           call 0x7fa300
// 007fbe98  8d4c240c             lea ecx, [esp + 0xc]
// 007fbe9c  51                   push ecx
// 007fbe9d  8bce                 mov ecx, esi
// 007fbe9f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007fbea7  e8e4d4ffff           call 0x7f9390
// 007fbeac  8bc8                 mov ecx, eax
// 007fbeae  c644241801           mov byte ptr [esp + 0x18], 1
// 007fbeb3  ff1580de9800         call dword ptr [0x98de80]
// 007fbeb9  50                   push eax
// 007fbeba  8d4c240c             lea ecx, [esp + 0xc]
// 007fbebe  ff1584de9800         call dword ptr [0x98de84]
// 007fbec4  85c0                 test eax, eax
// 007fbec6  7507                 jne 0x7fbecf
// 007fbec8  b856fd9900           mov eax, 0x99fd56
// 007fbecd  eb0a                 jmp 0x7fbed9
// 007fbecf  8d4c2408             lea ecx, [esp + 8]
// 007fbed3  ff1580de9800         call dword ptr [0x98de80]
// 007fbed9  8b742420             mov esi, dword ptr [esp + 0x20]
// 007fbedd  50                   push eax
// 007fbede  8bce                 mov ecx, esi
// 007fbee0  ff15b8de9800         call dword ptr [0x98deb8]
// 007fbee6  8d4c240c             lea ecx, [esp + 0xc]
// 007fbeea  ff15c0de9800         call dword ptr [0x98dec0]
// 007fbef0  8d4c2408             lea ecx, [esp + 8]
// 007fbef4  ff15c0de9800         call dword ptr [0x98dec0]
// 007fbefa  8bc6                 mov eax, esi
// 007fbefc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fbf00  64890d00000000       mov dword ptr fs:[0], ecx
// 007fbf07  59                   pop ecx
// 007fbf08  5e                   pop esi
// 007fbf09  83c414               add esp, 0x14
// 007fbf0c  c20400               ret 4
// copied from an identical function in another client (function ?GetEditText@CXTPControlComboBox@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp
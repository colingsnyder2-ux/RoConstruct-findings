// roc 2009-12 007fc8b0  unit: CPatchedControlComboBox  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc8b0
//
// 007fc8b0  6aff                 push -1
// 007fc8b2  6819ba9500           push 0x95ba19
// 007fc8b7  64a100000000         mov eax, dword ptr fs:[0]
// 007fc8bd  50                   push eax
// 007fc8be  51                   push ecx
// 007fc8bf  56                   push esi
// 007fc8c0  57                   push edi
// 007fc8c1  a10052b600           mov eax, dword ptr [0xb65200]
// 007fc8c6  33c4                 xor eax, esp
// 007fc8c8  50                   push eax
// 007fc8c9  8d442410             lea eax, [esp + 0x10]
// 007fc8cd  64a300000000         mov dword ptr fs:[0], eax
// 007fc8d3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007fc8db  e820e1ffff           call 0x7faa00
// 007fc8e0  8bf0                 mov esi, eax
// 007fc8e2  85f6                 test esi, esi
// 007fc8e4  7513                 jne 0x7fc8f9
// 007fc8e6  8b742420             mov esi, dword ptr [esp + 0x20]
// 007fc8ea  6856fd9900           push 0x99fd56
// 007fc8ef  8bce                 mov ecx, esi
// 007fc8f1  ff15b8de9800         call dword ptr [0x98deb8]
// 007fc8f7  eb51                 jmp 0x7fc94a
// 007fc8f9  8b06                 mov eax, dword ptr [esi]
// 007fc8fb  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 007fc901  8bce                 mov ecx, esi
// 007fc903  ffd2                 call edx
// 007fc905  8d4c240c             lea ecx, [esp + 0xc]
// 007fc909  8bf8                 mov edi, eax
// 007fc90b  ff1574de9800         call dword ptr [0x98de74]
// 007fc911  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007fc919  85ff                 test edi, edi
// 007fc91b  7c12                 jl 0x7fc92f
// 007fc91d  8b06                 mov eax, dword ptr [esi]
// 007fc91f  8b9024020000         mov edx, dword ptr [eax + 0x224]
// 007fc925  8d4c240c             lea ecx, [esp + 0xc]
// 007fc929  51                   push ecx
// 007fc92a  57                   push edi
// 007fc92b  8bce                 mov ecx, esi
// 007fc92d  ffd2                 call edx
// 007fc92f  8b742420             mov esi, dword ptr [esp + 0x20]
// 007fc933  8d44240c             lea eax, [esp + 0xc]
// 007fc937  50                   push eax
// 007fc938  8bce                 mov ecx, esi
// 007fc93a  ff1594de9800         call dword ptr [0x98de94]
// 007fc940  8d4c240c             lea ecx, [esp + 0xc]
// 007fc944  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc94a  8bc6                 mov eax, esi
// 007fc94c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fc950  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc957  59                   pop ecx
// 007fc958  5f                   pop edi
// 007fc959  5e                   pop esi
// 007fc95a  83c410               add esp, 0x10
// 007fc95d  c20400               ret 4
// copied from an identical function in another client (function ?GetListBoxText@CXTPControlComboBox@@UBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp
// roc 2009-12 0089ae70  unit: CXTPReportPaintManager  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089ae70
//
// 0089ae70  6aff                 push -1
// 0089ae72  68981b9600           push 0x961b98
// 0089ae77  64a100000000         mov eax, dword ptr fs:[0]
// 0089ae7d  50                   push eax
// 0089ae7e  83ec08               sub esp, 8
// 0089ae81  53                   push ebx
// 0089ae82  56                   push esi
// 0089ae83  57                   push edi
// 0089ae84  a10052b600           mov eax, dword ptr [0xb65200]
// 0089ae89  33c4                 xor eax, esp
// 0089ae8b  50                   push eax
// 0089ae8c  8d442418             lea eax, [esp + 0x18]
// 0089ae90  64a300000000         mov dword ptr fs:[0], eax
// 0089ae96  8bd9                 mov ebx, ecx
// 0089ae98  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0089ae9c  33c0                 xor eax, eax
// 0089ae9e  3bf0                 cmp esi, eax
// 0089aea0  7405                 je 0x89aea7
// 0089aea2  394604               cmp dword ptr [esi + 4], eax
// 0089aea5  7556                 jne 0x89aefd
// 0089aea7  bf18229a00           mov edi, 0x9a2218
// 0089aeac  89442414             mov dword ptr [esp + 0x14], eax
// 0089aeb0  897c2410             mov dword ptr [esp + 0x10], edi
// 0089aeb4  89442420             mov dword ptr [esp + 0x20], eax
// 0089aeb8  8b442440             mov eax, dword ptr [esp + 0x40]
// 0089aebc  50                   push eax
// 0089aebd  6a01                 push 1
// 0089aebf  6a01                 push 1
// 0089aec1  6a08                 push 8
// 0089aec3  6a08                 push 8
// 0089aec5  ff1578b19800         call dword ptr [0x98b178]
// 0089aecb  50                   push eax
// 0089aecc  8d4c2414             lea ecx, [esp + 0x14]
// 0089aed0  e8558ff5ff           call 0x7f3e2a
// 0089aed5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089aed9  51                   push ecx
// 0089aeda  ff15e4b09800         call dword ptr [0x98b0e4]
// 0089aee0  50                   push eax
// 0089aee1  8bce                 mov ecx, esi
// 0089aee3  e8428ff5ff           call 0x7f3e2a
// 0089aee8  8d4c2410             lea ecx, [esp + 0x10]
// 0089aeec  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0089aef4  897c2410             mov dword ptr [esp + 0x10], edi
// 0089aef8  e83343b7ff           call 0x40f230
// 0089aefd  56                   push esi
// 0089aefe  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0089af02  8bce                 mov ecx, esi
// 0089af04  e8c3b50800           call 0x9264cc
// 0089af09  8bf8                 mov edi, eax
// 0089af0b  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 0089af11  83f8ff               cmp eax, -1
// 0089af14  7506                 jne 0x89af1c
// 0089af16  8b838c000000         mov eax, dword ptr [ebx + 0x8c]
// 0089af1c  8b16                 mov edx, dword ptr [esi]
// 0089af1e  50                   push eax
// 0089af1f  8b4238               mov eax, dword ptr [edx + 0x38]
// 0089af22  8bce                 mov ecx, esi
// 0089af24  ffd0                 call eax
// 0089af26  8b16                 mov edx, dword ptr [esi]
// 0089af28  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089af2c  8b5234               mov edx, dword ptr [edx + 0x34]
// 0089af2f  50                   push eax
// 0089af30  8bce                 mov ecx, esi
// 0089af32  ffd2                 call edx
// 0089af34  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089af38  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089af3c  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0089af40  8b4604               mov eax, dword ptr [esi + 4]
// 0089af43  682100f000           push 0xf00021
// 0089af48  2bd1                 sub edx, ecx
// 0089af4a  52                   push edx
// 0089af4b  8b542438             mov edx, dword ptr [esp + 0x38]
// 0089af4f  2bda                 sub ebx, edx
// 0089af51  53                   push ebx
// 0089af52  51                   push ecx
// 0089af53  52                   push edx
// 0089af54  50                   push eax
// 0089af55  ff1508b19800         call dword ptr [0x98b108]
// 0089af5b  57                   push edi
// 0089af5c  8bce                 mov ecx, esi
// 0089af5e  e869b50800           call 0x9264cc
// 0089af63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089af67  64890d00000000       mov dword ptr fs:[0], ecx
// 0089af6e  59                   pop ecx
// 0089af6f  5f                   pop edi
// 0089af70  5e                   pop esi
// 0089af71  5b                   pop ebx
// 0089af72  83c414               add esp, 0x14
// 0089af75  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawGridPat@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCBrush@@VCRect@@PBXK@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
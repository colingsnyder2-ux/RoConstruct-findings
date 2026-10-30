// roc 2007-08 00666770  unit: CRobloxTreeCtrl  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666770
//
// 00666770  51                   push ecx
// 00666771  53                   push ebx
// 00666772  55                   push ebp
// 00666773  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00666777  56                   push esi
// 00666778  57                   push edi
// 00666779  8bf9                 mov edi, ecx
// 0066677b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066677f  8b07                 mov eax, dword ptr [edi]
// 00666781  8b5004               mov edx, dword ptr [eax + 4]
// 00666784  f7dd                 neg ebp
// 00666786  1bed                 sbb ebp, ebp
// 00666788  6a04                 push 4
// 0066678a  51                   push ecx
// 0066678b  33db                 xor ebx, ebx
// 0066678d  8bcf                 mov ecx, edi
// 0066678f  83e502               and ebp, 2
// 00666792  895c2418             mov dword ptr [esp + 0x18], ebx
// 00666796  ffd2                 call edx
// 00666798  8bf0                 mov esi, eax
// 0066679a  85f6                 test esi, esi
// 0066679c  746f                 je 0x66680d
// 0066679e  8bff                 mov edi, edi
// 006667a0  6a23                 push 0x23
// 006667a2  56                   push esi
// 006667a3  8bcf                 mov ecx, edi
// 006667a5  e8e6f7ffff           call 0x665f90
// 006667aa  8bd8                 mov ebx, eax
// 006667ac  83e002               and eax, 2
// 006667af  3bc5                 cmp eax, ebp
// 006667b1  740b                 je 0x6667be
// 006667b3  6a02                 push 2
// 006667b5  55                   push ebp
// 006667b6  56                   push esi
// 006667b7  8bcf                 mov ecx, edi
// 006667b9  e872f4ffff           call 0x665c30
// 006667be  8b442420             mov eax, dword ptr [esp + 0x20]
// 006667c2  8bcb                 mov ecx, ebx
// 006667c4  83e101               and ecx, 1
// 006667c7  094c2410             or dword ptr [esp + 0x10], ecx
// 006667cb  85c0                 test eax, eax
// 006667cd  7417                 je 0x6667e6
// 006667cf  f6c320               test bl, 0x20
// 006667d2  7412                 je 0x6667e6
// 006667d4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006667d8  50                   push eax
// 006667d9  52                   push edx
// 006667da  56                   push esi
// 006667db  8bcf                 mov ecx, edi
// 006667dd  e88effffff           call 0x666770
// 006667e2  09442410             or dword ptr [esp + 0x10], eax
// 006667e6  8b4734               mov eax, dword ptr [edi + 0x34]
// 006667e9  8b4020               mov eax, dword ptr [eax + 0x20]
// 006667ec  56                   push esi
// 006667ed  6a01                 push 1
// 006667ef  680a110000           push 0x110a
// 006667f4  50                   push eax
// 006667f5  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006667fb  8bf0                 mov esi, eax
// 006667fd  85f6                 test esi, esi
// 006667ff  759f                 jne 0x6667a0
// 00666801  8b442410             mov eax, dword ptr [esp + 0x10]
// 00666805  5f                   pop edi
// 00666806  5e                   pop esi
// 00666807  5d                   pop ebp
// 00666808  5b                   pop ebx
// 00666809  59                   pop ecx
// 0066680a  c20c00               ret 0xc
// 0066680d  5f                   pop edi
// 0066680e  5e                   pop esi
// 0066680f  5d                   pop ebp
// 00666810  8bc3                 mov eax, ebx
// 00666812  5b                   pop ebx
// 00666813  59                   pop ecx
// 00666814  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp
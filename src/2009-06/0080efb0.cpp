// roc 2009-06 0080efb0  unit: CXTPRibbonGroup  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080efb0
//
// 0080efb0  83ec1c               sub esp, 0x1c
// 0080efb3  53                   push ebx
// 0080efb4  55                   push ebp
// 0080efb5  56                   push esi
// 0080efb6  8be9                 mov ebp, ecx
// 0080efb8  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 0080efbb  57                   push edi
// 0080efbc  e85f8afaff           call 0x7b7a20
// 0080efc1  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 0080efc7  8b7d34               mov edi, dword ptr [ebp + 0x34]
// 0080efca  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 0080efcd  035d38               add ebx, dword ptr [ebp + 0x38]
// 0080efd0  33c9                 xor ecx, ecx
// 0080efd2  83c704               add edi, 4
// 0080efd5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0080efd9  85c0                 test eax, eax
// 0080efdb  7f0e                 jg 0x80efeb
// 0080efdd  5f                   pop edi
// 0080efde  5e                   pop esi
// 0080efdf  5d                   pop ebp
// 0080efe0  5b                   pop ebx
// 0080efe1  83c41c               add esp, 0x1c
// 0080efe4  c20400               ret 4
// 0080efe7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080efeb  85c9                 test ecx, ecx
// 0080efed  7c15                 jl 0x80f004
// 0080efef  3bc8                 cmp ecx, eax
// 0080eff1  7d11                 jge 0x80f004
// 0080eff3  3b4d4c               cmp ecx, dword ptr [ebp + 0x4c]
// 0080eff6  0f8d82000000         jge 0x80f07e
// 0080effc  8b4548               mov eax, dword ptr [ebp + 0x48]
// 0080efff  8b3488               mov esi, dword ptr [eax + ecx*4]
// 0080f002  eb02                 jmp 0x80f006
// 0080f004  33f6                 xor esi, esi
// 0080f006  8b16                 mov edx, dword ptr [esi]
// 0080f008  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0080f00e  6a00                 push 0
// 0080f010  8bce                 mov ecx, esi
// 0080f012  ffd0                 call eax
// 0080f014  85c0                 test eax, eax
// 0080f016  7448                 je 0x80f060
// 0080f018  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080f01c  8b16                 mov edx, dword ptr [esi]
// 0080f01e  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 0080f024  50                   push eax
// 0080f025  8d4c2418             lea ecx, [esp + 0x18]
// 0080f029  51                   push ecx
// 0080f02a  8bce                 mov ecx, esi
// 0080f02c  ffd2                 call edx
// 0080f02e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080f032  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080f036  8d0c38               lea ecx, [eax + edi]
// 0080f039  83ec10               sub esp, 0x10
// 0080f03c  8bc4                 mov eax, esp
// 0080f03e  03d3                 add edx, ebx
// 0080f040  8938                 mov dword ptr [eax], edi
// 0080f042  89542438             mov dword ptr [esp + 0x38], edx
// 0080f046  8b16                 mov edx, dword ptr [esi]
// 0080f048  8b527c               mov edx, dword ptr [edx + 0x7c]
// 0080f04b  895804               mov dword ptr [eax + 4], ebx
// 0080f04e  894808               mov dword ptr [eax + 8], ecx
// 0080f051  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080f055  89480c               mov dword ptr [eax + 0xc], ecx
// 0080f058  8bce                 mov ecx, esi
// 0080f05a  ffd2                 call edx
// 0080f05c  037c2414             add edi, dword ptr [esp + 0x14]
// 0080f060  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080f064  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 0080f067  41                   inc ecx
// 0080f068  3bc8                 cmp ecx, eax
// 0080f06a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0080f06e  0f8c73ffffff         jl 0x80efe7
// 0080f074  5f                   pop edi
// 0080f075  5e                   pop esi
// 0080f076  5d                   pop ebp
// 0080f077  5b                   pop ebx
// 0080f078  83c41c               add esp, 0x1c
// 0080f07b  c20400               ret 4
// 0080f07e  e8619cf0ff           call 0x718ce4
// copied from an identical function in another client (function ?RepositionControls@CXTPRibbonGroup@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp
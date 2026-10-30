// roc 2009-06 007efd20  unit: CXTPPropertyGridPaintManager  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007efd20
//
// 007efd20  6aff                 push -1
// 007efd22  6879098800           push 0x880979
// 007efd27  64a100000000         mov eax, dword ptr fs:[0]
// 007efd2d  50                   push eax
// 007efd2e  83ec10               sub esp, 0x10
// 007efd31  53                   push ebx
// 007efd32  55                   push ebp
// 007efd33  56                   push esi
// 007efd34  57                   push edi
// 007efd35  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007efd3a  33c4                 xor eax, esp
// 007efd3c  50                   push eax
// 007efd3d  8d442424             lea eax, [esp + 0x24]
// 007efd41  64a300000000         mov dword ptr fs:[0], eax
// 007efd47  8bd9                 mov ebx, ecx
// 007efd49  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007efd4d  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007efd51  8bbd98000000         mov edi, dword ptr [ebp + 0x98]
// 007efd57  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007efd5b  8bb584000000         mov esi, dword ptr [ebp + 0x84]
// 007efd61  8b542448             mov edx, dword ptr [esp + 0x48]
// 007efd65  89442414             mov dword ptr [esp + 0x14], eax
// 007efd69  33c0                 xor eax, eax
// 007efd6b  85ff                 test edi, edi
// 007efd6d  0f95c0               setne al
// 007efd70  894c2418             mov dword ptr [esp + 0x18], ecx
// 007efd74  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007efd78  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007efd7c  49                   dec ecx
// 007efd7d  6a00                 push 0
// 007efd7f  894c2420             mov dword ptr [esp + 0x20], ecx
// 007efd83  03c6                 add eax, esi
// 007efd85  8d34c500000000       lea esi, [eax*8]
// 007efd8c  2bf0                 sub esi, eax
// 007efd8e  8d443603             lea eax, [esi + esi + 3]
// 007efd92  4a                   dec edx
// 007efd93  6a00                 push 0
// 007efd95  8bcd                 mov ecx, ebp
// 007efd97  8944241c             mov dword ptr [esp + 0x1c], eax
// 007efd9b  89542428             mov dword ptr [esp + 0x28], edx
// 007efd9f  e88ca1f9ff           call 0x789f30
// 007efda4  8bf8                 mov edi, eax
// 007efda6  897c2438             mov dword ptr [esp + 0x38], edi
// 007efdaa  85ff                 test edi, edi
// 007efdac  0f849d000000         je 0x7efe4f
// 007efdb2  8b4730               mov eax, dword ptr [edi + 0x30]
// 007efdb5  83f8ff               cmp eax, -1
// 007efdb8  0f8489000000         je 0x7efe47
// 007efdbe  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 007efdc1  6a00                 push 0
// 007efdc3  50                   push eax
// 007efdc4  e81731f8ff           call 0x772ee0
// 007efdc9  8bc8                 mov ecx, eax
// 007efdcb  e8c08cf4ff           call 0x738a90
// 007efdd0  8bf0                 mov esi, eax
// 007efdd2  85f6                 test esi, esi
// 007efdd4  7471                 je 0x7efe47
// 007efdd6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007efdda  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 007efdde  8bce                 mov ecx, esi
// 007efde0  e8cbd0f5ff           call 0x74ceb0
// 007efde5  3bc7                 cmp eax, edi
// 007efde7  7d0b                 jge 0x7efdf4
// 007efde9  8bce                 mov ecx, esi
// 007efdeb  e8c0d0f5ff           call 0x74ceb0
// 007efdf0  8bd8                 mov ebx, eax
// 007efdf2  eb08                 jmp 0x7efdfc
// 007efdf4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007efdf8  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 007efdfc  8bce                 mov ecx, esi
// 007efdfe  e81d84fdff           call 0x7c8220
// 007efe03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007efe07  8b542418             mov edx, dword ptr [esp + 0x18]
// 007efe0b  8bf8                 mov edi, eax
// 007efe0d  8d040a               lea eax, [edx + ecx]
// 007efe10  99                   cdq 
// 007efe11  2bc2                 sub eax, edx
// 007efe13  8bc8                 mov ecx, eax
// 007efe15  8bc3                 mov eax, ebx
// 007efe17  99                   cdq 
// 007efe18  2bc2                 sub eax, edx
// 007efe1a  d1f8                 sar eax, 1
// 007efe1c  53                   push ebx
// 007efe1d  d1f9                 sar ecx, 1
// 007efe1f  2bc8                 sub ecx, eax
// 007efe21  8b442418             mov eax, dword ptr [esp + 0x18]
// 007efe25  57                   push edi
// 007efe26  51                   push ecx
// 007efe27  83c0fe               add eax, -2
// 007efe2a  50                   push eax
// 007efe2b  8b442444             mov eax, dword ptr [esp + 0x44]
// 007efe2f  50                   push eax
// 007efe30  8bce                 mov ecx, esi
// 007efe32  e869a1f4ff           call 0x739fa0
// 007efe37  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007efe3b  8d543905             lea edx, [ecx + edi + 5]
// 007efe3f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007efe43  89542414             mov dword ptr [esp + 0x14], edx
// 007efe47  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 007efe4d  eb05                 jmp 0x7efe54
// 007efe4f  be24000000           mov esi, 0x24
// 007efe54  8d442438             lea eax, [esp + 0x38]
// 007efe58  50                   push eax
// 007efe59  8bcd                 mov ecx, ebp
// 007efe5b  e8b017c4ff           call 0x431610
// 007efe60  8bf8                 mov edi, eax
// 007efe62  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007efe66  8b19                 mov ebx, dword ptr [ecx]
// 007efe68  81ce00080000         or esi, 0x800
// 007efe6e  56                   push esi
// 007efe6f  8d542418             lea edx, [esp + 0x18]
// 007efe73  52                   push edx
// 007efe74  8bcf                 mov ecx, edi
// 007efe76  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007efe7e  ff1554fb8900         call dword ptr [0x89fb54]
// 007efe84  50                   push eax
// 007efe85  8bcf                 mov ecx, edi
// 007efe87  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007efe8d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007efe91  50                   push eax
// 007efe92  8b4370               mov eax, dword ptr [ebx + 0x70]
// 007efe95  ffd0                 call eax
// 007efe97  8d4c2438             lea ecx, [esp + 0x38]
// 007efe9b  ff1510fd8900         call dword ptr [0x89fd10]
// 007efea1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007efea5  64890d00000000       mov dword ptr fs:[0], ecx
// 007efeac  59                   pop ecx
// 007efead  5f                   pop edi
// 007efeae  5e                   pop esi
// 007efeaf  5d                   pop ebp
// 007efeb0  5b                   pop ebx
// 007efeb1  83c41c               add esp, 0x1c
// 007efeb4  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemCaption@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp
// roc 2009-12 00865c60  unit: CPropertyGridItemBrickColor  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865c60
//
// 00865c60  6aff                 push -1
// 00865c62  68c9ee9500           push 0x95eec9
// 00865c67  64a100000000         mov eax, dword ptr fs:[0]
// 00865c6d  50                   push eax
// 00865c6e  51                   push ecx
// 00865c6f  53                   push ebx
// 00865c70  55                   push ebp
// 00865c71  56                   push esi
// 00865c72  57                   push edi
// 00865c73  a10052b600           mov eax, dword ptr [0xb65200]
// 00865c78  33c4                 xor eax, esp
// 00865c7a  50                   push eax
// 00865c7b  8d442418             lea eax, [esp + 0x18]
// 00865c7f  64a300000000         mov dword ptr fs:[0], eax
// 00865c85  8be9                 mov ebp, ecx
// 00865c87  33ff                 xor edi, edi
// 00865c89  397d28               cmp dword ptr [ebp + 0x28], edi
// 00865c8c  7e60                 jle 0x865cee
// 00865c8e  57                   push edi
// 00865c8f  8bcd                 mov ecx, ebp
// 00865c91  e88affffff           call 0x865c20
// 00865c96  8bf0                 mov esi, eax
// 00865c98  8d442414             lea eax, [esp + 0x14]
// 00865c9c  50                   push eax
// 00865c9d  8bce                 mov ecx, esi
// 00865c9f  e84cc9bcff           call 0x4325f0
// 00865ca4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00865ca8  51                   push ecx
// 00865ca9  8bc8                 mov ecx, eax
// 00865cab  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00865cb3  ff1584de9800         call dword ptr [0x98de84]
// 00865cb9  85c0                 test eax, eax
// 00865cbb  8d4c2414             lea ecx, [esp + 0x14]
// 00865cbf  0f94c3               sete bl
// 00865cc2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00865cca  ff15c0de9800         call dword ptr [0x98dec0]
// 00865cd0  84db                 test bl, bl
// 00865cd2  7532                 jne 0x865d06
// 00865cd4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00865cd8  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00865cde  52                   push edx
// 00865cdf  e87cffffff           call 0x865c60
// 00865ce4  85c0                 test eax, eax
// 00865ce6  7508                 jne 0x865cf0
// 00865ce8  47                   inc edi
// 00865ce9  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 00865cec  7ca0                 jl 0x865c8e
// 00865cee  33c0                 xor eax, eax
// 00865cf0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00865cf4  64890d00000000       mov dword ptr fs:[0], ecx
// 00865cfb  59                   pop ecx
// 00865cfc  5f                   pop edi
// 00865cfd  5e                   pop esi
// 00865cfe  5d                   pop ebp
// 00865cff  5b                   pop ebx
// 00865d00  83c410               add esp, 0x10
// 00865d03  c20400               ret 4
// 00865d06  8bc6                 mov eax, esi
// 00865d08  ebe6                 jmp 0x865cf0
// copied from an identical function in another client (function ?FindItem@CXTPPropertyGridItems@@QBEPAVCXTPPropertyGridItem@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp
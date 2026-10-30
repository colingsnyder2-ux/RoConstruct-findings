// roc 2009-12 00865de0  unit: CXTPPropertyGridItemConstraint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865de0
//
// 00865de0  53                   push ebx
// 00865de1  55                   push ebp
// 00865de2  56                   push esi
// 00865de3  57                   push edi
// 00865de4  8bf9                 mov edi, ecx
// 00865de6  33f6                 xor esi, esi
// 00865de8  397728               cmp dword ptr [edi + 0x28], esi
// 00865deb  7e33                 jle 0x865e20
// 00865ded  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00865df1  56                   push esi
// 00865df2  8d442418             lea eax, [esp + 0x18]
// 00865df6  50                   push eax
// 00865df7  8bcf                 mov ecx, edi
// 00865df9  e842ffffff           call 0x865d40
// 00865dfe  55                   push ebp
// 00865dff  8bc8                 mov ecx, eax
// 00865e01  ff15d4cf9800         call dword ptr [0x98cfd4]
// 00865e07  85c0                 test eax, eax
// 00865e09  8d4c2414             lea ecx, [esp + 0x14]
// 00865e0d  0f94c3               sete bl
// 00865e10  ff15c0de9800         call dword ptr [0x98dec0]
// 00865e16  84db                 test bl, bl
// 00865e18  7510                 jne 0x865e2a
// 00865e1a  46                   inc esi
// 00865e1b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00865e1e  7cd1                 jl 0x865df1
// 00865e20  5f                   pop edi
// 00865e21  5e                   pop esi
// 00865e22  5d                   pop ebp
// 00865e23  83c8ff               or eax, 0xffffffff
// 00865e26  5b                   pop ebx
// 00865e27  c20400               ret 4
// 00865e2a  5f                   pop edi
// 00865e2b  8bc6                 mov eax, esi
// 00865e2d  5e                   pop esi
// 00865e2e  5d                   pop ebp
// 00865e2f  5b                   pop ebx
// 00865e30  c20400               ret 4
// copied from an identical function in another client (function ?FindConstraint@CXTPPropertyGridItemConstraints@@QBEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridItem.cpp
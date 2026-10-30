// roc 2010-06 00819da0  unit: CXTPPropertyGridItemConstraint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819da0
//
// 00819da0  53                   push ebx
// 00819da1  55                   push ebp
// 00819da2  56                   push esi
// 00819da3  57                   push edi
// 00819da4  8bf9                 mov edi, ecx
// 00819da6  33f6                 xor esi, esi
// 00819da8  397728               cmp dword ptr [edi + 0x28], esi
// 00819dab  7e33                 jle 0x819de0
// 00819dad  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00819db1  56                   push esi
// 00819db2  8d442418             lea eax, [esp + 0x18]
// 00819db6  50                   push eax
// 00819db7  8bcf                 mov ecx, edi
// 00819db9  e842ffffff           call 0x819d00
// 00819dbe  55                   push ebp
// 00819dbf  8bc8                 mov ecx, eax
// 00819dc1  ff1528c09e00         call dword ptr [0x9ec028]
// 00819dc7  85c0                 test eax, eax
// 00819dc9  8d4c2414             lea ecx, [esp + 0x14]
// 00819dcd  0f94c3               sete bl
// 00819dd0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00819dd6  84db                 test bl, bl
// 00819dd8  7510                 jne 0x819dea
// 00819dda  46                   inc esi
// 00819ddb  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00819dde  7cd1                 jl 0x819db1
// 00819de0  5f                   pop edi
// 00819de1  5e                   pop esi
// 00819de2  5d                   pop ebp
// 00819de3  83c8ff               or eax, 0xffffffff
// 00819de6  5b                   pop ebx
// 00819de7  c20400               ret 4
// 00819dea  5f                   pop edi
// 00819deb  8bc6                 mov eax, esi
// 00819ded  5e                   pop esi
// 00819dee  5d                   pop ebp
// 00819def  5b                   pop ebx
// 00819df0  c20400               ret 4
// copied from an identical function in another client (function ?FindConstraint@CXTPPropertyGridItemConstraints@@QBEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridItem.cpp
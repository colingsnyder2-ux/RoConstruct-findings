// roc 2011-06 0087a510  unit: CXTPPropertyGridItemConstraint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a510
//
// 0087a510  53                   push ebx
// 0087a511  55                   push ebp
// 0087a512  56                   push esi
// 0087a513  57                   push edi
// 0087a514  8bf9                 mov edi, ecx
// 0087a516  33f6                 xor esi, esi
// 0087a518  397728               cmp dword ptr [edi + 0x28], esi
// 0087a51b  7e33                 jle 0x87a550
// 0087a51d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087a521  56                   push esi
// 0087a522  8d442418             lea eax, [esp + 0x18]
// 0087a526  50                   push eax
// 0087a527  8bcf                 mov ecx, edi
// 0087a529  e842ffffff           call 0x87a470
// 0087a52e  55                   push ebp
// 0087a52f  8bc8                 mov ecx, eax
// 0087a531  ff150820a400         call dword ptr [0xa42008]
// 0087a537  85c0                 test eax, eax
// 0087a539  8d4c2414             lea ecx, [esp + 0x14]
// 0087a53d  0f94c3               sete bl
// 0087a540  ff15082ea400         call dword ptr [0xa42e08]
// 0087a546  84db                 test bl, bl
// 0087a548  7510                 jne 0x87a55a
// 0087a54a  46                   inc esi
// 0087a54b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087a54e  7cd1                 jl 0x87a521
// 0087a550  5f                   pop edi
// 0087a551  5e                   pop esi
// 0087a552  5d                   pop ebp
// 0087a553  83c8ff               or eax, 0xffffffff
// 0087a556  5b                   pop ebx
// 0087a557  c20400               ret 4
// 0087a55a  5f                   pop edi
// 0087a55b  8bc6                 mov eax, esi
// 0087a55d  5e                   pop esi
// 0087a55e  5d                   pop ebp
// 0087a55f  5b                   pop ebx
// 0087a560  c20400               ret 4
// copied from an identical function in another client (function ?FindConstraint@CXTPPropertyGridItemConstraints@@QBEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridItem.cpp
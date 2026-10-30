// roc 2009-06 0078add0  unit: CXTPPropertyGridItemConstraint  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078add0
//
// 0078add0  53                   push ebx
// 0078add1  55                   push ebp
// 0078add2  56                   push esi
// 0078add3  57                   push edi
// 0078add4  8bf9                 mov edi, ecx
// 0078add6  33f6                 xor esi, esi
// 0078add8  397728               cmp dword ptr [edi + 0x28], esi
// 0078addb  7e33                 jle 0x78ae10
// 0078addd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0078ade1  56                   push esi
// 0078ade2  8d442418             lea eax, [esp + 0x18]
// 0078ade6  50                   push eax
// 0078ade7  8bcf                 mov ecx, edi
// 0078ade9  e842ffffff           call 0x78ad30
// 0078adee  55                   push ebp
// 0078adef  8bc8                 mov ecx, eax
// 0078adf1  ff158cf38900         call dword ptr [0x89f38c]
// 0078adf7  85c0                 test eax, eax
// 0078adf9  8d4c2414             lea ecx, [esp + 0x14]
// 0078adfd  0f94c3               sete bl
// 0078ae00  ff1510fd8900         call dword ptr [0x89fd10]
// 0078ae06  84db                 test bl, bl
// 0078ae08  7510                 jne 0x78ae1a
// 0078ae0a  46                   inc esi
// 0078ae0b  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0078ae0e  7cd1                 jl 0x78ade1
// 0078ae10  5f                   pop edi
// 0078ae11  5e                   pop esi
// 0078ae12  5d                   pop ebp
// 0078ae13  83c8ff               or eax, 0xffffffff
// 0078ae16  5b                   pop ebx
// 0078ae17  c20400               ret 4
// 0078ae1a  5f                   pop edi
// 0078ae1b  8bc6                 mov eax, esi
// 0078ae1d  5e                   pop esi
// 0078ae1e  5d                   pop ebp
// 0078ae1f  5b                   pop ebx
// 0078ae20  c20400               ret 4
// copied from an identical function in another client (function ?FindConstraint@CXTPPropertyGridItemConstraints@@QBEHPBD@Z)

// RTM desktop manifest: 5f23cab0a07143b351dd962ac48278660cc3d9364f7ff11eb6cdb03260bb4dbc
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridItem.cpp
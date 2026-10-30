// roc 2009-12 0086d760  unit: PAVCXTPReportColumn::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d760
//
// 0086d760  53                   push ebx
// 0086d761  55                   push ebp
// 0086d762  8bd9                 mov ebx, ecx
// 0086d764  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 0086d767  57                   push edi
// 0086d768  33ff                 xor edi, edi
// 0086d76a  85ed                 test ebp, ebp
// 0086d76c  7e41                 jle 0x86d7af
// 0086d76e  56                   push esi
// 0086d76f  90                   nop 
// 0086d770  85ff                 test edi, edi
// 0086d772  7c35                 jl 0x86d7a9
// 0086d774  3b7b30               cmp edi, dword ptr [ebx + 0x30]
// 0086d777  7d30                 jge 0x86d7a9
// 0086d779  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0086d77c  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0086d77f  85f6                 test esi, esi
// 0086d781  7426                 je 0x86d7a9
// 0086d783  8bce                 mov ecx, esi
// 0086d785  e836630400           call 0x8b3ac0
// 0086d78a  85c0                 test eax, eax
// 0086d78c  741b                 je 0x86d7a9
// 0086d78e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086d792  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0086d795  83c128               add ecx, 0x28
// 0086d798  56                   push esi
// 0086d799  52                   push edx
// 0086d79a  e8d1d4ffff           call 0x86ac70
// 0086d79f  83c604               add esi, 4
// 0086d7a2  56                   push esi
// 0086d7a3  ff150cb29800         call dword ptr [0x98b20c]
// 0086d7a9  47                   inc edi
// 0086d7aa  3bfd                 cmp edi, ebp
// 0086d7ac  7cc2                 jl 0x86d770
// 0086d7ae  5e                   pop esi
// 0086d7af  5f                   pop edi
// 0086d7b0  5d                   pop ebp
// 0086d7b1  5b                   pop ebx
// 0086d7b2  c20400               ret 4
// copied from an identical function in another client (function ?GetVisibleColumns@CXTPReportColumns@@QBEXAAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp
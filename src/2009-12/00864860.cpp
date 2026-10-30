// roc 2009-12 00864860  unit: CXTPPropertyGridItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864860
//
// 00864860  51                   push ecx
// 00864861  56                   push esi
// 00864862  8bf1                 mov esi, ecx
// 00864864  51                   push ecx
// 00864865  8d86a8000000         lea eax, [esi + 0xa8]
// 0086486b  8bcc                 mov ecx, esp
// 0086486d  89642408             mov dword ptr [esp + 8], esp
// 00864871  50                   push eax
// 00864872  ff1594de9800         call dword ptr [0x98de94]
// 00864878  8b16                 mov edx, dword ptr [esi]
// 0086487a  8b4264               mov eax, dword ptr [edx + 0x64]
// 0086487d  8bce                 mov ecx, esi
// 0086487f  ffd0                 call eax
// 00864881  5e                   pop esi
// 00864882  59                   pop ecx
// 00864883  c3                   ret 
// copied from an identical function in another client (function ?ResetValue@CXTPPropertyGridItem@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
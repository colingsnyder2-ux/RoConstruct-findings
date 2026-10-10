// roc 2008-06 00710e70  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710e70
//
// 00710e70  56                   push esi
// 00710e71  57                   push edi
// 00710e72  8bf9                 mov edi, ecx
// 00710e74  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 00710e7a  85c9                 test ecx, ecx
// 00710e7c  7407                 je 0x710e85
// 00710e7e  6a00                 push 0
// 00710e80  e8ab440000           call 0x715330
// 00710e85  8b07                 mov eax, dword ptr [edi]
// 00710e87  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00710e8d  8bcf                 mov ecx, edi
// 00710e8f  ffd2                 call edx
// 00710e91  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 00710e97  e8b42e0800           call 0x793d50
// 00710e9c  8bf0                 mov esi, eax
// 00710e9e  83ee01               sub esi, 1
// 00710ea1  781d                 js 0x710ec0
// 00710ea3  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 00710ea9  56                   push esi
// 00710eaa  e8d1380600           call 0x774780
// 00710eaf  8b10                 mov edx, dword ptr [eax]
// 00710eb1  8bc8                 mov ecx, eax
// 00710eb3  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00710eb9  ffd0                 call eax
// 00710ebb  83ee01               sub esi, 1
// 00710ebe  79e3                 jns 0x710ea3
// 00710ec0  5f                   pop edi
// 00710ec1  5e                   pop esi
// 00710ec2  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDeselect@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp

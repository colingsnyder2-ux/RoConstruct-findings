// roc 2011-06 008791f0  unit: CXTPPropertyGridItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008791f0
//
// 008791f0  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 008791f6  56                   push esi
// 008791f7  e814ccffff           call 0x875e10
// 008791fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00879200  8b30                 mov esi, dword ptr [eax]
// 00879202  51                   push ecx
// 00879203  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00879207  83ec10               sub esp, 0x10
// 0087920a  8bd4                 mov edx, esp
// 0087920c  890a                 mov dword ptr [edx], ecx
// 0087920e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00879212  894a04               mov dword ptr [edx + 4], ecx
// 00879215  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00879219  894a08               mov dword ptr [edx + 8], ecx
// 0087921c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00879220  894a0c               mov dword ptr [edx + 0xc], ecx
// 00879223  8b542420             mov edx, dword ptr [esp + 0x20]
// 00879227  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087922b  52                   push edx
// 0087922c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0087922f  51                   push ecx
// 00879230  8bc8                 mov ecx, eax
// 00879232  ffd2                 call edx
// 00879234  5e                   pop esi
// 00879235  c21c00               ret 0x1c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnDrawItemConstraint@CXTPPropertyGridItem@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

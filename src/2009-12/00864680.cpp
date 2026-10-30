// roc 2009-12 00864680  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864680
//
// 00864680  56                   push esi
// 00864681  57                   push edi
// 00864682  8bf9                 mov edi, ecx
// 00864684  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 0086468a  85c9                 test ecx, ecx
// 0086468c  7407                 je 0x864695
// 0086468e  6a00                 push 0
// 00864690  e84b440000           call 0x868ae0
// 00864695  8b07                 mov eax, dword ptr [edi]
// 00864697  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 0086469d  8bcf                 mov ecx, edi
// 0086469f  ffd2                 call edx
// 008646a1  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 008646a7  e8846bf4ff           call 0x7ab230
// 008646ac  8bf0                 mov esi, eax
// 008646ae  83ee01               sub esi, 1
// 008646b1  781d                 js 0x8646d0
// 008646b3  8b8fd8000000         mov ecx, dword ptr [edi + 0xd8]
// 008646b9  56                   push esi
// 008646ba  e891330600           call 0x8c7a50
// 008646bf  8b10                 mov edx, dword ptr [eax]
// 008646c1  8bc8                 mov ecx, eax
// 008646c3  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008646c9  ffd0                 call eax
// 008646cb  83ee01               sub esi, 1
// 008646ce  79e3                 jns 0x8646b3
// 008646d0  5f                   pop edi
// 008646d1  5e                   pop esi
// 008646d2  c3                   ret 
// copied from an identical function in another client (function ?OnDeselect@CXTPPropertyGridItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
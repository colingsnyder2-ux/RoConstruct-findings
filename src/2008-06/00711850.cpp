// roc 2008-06 00711850  unit: CXTPPropertyGridItem  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711850
//
// 00711850  56                   push esi
// 00711851  8bf1                 mov esi, ecx
// 00711853  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00711859  85c0                 test eax, eax
// 0071185b  742d                 je 0x71188a
// 0071185d  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00711864  7424                 je 0x71188a
// 00711866  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0071186c  8b5020               mov edx, dword ptr [eax + 0x20]
// 0071186f  6a00                 push 0
// 00711871  51                   push ecx
// 00711872  6886010000           push 0x186
// 00711877  52                   push edx
// 00711878  ff15142e8000         call dword ptr [0x802e14]
// 0071187e  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00711884  5e                   pop esi
// 00711885  e946420000           jmp 0x715ad0
// 0071188a  5e                   pop esi
// 0071188b  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?Select@CXTPPropertyGridItem@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp

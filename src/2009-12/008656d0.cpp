// roc 2009-12 008656d0  unit: CXTPPropertyGridItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008656d0
//
// 008656d0  53                   push ebx
// 008656d1  56                   push esi
// 008656d2  8bf1                 mov esi, ecx
// 008656d4  8b9ee0000000         mov ebx, dword ptr [esi + 0xe0]
// 008656da  85db                 test ebx, ebx
// 008656dc  742c                 je 0x86570a
// 008656de  57                   push edi
// 008656df  8dbea4000000         lea edi, [esi + 0xa4]
// 008656e5  8bcf                 mov ecx, edi
// 008656e7  ff1580de9800         call dword ptr [0x98de80]
// 008656ed  50                   push eax
// 008656ee  8bcb                 mov ecx, ebx
// 008656f0  ff1584de9800         call dword ptr [0x98de84]
// 008656f6  85c0                 test eax, eax
// 008656f8  740f                 je 0x865709
// 008656fa  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00865700  50                   push eax
// 00865701  8bcf                 mov ecx, edi
// 00865703  ff1538d59800         call dword ptr [0x98d538]
// 00865709  5f                   pop edi
// 0086570a  5e                   pop esi
// 0086570b  5b                   pop ebx
// 0086570c  c3                   ret 
// copied from an identical function in another client (function ?OnBeforeInsert@CXTPPropertyGridItem@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp
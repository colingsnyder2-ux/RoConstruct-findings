// roc 2009-12 008651a0  unit: CXTPPropertyGridItem  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008651a0
//
// 008651a0  57                   push edi
// 008651a1  8bf9                 mov edi, ecx
// 008651a3  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 008651aa  7432                 je 0x8651de
// 008651ac  8b07                 mov eax, dword ptr [edi]
// 008651ae  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 008651b4  56                   push esi
// 008651b5  ffd2                 call edx
// 008651b7  8bf0                 mov esi, eax
// 008651b9  85f6                 test esi, esi
// 008651bb  7420                 je 0x8651dd
// 008651bd  837e2000             cmp dword ptr [esi + 0x20], 0
// 008651c1  741a                 je 0x8651dd
// 008651c3  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 008651c9  7512                 jne 0x8651dd
// 008651cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008651cf  ff1580de9800         call dword ptr [0x98de80]
// 008651d5  50                   push eax
// 008651d6  8bce                 mov ecx, esi
// 008651d8  e837eaf8ff           call 0x7f3c14
// 008651dd  5e                   pop esi
// 008651de  5f                   pop edi
// 008651df  c20400               ret 4
// copied from an identical function in another client (function ?SetEditText@CXTPPropertyGridItem@@MAEXABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp
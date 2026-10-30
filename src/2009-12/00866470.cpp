// roc 2009-12 00866470  unit: CXTPPropertyGridItem  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866470
//
// 00866470  56                   push esi
// 00866471  57                   push edi
// 00866472  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00866476  33f6                 xor esi, esi
// 00866478  397728               cmp dword ptr [edi + 0x28], esi
// 0086647b  7e1f                 jle 0x86649c
// 0086647d  53                   push ebx
// 0086647e  8d5920               lea ebx, [ecx + 0x20]
// 00866481  56                   push esi
// 00866482  8bcf                 mov ecx, edi
// 00866484  e897f7ffff           call 0x865c20
// 00866489  50                   push eax
// 0086648a  8b4308               mov eax, dword ptr [ebx + 8]
// 0086648d  50                   push eax
// 0086648e  8bcb                 mov ecx, ebx
// 00866490  e8db470000           call 0x86ac70
// 00866495  46                   inc esi
// 00866496  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00866499  7ce6                 jl 0x866481
// 0086649b  5b                   pop ebx
// 0086649c  5f                   pop edi
// 0086649d  5e                   pop esi
// 0086649e  c20400               ret 4
// copied from an identical function in another client (function ?AddTail@CXTPPropertyGridItems@@IAEXPAV1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp
// roc 2009-12 00866310  unit: CXTPPropertyGridItem  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866310
//
// 00866310  56                   push esi
// 00866311  8bf1                 mov esi, ecx
// 00866313  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00866319  33d2                 xor edx, edx
// 0086631b  395128               cmp dword ptr [ecx + 0x28], edx
// 0086631e  7e1d                 jle 0x86633d
// 00866320  52                   push edx
// 00866321  e8faf8ffff           call 0x865c20
// 00866326  8bc8                 mov ecx, eax
// 00866328  e8b3e5ffff           call 0x8648e0
// 0086632d  85c0                 test eax, eax
// 0086632f  7410                 je 0x866341
// 00866331  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00866337  42                   inc edx
// 00866338  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 0086633b  7ce3                 jl 0x866320
// 0086633d  33c0                 xor eax, eax
// 0086633f  5e                   pop esi
// 00866340  c3                   ret 
// 00866341  b801000000           mov eax, 1
// 00866346  5e                   pop esi
// 00866347  c3                   ret 
// copied from an identical function in another client (function ?HasVisibleChilds@CXTPPropertyGridItem@@QBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp
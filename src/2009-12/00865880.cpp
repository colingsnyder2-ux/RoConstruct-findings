// roc 2009-12 00865880  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865880
//
// 00865880  56                   push esi
// 00865881  8bf1                 mov esi, ecx
// 00865883  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00865889  85c0                 test eax, eax
// 0086588b  7442                 je 0x8658cf
// 0086588d  83782000             cmp dword ptr [eax + 0x20], 0
// 00865891  743c                 je 0x8658cf
// 00865893  e878f0ffff           call 0x864910
// 00865898  85c0                 test eax, eax
// 0086589a  7418                 je 0x8658b4
// 0086589c  8b06                 mov eax, dword ptr [esi]
// 0086589e  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 008658a4  8bce                 mov ecx, esi
// 008658a6  ffd2                 call edx
// 008658a8  8b06                 mov eax, dword ptr [esi]
// 008658aa  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 008658b0  8bce                 mov ecx, esi
// 008658b2  ffd2                 call edx
// 008658b4  837c240800           cmp dword ptr [esp + 8], 0
// 008658b9  7414                 je 0x8658cf
// 008658bb  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 008658c1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008658c4  6a00                 push 0
// 008658c6  6a00                 push 0
// 008658c8  51                   push ecx
// 008658c9  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008658cf  5e                   pop esi
// 008658d0  c20400               ret 4
// copied from an identical function in another client (function ?Refresh@CXTPPropertyGridItem@@AAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp
// roc 2009-12 0084f280  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f280
//
// 0084f280  56                   push esi
// 0084f281  8bf1                 mov esi, ecx
// 0084f283  e8ba710d00           call 0x926442
// 0084f288  6a0a                 push 0xa
// 0084f28a  8d4e20               lea ecx, [esi + 0x20]
// 0084f28d  c706ccbf9f00         mov dword ptr [esi], 0x9fbfcc
// 0084f293  e858ffffff           call 0x84f1f0
// 0084f298  33c0                 xor eax, eax
// 0084f29a  89463c               mov dword ptr [esi + 0x3c], eax
// 0084f29d  894640               mov dword ptr [esi + 0x40], eax
// 0084f2a0  c7464401000000       mov dword ptr [esi + 0x44], 1
// 0084f2a7  8bc6                 mov eax, esi
// 0084f2a9  5e                   pop esi
// 0084f2aa  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPropertyGridUpdateContext@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp
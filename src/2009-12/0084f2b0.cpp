// roc 2009-12 0084f2b0  unit: PAVCXTPPropertyGridVerb::?$CArray  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f2b0
//
// 0084f2b0  56                   push esi
// 0084f2b1  8bf1                 mov esi, ecx
// 0084f2b3  e88a710d00           call 0x926442
// 0084f2b8  8d4e20               lea ecx, [esi + 0x20]
// 0084f2bb  c7062cc09f00         mov dword ptr [esi], 0x9fc02c
// 0084f2c1  e85affffff           call 0x84f220
// 0084f2c6  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0084f2cd  8bc6                 mov eax, esi
// 0084f2cf  5e                   pop esi
// 0084f2d0  c3                   ret 
// copied from an identical function in another client (function ??0CXTPPropertyGridVerbs@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp
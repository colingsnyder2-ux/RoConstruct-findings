// roc 2012-06 00a023f0  unit: RBX::MovingStage  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a023f0
//
// 00a023f0  53                   push ebx
// 00a023f1  56                   push esi
// 00a023f2  57                   push edi
// 00a023f3  8bf1                 mov esi, ecx
// 00a023f5  e8e6f40400           call 0xa518e0
// 00a023fa  8b1d6c3bb200         mov ebx, dword ptr [0xb23b6c]
// 00a02400  6a00                 push 0
// 00a02402  6a04                 push 4
// 00a02404  6a02                 push 2
// 00a02406  6a02                 push 2
// 00a02408  8d7e04               lea edi, [esi + 4]
// 00a0240b  57                   push edi
// 00a0240c  c706dcb9c100         mov dword ptr [esi], 0xc1b9dc
// 00a02412  ffd3                 call ebx
// 00a02414  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a02418  6a00                 push 0
// 00a0241a  6a00                 push 0
// 00a0241c  6a01                 push 1
// 00a0241e  6a00                 push 0
// 00a02420  57                   push edi
// 00a02421  c7462401000000       mov dword ptr [esi + 0x24], 1
// 00a02428  c7462800000000       mov dword ptr [esi + 0x28], 0
// 00a0242f  c706ecbbc100         mov dword ptr [esi], 0xc1bbec
// 00a02435  89462c               mov dword ptr [esi + 0x2c], eax
// 00a02438  ffd3                 call ebx
// 00a0243a  5f                   pop edi
// 00a0243b  8bc6                 mov eax, esi
// 00a0243d  5e                   pop esi
// 00a0243e  5b                   pop ebx
// 00a0243f  c20400               ret 4
// library xtp-13.2.1/Source\Ribbon\XTPRibbonPaintManager.cpp (function ??0CRibbonAppearanceSet@CXTPRibbonPaintManager@@QAE@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Ribbon/XTPRibbonPaintManager.cpp

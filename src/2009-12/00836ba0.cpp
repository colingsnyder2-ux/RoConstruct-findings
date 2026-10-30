// roc 2009-12 00836ba0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836ba0
//
// 00836ba0  53                   push ebx
// 00836ba1  56                   push esi
// 00836ba2  8bf1                 mov esi, ecx
// 00836ba4  57                   push edi
// 00836ba5  8d4e04               lea ecx, [esi + 4]
// 00836ba8  e893ffffff           call 0x836b40
// 00836bad  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 00836bb3  6a01                 push 1
// 00836bb5  c70620000000         mov dword ptr [esi], 0x20
// 00836bbb  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00836bc2  ffd7                 call edi
// 00836bc4  6a00                 push 0
// 00836bc6  8bd8                 mov ebx, eax
// 00836bc8  ffd7                 call edi
// 00836bca  89461c               mov dword ptr [esi + 0x1c], eax
// 00836bcd  5f                   pop edi
// 00836bce  895e20               mov dword ptr [esi + 0x20], ebx
// 00836bd1  8bc6                 mov eax, esi
// 00836bd3  5e                   pop esi
// 00836bd4  5b                   pop ebx
// 00836bd5  c3                   ret 
// copied from an identical function in another client (function ??0CXTPDockState@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp
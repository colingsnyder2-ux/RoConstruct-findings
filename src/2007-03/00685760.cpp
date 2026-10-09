// roc 2007-03 00685760  unit: seg_00680000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00685760
//
// 00685760  56                   push esi
// 00685761  6a00                 push 0
// 00685763  6a01                 push 1
// 00685765  8bf1                 mov esi, ecx
// 00685767  e874430000           call 0x689ae0
// 0068576c  c7068ce77c00         mov dword ptr [esi], 0x7ce78c
// 00685772  c746547ce77c00       mov dword ptr [esi + 0x54], 0x7ce77c
// 00685779  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00685783  8bc6                 mov eax, esi
// 00685785  5e                   pop esi
// 00685786  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridItemColor.cpp

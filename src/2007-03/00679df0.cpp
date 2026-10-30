// roc 2007-03 00679df0  unit: seg_00670000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679df0
//
// 00679df0  6aff                 push -1
// 00679df2  68f8327600           push 0x7632f8
// 00679df7  64a100000000         mov eax, dword ptr fs:[0]
// 00679dfd  50                   push eax
// 00679dfe  51                   push ecx
// 00679dff  56                   push esi
// 00679e00  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00679e05  33c4                 xor eax, esp
// 00679e07  50                   push eax
// 00679e08  8d44240c             lea eax, [esp + 0xc]
// 00679e0c  64a300000000         mov dword ptr fs:[0], eax
// 00679e12  8bf1                 mov esi, ecx
// 00679e14  89742408             mov dword ptr [esp + 8], esi
// 00679e18  8d8edc000000         lea ecx, [esi + 0xdc]
// 00679e1e  c70604d27c00         mov dword ptr [esi], 0x7cd204
// 00679e24  c701f4d17c00         mov dword ptr [ecx], 0x7cd1f4
// 00679e2a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00679e32  e819180000           call 0x67b650
// 00679e37  8bce                 mov ecx, esi
// 00679e39  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00679e41  e82a130c00           call 0x73b170
// 00679e46  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679e4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00679e51  59                   pop ecx
// 00679e52  5e                   pop esi
// 00679e53  83c410               add esp, 0x10
// 00679e56  c3                   ret 
// copied from an identical function in another client (function ??1CXTSplitterWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1
// roc 2007-08 006902a0  unit: CXTPDockingPane  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006902a0
//
// 006902a0  6aff                 push -1
// 006902a2  68d82e7600           push 0x762ed8
// 006902a7  64a100000000         mov eax, dword ptr fs:[0]
// 006902ad  50                   push eax
// 006902ae  51                   push ecx
// 006902af  56                   push esi
// 006902b0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006902b5  33c4                 xor eax, esp
// 006902b7  50                   push eax
// 006902b8  8d44240c             lea eax, [esp + 0xc]
// 006902bc  64a300000000         mov dword ptr fs:[0], eax
// 006902c2  8bf1                 mov esi, ecx
// 006902c4  89742408             mov dword ptr [esp + 8], esi
// 006902c8  8d8edc000000         lea ecx, [esi + 0xdc]
// 006902ce  c706d4057d00         mov dword ptr [esi], 0x7d05d4
// 006902d4  c701c4057d00         mov dword ptr [ecx], 0x7d05c4
// 006902da  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006902e2  e839190000           call 0x691c20
// 006902e7  8bce                 mov ecx, esi
// 006902e9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006902f1  e840870a00           call 0x738a36
// 006902f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006902fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00690301  59                   pop ecx
// 00690302  5e                   pop esi
// 00690303  83c410               add esp, 0x10
// 00690306  c3                   ret 
// copied from an identical function in another client (function ??1CXTSplitterWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1
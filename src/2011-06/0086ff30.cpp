// roc 2011-06 0086ff30  unit: CXTSplitterWnd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ff30
//
// 0086ff30  56                   push esi
// 0086ff31  8bf1                 mov esi, ecx
// 0086ff33  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 0086ff3a  7410                 je 0x86ff4c
// 0086ff3c  6a00                 push 0
// 0086ff3e  ff153001a400         call dword ptr [0xa40130]
// 0086ff44  50                   push eax
// 0086ff45  e81eacf9ff           call 0x80ab68
// 0086ff4a  eb05                 jmp 0x86ff51
// 0086ff4c  e809ca1500           call 0x9cc95a
// 0086ff51  8b16                 mov edx, dword ptr [esi]
// 0086ff53  8b92dc010000         mov edx, dword ptr [edx + 0x1dc]
// 0086ff59  50                   push eax
// 0086ff5a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086ff5e  50                   push eax
// 0086ff5f  8bce                 mov ecx, esi
// 0086ff61  ffd2                 call edx
// 0086ff63  5e                   pop esi
// 0086ff64  c20400               ret 4
// copied from an identical function in another client (function ?OnInvertTracker@CXTSplitterWnd@@MAEXABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1
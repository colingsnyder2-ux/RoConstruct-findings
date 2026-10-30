// roc 2010-06 008126e0  unit: CXTSplitterWnd  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008126e0
//
// 008126e0  56                   push esi
// 008126e1  8bf1                 mov esi, ecx
// 008126e3  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 008126ea  7410                 je 0x8126fc
// 008126ec  6a00                 push 0
// 008126ee  ff1578a19e00         call dword ptr [0x9ea178]
// 008126f4  50                   push eax
// 008126f5  e8aa5df9ff           call 0x7a84a4
// 008126fa  eb05                 jmp 0x812701
// 008126fc  e8bdab1600           call 0x97d2be
// 00812701  8b16                 mov edx, dword ptr [esi]
// 00812703  8b92dc010000         mov edx, dword ptr [edx + 0x1dc]
// 00812709  50                   push eax
// 0081270a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081270e  50                   push eax
// 0081270f  8bce                 mov ecx, esi
// 00812711  ffd2                 call edx
// 00812713  5e                   pop esi
// 00812714  c20400               ret 4
// copied from an identical function in another client (function ?OnInvertTracker@CXTSplitterWnd@@MAEXABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1